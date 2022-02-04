#!/bin/env python
import ROOT
import numpy
import sys,os

def get_FileSize(filePath):
    filePath = unicode(filePath,'utf8')
    fsize = os.path.getsize(filePath)
    fsize = fsize/float(1024)
    return round(fsize,2)

def Check_BadFiles(file,TreeName = "Events"):
    foundBad = False
    try:
        f1 = r.TFile(file)
        t = f1.Get("t")
        nevts = t.GetEntries()
        for i in range(0,t.GetEntries(),1):
            if t.GetEntry(i) < 0:
                foundBad = True
                print "[RSR] found bad event %i" % i
                break
    except: foundBad = True
    return foundBad

def FilesWithdifferentBR(files,ofname = "temp.root"):
    if not len(files) > 0:
        return []
    fileHandles = []
    fileHandles_Name = []
    skip_files = []
    goFast = True
    for fn in files:
        try:
            fileHandles.append(ROOT.TFile.Open(fn))
            fileHandles_Name.append(fn)
            if fileHandles[-1].GetCompressionSettings() != fileHandles[0].GetCompressionSettings():
                goFast = False
                print("Disabling fast merging as inputs have different compressions")
        except OSError:
            skip_files.append(fn)

    of = ROOT.TFile(ofname, "recreate")
    if goFast:
        of.SetCompressionSettings(fileHandles[0].GetCompressionSettings())
    of.cd()

    for e in fileHandles[0].GetListOfKeys():
        name = e.GetName()
        obj = e.ReadObj()
        cl = ROOT.TClass.GetClass(e.GetClassName())
        inputs = ROOT.TList()
        isTree = obj.IsA().InheritsFrom(ROOT.TTree.Class())
        if isTree:
            obj = obj.CloneTree(-1, "fast" if goFast else "")
            branchNames = set([x.GetName() for x in obj.GetListOfBranches()])
        for ifh,fh in enumerate(fileHandles[1:]):
            frac  = str(round(100*float(ifh+1)/float(len(fileHandles))))
            done  = str(float(ifh+1))
            Total = str(float(len(fileHandles)))
            # sys.stdout.flush()
            # sys.stdout.write("done %s = %s/%s\n"%(frac,done,Total))
            otherObj = fh.GetListOfKeys().FindObject(name).ReadObj()
            inputs.Add(otherObj)
            if isTree and obj.GetName() == 'Events':
                otherObj.SetAutoFlush(0)
                otherBranches = set([x.GetName()
                                    for x in otherObj.GetListOfBranches()])
                missingBranches = list(branchNames - otherBranches)
                additionalBranches = list(otherBranches - branchNames)
                if len(missingBranches) > 0:
                    skip_files.append(fileHandles_Name[ifh+1])
    return skip_files

def checkFiles(Files):
    if not len(Files) > 0:
        return []
    Files_out_0 = []
    Files_out_1 = []
    for ifile in Files:
        if not ".root" in ifile          : continue
        if not (get_FileSize(ifile) > 1) : continue
        Files_out_0.append(ifile)
    skip_files = []
    if len(Files) > 200 :
        for i in range(int(float(len(Files_out_0))/200.)+1) :
            up   = (i+1)*200
            down = i*200
            if down > len(Files) : continue
            if up   > len(Files) : up = len(Files)
            Files_temp = Files_out_0[down:up]
            skip_files += FilesWithdifferentBR(Files_temp)
    ratio = round((float(len(skip_files))/float(len(Files_out_0)))*100)
    print "skip :%s %% = %s/%s"%(str(ratio), str(len(skip_files)), str(len(Files_out_0)))
    for i in Files_out_0:
        if i in skip_files : continue
        Files_out_1.append(i)
    return Files_out_1

class HaddTree():

    def __init__(self,Path,**kwargs):
        self.BasePath = Path
        self.Njobs1 = {
            "WW":1,
            "WW_APV":1,
            "WWW":1,
            "WWW_APV":1,
            "WWZ":1,
            "WWZ_APV":1,
            "WZ":1,
            "WZ_APV":1,
            "WZZ":1,
            "WZZ_APV":1,
            "ZZ":1,
            "ZZ_APV":1,
            "ZZZ":1,
            "ZZZ_APV":1,
            "WJetsToQQ_HT-800toInf":5,
            "WJetsToQQ_HT-800toInf_APV":5,
            "ZJetsToQQ_HT-800toInf":5,
        }
        self.Njobs2 = {
            "QCD_HT1000to1500":20,
            "QCD_HT1000to1500_APV":20,
        }
        self.Njobs3 = {
            "QCD_HT1500to2000":20,
            "QCD_HT1500to2000_APV":20,
            "QCD_HT2000toInf":20,
            "QCD_HT2000toInf_APV":20,
        }
        self.Njobs4 = {
            "TTToHadronic":20,
        }
        self.Njobs5 = {
            "TTToHadronic_APV":20,
        }
        self.Njobs6 = {
            "TTToSemiLeptonic":20,
        }
        self.Njobs7 = {
            "TTToSemiLeptonic_APV":20,
        }
        self.Njobs9 = {
            "ST_t-channel_antitop":10,
            "ST_t-channel_antitop_APV":10,
            "ST_t-channel_top":10,
            "ST_t-channel_top_APV":10,
            "ST_tW_antitop":10,
            "ST_tW_antitop_APV":10,
            "ST_tW_top":10,
            "ST_tW_top_APV":10,
        }
        self.index = index
        self.Njobs = eval("self.Njobs"+self.index)
        self.haddpy = kwargs.get("haddpy","%s/scripts/haddnano.py"%(os.getcwd()))

    def ROOTFiles(self,InputPath):
        return ["%s/%s"%(InputPath,i) for i in os.listdir(InputPath) if ".root" in i]
    
    def SplitROOTFiles_perjobs(self,Files,Njobs):
        Nfilesperjob = int(float(len(Files))/float(Njobs))+1
        Files_List = []
        for ijob in range(Njobs):
            down = ijob*Nfilesperjob
            up   = (ijob+1)*Nfilesperjob
            if up > len(Files) : up = len(Files)
            if down >= len(Files) : continue
            Files_List.append(Files[down:up])
        return Files_List

    def HaddScripts(self,Files_List,key):
        ScriptsPath      = key["ScriptsPath"]
        logPath          = "%s/log/"%(key["ScriptsPath"])
        Scripts_Prefix   = key["Scripts_Prefix"]
        scripts_name     = "%s/%s.sh"%(ScriptsPath,Scripts_Prefix)
        output_path      = key["output_path"]
        scripts_content  = ""
        for path in [ScriptsPath,logPath,output_path]:
            if not os.path.isdir(path):
                os.makedirs(path)
        for i,ifiles in enumerate(Files_List):
            key["Infiles"] = " ".join(ifiles)
            key["debug"]   = "%s/%s_%s.debug"%(logPath,Scripts_Prefix,str(i))
            key["output"]  = "%s/%s_%s.root"%(output_path,Scripts_Prefix,str(i))
            if ".root" in key["Infiles"]:
                scripts_content += '{haddpy} {output} {Infiles} >{debug} 2>&1 \n'.format(**key)
        with open(scripts_name,"w") as f:
            f.write(scripts_content)
        return scripts_name
        
    def run(self):
        run_all = ""
        for ids in os.listdir(self.BasePath["Input"]):
            Inputdir_ids = "%s/%s/"%(self.BasePath["Input"],ids)
            Njobs = self.Njobs.get(ids,0)
            if not Njobs > 0: continue
            print "start",ids
            Files = self.ROOTFiles(Inputdir_ids)
            if not len(Files)>0 :continue
            Files = checkFiles(Files)
            Files_List = self.SplitROOTFiles_perjobs(Files,Njobs)
            key = {
                "haddpy" : self.haddpy,
                "ScriptsPath" : self.BasePath["Scripts"],
                "Scripts_Prefix" : ids,
                "output_path" : "%s/%s/"%(self.BasePath["output"],ids),
            }
            scripts_name = self.HaddScripts(Files_List,key)
            run_all += "sh %s \n"%(scripts_name)
            print "sh %s \n"%(scripts_name)
        run = "%s/run_%s.sh"%(self.BasePath["Scripts"],self.index)
        with open(run,"w") as f:
            f.write(run_all)
    

Path = {
    "Input" : "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/UL16/V1/V1/",
    "Scripts" : "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/Temp/Merge/",
    "output" : "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/Merge/2016UL/V1/",
}

index = sys.argv[1]
HaddTree_ = HaddTree(Path,index = index)
HaddTree_.run()
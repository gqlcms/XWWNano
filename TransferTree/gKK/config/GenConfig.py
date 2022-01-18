import os
import sys
import json
import ROOT

def Gen_Inoutput_map(InputDir, OutputDir):
    InputDir  = os.path.normpath(InputDir)
    OutputDir = os.path.normpath(OutputDir)
    if OutputDir == InputDir:
        sys.exit("OutputDir can not be the same InputDir")

    Inoutput_map = {}
    for ds in os.listdir(InputDir):
        Files = [ i for i in os.listdir("%s/%s"%(InputDir,ds)) if ".root" in i]
        if len(Files):
            Inoutput_map[ds] = {}
            for ijobs,ifile in enumerate(Files):
                infile  = "%s/%s/%s"%(InputDir,ds,ifile)
                outfile = "%s/%s/%s"%(OutputDir,ds,ifile)
                if not os.path.isdir("%s/%s"%(OutputDir,ds)):
                    os.makedirs("%s/%s"%(OutputDir,ds)) 
                Inoutput_map[ds][ijobs] = {
                    "infile" : infile,
                    "outfile" : outfile,
                }
    
    return Inoutput_map

# save Dic in better format
def SaveDic(FileName, DIC):
    if not FileName.endswith(".json"):
        sys.exit("the File is not json file")
    with open(FileName,"w") as f:
        json.dump(DIC, f, sort_keys=True, indent=4)
    print FileName

def Count(FileList):
    Nevents = 0
    for ifile in FileList:
        f = ROOT.TFile(ifile)
        Nevents += f.Get("nEventsGenWeighted").GetBinContent(1)
    return Nevents

def Events(Inoutput_map,jsonfile):
    Events_ = {}
    for ds in Inoutput_map:
        Files = [Inoutput_map[ds][ifile]["infile"] for ifile in Inoutput_map[ds]]
        Events_[ds] = str(Count(Files))
    print Events_
    SaveDic(jsonfile, Events_)

def SplitList(List,Npart):
    Nfilesperjob = int(float(len(List))/float(Npart))+1
    List_ = []
    for ijob in range(Npart):
        down = ijob*Nfilesperjob
        up   = (ijob+1)*Nfilesperjob
        if up > len(List) : up = len(List)
        if down >= len(List) : continue
        List_.append(List[down:up])
    return List_

def Generate_Commands(Inoutput_map,CommandsFolder,NPart_dic,run_all,year):
    Command = "nohup python runEDBR2PKUTree.py --dataset {dataset} --jobs {jobs} --year {year} >{CommandsFolder_ds}/log_{jobs}.debug 2>&1 &\n"
    run = []
    for ds in Inoutput_map:
        CommandsFolder_ds = "%s/%s/"%(CommandsFolder,ds)
        if not os.path.isdir(CommandsFolder_ds): os.makedirs(CommandsFolder_ds) 
        content = []
        for ijob in Inoutput_map[ds]:
            key = {
                "dataset" : ds,
                "jobs" : ijob,
                "CommandsFolder_ds" : CommandsFolder_ds,
                "year" : year,
            }
            content.append(Command.format(**key))
        NPart = NPart_dic.get(ds,1)
        content_ = SplitList(content,NPart)
        for index,icontent in enumerate(content_):
            CommandsFolder_f = "%s/%s.sh"%(CommandsFolder_ds,str(index))
            with open(CommandsFolder_f,"w") as f:
                for i in icontent:
                    f.write(i)
            run.append(CommandsFolder_f)
    with open(run_all,"w") as f:
        for i in run:
            f.write("sh %s &\n"%(i))

MC_Data = "data"

if MC_Data == "MC":
    InputDir = "/eos/user/y/yusong/qilong/NTuple/UL/2016/V1/MERGE_MC/"
    OutputDir = "/eos/user/q/qiguo/gKK/ROOTFILES/Tree/UL/2016/V3/"
    Inoutput_map = Gen_Inoutput_map(InputDir, OutputDir)
    SaveDic("/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/config/Files.json", Inoutput_map)

    Events(Inoutput_map,"/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/config/Events.json")

    CommandsFolder = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V2/run/"
    NPart_dic = {
        "TTToHadronic" : 2,
        "TTToSemiLeptonic" : 2,
        "QCD_HT1000to1500" : 2,
        "QCD_HT1500to2000" : 2,
        "QCD_HT2000toInf" : 2,
    }
    run_all = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V2/run.sh"
    Generate_Commands(Inoutput_map,CommandsFolder,NPart_dic,run_all,year="2016")

if MC_Data == "data":
    NPart_dic = {}
    InputDir = "/data/pubfs/guoql/ULNtuple/2016/data/MERGE_V1/"
    OutputDir = "/data/pubfs/guoql/Tree/2016/data/V1/"
    Inoutput_map = Gen_Inoutput_map(InputDir, OutputDir)
    SaveDic("/home/pku/guoql/gKK/TransferTree/V1/RUN/2016/data/2022_1_16/Files_Data.json", Inoutput_map)

    CommandsFolder = "/home/pku/guoql/gKK/TransferTree/V1/RUN/2016/data/2022_1_16/Tree/"
    run_all = "/home/pku/guoql/gKK/TransferTree/V1/RUN/2016/data/2022_1_16/Tree/run_Data.sh"
    Generate_Commands(Inoutput_map,CommandsFolder,NPart_dic,run_all,year="2016")
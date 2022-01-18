import os
import ROOT as r

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

# Path as input
def hadd_Tree(InputPath, OutputPath, ScriptsPath, py = "haddnano.py"):
    for i in os.listdir(InputPath):
        print i
        if os.path.isdir("%s/%s"%(InputPath,i)):
            with open("%s/%s.sh"%(ScriptsPath,i),"w") as f:
                files = ""
                for ifile in [ ifile for ifile in os.listdir("%s/%s"%(InputPath,i)) if (".root" in ifile) & (get_FileSize("%s/%s/%s"%(InputPath,i,ifile)) > 1)] :
                    files += "%s/%s/%s "%(InputPath,i,ifile)
                if ".root" in files:
                    hadd = '%s %s/%s.root %s >%s/%s.debug 2>&1 &\n'%( py, OutputPath, i, files, ScriptsPath, i )
                    f.write(hadd)

# for one folder with rootfiles inside
# merge into several rootfiles
def hadd_v2(InputPath, Nfilesperjob, OutputPath, OutputFilelabel, ScriptsPath, py = "haddnano.py"):
    AllFiles = [i for i in os.listdir(InputPath) if ".root" in i]
    jobs = int(float(len(AllFiles))/float(Nfilesperjob))+1
    ScriptsPathjobs = "%s/%s"%(ScriptsPath,"jobs")
    for path in [ScriptsPath,ScriptsPathjobs,OutputPath]:
        if not os.path.isdir(path):
            os.makedirs(path) 

    run_jobs = ""
    for ijob in range(jobs):
        files = ""
        AllFiles_temp = AllFiles[ijob*Nfilesperjob:(ijob+1)*Nfilesperjob]
        for ifile in [ ifile for ifile in AllFiles_temp if (".root" in ifile) & (get_FileSize("%s/%s"%(InputPath,ifile)) > 1)] :
            files += "%s/%s "%(InputPath,ifile)
        if ".root" in files:
            hadd = '%s %s/%s_%s.root %s >%s/%s_%s.debug 2>&1 \n'%( py, OutputPath, OutputFilelabel, str(ijob), files, ScriptsPathjobs, OutputFilelabel, str(ijob) )
            sh = "%s/%s_%s.sh"%(ScriptsPathjobs,OutputFilelabel,ijob)
            log = "%s/%s_%s.debug"%(ScriptsPathjobs,OutputFilelabel,ijob)
            with open(sh,"w") as f:
                f.write(hadd)
            run_jobs += "sh %s >%s 2>&1 &\n"%(sh,log)

    with open("%s/%s.sh"%(ScriptsPath,OutputFilelabel),"w") as f:
        f.write(run_jobs)
    



# FileList_AsInput

# InputPath = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/UL16/V1/V1"
# OutputPath = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/Merge/Remove/"
# ScriptsPath = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/Merge/Remove/congif/"
# hadd_Tree(InputPath, OutputPath, ScriptsPath, py = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/scripts/DiffBranchFile.py")


InputPath = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/UL16/V1/V1/ST_tW_top/"
OutputPath = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/Merge/2016UL/V1/ST_tW_top/"
ScriptsPath = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/scripts/Temp/Merge_To_SeveralFile/"
hadd_v2(InputPath, 5, OutputPath, "ST_tW_top", ScriptsPath, py = "python /eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/scripts/haddnano.py")


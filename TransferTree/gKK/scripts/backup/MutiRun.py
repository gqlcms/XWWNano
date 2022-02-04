import os

def RunMutiple_Scripts(Path, Scripts, **kwargs):
    Scripts_keep = kwargs.get("Scripts_keep",lambda x: (".sh" in x) )
    debug = kwargs.get("debug",lambda x: x.replace(".sh",".debug") )
    runcommands = kwargs.get("runcommands", "nohup sh {scripts} > {debug} 2>&1 &\n" )
    rerun = kwargs.get("rerun", None )
    with open(Scripts,"w") as f:
        for i in [i for i in os.listdir(Path) if Scripts_keep(i)]:
            if rerun:
                if "%s/%s"%(Path,i) not in rerun : continue
            f.write(runcommands.format(scripts = "%s/%s"%(Path,i),debug = debug("%s/%s"%(Path,i))))

def CheckMutiple_Scripts(Path, **kwargs):
    Log_keep = kwargs.get("Log_keep",lambda x: (".debug" in x) )
    Log_To_Scripts = kwargs.get("Log_To_Scripts",lambda x: x.replace(".debug",".sh") )
    def success(file):
        good = False
        with open(file,"r") as f:
            content = f.readlines()
            if len(content) > 1:
                if not "Merginguntagged" in " ".join(content[-5:-1]):
                    print file
                else:
                    good = True
            else:
                print file
        return good
    Success = kwargs.get("Success", success )
    rerun = []
    for i in os.listdir(Path):
        if not Log_keep("%s/%s"%(Path,i)) : continue
        File = "%s/%s"%(Path,i)
        good = Success(File)
        if not good:
            rerun.append(Log_To_Scripts(File))
    return rerun
    
Path = "/stash/user/qilongguo/work/gKK/VVVnano/condor/V1/hadd/"
Scripts = "/stash/user/qilongguo/work/gKK/VVVnano/condor/V1/1.sh"

# rerun = CheckMutiple_Scripts(Path )
# RunMutiple_Scripts(Path, Scripts, rerun = rerun)

Path = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/Merge/Remove/congif/"
Scripts = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/scripts/Temp/1.sh"
# RunMutiple_Scripts(Path, Scripts)

Path = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/scripts/Temp/Merge_To_SeveralFile/jobs/"
rerun = CheckMutiple_Scripts(Path )
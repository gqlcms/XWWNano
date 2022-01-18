import os

def CheckLog(Log):
    success = False
    with open(Log,"r") as f:
        f_ = f.readlines()
        f__ = "".join(f_)
        if len(f_) > 0:
            # if "Merging untagged" in f__:
            if "transfertree finished" in f__:
            # if "hadd Target path:" in f_[-1]:
                success = True
    return success

def CheckFailedLog(Log):
    success = True
    with open(Log,"r") as f:
        # if "Traceback (most recent call last):" in f.read():
        f_ = f.read()
        if "Did not expect to back fill non-boolean branches Name:" in f_:
            success = False
        if "Disk quota exceeded" in f_:
            success = False
    return success

def Logs(Path,subFolder = True):
    Logs = []
    if subFolder:
        for ds in os.listdir(Path):
            if not os.path.isdir("%s/%s"%(Path,ds)) : continue
            Sub = "%s/%s"%(Path,ds)
            for ilog in os.listdir(Sub):
                if ilog.endswith(".debug") :
                    Logs.append("%s/%s"%(Sub,ilog))
    else:
        for ilog in os.listdir(Path):
            if ilog.endswith(".debug") :
                Logs.append("%s/%s"%(Path,ilog))
    return Logs

def Getsh(Log,run = False):
    log_path = Log.split("log_")[0]
    if not run:
        return ""
    for sh in [j for j in os.listdir(log_path) if "sh" in j]:
        sh = "%s/%s"%(log_path,sh)
        with open(sh,"r") as f:
            if Log.split("/")[-1] in f.read():
                return sh

def Check_Logs(Logs):
    finished = []
    Unfinished = []
    Failed = []
    sh_ = []
    for i in Logs:
        NotFailed = CheckFailedLog(i)
        if not NotFailed:
            Failed.append(i)
            sh = Getsh(i)
            sh_.append(sh)
        success = CheckLog(i)
        if success:
            finished.append(i)
        if (not success) & (NotFailed):
            Unfinished.append(i)
    for i in list(set(sh_)): print "sh %s "%(i)
    print "\n\n\nLogs:\n\n\nunfinished files\n\n"
    for i in Unfinished: print i
    print "failed files\n\n"
    for i in Failed: print i
    print "finished Files"
    for i in finished: print i


# Path = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/run/"
# Path = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/run_data/"
# Path = "/eos/user/y/yusong/qilong/NTuple/UL/2016/V1/Scripts/MC/log/"
# Path = "/eos/user/y/yusong/qilong/NTuple/UL/2016/V1/Scripts/Data/log/"
# Path = "/eos/user/y/yusong/qilong/NTuple/UL/2016/V1/Scripts/MC/log/"
# Path = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V2/run/"
# Path = "/home/pku/guoql/gKK/TransferTree/V1/RUN/2016/data/2022_1_16/log/"
Path = "/home/pku/guoql/gKK/TransferTree/V1/RUN/2016/data/2022_1_16/Tree/"
Logs_ = Logs(Path)
Check_Logs(Logs_)

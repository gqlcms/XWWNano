import os

ScriptsPath = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/Merge/Remove/congif/"
ReomvePath = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/Merge/Remove/"
Rerun = {}
for i in [i for i in os.listdir(ScriptsPath) if ".txt" in i]:
    with open("%s/%s"%(ScriptsPath,i),"r") as f:
        content = f.read()
        if len(content.replace(" ","").replace("\n","")) > 0:
            exec('Rerun[i.replace(".txt","")] = '+content)
            print len(Rerun[i.replace(".txt","")]),i.replace(".txt","")
            with open(ScriptsPath+i.replace(".txt","_rm.sh"),"w") as fout:
                for ifile in Rerun[i.replace(".txt","")]:
                    fout.write("mv "+ifile+" "+ReomvePath+"\n")


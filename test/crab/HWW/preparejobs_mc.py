import os
f=open("mclist.txt")
for i in f:
    if "/" in i and "#" not in i:
                ori=i.replace("\n","")
                i=i.replace("\n","").split("/")
                os.system("cp crab3_analysistest.py crab3_analysis%s.py"%(i[1]))
                os.system("sed -i 's/test/%s/g' crab3_analysis%s.py"%(i[1],i[1]))
                os.system("sed -i 's#datasetname#%s#g' crab3_analysis%s.py"%(ori,i[1]))
                os.system("crab submit crab3_analysis%s.py"%(i[1]))
                os.system("rm -r crab_%s/inputs"%(i[1]))

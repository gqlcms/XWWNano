import os
crab=[]
f=os.listdir("./")
for i in f:
    if "crab_" in i:crab.append(i)
for i in crab:
    os.system("crab status %s"%(i))
    #os.system("crab resubmit %s"%(i))

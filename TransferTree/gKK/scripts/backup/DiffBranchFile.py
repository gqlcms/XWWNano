#!/bin/env python
import ROOT
import numpy
import sys

if len(sys.argv) < 3:
    print("Syntax: haddnano.py out.root input1.root input2.root ...")
ofname = sys.argv[1]
files = sys.argv[2:]


fileHandles = []
fileHandles_Name = []
skip_files = []
goFast = True
for fn in files:
    print("Adding file" + str(fn))
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
    print("Merging" + str(name))
    obj = e.ReadObj()
    cl = ROOT.TClass.GetClass(e.GetClassName())
    inputs = ROOT.TList()
    isTree = obj.IsA().InheritsFrom(ROOT.TTree.Class())
    if isTree:
        obj = obj.CloneTree(-1, "fast" if goFast else "")
        branchNames = set([x.GetName() for x in obj.GetListOfBranches()])
    for ifh,fh in enumerate(fileHandles[1:]):
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
                print fileHandles_Name[ifh+1]
            print("missing: " + str(missingBranches) + "\n Additional:" + str(additionalBranches))

Path_For_Record = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/Merge/Remove/congif/"
Record = "%s/%s"%(Path_For_Record,ofname.split("/")[-1].replace(".root",".txt"))
with open(Record,"w") as f:
    f.write(str(skip_files))
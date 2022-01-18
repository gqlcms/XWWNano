import ROOT
import os
import commands

def Count(FileList):
    Nevents = 0
    for ifile in FileList:
        f = ROOT.TFile(ifile)
        Nevents += f.Get("nEventsGenWeighted").GetBinContent(1)
    return Nevents

class PreConfig():
     def __init__():


Path = "/eos/user/q/qiguo/yunxuan/ROOTFILE/NTuple_Output/Merge/2016UL/V1/QCD_HT1500to2000_APV/"
FileList = [ "%s/%s"%(Path,i) for i in os.listdir(Path) if ".root" in i]



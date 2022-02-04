import os
import random
import sys
import ctypes
import time

import ROOT

from config.Info import Info

from optparse import OptionParser
parser = OptionParser()

parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
parser.add_option('-d', action='store_true', dest='data', default=False )
parser.add_option('-m', action='store_true', dest='mc',   default=False )
parser.add_option('--outputfile',      action="store",type="string",dest="outputfile"      ,default=None)
parser.add_option('--inputfile',      action="store",type="string",dest="inputfile"      ,default=None)
parser.add_option('--dataset',      action="store",type="string",dest="dataset"      ,default="")
parser.add_option('--jobs',      action="store",type="string",dest="jobs"      ,default="")
parser.add_option('--year',      action="store",type="string",dest="year"      ,default="2016")
(options, args) = parser.parse_args()

ROOT.gSystem.Load("EDBR2PKUTree_C.so")
from ROOT import EDBR2PKUTree, TFile, TTree

if __name__ == '__main__': 
    Label = options.dataset
    jobs  = options.jobs
    year  = options.year
    Info_ = Info(Label, jobs, year)

    print options.inputfile

    channel    = Info_.channel
    inputfile  = options.inputfile if options.inputfile else Info_.inputfile
    outputfile = options.outputfile if options.outputfile else Info_.outputfile
    Nevents    = int(float(Info_.Nevents))
    sampleXS   = float(Info_.sampleXS)
    IsData     = Info_.IsData
    LUMI       = float(Info_.LUMI)

    print "channel    :", channel
    print "inputfile  :", inputfile
    print "outputfile :", outputfile
    print "Nevents    :", Nevents
    print "sampleXS   :", sampleXS
    print "IsData     :", IsData
    print "LUMI       :", LUMI

    have_Events = False
    for e in ROOT.TFile.Open(fn).GetListOfKeys() :
        if e.GetName() == "Events":
            have_Events = True
    if not have_Events:
        sys.exit("tree ('Events') is not found")
    filein = TFile( inputfile )
    tree   = filein.Get("Events")
    
    # Nevents = int(filein.Get("nEventsGenWeighted").GetBinContent(1))

    # filein = TFile( inputfile )
    # dir1 = filein.Get("treeDumper")
    # tree = dir1.Get("EDBRCandidates")
    # treew = dir1.Get("EDBRCandidatesw")
    # Nevents = treew.GetEntries("theWeight>0.") - treew.GetEntries("theWeight<0.")
    # print "Nevents",Nevents

    analyzer_gKK = EDBR2PKUTree( tree, outputfile )
    analyzer_gKK.Loop(channel, sampleXS, IsData, Nevents, LUMI)
    analyzer_gKK.endJob()
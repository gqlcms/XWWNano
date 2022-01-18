import os
import random
import sys
import ctypes
import time
from datetime import datetime
import ROOT
from optparse import OptionParser


from config.Info import Info

parser = OptionParser()
parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
parser.add_option('-d', action='store_true', dest='data', default=False )
parser.add_option('-m', action='store_true', dest='mc',   default=False )
parser.add_option('--signal', action='store_true', dest='signal',   default=False )
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
    outputfile = str(outputfile)
    Nevents    = int(float(Info_.Nevents))
    sampleXS   = float(Info_.sampleXS)
    IsData     = Info_.IsData
    LUMI       = float(Info_.LUMI)

    if options.signal :
        IsData = 1000

    print "channel    :", channel
    print "inputfile  :", inputfile
    print "outputfile :", outputfile
    print "Nevents    :", Nevents
    print "sampleXS   :", sampleXS
    print "IsData     :", IsData
    print "LUMI       :", LUMI

    have_Events = False
    fn = ROOT.TFile.Open(inputfile)
    for e in fn.GetListOfKeys() :
        if e.GetName() == "Events":
            have_Events = True
    if not have_Events:
        sys.exit("tree ('Events') is not found")
    filein = TFile( inputfile )
    tree   = filein.Get("Events")

    
    Beginning = datetime.now()
    print '----------------[',str(Beginning),']--------'

    print outputfile,type(outputfile)

    analyzer_gKK = EDBR2PKUTree( tree, outputfile, int(IsData) )
    analyzer_gKK.Loop(channel, sampleXS, IsData, Nevents, LUMI)
    analyzer_gKK.endJob()

    Finishing = datetime.now()
    duration = (Finishing - Beginning).seconds
    print '----END-----------------------------------------------[time:',Finishing,', duration:',duration,'sec]---------\n'

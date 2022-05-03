import os
import random
import sys
import ctypes
import time
from datetime import datetime
import ROOT
from optparse import OptionParser

parser = OptionParser()
parser.add_option('-S'          , action='store_true', dest='signal',   default=False )
parser.add_option('--outputfile', action="store",type="string",dest="outputfile" ,default=None)
parser.add_option('--inputfile',      action="store",type="string",dest="inputfile"      ,default=None)
parser.add_option('--year',      action="store",type="string",dest="year"      ,default="2016")
parser.add_option('--Nevents',      action="store",type="float",dest="Nevents"      ,default=None)
parser.add_option('--sampleXS',      action="store",type="float",dest="sampleXS"      ,default=None)
parser.add_option('--IsData',      action="store",type="int",dest="IsData"      ,default=None)
parser.add_option('--channel',      action="store",type="string",dest="channel"      ,default=None)
parser.add_option('--lxplus_path',      action="store",type="string",dest="lxplus_path"      ,default=None)
(options, args) = parser.parse_args()

ROOT.gSystem.Load("EDBR2PKUTree_C.so")
from ROOT import EDBR2PKUTree, TFile, TTree

if __name__ == '__main__': 
    outputfile = options.outputfile
    IsData     = options.IsData
    channel    = options.channel
    sampleXS   = options.sampleXS
    Nevents    = options.Nevents
    inputfiles = [ i.rstrip() for i in options.inputfile.split(",") if len(i.rstrip()) > 0 ]
    year  = options.year

    if not sampleXS : sampleXS = 1
    if not Nevents  : 
        Nevents = 1
        fn = ROOT.TFile.Open(inputfiles[0])
        if "nEventsGenWeighted" in [e.GetName() for e in fn.GetListOfKeys()] : 
            Nevents = fn.Get("nEventsGenWeighted").GetBinContent(1)

    if "2016" in options.year : 
        LUMI = 59.81
        # "pre-VFP" (aka "HIPM" or "APV")
        ispreVFP = False
        if "APV"   in inputfiles[0] : ispreVFP = True
        if "_HIPM" in inputfiles[0] : ispreVFP = True
        if ispreVFP :
            year = "2016preVFP"
        else :
            year = "2016postVFP"
    if options.year == "2017": LUMI = 41.5
    if options.year == "2018": LUMI = 59.81

    if options.signal : 
        IsData = 1000
        
    print "channel    :", channel
    print "inputfile  :", inputfiles
    print "outputfile :", outputfile
    print "Nevents    :", Nevents
    print "sampleXS   :", sampleXS
    print "IsData     :", IsData
    print "LUMI       :", LUMI
    print "year       :", year

    if len(inputfiles) > 1 : sys.exit("exit , currently only surport 1 inputfile")

    for inputfile in inputfiles:
        if os.path.normpath(inputfile) == os.path.normpath(outputfile):
            sys.exit("exit , inputfile can not be the same as outputfile")

    have_Events = True
    for inputfile in inputfiles:
        fn = ROOT.TFile.Open(inputfile)
        if "Events" not in [e.GetName() for e in fn.GetListOfKeys()] : have_Events = False
    if not have_Events:
        sys.exit("tree ('Events') is not found")
    filein = TFile( inputfiles[0] )
    tree   = filein.Get("Events")
   
    branches = [
        # "dnnDecorr_probTbcq_a","dnnDecorr_probTbqq_a","dnnDecorr_probTbc_a","dnnDecorr_probTbq_a","dnnDecorr_probWcq_a","dnnDecorr_probWqq_a","dnnDecorr_probZbb_a","dnnDecorr_probZcc_a","dnnDecorr_probZqq_a","dnnDecorr_probHbb_a","dnnDecorr_probHcc_a","dnnDecorr_probHqqqq_a","dnnDecorr_probQCDbb_a","dnnDecorr_probQCDcc_a","dnnDecorr_probQCDb_a","dnnDecorr_probQCDc_a","dnnDecorr_probQCDothers_a",
        # "dnnDecorr_probTbcq_b","dnnDecorr_probTbqq_b","dnnDecorr_probTbc_b","dnnDecorr_probTbq_b","dnnDecorr_probWcq_b","dnnDecorr_probWqq_b","dnnDecorr_probZbb_b","dnnDecorr_probZcc_b","dnnDecorr_probZqq_b","dnnDecorr_probHbb_b","dnnDecorr_probHcc_b","dnnDecorr_probHqqqq_b","dnnDecorr_probQCDbb_b","dnnDecorr_probQCDcc_b","dnnDecorr_probQCDb_b","dnnDecorr_probQCDc_b","dnnDecorr_probQCDothers_b",
        # "dnnDecorr_probTbcq_c","dnnDecorr_probTbqq_c","dnnDecorr_probTbc_c","dnnDecorr_probTbq_c","dnnDecorr_probWcq_c","dnnDecorr_probWqq_c","dnnDecorr_probZbb_c","dnnDecorr_probZcc_c","dnnDecorr_probZqq_c","dnnDecorr_probHbb_c","dnnDecorr_probHcc_c","dnnDecorr_probHqqqq_c","dnnDecorr_probQCDbb_c","dnnDecorr_probQCDcc_c","dnnDecorr_probQCDb_c","dnnDecorr_probQCDc_c","dnnDecorr_probQCDothers_c",
       
        "HT","Nj8","MJJ","MJJJ","MET_et","MET_phi","weight",
        "PTj","PTj_2","PTj_3",
        "Mj","Mj_2","Mj_3",
        "Mj_max","Mj_mid","Mj_min",
        "PTj_max","PTj_mid","PTj_min",
        "PTj_a","PTj_b","PTj_c",
        "Etaj_a","Etaj_b","Etaj_c",
        "Phij_a","Phij_b","Phij_c",
        "Mj_a","Mj_b","Mj_c",
        "PartNet_MD_W_a","PartNet_MD_W_b","PartNet_MD_W_c",
        "FatJet_tau1_a","FatJet_tau1_b","FatJet_tau1_c","FatJet_tau2_a","FatJet_tau2_b","FatJet_tau2_c","FatJet_tau3_a","FatJet_tau3_b","FatJet_tau3_c","FatJet_tau4_a","FatJet_tau4_b","FatJet_tau4_c",
        "nb_l_deep_ex","nb_m_deep_ex","nb_t_deep_ex","nb_l_deep_in","nb_m_deep_in","nb_t_deep_in",
        "goodRun","Flag",
"V1_evqqvsQCD_1",
"V1_evqqvsQCD_2",
 "V1_evqqvsQCD_3",
 "V1_mvqqvsQCD_1",
 "V1_mvqqvsQCD_2",
 "V1_mvqqvsQCD_3",
 "V1_emvqqvsQCD_1",
 "V1_emvqqvsQCD_2",
 "V1_emvqqvsQCD_3",
 "V1_hadtauvqqvsQCD_1",
 "V1_hadtauvqqvsQCD_2",
 "V1_hadtauvqqvsQCD_3",
 "V1_leptauevqqvsQCD_1",
 "V1_leptauevqqvsQCD_2",
 "V1_leptauevqqvsQCD_3",
 "V1_leptaumvqqvsQCD_1",
 "V1_leptaumvqqvsQCD_2",
 "V1_leptaumvqqvsQCD_3",

"V1_evqqvsQCD_max",
"V1_evqqvsQCD_mid",
 "V1_evqqvsQCD_min",
 "V1_mvqqvsQCD_max",
 "V1_mvqqvsQCD_mid",
 "V1_mvqqvsQCD_min",
 "V1_emvqqvsQCD_max",
 "V1_emvqqvsQCD_mid",
 "V1_emvqqvsQCD_min",
 "V1_hadtauvqqvsQCD_max",
 "V1_hadtauvqqvsQCD_mid",
 "V1_hadtauvqqvsQCD_min",
 "V1_leptauevqqvsQCD_max",
 "V1_leptauevqqvsQCD_mid",
 "V1_leptauevqqvsQCD_min",
 "V1_leptaumvqqvsQCD_max",
 "V1_leptaumvqqvsQCD_mid",
 "V1_leptaumvqqvsQCD_min",

"V1_evqqvsQCD_a",
"V1_evqqvsQCD_b",
 "V1_evqqvsQCD_c",
 "V1_mvqqvsQCD_a",
 "V1_mvqqvsQCD_b",
 "V1_mvqqvsQCD_c",
 "V1_emvqqvsQCD_a",
 "V1_emvqqvsQCD_b",
 "V1_emvqqvsQCD_c",
 "V1_hadtauvqqvsQCD_a",
 "V1_hadtauvqqvsQCD_b",
 "V1_hadtauvqqvsQCD_c",
 "V1_leptauevqqvsQCD_a",
 "V1_leptauevqqvsQCD_b",
 "V1_leptauevqqvsQCD_c",
 "V1_leptaumvqqvsQCD_a",
 "V1_leptaumvqqvsQCD_b",
 "V1_leptaumvqqvsQCD_c",

"jetAK8puppi_V1_probHww4q3qvsQCD",
"jetAK8puppi_V1_probHww4q3qvsQCD_2",
"jetAK8puppi_V1_probHww4q3qvsQCD_3",
"jetAK8puppi_V1_probHww4q3qvsQCD_max",
"jetAK8puppi_V1_probHww4q3qvsQCD_mid",
"jetAK8puppi_V1_probHww4q3qvsQCD_min",
"jetAK8puppi_V1_probHww4q3qvsQCD_a",
"jetAK8puppi_V1_probHww4q3qvsQCD_b",
"jetAK8puppi_V1_probHww4q3qvsQCD_c",
"jetAK8puppi_V1_probHww4qvsQCD",
"jetAK8puppi_V1_probHww4qvsQCD_2",
"jetAK8puppi_V1_probHww4qvsQCD_3",
"jetAK8puppi_V1_probHww4qvsQCD_max",
"jetAK8puppi_V1_probHww4qvsQCD_mid",
"jetAK8puppi_V1_probHww4qvsQCD_min",
"jetAK8puppi_V1_probHww4qvsQCD_a",
"jetAK8puppi_V1_probHww4qvsQCD_b",
"jetAK8puppi_V1_probHww4qvsQCD_c",


    ]

    if IsData > 0 :
        branches += [
            "matchingt_a","matchingW_a","matchingg_a",
            "matchingt_a","matchingW_a","matchingg_a","matchingZ_a","matchingu_a","matchingd_a","matchings_a","matchingc_a","matchingg_first_a","matchingu_first_a","matchingd_first_a","matchings_first_a", "matchingc_first_a","matchingqg_first_a","matchingt_first_a",
            "matchingt_b","matchingW_b","matchingg_b","matchingZ_b","matchingu_b","matchingd_b","matchings_b","matchingc_b","matchingg_first_b","matchingu_first_b","matchingd_first_b","matchings_first_b", "matchingc_first_b","matchingqg_first_b","matchingt_first_b",
            "matchingt_c","matchingW_c","matchingg_c","matchingZ_c","matchingu_c","matchingd_c","matchings_c","matchingc_c","matchingg_first_c","matchingu_first_c","matchingd_first_c","matchings_first_c", "matchingc_first_c","matchingqg_first_c","matchingt_first_c",
        ]

    if options.signal : 
        branches += [
            'H4q_a','H4q_b','H4q_c','H3q_a','H3q_b','H3q_c','H2q_a','H2q_b','H2q_c','w_a','w_b','w_c','Hlqq_a','Hlqq_b','Hlqq_c','Hlq_a','Hlq_b','Hlq_c','gKK_g_a','gKK_g_b','gKK_g_c','u_a','u_b','u_c','H3q_taudecay_a','H3q_taudecay_b','H3q_taudecay_c'
        ]

    print branches
    outbranches = ROOT.std.vector("string")(len(branches))
    for i,ibranch in enumerate(branches):
        outbranches[i] = ibranch

    print "entries",tree.GetEntries()

    Beginning = datetime.now()
    print '----------------[',str(Beginning),']--------'
    analyzer_gKK = EDBR2PKUTree( tree, outputfile, int(IsData), outbranches, channel )
    analyzer_gKK.Loop(channel, sampleXS, IsData, Nevents, LUMI, year)
    analyzer_gKK.endJob()
    Finishing = datetime.now()
    duration = (Finishing - Beginning).seconds

    if options.lxplus_path:
        dsfolder = outputfile.split("/")[-2]
        filename = outputfile.split("/")[-1]
        lxplus_dsfolder = "%s/%s/"%(options.lxplus_path,dsfolder)
        copy = 'eval `scram unsetenv -sh`;env -i X509_USER_PROXY=x509up_u12375 gfal-mkdir -t 120 -p gsiftp://eosuserftp.cern.ch/%s ;env -i X509_USER_PROXY=x509up_u12375 gfal-copy -t 120 --just-copy %s gsiftp://eosuserftp.cern.ch/%s/%s;'%(lxplus_dsfolder,outputfile,lxplus_dsfolder,filename)
        print copy
        for i in [copy]: os.system(i)

    print '----END-----------------------------------------------[time:',Finishing,', duration:',duration,'sec]---------\n'



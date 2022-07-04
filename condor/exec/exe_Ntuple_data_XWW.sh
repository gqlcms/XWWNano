#!/bin/bash

OPTIND=1

while getopts "h?f:i:o:s:e:x:cy:a:" opt; do
    case "$opt" in
    h|\?)
        echo 'parameters'
        exit 0
        ;;
    f)  INPUTFILENAMES=$OPTARG
        # e.g. 2016, 2017, 2018
        ;;
    i)  IFILE=$OPTARG
        # e.g. WWW_dim8, WZZ_dim8, WWZ_dim8 or ZZZ_dim8
        ;;
    y)  YEAR=$OPTARG
        ;;
    e)  EOSPATH=$OPTARG
        ;;
    x)  X509_USER_PROXYTMP=$OPTARG
        ;;
    a)  ADDTIONALArgs=$OPTARG
        ;;
    c)  CopyToEos=1 # to copy the outfile to cmslpc eos space
        ;;
    esac
done

BASEPATH=`pwd`
pwd
ls -lth

source /cvmfs/cms.cern.ch/cmsset_default.sh
export SCRAM_ARCH=slc7_amd64_gcc820
if [ -r CMSSW_10_6_20/src ] ; then
  echo release CMSSW_10_6_26 already exists
else
  scram p CMSSW CMSSW_10_6_26
fi
cd CMSSW_10_6_26/src
eval `scram runtime -sh`

mv $BASEPATH/fetchFiles.py .
python fetchFiles.py $BASEPATH $INPUTFILENAMES --isNanoAOD
if [ ! -f "$BASEPATH/Localfile.txt" ]; then
echo "$BASEPATH/Localfile.txt not found"
exit 11
fi
LOCALInputFile=`cat $BASEPATH/Localfile.txt`
echo $LOCALInputFile

cd $CMSSW_BASE/src
git clone https://github.com/cms-nanoAOD/nanoAOD-tools.git PhysicsTools/NanoAODTools
cd PhysicsTools/NanoAODTools
eval `scram runtime -sh`
scram b -j 16

echo "PhysicsTools/NanoAODTools dir"
pwd
ls -lth

cd python/postprocessing
git clone https://github.com/StephenChao/XWWNano.git analysis


rm -rf $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis/test/crab_auto
rm -rf $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis/Makeplots
rm -rf $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis/Powheg
rm -rf $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis/TransferTree
rm -rf $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis/customized_NanoAOD
rm -rf $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis/modules/VHProducer.py

cd $CMSSW_BASE/src
scram b -j 16

cd $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis
echo "analysis dir"
pwd
ls -lth
source $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis/init.sh

cd $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis/test
echo "analysis/test dir, with VBF module"
pwd
ls -lth

echo python run_XWW_condor.py -i $LOCALInputFile $ADDTIONALArgs
python run_XWW_condor.py -i $LOCALInputFile $ADDTIONALArgs

echo "finish run"
echo "analysis/test dir"
pwd
ls -lth

# Rigorous sweeproot which checks ALL branches for ALL events.
# If GetEntry() returns -1, then there was an I/O problem, so we will delete it
python << EOL
import ROOT as r
import os
foundBad = False
try:
    f1 = r.TFile("tree.root")
    t = f1.Get("Events")
    nevts = t.GetEntries()
    for i in range(0,t.GetEntries(),1):
        if t.GetEntry(i) < 0:
            foundBad = True
            print "[RSR] found bad event %i" % i
            break
except: foundBad = True
if foundBad:
    print "[RSR] removing output file because it does not deserve to live"
    os.system("rm tree.root")
else: print "[RSR] passed the rigorous sweeproot"
EOL

mv tree.root $BASEPATH/out_1.root

cd $BASEPATH
ls -lth



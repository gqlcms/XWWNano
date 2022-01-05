#!/bin/bash

# design to substitute some outdated files for NanoAOD-tools
# Remove some outdated files to save IO for crab jobs
echo Initing

export WORKING_PATH="$CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/"
echo $WORKING_PATH

# echo Updating pileup
# cp $WORKING_PATH/analysis/others/for_pileup/mcPileupUL2017.root $WORKING_PATH/data/pileup/
# cp $WORKING_PATH/analysis/others/for_pileup/PileupHistogram-goldenJSON-13tev-UL2017-99bins_withVar.root $WORKING_PATH/data/pileup/
# cp $WORKING_PATH/analysis/others/for_pileup/puWeightProducer.py $WORKING_PATH/modules/common/

# echo Updating prefiring correction
cp $WORKING_PATH/analysis/others/for_prefiring/*.root $CMSSW_BASE/src/PhysicsTools/NanoAODTools/data/prefire_maps/
# cp $WORKING_PATH/analysis/others/for_prefiring/PrefireCorr.py $WORKING_PATH/modules/common/

echo Updateing JME correction
# cp $WORKING_PATH/analysis/others/for_jme/*.tgz $CMSSW_BASE/src/PhysicsTools/NanoAODTools/data/jme/
# cp $WORKING_PATH/analysis/others/for_jme/jetmetHelperRun2.py $WORKING_PATH/modules/jme
cp $WORKING_PATH/analysis/others/for_jme/fatJetUncertainties.py $WORKING_PATH/modules/jme

# echo Updating BJet related
# cp $WORKING_PATH/analysis/others/for_btv/btagSFProducer.py $WORKING_PATH/modules/btv
# cp $WORKING_PATH/analysis/others/for_btv/*.csv $CMSSW_BASE/src/PhysicsTools/NanoAODTools/data/btagSF/

# echo Updating BJet related
# cp $WORKING_PATH/analysis/others/for_btv/btagSFProducer.py $WORKING_PATH/modules/btv
# cp $WORKING_PATH/analysis/others/for_btv/*.csv $CMSSW_BASE/src/PhysicsTools/NanoAODTools/data/btagSF/

echo Cleaning
rm -r $WORKING_PATH/analysis/others/
rm -r $CMSSW_BASE/src/PhysicsTools/NanoAODTools/data/jme/Autumn18_*.tgz
rm -r $CMSSW_BASE/src/PhysicsTools/NanoAODTools/data/jme/Fall17_*.tgz
rm -r $CMSSW_BASE/src/PhysicsTools/NanoAODTools/data/jme/Spring16_*.tgz
rm -r $CMSSW_BASE/src/PhysicsTools/NanoAODTools/data/jme/Summer16_*.tgz
rm -r $WORKING_PATH/data/roccor*

echo redo scram
cd $CMSSW_BASE/src
scram b

echo "Initing Done \(ᵔᵕᵔ)/"
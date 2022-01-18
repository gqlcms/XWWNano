#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

#echo "Setting up ROOT"
export SCRAM_ARCH=slc7_amd64_gcc700   # or whatever scram_arch you need for your desired CMSSW release
export CMSSW_VERSION=CMSSW_10_6_20
source /cvmfs/cms.cern.ch/cmsset_default.sh
cd /cvmfs/cms.cern.ch/$SCRAM_ARCH/cms/cmssw/$CMSSW_VERSION/src
eval `scramv1 runtime -sh`
cd - > /dev/null

echo 'Setup following ROOT'
which root
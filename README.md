# VVV

## Steps for setup:

1. release CMSSW_10_6_27
2. Set up NanoAOD tools
   ```bash
   cd $CMSSW_BASE/src

   git clone https://github.com/cms-nanoAOD/nanoAOD-tools.git PhysicsTools/NanoAODTools

   cd PhysicsTools/NanoAODTools

   cmsenv

   scram b
   ```

3. Set up VVV codes
   ```bash
   cd python/postprocessing

   ##clone this repository

   git clone https://github.com/xdlyu/VVVnano.git analysis

   cd $CMSSW_BASE/src

   scram b
   ```
    Noticed that the `crab_help.py` is written in python3, hence the `scram b` in CMSSW would leave some error message. Since this crab helper normally would not be included by other codes, you can ignore these errors.

4. Substitute some outdated files with `init.sh`
(refer to Meng's code: https://github.com/menglu21/TTC)
   ```bash
   cd $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/analysis

   source init.sh
   ```

## test

cd analysis/test
source run.sh

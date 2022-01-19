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

   git clone https://github.com/gqlcms/XWWNano.git analysis

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
## Crab mode

```bash
cd crab
```
The crab mode is based on official nanotools. See reference: <https://github.com/cms-nanoAOD/nanoAOD-tools/tree/master/crab>

The `crab_help.py` is designed to simplify the repeated process. And the `input.json` is a sample for how to provide input for `crab_help.py`. `HWW_crab_script.sh` is the executed code on crab. 

First you need to generate the cfg file for crab job.
```bash
python3 crab_help.py -f input.json -m prepare
```
It will create a folder that with cfg files inside automatically. Noticed that some paths in `crab_help.py` need to be changed according to different user.

Then you can submit crab jobs with:
```bash
python3 crab_help.py -f input.json -m submit
```
Similarly, you can use `-m status`, `-m resubmit`, `-m kill` to batchly operate crab jobs.
(refer to Sen's code: <https://github.com/Senphy/nanoAOD-WVG>)

Since crab will upload the whole directory when submitting jobs, before the submission, you should place this `XWWNano` to directory except `/PhysicsTools/NanoAODTools/python/`:

```bash
cmsrel CMSSW_10_6_27
cd CMSSW_10_6_19/src
cmsenv
git clone https://github.com/cms-nanoAOD/nanoAOD-tools.git PhysicsTools/NanoAODTools 
cd PhysicsTools/NanoAODTools
scram b
git clone https://github.com/gqlcms/XWWNano.git
cd XWWNano
```
We need to update some files for official NanoAOD-tools. Also we need to `scram` the new modules.
```bash
mv modules/* $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/modules/
cd $CMSSW_BASE/src/PhysicsTools/NanoAODTools
scram b
```

<br>
## TransferTree

```bash
cd TransferTree
```

The TransferTree part is used to transfer the ntuple file to new tree with branches you needed, based on RDataFrame. See reference:<https://root.cern/doc/master/classROOT_1_1RDataFrame.html>

The example code shows how to transfer a test root file to an output file with new tree we wants, the main code is `Transfer_Tree.py` in `/TransferTree/Tool/Transfer_Tree/` and `deepWH_new.py` in `/TransferTree/config/Intime/`.

By running(Of course you can run the commands in TransferTree.sh with command line directly, and please remind to change the path according to different user):
```bash
source ./Tool/TransferTree/TransferTree.sh
```
The test input file named HWW2q_3m_Skim.root can be transfered to a output file HWW2q_3m_Tree.root, with a new tree (NewTree) and new branch (deepWH) in it.

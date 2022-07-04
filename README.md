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
   ```bash
   cd analysis/test
   source run.sh
   ```

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

Since crab will upload the whole directory when submitting jobs, before the submission, you should place this `XWWNano` to a directory except `/PhysicsTools/NanoAODTools/python/`:

```bash
cmsrel CMSSW_10_6_27
cd CMSSW_10_6_27/src
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

By running(Of course you can run the commands in `TransferTree.sh` with command line directly, and please remind to change the path according to different user):
```bash
source ./Tool/TransferTree/TransferTree.sh
```
The test input file named `HWW2q_3m_Skim.root` can be transfered to a output file `HWW2q_3m_Tree.root`, with a new tree `NewTree` and new branch `deepWH` in it.

## Makeplots

```bash
cd Makeplots
```

The `MODE` option contains `MC`, `MCvsDATA`, `DECO`, the `y` option contains `16`,`17`,`18`, and the `REGION` option contains the selection or region defines by users, like `PS2`, etc.

For example,run the `Makeplots_XWW.py` by:

```bash
python Makeplots_XWW.py --MODE DECO --REGION PS2 --y 17
```
Please remind to change the path according to different user.

## Powheg

This directory is about the signal sample production using Powheg. For detail about Powheg, see reference: <https://twiki.cern.ch/twiki/bin/viewauth/CMS/PowhegBOXPrecompiled>

Create a CMSSW work area:
```bash
cmsrel CMSSW_9_3_0
cd CMSSW_9_3_0/src
cmsenv
```

Checkout the scripts:
```bash
git clone https://github.com/cms-sw/genproductions.git genproductions
cd genproductions/bin/Powheg
```
Get the inputs card files, while there are two modifications needed:
```bash
mkdir gg_H
cd gg_H
wget --no-check-certificate https://raw.githubusercontent.com/cms-sw/genproductions/master/bin/Powheg/examples/gg_H_quark-mass-effects_withJHUGen_NNPDF30_13TeV/gg_H_quark-mass-effects_NNPDF30_13TeV.input
wget --no-check-certificate https://raw.githubusercontent.com/cms-sw/genproductions/master/bin/Powheg/examples/gg_H_quark-mass-effects_withJHUGen_NNPDF30_13TeV/JHUGen.input
```

The first modification is to use 325300 for 5f scheme:
```bash
vi gg_H_quark-mass-effects_NNPDF30_13TeV.input
```

Change `lhans1 260000       ! pdf set for hadron 1 (LHA numbering)` to `lhans1 325300       ! pdf set for hadron 1 (LHA numbering)`.

The second modification is on JHUGen side, change the decay mode.(See reference: <https://spin.pha.jhu.edu/Manual.pdf>):

```bash
vi JHUGen.input
```

For 4q final state, change `Collider=1 PChannel=0 Process=0 Unweighted=1 DecayMode1=0 DecayMode2=0 OffshellX=0` to `Collider=1 PChannel=0 Process=0 Unweighted=1 DecayMode1=5 DecayMode2=5 OffshellX=0`.

```bash
cd ..
cmsenv
python ./run_pwg_condor.py -p f -i gg_H/gg_H_quark-mass-effects_NNPDF30_13TeV.input -m gg_H_quark-mass-effects -f my_ggH -q longlunch -n 1000
```

The definition for the input parameters:
`-p` grid production stage [0]  (compiling source)
`-i` intput card name [powheg.input]
`-m` process name (process defined in POWHEG)
`-f` working folder [my_ggH]
`-q`  job flavor / batch queue name (run locally if not specified)

Then, a tar ball with the name `my_ggH_gg_H_quark-mass-effects_<SCRAM_ARCH>_<CMSSW_VERSION>.tgz` will be created.

For technology detail, See : <https://indico.cern.ch/event/1078192/contributions/4534876/attachments/2315996/3942533/ggHWW4qPowhegSitianSep24.pdf>

For condor submitting jobs:

```bash
cd XWWNano/Powheg
mkdir log
condor submit submit_nanov9.jdl
```

## private NanoAOD
generate customized nanoAOD with addtional fatJets taggers
1. test condor scripts, for example:
```
python Condor.py --DAS DAS_2016_Common --Filesjson 'json file used for storing input files' --createfilejson --debugkeepN 2 --debug

python Condor.py --DAS DAS_2016_Common --Filesjson 'json file used for storing input files' --outputPath "output path" --year 2016 --excutable "exe for UL16 data" --TaskFolder "folders keep condor submit files and log files" --submitsh "submit scripts" --Condor

sh submit_test.sh
```
2. submit condor jobs, for example:
   mc:
```
python Condor.py --DAS DAS_2016_Common --Filesjson 'json file used for storing input files' --createfilejson

python Condor.py --DAS DAS_2016_Common --Filesjson 'json file used for storing input files' --outputPath "output path" --year 2016 --excutable "exe for UL16 data" --TaskFolder "folders keep condor submit files and log files" --submitsh "submit scripts" --Condor

sh "submit scripts"
```

## HWW/gKK TransferTree
In TransferTree directory, we have 2 TransferTree frameworks for gKK and HWW, respectively, for now:`gKK`,`HWW`.

In the future, we consider to add different modes and so to merge these 2 frameworks together, and let users to run in one frameworks.

Now, for example, to run the HWW TransferTree framework, similar in gKK TransferTree framework:

First, compile the C files:
```
cd XWWNano/TransferTree/HWW
cmsenv
root -l
```
Then, in root space,
```
.L EDBR2PKUTree.C++
```
After compiling successfully, runEDBR2PKUTree.py can be used:
For example, with signal ntuples:
```
python runEDBR2PKUTree.py  --inputfile "YOUR INPUT FILES" --outputfile "YOUR OUTPUT FILES" --year  "YOUR SAMPLE YEAR" --sampleXS "YOUR SAMPLE XS" --channel "had"  -S
```

## Condor
In `condor` directory under cmsconnect.

For submitting jobs without VBF modules.
1. Create json file
```
python Condor.py --DAS "Samples dir on cmsconnect" --Filesjson "json file dir on cmsconnect" --createfilejson
```
2.Create submit.cmd to be submitted on condor, using UL18A for example.
```
python Condor.py --DAS "Samples dir on cmsconnect" --Filesjson "json file dir on cmsconnect" --outputPath "" --year 2018 --excutable "exe_Ntuple_data.sh" --TaskFolder "dir on cmsconnect for condor log" --submitsh "sh file dir on cmsconnect" --Condor --Input "x509up_u100637,Scripts/fetchFiles.py" --AddtionalArgs "-a '-o ./ -d --year UL2018A'" --MODE XWWNano
```

For submitting jobs with VBF modules.
1. Create json file
```
python Condor.py --DAS "Samples dir on cmsconnect" --Filesjson "json file dir on cmsconnect" --createfilejson
```
2.Create submit.cmd to be submitted on condor, using UL18A for example.
```
python Condor.py --DAS "Samples dir on cmsconnect" --Filesjson "json file dir on cmsconnect" --outputPath "" --year 2018 --excutable "exe_Ntuple_data_XWW.sh" --TaskFolder "dir on cmsconnect for condor log" --submitsh "sh file dir on cmsconnect" --Condor --Input "x509up_u100637,Scripts/fetchFiles.py" --AddtionalArgs "-a '-o ./ -d --year UL2018A'" --MODE XWWNano
```
Please notice to change the vom id for different users.

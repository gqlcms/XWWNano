import FWCore.PythonUtilities.LumiList as LumiList
import FWCore.ParameterSet.Config as cms

# python run.py -d -i /stash/user/qilongguo/public/gKK/private_NanoAOD/2016/V1/Data/Skim/Run2016B-ver1_HIPM/out_22.root -o ./ --year 2016post --CrabCondor condor

def runsAndLumis_(filename="./Cert_314472-325175_13TeV_Legacy2018_Collisions18_JSON.txt"):
    lumis = cms.untracked.VLuminosityBlockRange( LumiList.LumiList(filename=filename).getCMSSWString().split(',') )
    runsAndLumis = {}
    for l in lumis:
        if "-" in l:
            start, stop = l.split("-")
            rstart, lstart = start.split(":")
            rstop, lstop = stop.split(":")
        else:
            rstart, lstart = l.split(":")
            rstop, lstop = l.split(":")
        if rstart != rstop:
            raise Exception(
                "Cannot convert '%s' to runs and lumis json format" % l)
        if rstart not in runsAndLumis:
            runsAndLumis[rstart] = []
        runsAndLumis[rstart].append([int(lstart), int(lstop)])
    return runsAndLumis


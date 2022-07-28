import os
import sys
import optparse
import ROOT
import re

from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor
from PhysicsTools.NanoAODTools.postprocessing.modules.common.countHistogramsModule import *
from PhysicsTools.NanoAODTools.postprocessing.analysis.modules.eleRECOSFProducer import *
from PhysicsTools.NanoAODTools.postprocessing.analysis.modules.eleIDSFProducer import *
from PhysicsTools.NanoAODTools.postprocessing.analysis.modules.muonScaleResProducer import *
from PhysicsTools.NanoAODTools.postprocessing.analysis.modules.muonIDISOSFProducer import *
from PhysicsTools.NanoAODTools.postprocessing.analysis.modules.VVVProducer import *
#from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jetmetUncertainties import *
from PhysicsTools.NanoAODTools.postprocessing.modules.common.puWeightProducer import *
from PhysicsTools.NanoAODTools.postprocessing.modules.common.PrefireCorr import *
from PhysicsTools.NanoAODTools.postprocessing.framework.crabhelper import inputFiles, runsAndLumis
from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jetmetHelperRun2 import *
from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jetmetUncertainties import *
from PhysicsTools.NanoAODTools.postprocessing.modules.btv.btagSFProducer import *
### main python file to run ###

def main():

  usage = 'usage: %prog [options]'
  parser = optparse.OptionParser(usage)
  parser.add_option('--year', dest='year', help='which year sample', default='2018', type='string')
  parser.add_option('-m', dest='ismc', help='to apply sf correction or not', default=True, action='store_true')
  parser.add_option('-i', '--in', dest='inputs', help='input directory with files', default=None, type='string')
  parser.add_option('-d', dest='ismc', help='to apply sf correction or not', action='store_false')
  parser.add_option('-o', '--out', dest='output', help='output directory with files', default="./", type='string')
  parser.add_option('-M', '--MODE', dest='MODE', help='MODE', default="inclusive", type='string')
  parser.add_option('--CrabCondor', '--CrabCondor', dest='CrabCondor', help='Crab Condor', default="crab", type='string')
  (opt, args) = parser.parse_args()
  import FWCore.PythonUtilities.LumiList as LumiList
  import FWCore.ParameterSet.Config as cms

  if "2016" in opt.year:
    lumimask = "Cert_271036-284044_13TeV_Legacy2016_Collisions16_JSON.txt"
  if "2017" in opt.year:
    lumimask = "Cert_294927-306462_13TeV_UL2017_Collisions17_GoldenJSON.txt"
  if "2018" in opt.year:
    lumimask = "Cert_314472-325175_13TeV_Legacy2018_Collisions18_JSON.txt"
  

  lumisToProcess = cms.untracked.VLuminosityBlockRange( LumiList.LumiList(filename=lumimask).getCMSSWString().split(',') )
  # print lumisToProcess

  runsAndLumis_special = {}
  for l in lumisToProcess:
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
      if rstart not in runsAndLumis_special:
          runsAndLumis_special[rstart] = []
      runsAndLumis_special[rstart].append([int(lstart), int(lstop)])
  jsoninput = runsAndLumis_special

  PrefCorrUL16_preVFP = lambda : PrefCorr(jetroot="L1PrefiringMaps.root", jetmapname="L1prefiring_jetptvseta_UL2016preVFP", photonroot="L1PrefiringMaps.root", photonmapname="L1prefiring_photonptvseta_UL2016preVFP", branchnames=["PrefireWeight","PrefireWeight_Up", "PrefireWeight_Down"])
  PrefCorrUL16_postVFP = lambda : PrefCorr(jetroot="L1PrefiringMaps.root", jetmapname="L1prefiring_jetptvseta_UL2016postVFP", photonroot="L1PrefiringMaps.root", photonmapname="L1prefiring_photonptvseta_UL2016postVFP", branchnames=["PrefireWeight","PrefireWeight_Up", "PrefireWeight_Down"])
  PrefCorrUL17 = lambda : PrefCorr(jetroot="L1PrefiringMaps.root", jetmapname="L1prefiring_jetptvseta_UL2017BtoF", photonroot="L1PrefiringMaps.root", photonmapname="L1prefiring_photonptvseta_UL2017BtoF", branchnames=["PrefireWeight","PrefireWeight_Up", "PrefireWeight_Down"])
  
  if opt.ismc:
    if "2016" in opt.year:
      jmeCorrections  = createJMECorrector(opt.ismc, "UL2016", opt.year[4:].upper(), "Total", "AK8PFPuppi")
      jetmetCorrector = createJMECorrector(opt.ismc, "UL2016", jesUncert="Total", metBranchName="MET", splitJER=False, applyHEMfix=True)
    if "2017" in opt.year:
      jmeCorrections  = createJMECorrector(opt.ismc, "UL2017", opt.year[4:].upper(), "Total","AK8PFPuppi")
      jetmetCorrector = createJMECorrector(opt.ismc, "UL2017", jesUncert="Total", metBranchName="MET", splitJER=False, applyHEMfix=True)
    if "2018" in opt.year:
      jmeCorrections  = createJMECorrector(opt.ismc, "UL2018", opt.year[4:].upper(), "Total","AK8PFPuppi")
      jetmetCorrector = createJMECorrector(opt.ismc, "UL2018", jesUncert="Total", metBranchName="MET", splitJER=False, applyHEMfix=True)

  if opt.ismc:


    if opt.year == "2016post":
      p = PostProcessor(opt.output, opt.inputs.rstrip(",").split(","), modules=[countHistogramsModule(),puAutoWeight_2016(),PrefCorrUL16_postVFP(),muonIDISOSF2016post(),muonScaleRes2016b(),eleRECOSF2016post(),eleIDSF2016post(),jmeCorrections(),jetmetCorrector(),btagSFUL2016Post(),VVV2016(opt.MODE)], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2016pre":
      p = PostProcessor(opt.output, opt.inputs.rstrip(",").split(","), modules=[countHistogramsModule(),puAutoWeight_2016(),PrefCorrUL16_preVFP(),muonIDISOSF2016pre(),muonScaleRes2016a(),eleRECOSF2016pre(),eleIDSF2016pre(),jmeCorrections(),jetmetCorrector(),btagSFUL2016Pre(),VVV2016(opt.MODE)], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2017":
      p = PostProcessor(opt.output, opt.inputs.rstrip(",").split(","), modules=[countHistogramsModule(),puAutoWeight_2017(),PrefCorr(),muonIDISOSF2017(),muonScaleRes2017(),eleRECOSF2017(),eleIDSF2017(),jmeCorrections(),jetmetCorrector(),btagSFUL2017(),VVV2017(opt.MODE)], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2018":
      p = PostProcessor(opt.output, opt.inputs.rstrip(",").split(","), modules=[countHistogramsModule(),puAutoWeight_2018(),PrefCorr(),muonIDISOSF2018(),muonScaleRes2018(),eleRECOSF2018(),eleIDSF2018(),jmeCorrections(),jetmetCorrector(),btagSFUL2018(),VVV2018(opt.MODE)], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")


# Sequence for data
  if not (opt.ismc):
    year_list = ['UL2016_preVFPB','UL2016_preVFPC','UL2016_preVFPD','UL2016_preVFPE','UL2016_preVFPF','UL2016F','UL2016G','UL2016H','UL2017B','UL2017C','UL2017D','UL2017E','UL2017F','UL2018A','UL2018B','UL2018C','UL2018D']
    if opt.year in year_list : 
      jmeCorrections  = createJMECorrector(opt.ismc,  dataYear=opt.year[:-1], runPeriod=opt.year[-1:],  jesUncert="Total", jetType="AK8PFPuppi",)
      jetmetCorrector = createJMECorrector(opt.ismc,   dataYear=opt.year[:-1], runPeriod=opt.year[-1:], metBranchName="MET")
    if opt.year in ["UL2016_preVFPB","UL2016_preVFPC","UL2016_preVFPD","UL2016_preVFPE","UL2016_preVFPF"]:
      p = PostProcessor(opt.output, [opt.inputs], modules=[muonScaleRes2016a(),jetmetCorrector(),jmeCorrections(),VVV2016()], provenance=True,fwkJobReport=True, jsonInput=jsoninput)

    if opt.year in ["UL2016F","UL2016G","UL2016H"]:
      p = PostProcessor(opt.output, [opt.inputs], modules=[muonScaleRes2016b(),jetmetCorrector(),jmeCorrections(),VVV2016()], provenance=True,fwkJobReport=True, jsonInput=jsoninput)
    
    if opt.year in ['UL2017B','UL2017C','UL2017D','UL2017E','UL2017F',]:
      p = PostProcessor(opt.output, [opt.inputs], modules=[muonScaleRes2017(),jetmetCorrector(),jmeCorrections(),VVV2017()], provenance=True,fwkJobReport=True, jsonInput=jsoninput)

    if opt.year in ['UL2018A','UL2018B','UL2018C','UL2018D']:
      p = PostProcessor(opt.output, [opt.inputs], modules=[muonScaleRes2018(),jetmetCorrector(),jmeCorrections(),VVV2018()], provenance=True,fwkJobReport=True, jsonInput=jsoninput)
  
  p.run()

if __name__ == "__main__":
    sys.exit(main())

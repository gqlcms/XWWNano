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
from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jetmetHelperRun2 import *
from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jetmetUncertainties import *
from PhysicsTools.NanoAODTools.postprocessing.framework.crabhelper import inputFiles
### main python file to run ###



def main():

  usage = 'usage: %prog [options]'
  parser = optparse.OptionParser(usage)
  parser.add_option('--year', dest='year', help='which year sample', default='2018', type='string')
  parser.add_option('-m', dest='ismc', help='to apply sf correction or not', default=True, action='store_true')
  parser.add_option('-i', '--in', dest='inputs', help='input directory with files', default=None, type='string')
  parser.add_option('-d', dest='ismc', help='to apply sf correction or not', action='store_false')
  parser.add_option('-o', '--out', dest='output', help='output directory with files', default=None, type='string')
  parser.add_option('-M', '--MODE', dest='MODE', help='MODE', default="inclusive", type='string')
  parser.add_option('--CrabCondor', '--CrabCondor', dest='CrabCondor', help='Crab Condor', default="crab", type='string')
  (opt, args) = parser.parse_args()

  print 'ismc:',opt.ismc

  if opt.CrabCondor == "crab":
    from PhysicsTools.NanoAODTools.postprocessing.framework.crabhelper import runsAndLumis
  if opt.CrabCondor == "condor":
    from PhysicsTools.NanoAODTools.postprocessing.analysis.modules.Condor_helper import runsAndLumis_
    if "2016" in opt.year:
      runsAndLumis = lambda : runsAndLumis_("./Cert_271036-284044_13TeV_Legacy2016_Collisions16_JSON.txt")
    if "2017" in opt.year:
      runsAndLumis = lambda : runsAndLumis_("./Cert_294927-306462_13TeV_UL2017_Collisions17_GoldenJSON.txt")
    if "2018" in opt.year:
      runsAndLumis = lambda : runsAndLumis_("./Cert_314472-325175_13TeV_Legacy2018_Collisions18_JSON.txt")

  if opt.ismc:
    if "2016" in opt.year:
      jmeCorrections = createJMECorrector(opt.ismc, "UL2016", opt.year[4:].upper(), "Total","AK8PFPuppi")
    if "2017" in opt.year:
      jmeCorrections = createJMECorrector(opt.ismc, "UL2017", opt.year[4:].upper(), "Total","AK8PFPuppi")
    if "2018" in opt.year:
      jmeCorrections = createJMECorrector(opt.ismc, "UL2018", opt.year[4:].upper(), "Total","AK8PFPuppi")

    if opt.year == "2016":
      p = PostProcessor(".", inputFiles(), modules=[PrefCorr(), VVV2016(opt.MODE)], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
    if opt.year == "2016post":
      p = PostProcessor(".", [opt.inputs], modules=[countHistogramsModule(),pufile_mcUL2016(),PrefCorr(),muonIDISOSF2016post(),muonScaleRes2016b(),eleRECOSF2016post(),eleIDSF2016post(),jmeCorrections(),btagSF2016(), VVV2016(opt.MODE)], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2016pre":
      p = PostProcessor(".", [opt.inputs], modules=[countHistogramsModule(),puAutoWeight_2016(),PrefCorr(),muonIDISOSF2016pre(), muonScaleRes2016a(),eleRECOSF2016pre(), eleIDSF2016pre(), VVV2016(opt.MODE),jmeCorrections()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2017":
      p = PostProcessor(opt.output, [opt.inputs], modules=[countHistogramsModule(),puAutoWeight_2017(),PrefCorr(),muonIDISOSF2017(),muonScaleRes2017(),eleRECOSF2017(),eleIDSF2017(), VVV2017(opt.MODE)], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2018":
      p = PostProcessor(".", inputFiles(), modules=[countHistogramsModule(),puAutoWeight_2018(),muonIDISOSF2018(),muonScaleRes2018(),eleRECOSF2018(),eleIDSF2018(), VVV2018(opt.MODE)], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())

# Sequence for data
  if not (opt.ismc):
    if opt.year == "2016post" :
      p = PostProcessor(".", opt.inputs.rstrip(",").split(","), modules=[muonIDISOSF2016post(),VVV2016()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
    if opt.year == "2016pre" :
      p = PostProcessor(".", opt.inputs.rstrip(",").split(","), modules=[muonIDISOSF2016pre(),VVV2016()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
    if opt.year == "2017":
      p = PostProcessor(opt.output, [opt.inputs], modules=[muonScaleRes2017(),VVV2017()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),maxEntries=10000)
    if opt.year == "2018a":
      p = PostProcessor(".", inputFiles(), modules=[muonScaleRes2018(),VVV2018()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
    if opt.year == "2018b":
      p = PostProcessor(".", inputFiles(), modules=[muonScaleRes2018(),VVV2018()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
    if opt.year == "2018c":
      p = PostProcessor(".", inputFiles(), modules=[muonScaleRes2018(),VVV2018()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
    if opt.year == "2018d":
      p = PostProcessor(".", inputFiles(), modules=[muonScaleRes2018(),VVV2018()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
  p.run()

if __name__ == "__main__":
    sys.exit(main())

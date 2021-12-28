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
### main python file to run ###

def main():

  usage = 'usage: %prog [options]'
  parser = optparse.OptionParser(usage)
  parser.add_option('--year', dest='year', help='which year sample', default='2018', type='string')
  parser.add_option('-m', dest='ismc', help='to apply sf correction or not', default=True, action='store_true')
  #parser.add_option('-i', '--in', dest='inputs', help='input directory with files', default=None, type='string')
  parser.add_option('-d', dest='ismc', help='to apply sf correction or not', action='store_false')
  #parser.add_option('-o', '--out', dest='output', help='output directory with files', default=None, type='string')
  (opt, args) = parser.parse_args()

  print 'ismc:',opt.ismc
  #jmeCorrections = createJMECorrector(opt.ismc, "UL"+opt.year, "B", "Total","AK8PFPuppi")
  jmeCorrections = createJMECorrector(opt.ismc, "UL"+opt.year[:4], opt.year[4:].upper(), "Total","AK8PFPuppi")

  if opt.ismc:
    if opt.year == "2016":
      p = PostProcessor(".", inputFiles(), modules=[muonScaleRes2016a(),VVV2016()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2016a":
      p = PostProcessor(".", inputFiles(), modules=[countHistogramsModule(),puAutoWeight_2016(),PrefCorr(),muonIDISOSF2016(),muonScaleRes2016a(),eleRECOSF2016(),eleIDSF2016(), VVV2016()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2016b":
      p = PostProcessor(".", inputFiles(), modules=[countHistogramsModule(),puAutoWeight_2016(),PrefCorr(),muonIDISOSF2016(),muonScaleRes2016b(),eleRECOSF2016(),eleIDSF2016(), VVV2016()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2017":
      p = PostProcessor(".", inputFiles(), modules=[countHistogramsModule(),puAutoWeight_2017(),PrefCorr(),muonIDISOSF2017(),muonScaleRes2017(),eleRECOSF2017(),eleIDSF2017(), VVV2017(),jmeCorrections()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),outputbranchsel="keep_and_drop.txt")
    if opt.year == "2018":
      p = PostProcessor(".", inputFiles(), modules=[countHistogramsModule(),puAutoWeight_2018(),muonIDISOSF2018(),muonScaleRes2018(),eleRECOSF2018(),eleIDSF2018(), VVV2018()], provenance=True,fwkJobReport=True,outputbranchsel="keep_and_drop.txt")


# Sequence for data
  if not (opt.ismc):
    if opt.year == "2016b" or opt.year == "2016c" or opt.year == "2016d":
      p = PostProcessor(".", inputFiles(), modules=[muonScaleRes2016a(),VVV2016()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
    if opt.year == "2016e" or opt.year == "2016f":
      p = PostProcessor(".", inputFiles(), modules=[muonScaleRes2016a(),VVV2016()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
    if opt.year == "2016g" or opt.year == "2016h":
      p = PostProcessor(".", inputFiles(), modules=[muonScaleRes2016b(),VVV2016()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
    if opt.year == "2017":
      p = PostProcessor(opt.output, [opt.inputs], modules=[muonScaleRes2017(),VVV2017()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis(),maxEntries=10000)
    if "2018" in opt.year:
      p = PostProcessor(".", inputFiles(), modules=[muonScaleRes2018(),VVV2018(),jmeCorrections()], provenance=True,fwkJobReport=True, jsonInput=runsAndLumis())
  p.run()

if __name__ == "__main__":
    sys.exit(main())

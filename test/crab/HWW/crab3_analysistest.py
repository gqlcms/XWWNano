from WMCore.Configuration import Configuration
config = Configuration()
config.section_("General")
config.General.requestName   = 'test'
config.General.transferLogs = True

config.section_("JobType")
config.JobType.pluginName  = 'Analysis'
config.JobType.inputFiles = ['crab_cfg.py','../../keep_and_drop.txt',"../../../scripts/haddnano.py"]
config.JobType.sendPythonFolder = True
config.JobType.psetName = 'PSet.py'
config.JobType.scriptExe = 'runmc.sh'
#config.JobType.allowUndistributedCMSSW = True
config.JobType.allowUndistributedCMSSW = True

config.section_("Data")
#config.Data.inputDataset = '/WJetsToLNu_13TeV-madgraph-pythia8-tauola/Phys14DR-PU20bx25_PHYS14_25_V1-v1/MINIAODSIM'
config.Data.inputDataset = 'datasetname'
config.Data.inputDBS = 'global'
#config.Data.inputDBS = 'phys03'
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob =5
#config.Data.splitting = 'Automatic'
#config.Data.unitsPerJob =450
config.Data.totalUnits = -1
config.Data.publication = False
name = '18'
steam_dir = 'xulyu/yuzhe_new'
config.Data.outLFNDirBase = '/store/group/phys_b2g/' + steam_dir + '/' + name + '/'
# This string is used to construct the output dataset name
config.Data.outputDatasetTag = 'test'

config.section_("Site")
# Where the output files will be transmitted to
config.Site.storageSite = 'T2_CH_CERN'

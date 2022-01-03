from WMCore.Configuration import Configuration
config = Configuration()
config.section_("General")
config.General.requestName   = 'data18C'
config.General.transferLogs = True

config.section_("JobType")
config.JobType.pluginName  = 'Analysis'
config.JobType.inputFiles = ['crab_cfg.py','../../keep_and_drop.txt',"../../../scripts/haddnano.py",'Cert_314472-325175_13TeV_Legacy2018_Collisions18_JSON.txt']
config.JobType.sendPythonFolder = True
config.JobType.psetName = 'PSet.py'
config.JobType.scriptExe = 'rundata18C.sh'
config.JobType.allowUndistributedCMSSW = True

config.section_("Data")
config.Data.inputDataset = '/JetHT/Run2018C-UL2018_MiniAODv2_NanoAODv9-v1/NANOAOD'
config.Data.inputDBS = 'global'
#config.Data.inputDBS = 'phys03'
config.Data.splitting = 'LumiBased'
config.Data.unitsPerJob =80
#config.Data.splitting = 'Automatic'
#config.Data.unitsPerJob =450
config.Data.lumiMask = 'Cert_314472-325175_13TeV_Legacy2018_Collisions18_JSON.txt'
config.Data.totalUnits = -1
config.Data.publication = False
name = '18'
steam_dir = 'xulyu/yuzhe_new'
config.Data.outLFNDirBase = '/store/group/phys_b2g/' + steam_dir + '/' + name + '/'
# This string is used to construct the output dataset name
config.Data.outputDatasetTag = 'data18C'

config.section_("Site")
# Where the output files will be transmitted to
config.Site.storageSite = 'T2_CH_CERN'

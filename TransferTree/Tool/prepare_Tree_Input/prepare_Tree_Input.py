import ROOT

def Read_NEvents( Path, InputFile ):
    NEvents = {}
    for BKG in InputFile:
        filein =ROOT.TFile(Path+InputFile[BKG])
        NEvents[BKG] = float(filein.Get("Wgt__h_nevents").GetBinContent(1))
    for i in NEvents:
        print '"%s":%s,'%(i,NEvents[i])
    return NEvents

InputFile = {
    "QCD_HT1000to1500": "QCD_HT1000to1500_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8.root",
    "QCD_HT1500to2000": "QCD_HT1500to2000_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8.root",
    "QCD_HT2000toInf": "QCD_HT2000toInf_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8.root",
    "ST_s": "ST_s-channel_4f_leptonDecays_TuneCP5_13TeV-amcatnlo-pythia8.root",
    "ST_t_channel_antitop": "ST_t-channel_antitop_5f_InclusiveDecays_TuneCP5_13TeV-powheg-pythia8.root",
    "ST_t_channel_top": "ST_t-channel_top_5f_InclusiveDecays_TuneCP5_13TeV-powheg-pythia8.root",
    "ST_tW_antitop": "ST_tW_antitop_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8.root",
    "ST_tW_top": "ST_tW_top_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8.root",
    "TTTo2L2Nu": "TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8.root",
    "TTToSemiLeptonic": "TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8.root",
    "TTWJetsToLNu": "TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8.root",
    "TTWJetsToQQ": "TTWJetsToQQ_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8.root",
    "TTZToLLNuNu": "TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8.root",
    "TTZToQQ": "TTZToQQ_TuneCP5_13TeV-amcatnlo-pythia8.root",
    "WJetsToLNu_HT_100To200": "WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8.root",
    "WJetsToLNu_HT_1200To2500": "WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8.root",
    "WJetsToLNu_HT_200To400": "WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8.root",
    "WJetsToLNu_HT_2500ToInf": "WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8.root",
    "WJetsToLNu_HT_400To600": "WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8.root",
    "WJetsToLNu_HT_600To800": "WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8.root",
    "WJetsToLNu_HT_800To1200": "WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8.root",
    "WW": "WW_TuneCP5_13TeV-pythia8.root",
    "WWW": "WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8.root",
    "WWZ": "WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8.root",
    "WZ": "WZ_TuneCP5_13TeV-pythia8.root",
    "WZZ": "WZZ_TuneCP5_13TeV-amcatnlo-pythia8.root",
    "ZZ": "ZZ_TuneCP5_13TeV-pythia8.root",
    "ZZZ": "ZZZ_TuneCP5_13TeV-amcatnlo-pythia8.root",
}
Path = "/eos/user/y/yusong/qilong/EFT/Merged/VVV_10_6_MERGED/"

Read_NEvents( Path, InputFile )
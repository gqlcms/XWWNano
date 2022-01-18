import json

class Info():
    def __init__(self, Label, jobs, year, **kwargs):
        self.Nevents_all = {
            "QCD_HT1000to1500": "24629083.0", 
            "QCD_HT1500to2000": "12773454.0", 
            "QCD_HT2000toInf": "8544438.0", 
            "ST_t-channel_antitop": "54822818.0", 
            "ST_t-channel_top": "108974702.0", 
            "ST_tW_antitop": "4643114.0", 
            "ST_tW_top": "4703746.0", 
            "TTToHadronic": "188882398.0", 
            "TTToSemiLeptonic": "249627405.0", 
            "WJetsToQQ_HT-800toInf": "14225713.0", 
            "WW": "30714000.0", 
            "WWW": "126738.0", 
            "WWZ": "133012.0", 
            "WZ": "15040000.0", 
            "WZZ": "269552.0", 
            "ZJetsToQQ_HT-800toInf": "4388402.0", 
            "ZZ": "2433000.0", 
            "ZZZ": "124612.0"
        }
        self.Nevents_all_signal = {
            "gKK_2000_1000":"50000",
            "gKK_2000_200":"50000",
            "gKK_2500_250":"50000",
        }
        self.Nevents_all.update(self.Nevents_all_signal)


        self.sampleXS_all = { 
            "QCD_HT1000to1500": "1207000.0", 
            "QCD_HT1500to2000": "119900.0", 
            "QCD_HT2000toInf": "25240.0", 
            "ST_t-channel_antitop": "80950.0", 
            "ST_t-channel_top": "136020.0", 
            "ST_tW_antitop": "35600", 
            "ST_tW_top": "35600", 
            "TTToHadronic": "380094", 
            "TTToSemiLeptonic": "364350.8", 
            "ZJetsToQQ_HT-800toInf": "14600", 
            "WJetsToQQ_HT-800toInf": "33700", 
            "WW": "64300.", 
            "WZ": "47130.", 
            "ZZ": "16523.", 
            "WWW": "0.1", 
            "WWZ": "0.1", 
            "WZZ": "269552.0", 
            "ZZZ": "124612.0",
            "gKK_2000_1000":"3",
            "gKK_2000_200":"10",
            "gKK_2500_250":"5",
        }

        self.channel = "mu"
        if Label in self.Nevents_all.keys():
            self.IsData = 1
            files_json = "/eos/user/q/qiguo/gKK/transfertree/UL/2016/MC/BKG/V1/config/Files.json"
        else:
            files_json = "/home/pku/guoql/gKK/TransferTree/V1/RUN/2016/data/2022_1_16/Files_Data.json"
            self.IsData = 0

        with open(files_json, "r") as f:
            self.files = json.load(f)

        self.year = year

        if self.year == "2016":
            self.LUMI = 36.8
        if self.year == "2017":
            self.LUMI = 41.5

        self.Nevents    = self.Nevents_all[Label] if Label in self.Nevents_all else self.LUMI
        self.sampleXS   = self.sampleXS_all[Label] if Label in self.sampleXS_all else "1."
        self.inputfile  = self.files[Label][jobs]["infile"]  if Label in self.files else None
        self.outputfile = self.files[Label][jobs]["outfile"] if Label in self.files else None
        




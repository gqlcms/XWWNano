self.PlotPath = "/eos/user/q/qiguo/www/VVV/plots/plots/Test/"
logy = 0
selection = " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40"
# selection = " abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 "
self.Intime_Add_Variables = [
    "weight", "weight_data", 
    "ST", "MJJlv", "HT",
]

# self.construct_plot(Nj,"Lep1fatJet2_FatJet_msoftdrop"   ,selection         ,"",tag  ,20,0,200, "Mj_{PT1}"                         ,"Events" ,logy,CR);

# self.construct_plot(Nj,"Lep1fatJet2_FatJet_msoftdrop_2"   ,selection         ,"",tag  ,20,0,200, "Mj_{PT2}"                         ,"Events" ,logy,CR);

# self.construct_plot(Nj,"ST"   ,selection         ,"",tag  ,40,0,4000, "ST"                         ,"Events" ,logy,CR,Intime = True);

# self.construct_plot(Nj,"HT"   ,selection         ,"",tag  ,40,0,4000, "HT"                         ,"Events" ,logy,CR,Intime = True)

self.construct_plot(Nj,"MJJlv"   ,selection         ,"",tag  ,40,0,4000, "MJJl#nu"                         ,"Events" ,logy,CR,Intime = True)

self.construct_plot(Nj,"Lep1fatJet2_LeptonPt"   ,selection         ,"",tag  ,50,0,1000, "lepton pt"                         ,"Events" ,logy,CR)

self.construct_plot(Nj,"Lep1fatJet2_LeptonPt"   ,selection         ,"",tag  ,50,0,1000, "lepton pt"                         ,"Events" ,logy,CR)



self.PlotPath = "/eos/user/q/qiguo/www/VVV/plots/plots/CR/WJets/"
logy = 0
selection = " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40"
selection += " && "

self.Intime_Add_Variables = [
    "weight", "weight_data", 
    "ST", "MJJlv", "HT",
    "Lep1fatJet2_FatJet_particleNetMD_WvsQCD", "Lep1fatJet2_FatJet_tau21","Lep1fatJet2_FatJet_particleNetMD_WvsQCD_2","Lep1fatJet2_FatJet_tau21_2",
    "Lep1fatJet2_LeptonicWPt_2",
    "nb_l_deep_ex","nb_m_deep_ex","nb_t_deep_ex","nb_l_deep_in","nb_m_deep_in","nb_t_deep_in",
]
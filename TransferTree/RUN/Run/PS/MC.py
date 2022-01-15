self.PlotPath = "/eos/user/q/qiguo/www/VVV/plots/plots/PS/dataVsMC/"
options.REGION = "SR"
logy = 0
selection = " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40 && nb_m_deep_in == 0 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD > 0.506 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2 > 0.506"

self.Intime_Add_Variables = [
    "weight", "weight_data", 
    "ST", "MJJlv", "HT",
    "Lep1fatJet2_FatJet_particleNetMD_WvsQCD", "Lep1fatJet2_FatJet_tau21","Lep1fatJet2_FatJet_particleNetMD_WvsQCD_2","Lep1fatJet2_FatJet_tau21_2",
    "Lep1fatJet2_LeptonicWMt_2",
    "nb_l_deep_ex","nb_m_deep_ex","nb_t_deep_ex","nb_l_deep_in","nb_m_deep_in","nb_t_deep_in",
    # "matching","N_genw",
    # "FJ1_DR_W",
    "matching",
    # "matching","N_matching_W","N_matching_gq","N_matching_W_Wd",
    # "N_part","N_Part_W","N_Part_gq","N_Part_W_gq",
]

self.MODE = "DECO"
self.Only_Show_Component = False

self.DECO_Cut1 = {
    "W" : " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40 && nb_m_deep_in == 0 && matching[0] == 2 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD > 0.506 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2 > 0.506",
    "qg" : " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40 && nb_m_deep_in == 0 && matching[0] == 3 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD > 0.506 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2 > 0.506",
    "unmatching" : " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40 && nb_m_deep_in == 0 && ( matching[0] != 3 && matching[0] != 2 ) && Lep1fatJet2_FatJet_deepTagMD_WvsQCD > 0.506 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2 > 0.506",
}

self.DECO_Cut2 = {
    "W" : " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40 && nb_m_deep_in == 0 && matching[1] == 2 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD > 0.506 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2 > 0.506",
    "qg" : " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40 && nb_m_deep_in == 0 && matching[1] == 3 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD > 0.506 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2 > 0.506",
    "unmatching" : " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40 && nb_m_deep_in == 0 && ( matching[1] != 3 && matching[1] != 2 ) && Lep1fatJet2_FatJet_deepTagMD_WvsQCD > 0.506 && Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2 > 0.506",
}

if True:
    # ================== Event level ==================
    self.DECO_Cut = self.DECO_Cut1
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_msoftdrop"   ,selection         ,"",tag  ,26,40,300, "M_{SD}_{P_{T}1}"                         ,"Events" ,logy,CR)

    self.DECO_Cut = self.DECO_Cut2
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_msoftdrop_2"   ,selection         ,"",tag  ,26,40,300, "M_{SD}_{P_{T}2}"                         ,"Events" ,logy,CR)

    # ================== Event level ==================

self.Only_Show_Component = True
tag = "DECOM"
if True:
    self.DECO_Cut = self.DECO_Cut1
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_msoftdrop"   ,selection         ,"",tag  ,26,40,300, "M_{SD}_{P_{T}1}"                         ,"Events" ,logy,CR)

    self.DECO_Cut = self.DECO_Cut2
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_msoftdrop_2"   ,selection         ,"",tag  ,26,40,300, "M_{SD}_{P_{T}2}"                         ,"Events" ,logy,CR)
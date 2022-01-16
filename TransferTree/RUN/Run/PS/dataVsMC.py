self.PlotPath = "/eos/user/q/qiguo/www/VVV/plots/plots/PS/dataVsMC/"
options.REGION = "PS"
logy = 0
selection = " ( abs(Lep1fatJet2_LeptonPDGID) == 13 && Lep1fatJet2_HLT_IsoMu24 == 1 ) && Lep1fatJet2_LeptonPt > 30 && Lep1fatJet2_FatJet_pt > 200 && Lep1fatJet2_FatJet_pt_2 > 200 && Lep1fatJet2_FatJet_msoftdrop > 40 && Lep1fatJet2_FatJet_msoftdrop_2 > 40 && nb_m_deep_ex == 0"

self.Intime_Add_Variables = [
    "weight", "weight_data", 
    "ST", "MJJlv", "HT",
    "Lep1fatJet2_FatJet_particleNetMD_WvsQCD", "Lep1fatJet2_FatJet_tau21","Lep1fatJet2_FatJet_particleNetMD_WvsQCD_2","Lep1fatJet2_FatJet_tau21_2",
    "Lep1fatJet2_LeptonicWPt_2",
    "nb_l_deep_ex","nb_m_deep_ex","nb_t_deep_ex","nb_l_deep_in","nb_m_deep_in","nb_t_deep_in",
]

if True:
    # ================== Event level ==================
    # self.construct_plot(Nj,"ST"   ,selection         ,"",tag  ,40,0,4000, "ST"                         ,"Events" ,logy,CR,Intime = True);

    self.construct_plot(Nj,"HT"   ,selection         ,"",tag  ,40,0,4000, "HT"                         ,"Events" ,logy,CR,Intime = True)

    self.construct_plot(Nj,"MJJlv"   ,selection         ,"",tag  ,40,0,4000, "MJJl#nu"                         ,"Events" ,logy,CR,Intime = True)
    # ================== Event level ==================


if False:
    # ================== AK8 ==================
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_msoftdrop"   ,selection         ,"",tag  ,13,40,300, "M_{SD}_{P_{T}1}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_pt"   ,selection         ,"",tag  ,16,200,1000, "P_{_{T}1}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_eta"   ,selection         ,"",tag  ,24,-2.4,2.4, "#etaj_{P_{T}1}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_phi"   ,selection         ,"",tag  ,16,-3.2,3.2, "#Phi_{P_{T}1}"                         ,"Events" ,logy,CR)

    self.construct_plot(Nj,"Lep1fatJet2_FatJet_msoftdrop_2"   ,selection         ,"",tag  ,13,40,300, "M_{SD}_{P_{T}2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_pt_2"   ,selection         ,"",tag  ,16,200,1000, "P_{_{T}2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_eta_2"   ,selection         ,"",tag  ,24,-2.4,2.4, "#etaj_{P_{T}2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_phi_2"   ,selection         ,"",tag  ,16,-3.2,3.2, "#Phi_{P_{T}2}"                         ,"Events" ,logy,CR)


if False:
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_deepTagMD_TvsQCD"   ,selection         ,"",tag  ,20,0.,1., "deepAK8 TvsQCD_{MD}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_deepTagMD_WvsQCD"   ,selection         ,"",tag  ,20,0.,1., "deepAK8 WvsQCD_{MD}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_deepTag_TvsQCD"   ,selection         ,"",tag  ,20,0.,1., "deepAK8 TvsQCD"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_deepTag_WvsQCD"   ,selection         ,"",tag  ,20,0.,1., "deepAK8 WvsQCD"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_particleNet_TvsQCD"   ,selection         ,"",tag  ,20,0.,1., "particleNet TvsQCD"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_particleNet_WvsQCD"   ,selection         ,"",tag  ,20,0.,1., "particleNet WvsQCD"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_particleNetMD_WvsQCD"   ,selection         ,"",tag  ,20,0.,1., "particleNet WvsQCD_{MD}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_tau21"   ,selection         ,"",tag  ,20,0.,1., "#tau_{21}"                         ,"Events" ,logy,CR)

    self.construct_plot(Nj,"Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2"   ,selection         ,"",tag  ,20,0.,1., "deepAK8 TvsQCD_{MD} P_{T2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2"   ,selection         ,"",tag  ,20,0.,1., "deepAK8 WvsQCD_{MD} P_{T2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_deepTag_TvsQCD_2"   ,selection         ,"",tag  ,20,0.,1., "deepAK8 TvsQCD P_{T2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_deepTag_WvsQCD_2"   ,selection         ,"",tag  ,20,0.,1., "deepAK8 WvsQCD P_{T2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_particleNet_TvsQCD_2"   ,selection         ,"",tag  ,20,0.,1., "particleNet TvsQCD P_{T2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_particleNet_WvsQCD_2"   ,selection         ,"",tag  ,20,0.,1., "particleNet WvsQCD P_{T2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_particleNetMD_WvsQCD_2"   ,selection         ,"",tag  ,20,0.,1., "particleNet WvsQCD_{MD} P_{T2}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_FatJet_tau21_2"   ,selection         ,"",tag  ,20,0.,1., "#tau_{21} P_{T2}"                         ,"Events" ,logy,CR)

    # ================== AK8 ==================


# ================== leptonic W ===============
if False:
    self.construct_plot(Nj,"Lep1fatJet2_LeptonicWPt"   ,selection         ,"",tag  ,10,0.,500., "W_{Leptonic} P_{T}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_LeptonicWEta"   ,selection         ,"",tag  ,24,-2.4,2.4, "W_{Leptonic} #eta"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_LeptonicWPhi"   ,selection         ,"",tag  ,32,-3.2,3.2, "W_{Leptonic} #Phi"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_LeptonicWM"   ,selection         ,"",tag  ,16,80.,480., "W_{Leptonic} Mass"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_LeptonicWMt"   ,selection         ,"",tag  ,16,80.,480., "W_{Leptonic} M_{T}"                         ,"Events" ,logy,CR)

if False:
    self.construct_plot(Nj,"Lep1fatJet2_LeptonicWMt_2"   ,selection         ,"",tag  ,15,0.,300., "W_{Leptonic} M_{T}"                         ,"Events" ,logy,CR)
# ================== leptonic W ===============

# ================ lepton,MET ===============
if False:
    self.construct_plot(Nj,"Lep1fatJet2_MET_pt"   ,selection         ,"",tag  ,20,0.,400., "MET"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_MET_phi"   ,selection         ,"",tag  ,16,-3.2,3.2, "MET #Phi"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_LeptonPt"   ,selection         ,"",tag  ,20,20.,820., "lep P_{T}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_LeptonEta"   ,selection         ,"",tag  ,24,-2.4,2.4, "lep #eta"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_LeptonPhi"   ,selection         ,"",tag  ,32,-3.2,3.2, "lep #Phi"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"Lep1fatJet2_LeptonE"   ,selection         ,"",tag  ,20,20.,820., "lep E"                         ,"Events" ,logy,CR)
# ================ lepton,MET ===============


# ================ bjets ===============
if False:
    self.construct_plot(Nj,"nb_l_deep_ex"   ,selection         ,"",tag  ,6,-0.5,5.5, "N exclusive bJets_{loose}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"nb_m_deep_ex"   ,selection         ,"",tag  ,6,-0.5,5.5, "N exclusive bJets_{medium}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"nb_t_deep_ex"   ,selection         ,"",tag  ,6,-0.5,5.5, "N exclusive bJets_{tight}"                         ,"Events" ,logy,CR)

    self.construct_plot(Nj,"nb_l_deep_in"   ,selection         ,"",tag  ,6,-0.5,5.5, "N inclusive bJets_{loose}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"nb_m_deep_in"   ,selection         ,"",tag  ,6,-0.5,5.5, "N inclusive bJets_{medium}"                         ,"Events" ,logy,CR)
    self.construct_plot(Nj,"nb_t_deep_in"   ,selection         ,"",tag  ,6,-0.5,5.5, "N inclusive bJets_{tight}"                         ,"Events" ,logy,CR)

# ================ bjets ===============

    # self.construct_plot(Nj,"$1"   ,selection         ,"",tag  ,20,0.,1., "$1"                         ,"Events" ,logy,CR)



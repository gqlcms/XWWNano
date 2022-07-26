#ifndef _outputBranches__GKK_0Lepton_
#define _outputBranches__GKK_0Lepton_

void EDBR2PKUTree::OutputBranches_GKK_0Lepton() {
   if (IsData > 0){
      ExTree->Branch("matchingt_a", &matchingt_a, "matchingt_a/I");
      ExTree->Branch("matchingW_a", &matchingW_a, "matchingW_a/I");
      ExTree->Branch("matchingg_a", &matchingg_a, "matchingg_a/I");
      ExTree->Branch("matchingZ_a", &matchingZ_a, "matchingZ_a/I");
      ExTree->Branch("matchingu_a", &matchingu_a, "matchingu_a/I");
      ExTree->Branch("matchingd_a", &matchingd_a, "matchingd_a/I");
      ExTree->Branch("matchings_a", &matchings_a, "matchings_a/I");
      ExTree->Branch("matchingc_a", &matchingc_a, "matchingc_a/I");
      ExTree->Branch("matchingg_first_a", &matchingg_first_a, "matchingg_first_a/I");
      ExTree->Branch("matchingu_first_a", &matchingu_first_a, "matchingu_first_a/I");
      ExTree->Branch("matchingd_first_a", &matchingd_first_a, "matchingd_first_a/I");
      ExTree->Branch("matchings_first_a", &matchings_first_a, "matchings_first_a/I");
      ExTree->Branch("matchingc_first_a", &matchingc_first_a, "matchingc_first_a/I");
      ExTree->Branch("matchingqg_first_a", &matchingqg_first_a, "matchingqg_first_a/I");
      ExTree->Branch("matchingt_first_a", &matchingt_first_a, "matchingt_first_a/I");

      ExTree->Branch("matchingt_b", &matchingt_b, "matchingt_b/I");
      ExTree->Branch("matchingW_b", &matchingW_b, "matchingW_b/I");
      ExTree->Branch("matchingg_b", &matchingg_b, "matchingg_b/I");
      ExTree->Branch("matchingZ_b", &matchingZ_b, "matchingZ_b/I");
      ExTree->Branch("matchingu_b", &matchingu_b, "matchingu_b/I");
      ExTree->Branch("matchingd_b", &matchingd_b, "matchingd_b/I");
      ExTree->Branch("matchings_b", &matchings_b, "matchings_b/I");
      ExTree->Branch("matchingc_b", &matchingc_b, "matchingc_b/I");
      ExTree->Branch("matchingg_first_b", &matchingg_first_b, "matchingg_first_b/I");
      ExTree->Branch("matchingu_first_b", &matchingu_first_b, "matchingu_first_b/I");
      ExTree->Branch("matchingd_first_b", &matchingd_first_b, "matchingd_first_b/I");
      ExTree->Branch("matchings_first_b", &matchings_first_b, "matchings_first_b/I");
      ExTree->Branch("matchingc_first_b", &matchingc_first_b, "matchingc_first_b/I");
      ExTree->Branch("matchingqg_first_b", &matchingqg_first_b, "matchingqg_first_b/I");
      ExTree->Branch("matchingt_first_b", &matchingt_first_b, "matchingt_first_b/I");

      ExTree->Branch("matchingt_c", &matchingt_c, "matchingt_c/I");
      ExTree->Branch("matchingW_c", &matchingW_c, "matchingW_c/I");
      ExTree->Branch("matchingg_c", &matchingg_c, "matchingg_c/I");
      ExTree->Branch("matchingZ_c", &matchingZ_c, "matchingZ_c/I");
      ExTree->Branch("matchingu_c", &matchingu_c, "matchingu_c/I");
      ExTree->Branch("matchingd_c", &matchingd_c, "matchingd_c/I");
      ExTree->Branch("matchings_c", &matchings_c, "matchings_c/I");
      ExTree->Branch("matchingc_c", &matchingc_c, "matchingc_c/I");
      ExTree->Branch("matchingg_first_c", &matchingg_first_c, "matchingg_first_c/I");
      ExTree->Branch("matchingu_first_c", &matchingu_first_c, "matchingu_first_c/I");
      ExTree->Branch("matchingd_first_c", &matchingd_first_c, "matchingd_first_c/I");
      ExTree->Branch("matchings_first_c", &matchings_first_c, "matchings_first_c/I");
      ExTree->Branch("matchingc_first_c", &matchingc_first_c, "matchingc_first_c/I");
      ExTree->Branch("matchingqg_first_c", &matchingqg_first_c, "matchingqg_first_c/I");
      ExTree->Branch("matchingt_first_c", &matchingt_first_c, "matchingt_first_c/I");



      ExTree->Branch("R4q_max", &R4q_max, "R4q_max/I");
      ExTree->Branch("R3q_max", &R3q_max, "R3q_max/I");
      ExTree->Branch("R2q_max", &R2q_max, "R2q_max/I");
      ExTree->Branch("Rlqq_max", &Rlqq_max, "Rlqq_max/I");
      ExTree->Branch("Rlq_max", &Rlq_max, "Rlq_max/I");
      ExTree->Branch("w_max", &w_max, "w_max/I");
      ExTree->Branch("u_max", &u_max, "u_max/I");
      ExTree->Branch("R4q_min", &R4q_min, "R4q_min/I");
      ExTree->Branch("R3q_min", &R3q_min, "R3q_min/I");
      ExTree->Branch("R2q_min", &R2q_min, "R2q_min/I");
      ExTree->Branch("Rlqq_min", &Rlqq_min, "Rlqq_min/I");
      ExTree->Branch("Rlq_min", &Rlq_min, "Rlq_min/I");
      ExTree->Branch("w_min", &w_min, "w_min/I");
      ExTree->Branch("u_min", &u_min, "u_min/I");
      ExTree->Branch("gKK_g_max", &gKK_g_max, "gKK_g_max/I");
      ExTree->Branch("gKK_g_min", &gKK_g_min, "gKK_g_min/I");
      ExTree->Branch("R3q_taudecay_max", &R3q_taudecay_max, "R3q_taudecay_max/I");
      ExTree->Branch("R2q_qq_taudecay_max", &R2q_qq_taudecay_max, "R2q_qq_taudecay_max/I");
      ExTree->Branch("R2q_qtau_taudecay_max", &R2q_qtau_taudecay_max, "R2q_qtau_taudecay_max/I");
      ExTree->Branch("R2q_tautau_taudecay_max", &R2q_tautau_taudecay_max, "R2q_tautau_taudecay_max/I");
      ExTree->Branch("Rlqq_emu_taudecay_max", &Rlqq_emu_taudecay_max, "Rlqq_emu_taudecay_max/I");
      ExTree->Branch("Rlqq_tau_taudecay_max", &Rlqq_tau_taudecay_max, "Rlqq_tau_taudecay_max/I");
      ExTree->Branch("Rlq_taudecay_max", &Rlq_taudecay_max, "Rlq_taudecay_max/I");
      ExTree->Branch("w_taudecay_max", &w_taudecay_max, "w_taudecay_max/I");
      ExTree->Branch("u_taudecay_max", &u_taudecay_max, "u_taudecay_max/I");
      ExTree->Branch("R3q_taudecay_min", &R3q_taudecay_min, "R3q_taudecay_min/I");
      ExTree->Branch("R2q_qq_taudecay_min", &R2q_qq_taudecay_min, "R2q_qq_taudecay_min/I");
      ExTree->Branch("R2q_qtau_taudecay_min", &R2q_qtau_taudecay_min, "R2q_qtau_taudecay_min/I");
      ExTree->Branch("R2q_tautau_taudecay_min", &R2q_tautau_taudecay_min, "R2q_tautau_taudecay_min/I");
      ExTree->Branch("Rlqq_emu_taudecay_min", &Rlqq_emu_taudecay_min, "Rlqq_emu_taudecay_min/I");
      ExTree->Branch("Rlqq_tau_taudecay_min", &Rlqq_tau_taudecay_min, "Rlqq_tau_taudecay_min/I");
      ExTree->Branch("Rlq_taudecay_min", &Rlq_taudecay_min, "Rlq_taudecay_min/I");
      ExTree->Branch("w_taudecay_min", &w_taudecay_min, "w_taudecay_min/I");
      ExTree->Branch("u_taudecay_min", &u_taudecay_min, "u_taudecay_min/I");
      ExTree->Branch("R3q_tauhad_max", &R3q_tauhad_max, "R3q_tauhad_max/I");
      ExTree->Branch("R2q_qtau_tauhad_max", &R2q_qtau_tauhad_max, "R2q_qtau_tauhad_max/I");
      ExTree->Branch("R2q_tautau_tauhad_max", &R2q_tautau_tauhad_max, "R2q_tautau_tauhad_max/I");
      ExTree->Branch("Rlqq_emu_tauhad_max", &Rlqq_emu_tauhad_max, "Rlqq_emu_tauhad_max/I");
      ExTree->Branch("Rlq_tauhad_max", &Rlq_tauhad_max, "Rlq_tauhad_max/I");
      ExTree->Branch("w_tauhad_max", &w_tauhad_max, "w_tauhad_max/I");
      ExTree->Branch("u_tauhad_max", &u_tauhad_max, "u_tauhad_max/I");
      ExTree->Branch("R3q_tauhad_min", &R3q_tauhad_min, "R3q_tauhad_min/I");
      ExTree->Branch("R2q_qtau_tauhad_min", &R2q_qtau_tauhad_min, "R2q_qtau_tauhad_min/I");
      ExTree->Branch("R2q_tautau_tauhad_min", &R2q_tautau_tauhad_min, "R2q_tautau_tauhad_min/I");
      ExTree->Branch("Rlqq_emu_tauhad_min", &Rlqq_emu_tauhad_min, "Rlqq_emu_tauhad_min/I");
      ExTree->Branch("Rlq_tauhad_min", &Rlq_tauhad_min, "Rlq_tauhad_min/I");
      ExTree->Branch("w_tauhad_min", &w_tauhad_min, "w_tauhad_min/I");
      ExTree->Branch("u_tauhad_min", &u_tauhad_min, "u_tauhad_min/I");
      ExTree->Branch("R3q_td_max", &R3q_td_max, "R3q_td_max/I");
      ExTree->Branch("rest_td_max", &rest_td_max, "rest_td_max/I");
      ExTree->Branch("R2q_Rlqq_td_max", &R2q_Rlqq_td_max, "R2q_Rlqq_td_max/I");
      ExTree->Branch("R3q_td_min", &R3q_td_min, "R3q_td_min/I");
      ExTree->Branch("rest_td_min", &rest_td_min, "rest_td_min/I");
      ExTree->Branch("R2q_Rlqq_td_min", &R2q_Rlqq_td_min, "R2q_Rlqq_td_min/I");
      ExTree->Branch("R4q_mid", &R4q_mid, "R4q_mid/I");
      ExTree->Branch("R3q_mid", &R3q_mid, "R3q_mid/I");
      ExTree->Branch("R2q_mid", &R2q_mid, "R2q_mid/I");
      ExTree->Branch("Rlqq_mid", &Rlqq_mid, "Rlqq_mid/I");
      ExTree->Branch("Rlq_mid", &Rlq_mid, "Rlq_mid/I");
      ExTree->Branch("w_mid", &w_mid, "w_mid/I");
      ExTree->Branch("u_mid", &u_mid, "u_mid/I");
      ExTree->Branch("gKK_g_mid", &gKK_g_mid, "gKK_g_mid/I");
      ExTree->Branch("R3q_taudecay_mid", &R3q_taudecay_mid, "R3q_taudecay_mid/I");
      ExTree->Branch("R2q_qq_taudecay_mid", &R2q_qq_taudecay_mid, "R2q_qq_taudecay_mid/I");
      ExTree->Branch("R2q_qtau_taudecay_mid", &R2q_qtau_taudecay_mid, "R2q_qtau_taudecay_mid/I");
      ExTree->Branch("R2q_tautau_taudecay_mid", &R2q_tautau_taudecay_mid, "R2q_tautau_taudecay_mid/I");
      ExTree->Branch("Rlqq_emu_taudecay_mid", &Rlqq_emu_taudecay_mid, "Rlqq_emu_taudecay_mid/I");
      ExTree->Branch("Rlqq_tau_taudecay_mid", &Rlqq_tau_taudecay_mid, "Rlqq_tau_taudecay_mid/I");
      ExTree->Branch("Rlq_taudecay_mid", &Rlq_taudecay_mid, "Rlq_taudecay_mid/I");
      ExTree->Branch("w_taudecay_mid", &w_taudecay_mid, "w_taudecay_mid/I");
      ExTree->Branch("u_taudecay_mid", &u_taudecay_mid, "u_taudecay_mid/I");
      ExTree->Branch("R3q_tauhad_mid", &R3q_tauhad_mid, "R3q_tauhad_mid/I");
      ExTree->Branch("R2q_qtau_tauhad_mid", &R2q_qtau_tauhad_mid, "R2q_qtau_tauhad_mid/I");
      ExTree->Branch("R2q_tautau_tauhad_mid", &R2q_tautau_tauhad_mid, "R2q_tautau_tauhad_mid/I");
      ExTree->Branch("Rlqq_emu_tauhad_mid", &Rlqq_emu_tauhad_mid, "Rlqq_emu_tauhad_mid/I");
      ExTree->Branch("Rlq_tauhad_mid", &Rlq_tauhad_mid, "Rlq_tauhad_mid/I");
      ExTree->Branch("w_tauhad_mid", &w_tauhad_mid, "w_tauhad_mid/I");
      ExTree->Branch("u_tauhad_mid", &u_tauhad_mid, "u_tauhad_mid/I");
      ExTree->Branch("R3q_td_mid", &R3q_td_mid, "R3q_td_mid/I");
      ExTree->Branch("rest_td_mid", &rest_td_mid, "rest_td_mid/I");
      ExTree->Branch("R2q_Rlqq_td_mid", &R2q_Rlqq_td_mid, "R2q_Rlqq_td_mid/I");


      ExTree->Branch("gen_gKK_g_pt_f",&gen_gKK_g_pt_f,"gen_gKK_g_pt_f/F");
      ExTree->Branch("gen_gKK_g_eta_f",&gen_gKK_g_eta_f,"gen_gKK_g_eta_f/F");
      ExTree->Branch("gen_gKK_g_phi_f",&gen_gKK_g_phi_f,"gen_gKK_g_phi_f/F");
      ExTree->Branch("gen_gKK_g_mass_f",&gen_gKK_g_mass_f,"gen_gKK_g_mass_f/F");

      ExTree->Branch("gen_tau_decay_2",&gen_tau_decay_2,"gen_tau_decay_2/I");
      ExTree->Branch("gen_tau_decay_3",&gen_tau_decay_3,"gen_tau_decay_3/I");

      ExTree->Branch("z_max",&z_max,"z_max/I");
      ExTree->Branch("t_max",&t_max,"t_max/I");
      ExTree->Branch("t_max_tag",&t_max_tag,"t_max_tag/I");
      ExTree->Branch("w_max",&w_max,"w_max/I");
      ExTree->Branch("g_max",&g_max,"g_max/I");
      ExTree->Branch("q_max",&q_max,"q_max/I");
      ExTree->Branch("u_max",&u_max,"u_max/I");
      ExTree->Branch("z_mid",&z_mid,"z_mid/I");
      ExTree->Branch("t_mid",&t_mid,"t_mid/I");
      ExTree->Branch("t_mid_tag",&t_mid_tag,"t_mid_tag/I");
      ExTree->Branch("w_mid",&w_mid,"w_mid/I");
      ExTree->Branch("g_mid",&g_mid,"g_mid/I");
      ExTree->Branch("q_mid",&q_mid,"q_mid/I");
      ExTree->Branch("u_mid",&u_mid,"u_mid/I");
      ExTree->Branch("z_min",&z_min,"z_min/I");
      ExTree->Branch("t_min",&t_min,"t_min/I");
      ExTree->Branch("t_min_tag",&t_min_tag,"t_min_tag/I");
      ExTree->Branch("w_min",&w_min,"w_min/I");
      ExTree->Branch("g_min",&g_min,"g_min/I");
      ExTree->Branch("q_min",&q_min,"q_min/I");
      ExTree->Branch("u_min",&u_min,"u_min/I");
      ExTree->Branch("z_4",&z_4,"z_4/I");
      ExTree->Branch("t_4",&t_4,"t_4/I");
      ExTree->Branch("t_4_tag",&t_4_tag,"t_4_tag/I");
      ExTree->Branch("w_4",&w_4,"w_4/I");
      ExTree->Branch("g_4",&g_4,"g_4/I");
      ExTree->Branch("q_4",&q_4,"q_4/I");
      ExTree->Branch("u_4",&u_4,"u_4/I");

      ExTree->Branch("t34_max_tag",&t34_max_tag,"t34_max_tag/I");
      ExTree->Branch("t34_mid_tag",&t34_mid_tag,"t34_mid_tag/I");
      ExTree->Branch("t34_min_tag",&t34_min_tag,"t34_min_tag/I");
      ExTree->Branch("t34_4_tag",&t34_4_tag,"t34_4_tag/I");

      ExTree->Branch("R4q_a",&R4q_a,"R4q_a/I");
      ExTree->Branch("R4q_b",&R4q_b,"R4q_b/I");
      ExTree->Branch("R4q_c",&R4q_c,"R4q_c/I");
      ExTree->Branch("R3q_a",&R3q_a,"R3q_a/I");
      ExTree->Branch("R3q_b",&R3q_b,"R3q_b/I");
      ExTree->Branch("R3q_c",&R3q_c,"R3q_c/I");
      ExTree->Branch("R2q_a",&R2q_a,"R2q_a/I");
      ExTree->Branch("R2q_b",&R2q_b,"R2q_b/I");
      ExTree->Branch("R2q_c",&R2q_c,"R2q_c/I");
      ExTree->Branch("w_a",&w_a,"w_a/I");
      ExTree->Branch("w_b",&w_b,"w_b/I");
      ExTree->Branch("w_c",&w_c,"w_c/I");
      ExTree->Branch("z_a",&z_a,"z_a/I");
      ExTree->Branch("z_b",&z_b,"z_b/I");
      ExTree->Branch("z_c",&z_c,"z_c/I");
      ExTree->Branch("Rlqq_a",&Rlqq_a,"Rlqq_a/I");
      ExTree->Branch("Rlqq_b",&Rlqq_b,"Rlqq_b/I");
      ExTree->Branch("Rlqq_c",&Rlqq_c,"Rlqq_c/I");
      ExTree->Branch("Rlq_a",&Rlq_a,"Rlq_a/I");
      ExTree->Branch("Rlq_b",&Rlq_b,"Rlq_b/I");
      ExTree->Branch("Rlq_c",&Rlq_c,"Rlq_c/I");
      ExTree->Branch("gKK_g_a",&gKK_g_a,"gKK_g_a/I");
      ExTree->Branch("gKK_g_b",&gKK_g_b,"gKK_g_b/I");
      ExTree->Branch("gKK_g_c",&gKK_g_c,"gKK_g_c/I");
      ExTree->Branch("u_a",&u_a,"u_a/I");
      ExTree->Branch("u_b",&u_b,"u_b/I");
      ExTree->Branch("u_c",&u_c,"u_c/I");
      ExTree->Branch("R3q_taudecay_a",&R3q_taudecay_a,"R3q_taudecay_a/I");
      ExTree->Branch("R3q_taudecay_b",&R3q_taudecay_b,"R3q_taudecay_b/I");
      ExTree->Branch("R3q_taudecay_c",&R3q_taudecay_c,"R3q_taudecay_c/I");
   }

   ExTree->Branch("goodRun", &goodRun, "goodRun/b");
   ExTree->Branch("Flag", &Flag, "Flag/b");

   ExTree->Branch("MET_eta", &MET_eta, "MET_eta/F");
   ExTree->Branch("MET_et", &MET_et, "MET_et/F");


   ExTree->Branch("Mj",&Mj,"Mj/F");
   ExTree->Branch("Mj_2",&Mj_2,"Mj_2/F");
   ExTree->Branch("Mj_3",&Mj_3,"Mj_3/F");
   ExTree->Branch("Mj_4",&Mj_4,"Mj_4/F");

   ExTree->Branch("FatJet_particleNetMD_QCD_1",&FatJet_particleNetMD_QCD_1,"FatJet_particleNetMD_QCD_1/F");
   ExTree->Branch("FatJet_particleNetMD_QCD_2",&FatJet_particleNetMD_QCD_2,"FatJet_particleNetMD_QCD_2/F");
   ExTree->Branch("FatJet_particleNetMD_QCD_3",&FatJet_particleNetMD_QCD_3,"FatJet_particleNetMD_QCD_3/F");
      
   ExTree->Branch("FatJet_particleNetMD_Xbb_1",&FatJet_particleNetMD_Xbb_1,"FatJet_particleNetMD_Xbb_1/F");
   ExTree->Branch("FatJet_particleNetMD_Xbb_2",&FatJet_particleNetMD_Xbb_2,"FatJet_particleNetMD_Xbb_2/F");
   ExTree->Branch("FatJet_particleNetMD_Xbb_3",&FatJet_particleNetMD_Xbb_3,"FatJet_particleNetMD_Xbb_3/F");
      
   ExTree->Branch("FatJet_particleNetMD_Xcc_1",&FatJet_particleNetMD_Xcc_1,"FatJet_particleNetMD_Xcc_1/F");
   ExTree->Branch("FatJet_particleNetMD_Xcc_2",&FatJet_particleNetMD_Xcc_2,"FatJet_particleNetMD_Xcc_2/F");
   ExTree->Branch("FatJet_particleNetMD_Xcc_3",&FatJet_particleNetMD_Xcc_3,"FatJet_particleNetMD_Xcc_3/F");
      
   ExTree->Branch("FatJet_particleNetMD_Xqq_1",&FatJet_particleNetMD_Xqq_1,"FatJet_particleNetMD_Xqq_1/F");
   ExTree->Branch("FatJet_particleNetMD_Xqq_2",&FatJet_particleNetMD_Xqq_2,"FatJet_particleNetMD_Xqq_2/F");
   ExTree->Branch("FatJet_particleNetMD_Xqq_3",&FatJet_particleNetMD_Xqq_3,"FatJet_particleNetMD_Xqq_3/F");
      
   ExTree->Branch("FatJet_particleNet_H4qvsQCD_1",&FatJet_particleNet_H4qvsQCD_1,"FatJet_particleNet_H4qvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_H4qvsQCD_2",&FatJet_particleNet_H4qvsQCD_2,"FatJet_particleNet_H4qvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_H4qvsQCD_3",&FatJet_particleNet_H4qvsQCD_3,"FatJet_particleNet_H4qvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_HbbvsQCD_1",&FatJet_particleNet_HbbvsQCD_1,"FatJet_particleNet_HbbvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_HbbvsQCD_2",&FatJet_particleNet_HbbvsQCD_2,"FatJet_particleNet_HbbvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_HbbvsQCD_3",&FatJet_particleNet_HbbvsQCD_3,"FatJet_particleNet_HbbvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_HccvsQCD_1",&FatJet_particleNet_HccvsQCD_1,"FatJet_particleNet_HccvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_HccvsQCD_2",&FatJet_particleNet_HccvsQCD_2,"FatJet_particleNet_HccvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_HccvsQCD_3",&FatJet_particleNet_HccvsQCD_3,"FatJet_particleNet_HccvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_QCD_1",&FatJet_particleNet_QCD_1,"FatJet_particleNet_QCD_1/F");
   ExTree->Branch("FatJet_particleNet_QCD_2",&FatJet_particleNet_QCD_2,"FatJet_particleNet_QCD_2/F");
   ExTree->Branch("FatJet_particleNet_QCD_3",&FatJet_particleNet_QCD_3,"FatJet_particleNet_QCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_TvsQCD_1",&FatJet_particleNet_TvsQCD_1,"FatJet_particleNet_TvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_TvsQCD_2",&FatJet_particleNet_TvsQCD_2,"FatJet_particleNet_TvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_TvsQCD_3",&FatJet_particleNet_TvsQCD_3,"FatJet_particleNet_TvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_WvsQCD_1",&FatJet_particleNet_WvsQCD_1,"FatJet_particleNet_WvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_WvsQCD_2",&FatJet_particleNet_WvsQCD_2,"FatJet_particleNet_WvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_WvsQCD_3",&FatJet_particleNet_WvsQCD_3,"FatJet_particleNet_WvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_ZvsQCD_1",&FatJet_particleNet_ZvsQCD_1,"FatJet_particleNet_ZvsQCD_1/F");
   ExTree->Branch("FatJet_particleNet_ZvsQCD_2",&FatJet_particleNet_ZvsQCD_2,"FatJet_particleNet_ZvsQCD_2/F");
   ExTree->Branch("FatJet_particleNet_ZvsQCD_3",&FatJet_particleNet_ZvsQCD_3,"FatJet_particleNet_ZvsQCD_3/F");
      
   ExTree->Branch("FatJet_particleNet_mass_1",&FatJet_particleNet_mass_1,"FatJet_particleNet_mass_1/F");
   ExTree->Branch("FatJet_particleNet_mass_2",&FatJet_particleNet_mass_2,"FatJet_particleNet_mass_2/F");
   ExTree->Branch("FatJet_particleNet_mass_3",&FatJet_particleNet_mass_3,"FatJet_particleNet_mass_3/F");

   ExTree->Branch("PartNet_MD_W_a",&PartNet_MD_W_a,"PartNet_MD_W_a/F");
   ExTree->Branch("PartNet_MD_W_b",&PartNet_MD_W_b,"PartNet_MD_W_b/F");
   ExTree->Branch("PartNet_MD_W_c",&PartNet_MD_W_c,"PartNet_MD_W_c/F");

   ExTree->Branch("FatJet_tau1_a",&FatJet_tau1_a,"FatJet_tau1_a/F");
   ExTree->Branch("FatJet_tau1_b",&FatJet_tau1_b,"FatJet_tau1_b/F");
   ExTree->Branch("FatJet_tau1_c",&FatJet_tau1_c,"FatJet_tau1_c/F");
   ExTree->Branch("FatJet_tau2_a",&FatJet_tau2_a,"FatJet_tau2_a/F");
   ExTree->Branch("FatJet_tau2_b",&FatJet_tau2_b,"FatJet_tau2_b/F");
   ExTree->Branch("FatJet_tau2_c",&FatJet_tau2_c,"FatJet_tau2_c/F");
   ExTree->Branch("FatJet_tau3_a",&FatJet_tau3_a,"FatJet_tau3_a/F");
   ExTree->Branch("FatJet_tau3_b",&FatJet_tau3_b,"FatJet_tau3_b/F");
   ExTree->Branch("FatJet_tau3_c",&FatJet_tau3_c,"FatJet_tau3_c/F");
   ExTree->Branch("FatJet_tau4_a",&FatJet_tau4_a,"FatJet_tau4_a/F");
   ExTree->Branch("FatJet_tau4_b",&FatJet_tau4_b,"FatJet_tau4_b/F");
   ExTree->Branch("FatJet_tau4_c",&FatJet_tau4_c,"FatJet_tau4_c/F");
      

   ExTree->Branch("num_ak4jetsex", &num_ak4jetsex, "num_ak4jetsex/I");
   ExTree->Branch("num_ak4jetsin", &num_ak4jetsin, "num_ak4jetsin/I");


   ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
   ExTree->Branch("pileupWeight", &pileupWeight, "pileupWeight/D");

      
   ExTree->Branch("MJJ", &MJJ, "MJJ/D");
      
   ExTree->Branch("event",&event,"event/L");
   ExTree->Branch("lumi",&ls,"lumi/I");
   ExTree->Branch("nPV",&nVtx,"nPV/I");

   ExTree->Branch("weight", &weight, "weight/D");
   
   ExTree->Branch("Mj_max",&Mj_max,"Mj_max/F");
   ExTree->Branch("Mj_mid",&Mj_mid,"Mj_mid/F");
   ExTree->Branch("Mj_min",&Mj_min,"Mj_min/F");
   ExTree->Branch("PTj_max",&PTj_max,"PTj_max/F");
   ExTree->Branch("PTj_mid",&PTj_mid,"PTj_mid/F");
   ExTree->Branch("PTj_min",&PTj_min,"PTj_min/F");
   

   ExTree->Branch("Etaj_max",&Etaj_max,"Etaj_max/F");
   ExTree->Branch("Etaj_mid",&Etaj_mid,"Etaj_mid/F");
   ExTree->Branch("Etaj_min",&Etaj_min,"Etaj_min/F");
   ExTree->Branch("Phij_max",&Phij_max,"Phij_max/F");
   ExTree->Branch("Phij_mid",&Phij_mid,"Phij_mid/F");
   ExTree->Branch("Phij_min",&Phij_min,"Phij_min/F");
   
   ExTree->Branch("PTj",&PTj,"PTj/F");
   ExTree->Branch("PTj_2",&PTj_2,"PTj_2/D");
   ExTree->Branch("PTj_3",&PTj_3,"PTj_3/D");
   ExTree->Branch("PTj_4",&PTj_4,"PTj_4/F");
   ExTree->Branch("Etaj",&Etaj,"Etaj/F");
   ExTree->Branch("Etaj_2",&Etaj_2,"Etaj_2/F");
   ExTree->Branch("Etaj_3",&Etaj_3,"Etaj_3/F");
   ExTree->Branch("Etaj_4",&Etaj_4,"Etaj_4/F");
   ExTree->Branch("Phij",&Phij,"Phij/F");
   ExTree->Branch("Phij_2",&Phij_2,"Phij_2/F");
   ExTree->Branch("Phij_4",&Phij_4,"Phij_4/F");
   ExTree->Branch("Phij_3",&Phij_3,"Phij_3/F");

   ExTree->Branch("ST",&ST,"ST/F");
   ExTree->Branch("HT",&HT,"HT/F");
   ExTree->Branch("Nj4",&Nj4,"Nj4/I");
   ExTree->Branch("Nj8",&Nj8,"Nj8/I");
   ExTree->Branch("MJJJ",&MJJJ,"MJJJ/F");

   ExTree->Branch("Nj4_ex",&Nj4_ex,"Nj4_ex/I");
   ExTree->Branch("Nj4_in",&Nj4_in,"Nj4_in/I");

   ExTree->Branch("MET_et",&MET_et,"MET_et/D");
   ExTree->Branch("MET_phi",&MET_phi,"MET_phi/F");

   ExTree->Branch("dnn_probTbcq_a",&dnn_probTbcq_a,"dnn_probTbcq_a/F");
   ExTree->Branch("dnn_probTbcq_b",&dnn_probTbcq_b,"dnn_probTbcq_b/F");
   ExTree->Branch("dnn_probTbcq_c",&dnn_probTbcq_c,"dnn_probTbcq_c/F");
   ExTree->Branch("dnn_probTbqq_a",&dnn_probTbqq_a,"dnn_probTbqq_a/F");
   ExTree->Branch("dnn_probTbqq_b",&dnn_probTbqq_b,"dnn_probTbqq_b/F");
   ExTree->Branch("dnn_probTbqq_c",&dnn_probTbqq_c,"dnn_probTbqq_c/F");
   ExTree->Branch("dnn_probTbc_a",&dnn_probTbc_a,"dnn_probTbc_a/F");
   ExTree->Branch("dnn_probTbc_b",&dnn_probTbc_b,"dnn_probTbc_b/F");
   ExTree->Branch("dnn_probTbc_c",&dnn_probTbc_c,"dnn_probTbc_c/F");
   ExTree->Branch("dnn_probTbq_a",&dnn_probTbq_a,"dnn_probTbq_a/F");
   ExTree->Branch("dnn_probTbq_b",&dnn_probTbq_b,"dnn_probTbq_b/F");
   ExTree->Branch("dnn_probTbq_c",&dnn_probTbq_c,"dnn_probTbq_c/F");
   ExTree->Branch("dnn_probWcq_a",&dnn_probWcq_a,"dnn_probWcq_a/F");
   ExTree->Branch("dnn_probWcq_b",&dnn_probWcq_b,"dnn_probWcq_b/F");
   ExTree->Branch("dnn_probWcq_c",&dnn_probWcq_c,"dnn_probWcq_c/F");
   ExTree->Branch("dnn_probWqq_a",&dnn_probWqq_a,"dnn_probWqq_a/F");
   ExTree->Branch("dnn_probWqq_b",&dnn_probWqq_b,"dnn_probWqq_b/F");
   ExTree->Branch("dnn_probWqq_c",&dnn_probWqq_c,"dnn_probWqq_c/F");
   ExTree->Branch("dnn_probZbb_a",&dnn_probZbb_a,"dnn_probZbb_a/F");
   ExTree->Branch("dnn_probZbb_b",&dnn_probZbb_b,"dnn_probZbb_b/F");
   ExTree->Branch("dnn_probZbb_c",&dnn_probZbb_c,"dnn_probZbb_c/F");
   ExTree->Branch("dnn_probZcc_a",&dnn_probZcc_a,"dnn_probZcc_a/F");
   ExTree->Branch("dnn_probZcc_b",&dnn_probZcc_b,"dnn_probZcc_b/F");
   ExTree->Branch("dnn_probZcc_c",&dnn_probZcc_c,"dnn_probZcc_c/F");
   ExTree->Branch("dnn_probZqq_a",&dnn_probZqq_a,"dnn_probZqq_a/F");
   ExTree->Branch("dnn_probZqq_b",&dnn_probZqq_b,"dnn_probZqq_b/F");
   ExTree->Branch("dnn_probZqq_c",&dnn_probZqq_c,"dnn_probZqq_c/F");
   ExTree->Branch("dnn_probHbb_a",&dnn_probHbb_a,"dnn_probHbb_a/F");
   ExTree->Branch("dnn_probHbb_b",&dnn_probHbb_b,"dnn_probHbb_b/F");
   ExTree->Branch("dnn_probHbb_c",&dnn_probHbb_c,"dnn_probHbb_c/F");
   ExTree->Branch("dnn_probHcc_a",&dnn_probHcc_a,"dnn_probHcc_a/F");
   ExTree->Branch("dnn_probHcc_b",&dnn_probHcc_b,"dnn_probHcc_b/F");
   ExTree->Branch("dnn_probHcc_c",&dnn_probHcc_c,"dnn_probHcc_c/F");
   ExTree->Branch("dnn_probHqqqq_a",&dnn_probHqqqq_a,"dnn_probHqqqq_a/F");
   ExTree->Branch("dnn_probHqqqq_b",&dnn_probHqqqq_b,"dnn_probHqqqq_b/F");
   ExTree->Branch("dnn_probHqqqq_c",&dnn_probHqqqq_c,"dnn_probHqqqq_c/F");
   ExTree->Branch("dnn_probQCDbb_a",&dnn_probQCDbb_a,"dnn_probQCDbb_a/F");
   ExTree->Branch("dnn_probQCDbb_b",&dnn_probQCDbb_b,"dnn_probQCDbb_b/F");
   ExTree->Branch("dnn_probQCDbb_c",&dnn_probQCDbb_c,"dnn_probQCDbb_c/F");
   ExTree->Branch("dnn_probQCDcc_a",&dnn_probQCDcc_a,"dnn_probQCDcc_a/F");
   ExTree->Branch("dnn_probQCDcc_b",&dnn_probQCDcc_b,"dnn_probQCDcc_b/F");
   ExTree->Branch("dnn_probQCDcc_c",&dnn_probQCDcc_c,"dnn_probQCDcc_c/F");
   ExTree->Branch("dnn_probQCDb_a",&dnn_probQCDb_a,"dnn_probQCDb_a/F");
   ExTree->Branch("dnn_probQCDb_b",&dnn_probQCDb_b,"dnn_probQCDb_b/F");
   ExTree->Branch("dnn_probQCDb_c",&dnn_probQCDb_c,"dnn_probQCDb_c/F");
   ExTree->Branch("dnn_probQCDc_a",&dnn_probQCDc_a,"dnn_probQCDc_a/F");
   ExTree->Branch("dnn_probQCDc_b",&dnn_probQCDc_b,"dnn_probQCDc_b/F");
   ExTree->Branch("dnn_probQCDc_c",&dnn_probQCDc_c,"dnn_probQCDc_c/F");
   ExTree->Branch("dnn_probQCDothers_a",&dnn_probQCDothers_a,"dnn_probQCDothers_a/F");
   ExTree->Branch("dnn_probQCDothers_b",&dnn_probQCDothers_b,"dnn_probQCDothers_b/F");
   ExTree->Branch("dnn_probQCDothers_c",&dnn_probQCDothers_c,"dnn_probQCDothers_c/F");
   ExTree->Branch("dnnDecorr_probTbcq_a",&dnnDecorr_probTbcq_a,"dnnDecorr_probTbcq_a/F");
   ExTree->Branch("dnnDecorr_probTbcq_b",&dnnDecorr_probTbcq_b,"dnnDecorr_probTbcq_b/F");
   ExTree->Branch("dnnDecorr_probTbcq_c",&dnnDecorr_probTbcq_c,"dnnDecorr_probTbcq_c/F");
   ExTree->Branch("dnnDecorr_probTbqq_a",&dnnDecorr_probTbqq_a,"dnnDecorr_probTbqq_a/F");
   ExTree->Branch("dnnDecorr_probTbqq_b",&dnnDecorr_probTbqq_b,"dnnDecorr_probTbqq_b/F");
   ExTree->Branch("dnnDecorr_probTbqq_c",&dnnDecorr_probTbqq_c,"dnnDecorr_probTbqq_c/F");
   ExTree->Branch("dnnDecorr_probTbc_a",&dnnDecorr_probTbc_a,"dnnDecorr_probTbc_a/F");
   ExTree->Branch("dnnDecorr_probTbc_b",&dnnDecorr_probTbc_b,"dnnDecorr_probTbc_b/F");
   ExTree->Branch("dnnDecorr_probTbc_c",&dnnDecorr_probTbc_c,"dnnDecorr_probTbc_c/F");
   ExTree->Branch("dnnDecorr_probTbq_a",&dnnDecorr_probTbq_a,"dnnDecorr_probTbq_a/F");
   ExTree->Branch("dnnDecorr_probTbq_b",&dnnDecorr_probTbq_b,"dnnDecorr_probTbq_b/F");
   ExTree->Branch("dnnDecorr_probTbq_c",&dnnDecorr_probTbq_c,"dnnDecorr_probTbq_c/F");
   ExTree->Branch("dnnDecorr_probWcq_a",&dnnDecorr_probWcq_a,"dnnDecorr_probWcq_a/F");
   ExTree->Branch("dnnDecorr_probWcq_b",&dnnDecorr_probWcq_b,"dnnDecorr_probWcq_b/F");
   ExTree->Branch("dnnDecorr_probWcq_c",&dnnDecorr_probWcq_c,"dnnDecorr_probWcq_c/F");
   ExTree->Branch("dnnDecorr_probWqq_a",&dnnDecorr_probWqq_a,"dnnDecorr_probWqq_a/F");
   ExTree->Branch("dnnDecorr_probWqq_b",&dnnDecorr_probWqq_b,"dnnDecorr_probWqq_b/F");
   ExTree->Branch("dnnDecorr_probWqq_c",&dnnDecorr_probWqq_c,"dnnDecorr_probWqq_c/F");
   ExTree->Branch("dnnDecorr_probZbb_a",&dnnDecorr_probZbb_a,"dnnDecorr_probZbb_a/F");
   ExTree->Branch("dnnDecorr_probZbb_b",&dnnDecorr_probZbb_b,"dnnDecorr_probZbb_b/F");
   ExTree->Branch("dnnDecorr_probZbb_c",&dnnDecorr_probZbb_c,"dnnDecorr_probZbb_c/F");
   ExTree->Branch("dnnDecorr_probZcc_a",&dnnDecorr_probZcc_a,"dnnDecorr_probZcc_a/F");
   ExTree->Branch("dnnDecorr_probZcc_b",&dnnDecorr_probZcc_b,"dnnDecorr_probZcc_b/F");
   ExTree->Branch("dnnDecorr_probZcc_c",&dnnDecorr_probZcc_c,"dnnDecorr_probZcc_c/F");
   ExTree->Branch("dnnDecorr_probZqq_a",&dnnDecorr_probZqq_a,"dnnDecorr_probZqq_a/F");
   ExTree->Branch("dnnDecorr_probZqq_b",&dnnDecorr_probZqq_b,"dnnDecorr_probZqq_b/F");
   ExTree->Branch("dnnDecorr_probZqq_c",&dnnDecorr_probZqq_c,"dnnDecorr_probZqq_c/F");
   ExTree->Branch("dnnDecorr_probHbb_a",&dnnDecorr_probHbb_a,"dnnDecorr_probHbb_a/F");
   ExTree->Branch("dnnDecorr_probHbb_b",&dnnDecorr_probHbb_b,"dnnDecorr_probHbb_b/F");
   ExTree->Branch("dnnDecorr_probHbb_c",&dnnDecorr_probHbb_c,"dnnDecorr_probHbb_c/F");
   ExTree->Branch("dnnDecorr_probHcc_a",&dnnDecorr_probHcc_a,"dnnDecorr_probHcc_a/F");
   ExTree->Branch("dnnDecorr_probHcc_b",&dnnDecorr_probHcc_b,"dnnDecorr_probHcc_b/F");
   ExTree->Branch("dnnDecorr_probHcc_c",&dnnDecorr_probHcc_c,"dnnDecorr_probHcc_c/F");
   ExTree->Branch("dnnDecorr_probHqqqq_a",&dnnDecorr_probHqqqq_a,"dnnDecorr_probHqqqq_a/F");
   ExTree->Branch("dnnDecorr_probHqqqq_b",&dnnDecorr_probHqqqq_b,"dnnDecorr_probHqqqq_b/F");
   ExTree->Branch("dnnDecorr_probHqqqq_c",&dnnDecorr_probHqqqq_c,"dnnDecorr_probHqqqq_c/F");
   ExTree->Branch("dnnDecorr_probQCDbb_a",&dnnDecorr_probQCDbb_a,"dnnDecorr_probQCDbb_a/F");
   ExTree->Branch("dnnDecorr_probQCDbb_b",&dnnDecorr_probQCDbb_b,"dnnDecorr_probQCDbb_b/F");
   ExTree->Branch("dnnDecorr_probQCDbb_c",&dnnDecorr_probQCDbb_c,"dnnDecorr_probQCDbb_c/F");
   ExTree->Branch("dnnDecorr_probQCDcc_a",&dnnDecorr_probQCDcc_a,"dnnDecorr_probQCDcc_a/F");
   ExTree->Branch("dnnDecorr_probQCDcc_b",&dnnDecorr_probQCDcc_b,"dnnDecorr_probQCDcc_b/F");
   ExTree->Branch("dnnDecorr_probQCDcc_c",&dnnDecorr_probQCDcc_c,"dnnDecorr_probQCDcc_c/F");
   ExTree->Branch("dnnDecorr_probQCDb_a",&dnnDecorr_probQCDb_a,"dnnDecorr_probQCDb_a/F");
   ExTree->Branch("dnnDecorr_probQCDb_b",&dnnDecorr_probQCDb_b,"dnnDecorr_probQCDb_b/F");
   ExTree->Branch("dnnDecorr_probQCDb_c",&dnnDecorr_probQCDb_c,"dnnDecorr_probQCDb_c/F");
   ExTree->Branch("dnnDecorr_probQCDc_a",&dnnDecorr_probQCDc_a,"dnnDecorr_probQCDc_a/F");
   ExTree->Branch("dnnDecorr_probQCDc_b",&dnnDecorr_probQCDc_b,"dnnDecorr_probQCDc_b/F");
   ExTree->Branch("dnnDecorr_probQCDc_c",&dnnDecorr_probQCDc_c,"dnnDecorr_probQCDc_c/F");
   ExTree->Branch("dnnDecorr_probQCDothers_a",&dnnDecorr_probQCDothers_a,"dnnDecorr_probQCDothers_a/F");
   ExTree->Branch("dnnDecorr_probQCDothers_b",&dnnDecorr_probQCDothers_b,"dnnDecorr_probQCDothers_b/F");
   ExTree->Branch("dnnDecorr_probQCDothers_c",&dnnDecorr_probQCDothers_c,"dnnDecorr_probQCDothers_c/F");

   ExTree->Branch("Mj_a",&Mj_a,"Mj_a/F");
   ExTree->Branch("Mj_b",&Mj_b,"Mj_b/F");
   ExTree->Branch("Mj_c",&Mj_c,"Mj_c/F");
   ExTree->Branch("PTj_a",&PTj_a,"PTj_a/F");
   ExTree->Branch("PTj_b",&PTj_b,"PTj_b/F");
   ExTree->Branch("PTj_c",&PTj_c,"PTj_c/F");
   ExTree->Branch("Etaj_a",&Etaj_a,"Etaj_a/F");
   ExTree->Branch("Etaj_b",&Etaj_b,"Etaj_b/F");
   ExTree->Branch("Etaj_c",&Etaj_c,"Etaj_c/F");
   ExTree->Branch("Phij_a",&Phij_a,"Phij_a/F");
   ExTree->Branch("Phij_b",&Phij_b,"Phij_b/F");
   ExTree->Branch("Phij_c",&Phij_c,"Phij_c/F");

   ExTree->Branch("Mj_Pneta",&Mj_Pneta,"Mj_Pneta/F");
   ExTree->Branch("Mj_Pnetb",&Mj_Pnetb,"Mj_Pnetb/F");
   ExTree->Branch("Mj_Pnetc",&Mj_Pnetc,"Mj_Pnetc/F");
   ExTree->Branch("PTj_Pneta",&PTj_Pneta,"PTj_Pneta/F");
   ExTree->Branch("PTj_Pnetb",&PTj_Pnetb,"PTj_Pnetb/F");
   ExTree->Branch("PTj_Pnetc",&PTj_Pnetc,"PTj_Pnetc/F");
   ExTree->Branch("Etaj_Pneta",&Etaj_Pneta,"Etaj_Pneta/F");
   ExTree->Branch("Etaj_Pnetb",&Etaj_Pnetb,"Etaj_Pnetb/F");
   ExTree->Branch("Etaj_Pnetc",&Etaj_Pnetc,"Etaj_Pnetc/F");
   ExTree->Branch("Phij_Pneta",&Phij_Pneta,"Phij_Pneta/F");
   ExTree->Branch("Phij_Pnetb",&Phij_Pnetb,"Phij_Pnetb/F");
   ExTree->Branch("Phij_Pnetc",&Phij_Pnetc,"Phij_Pnetc/F");

   ExTree->Branch("PartNet_MD_W_Pneta",&PartNet_MD_W_Pneta,"PartNet_MD_W_Pneta/F");
   ExTree->Branch("PartNet_MD_W_Pnetb",&PartNet_MD_W_Pnetb,"PartNet_MD_W_Pnetb/F");
   ExTree->Branch("PartNet_MD_W_Pnetc",&PartNet_MD_W_Pnetc,"PartNet_MD_W_Pnetc/F");

   ExTree->Branch("dnnDecorr_probTbcq_Pnetc",&dnnDecorr_probTbcq_Pnetc,"dnnDecorr_probTbcq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probTbqq_Pnetc",&dnnDecorr_probTbqq_Pnetc,"dnnDecorr_probTbqq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probTbc_Pnetc",&dnnDecorr_probTbc_Pnetc,"dnnDecorr_probTbc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probTbq_Pnetc",&dnnDecorr_probTbq_Pnetc,"dnnDecorr_probTbq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probWcq_Pnetc",&dnnDecorr_probWcq_Pnetc,"dnnDecorr_probWcq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probWqq_Pnetc",&dnnDecorr_probWqq_Pnetc,"dnnDecorr_probWqq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probZbb_Pnetc",&dnnDecorr_probZbb_Pnetc,"dnnDecorr_probZbb_Pnetc/F");
   ExTree->Branch("dnnDecorr_probZcc_Pnetc",&dnnDecorr_probZcc_Pnetc,"dnnDecorr_probZcc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probZqq_Pnetc",&dnnDecorr_probZqq_Pnetc,"dnnDecorr_probZqq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probHbb_Pnetc",&dnnDecorr_probHbb_Pnetc,"dnnDecorr_probHbb_Pnetc/F");
   ExTree->Branch("dnnDecorr_probHcc_Pnetc",&dnnDecorr_probHcc_Pnetc,"dnnDecorr_probHcc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probHqqqq_Pnetc",&dnnDecorr_probHqqqq_Pnetc,"dnnDecorr_probHqqqq_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDbb_Pnetc",&dnnDecorr_probQCDbb_Pnetc,"dnnDecorr_probQCDbb_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDcc_Pnetc",&dnnDecorr_probQCDcc_Pnetc,"dnnDecorr_probQCDcc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDb_Pnetc",&dnnDecorr_probQCDb_Pnetc,"dnnDecorr_probQCDb_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDc_Pnetc",&dnnDecorr_probQCDc_Pnetc,"dnnDecorr_probQCDc_Pnetc/F");
   ExTree->Branch("dnnDecorr_probQCDothers_Pnetc",&dnnDecorr_probQCDothers_Pnetc,"dnnDecorr_probQCDothers_Pnetc/F");

   ExTree->Branch("FatJet_tau1_Pneta",&FatJet_tau1_Pneta,"FatJet_tau1_Pneta/F");
   ExTree->Branch("FatJet_tau2_Pneta",&FatJet_tau2_Pneta,"FatJet_tau2_Pneta/F");
   ExTree->Branch("FatJet_tau3_Pneta",&FatJet_tau3_Pneta,"FatJet_tau3_Pneta/F");
   ExTree->Branch("FatJet_tau4_Pneta",&FatJet_tau4_Pneta,"FatJet_tau4_Pneta/F");
   ExTree->Branch("FatJet_tau1_Pnetb",&FatJet_tau1_Pnetb,"FatJet_tau1_Pnetb/F");
   ExTree->Branch("FatJet_tau2_Pnetb",&FatJet_tau2_Pnetb,"FatJet_tau2_Pnetb/F");
   ExTree->Branch("FatJet_tau3_Pnetb",&FatJet_tau3_Pnetb,"FatJet_tau3_Pnetb/F");
   ExTree->Branch("FatJet_tau4_Pnetb",&FatJet_tau4_Pnetb,"FatJet_tau4_Pnetb/F");
   ExTree->Branch("FatJet_tau1_Pnetc",&FatJet_tau1_Pnetc,"FatJet_tau1_Pnetc/F");
   ExTree->Branch("FatJet_tau2_Pnetc",&FatJet_tau2_Pnetc,"FatJet_tau2_Pnetc/F");
   ExTree->Branch("FatJet_tau3_Pnetc",&FatJet_tau3_Pnetc,"FatJet_tau3_Pnetc/F");
   ExTree->Branch("FatJet_tau4_Pnetc",&FatJet_tau4_Pnetc,"FatJet_tau4_Pnetc/F");

   ExTree->Branch("dnnTop_a",&dnnTop_a,"dnnTop_a/F");
   ExTree->Branch("dnnTop_b",&dnnTop_b,"dnnTop_b/F");
   ExTree->Branch("dnnTop_c",&dnnTop_c,"dnnTop_c/F");
   ExTree->Branch("dnnW_a",&dnnW_a,"dnnW_a/F");
   ExTree->Branch("dnnW_b",&dnnW_b,"dnnW_b/F");
   ExTree->Branch("dnnW_c",&dnnW_c,"dnnW_c/F");
   ExTree->Branch("dnnH4q_a",&dnnH4q_a,"dnnH4q_a/F");
   ExTree->Branch("dnnH4q_b",&dnnH4q_b,"dnnH4q_b/F");
   ExTree->Branch("dnnH4q_c",&dnnH4q_c,"dnnH4q_c/F");
   ExTree->Branch("dnnZ_a",&dnnZ_a,"dnnZ_a/F");
   ExTree->Branch("dnnZ_b",&dnnZ_b,"dnnZ_b/F");
   ExTree->Branch("dnnZ_c",&dnnZ_c,"dnnZ_c/F");
   ExTree->Branch("dnnZbb_a",&dnnZbb_a,"dnnZbb_a/F");
   ExTree->Branch("dnnZbb_b",&dnnZbb_b,"dnnZbb_b/F");
   ExTree->Branch("dnnZbb_c",&dnnZbb_c,"dnnZbb_c/F");
   ExTree->Branch("dnnHbb_a",&dnnHbb_a,"dnnHbb_a/F");
   ExTree->Branch("dnnHbb_b",&dnnHbb_b,"dnnHbb_b/F");
   ExTree->Branch("dnnHbb_c",&dnnHbb_c,"dnnHbb_c/F");
   ExTree->Branch("dnnDecorrTop_a",&dnnDecorrTop_a,"dnnDecorrTop_a/F");
   ExTree->Branch("dnnDecorrTop_b",&dnnDecorrTop_b,"dnnDecorrTop_b/F");
   ExTree->Branch("dnnDecorrTop_c",&dnnDecorrTop_c,"dnnDecorrTop_c/F");
   ExTree->Branch("dnnDecorrW_a",&dnnDecorrW_a,"dnnDecorrW_a/F");
   ExTree->Branch("dnnDecorrW_b",&dnnDecorrW_b,"dnnDecorrW_b/F");
   ExTree->Branch("dnnDecorrW_c",&dnnDecorrW_c,"dnnDecorrW_c/F");
   ExTree->Branch("dnnDecorrH4q_a",&dnnDecorrH4q_a,"dnnDecorrH4q_a/F");
   ExTree->Branch("dnnDecorrH4q_b",&dnnDecorrH4q_b,"dnnDecorrH4q_b/F");
   ExTree->Branch("dnnDecorrH4q_c",&dnnDecorrH4q_c,"dnnDecorrH4q_c/F");
   ExTree->Branch("dnnDecorrZ_a",&dnnDecorrZ_a,"dnnDecorrZ_a/F");
   ExTree->Branch("dnnDecorrZ_b",&dnnDecorrZ_b,"dnnDecorrZ_b/F");
   ExTree->Branch("dnnDecorrZ_c",&dnnDecorrZ_c,"dnnDecorrZ_c/F");
   ExTree->Branch("dnnDecorrZbb_a",&dnnDecorrZbb_a,"dnnDecorrZbb_a/F");
   ExTree->Branch("dnnDecorrZbb_b",&dnnDecorrZbb_b,"dnnDecorrZbb_b/F");
   ExTree->Branch("dnnDecorrZbb_c",&dnnDecorrZbb_c,"dnnDecorrZbb_c/F");
   ExTree->Branch("dnnDecorrHbb_a",&dnnDecorrHbb_a,"dnnDecorrHbb_a/F");
   ExTree->Branch("dnnDecorrHbb_b",&dnnDecorrHbb_b,"dnnDecorrHbb_b/F");
   ExTree->Branch("dnnDecorrHbb_c",&dnnDecorrHbb_c,"dnnDecorrHbb_c/F");
   ExTree->Branch("dnnDecorrbb_a",&dnnDecorrbb_a,"dnnDecorrbb_a/F");
   ExTree->Branch("dnnDecorrbb_b",&dnnDecorrbb_b,"dnnDecorrbb_b/F");
   ExTree->Branch("dnnDecorrbb_c",&dnnDecorrbb_c,"dnnDecorrbb_c/F");
   ExTree->Branch("dnnDecorrcc_a",&dnnDecorrcc_a,"dnnDecorrcc_a/F");
   ExTree->Branch("dnnDecorrcc_b",&dnnDecorrcc_b,"dnnDecorrcc_b/F");
   ExTree->Branch("dnnDecorrcc_c",&dnnDecorrcc_c,"dnnDecorrcc_c/F");
   ExTree->Branch("dnnDecorrbbnog_a",&dnnDecorrbbnog_a,"dnnDecorrbbnog_a/F");
   ExTree->Branch("dnnDecorrbbnog_b",&dnnDecorrbbnog_b,"dnnDecorrbbnog_b/F");
   ExTree->Branch("dnnDecorrbbnog_c",&dnnDecorrbbnog_c,"dnnDecorrbbnog_c/F");
   ExTree->Branch("dnnDecorrccnog_a",&dnnDecorrccnog_a,"dnnDecorrccnog_a/F");
   ExTree->Branch("dnnDecorrccnog_b",&dnnDecorrccnog_b,"dnnDecorrccnog_b/F");
   ExTree->Branch("dnnDecorrccnog_c",&dnnDecorrccnog_c,"dnnDecorrccnog_c/F");
   ExTree->Branch("dnnqcd_a",&dnnqcd_a,"dnnqcd_a/F");
   ExTree->Branch("dnnqcd_b",&dnnqcd_b,"dnnqcd_b/F");
   ExTree->Branch("dnnqcd_c",&dnnqcd_c,"dnnqcd_c/F");
   ExTree->Branch("dnntop_a",&dnntop_a,"dnntop_a/F");
   ExTree->Branch("dnntop_b",&dnntop_b,"dnntop_b/F");
   ExTree->Branch("dnntop_c",&dnntop_c,"dnntop_c/F");
   ExTree->Branch("dnnw_a",&dnnw_a,"dnnw_a/F");
   ExTree->Branch("dnnw_b",&dnnw_b,"dnnw_b/F");
   ExTree->Branch("dnnw_c",&dnnw_c,"dnnw_c/F");
   ExTree->Branch("dnnz_a",&dnnz_a,"dnnz_a/F");
   ExTree->Branch("dnnz_b",&dnnz_b,"dnnz_b/F");
   ExTree->Branch("dnnz_c",&dnnz_c,"dnnz_c/F");
   ExTree->Branch("dnnzbb_a",&dnnzbb_a,"dnnzbb_a/F");
   ExTree->Branch("dnnzbb_b",&dnnzbb_b,"dnnzbb_b/F");
   ExTree->Branch("dnnzbb_c",&dnnzbb_c,"dnnzbb_c/F");
   ExTree->Branch("dnnhbb_a",&dnnhbb_a,"dnnhbb_a/F");
   ExTree->Branch("dnnhbb_b",&dnnhbb_b,"dnnhbb_b/F");
   ExTree->Branch("dnnhbb_c",&dnnhbb_c,"dnnhbb_c/F");
   ExTree->Branch("dnnh4q_a",&dnnh4q_a,"dnnh4q_a/F");
   ExTree->Branch("dnnh4q_b",&dnnh4q_b,"dnnh4q_b/F");
   ExTree->Branch("dnnh4q_c",&dnnh4q_c,"dnnh4q_c/F");
   ExTree->Branch("dnnDecorrqcd_a",&dnnDecorrqcd_a,"dnnDecorrqcd_a/F");
   ExTree->Branch("dnnDecorrqcd_b",&dnnDecorrqcd_b,"dnnDecorrqcd_b/F");
   ExTree->Branch("dnnDecorrqcd_c",&dnnDecorrqcd_c,"dnnDecorrqcd_c/F");
   ExTree->Branch("dnnDecorrtop_a",&dnnDecorrtop_a,"dnnDecorrtop_a/F");
   ExTree->Branch("dnnDecorrtop_b",&dnnDecorrtop_b,"dnnDecorrtop_b/F");
   ExTree->Branch("dnnDecorrtop_c",&dnnDecorrtop_c,"dnnDecorrtop_c/F");
   ExTree->Branch("dnnDecorrw_a",&dnnDecorrw_a,"dnnDecorrw_a/F");
   ExTree->Branch("dnnDecorrw_b",&dnnDecorrw_b,"dnnDecorrw_b/F");
   ExTree->Branch("dnnDecorrw_c",&dnnDecorrw_c,"dnnDecorrw_c/F");
   ExTree->Branch("dnnDecorrz_a",&dnnDecorrz_a,"dnnDecorrz_a/F");
   ExTree->Branch("dnnDecorrz_b",&dnnDecorrz_b,"dnnDecorrz_b/F");
   ExTree->Branch("dnnDecorrz_c",&dnnDecorrz_c,"dnnDecorrz_c/F");
   ExTree->Branch("dnnDecorrzbb_a",&dnnDecorrzbb_a,"dnnDecorrzbb_a/F");
   ExTree->Branch("dnnDecorrzbb_b",&dnnDecorrzbb_b,"dnnDecorrzbb_b/F");
   ExTree->Branch("dnnDecorrzbb_c",&dnnDecorrzbb_c,"dnnDecorrzbb_c/F");
   ExTree->Branch("dnnDecorrhbb_a",&dnnDecorrhbb_a,"dnnDecorrhbb_a/F");
   ExTree->Branch("dnnDecorrhbb_b",&dnnDecorrhbb_b,"dnnDecorrhbb_b/F");
   ExTree->Branch("dnnDecorrhbb_c",&dnnDecorrhbb_c,"dnnDecorrhbb_c/F");
   ExTree->Branch("dnnDecorrh4q_a",&dnnDecorrh4q_a,"dnnDecorrh4q_a/F");
   ExTree->Branch("dnnDecorrh4q_b",&dnnDecorrh4q_b,"dnnDecorrh4q_b/F");
   ExTree->Branch("dnnDecorrh4q_c",&dnnDecorrh4q_c,"dnnDecorrh4q_c/F");

   ExTree->Branch("nb_l_deep_ex",&nb_l_deep_ex,"nb_l_deep_ex/I");
   ExTree->Branch("nb_m_deep_ex",&nb_m_deep_ex,"nb_m_deep_ex/I");
   ExTree->Branch("nb_t_deep_ex",&nb_t_deep_ex,"nb_t_deep_ex/I");
   ExTree->Branch("nb_l_deep_in",&nb_l_deep_in,"nb_l_deep_in/I");
   ExTree->Branch("nb_m_deep_in",&nb_m_deep_in,"nb_m_deep_in/I");
   ExTree->Branch("nb_t_deep_in",&nb_t_deep_in,"nb_t_deep_in/I");

   // define ExTree for gKK 0lepton output

   ExTree->Branch("MET_phi_NoXYCorr",&MET_phi_NoXYCorr,"MET_phi_NoXYCorr/F");
   ExTree->Branch("MET_et_NoXYCorr",&MET_et_NoXYCorr,"MET_et_NoXYCorr/F");
   
   ExTree->Branch("Jet_mass_nom_out",&Jet_mass_nom_out);
   ExTree->Branch("Jet_pt_nom_out",&Jet_pt_nom_out);

   ExTree->Branch("Jet_pt_out",&Jet_pt_out);
   ExTree->Branch("Jet_eta_out",&Jet_eta_out);
   ExTree->Branch("Jet_phi_out",&Jet_phi_out);
   ExTree->Branch("Jet_mass_out",&Jet_mass_out);
   ExTree->Branch("Jet_btagDeepFlavB_out",&Jet_btagDeepFlavB_out);
   ExTree->Branch("Jet_jetId_out",&Jet_jetId_out);
   ExTree->Branch("Jet_hadronFlavour_out",&Jet_hadronFlavour_out);

   ExTree->Branch("Mj_corr_Pneta",&Mj_corr_Pneta,"Mj_corr_Pneta/F");
   ExTree->Branch("Mj_corr_Pnetb",&Mj_corr_Pnetb,"Mj_corr_Pnetb/F");
   ExTree->Branch("Mj_corr_Pnetc",&Mj_corr_Pnetc,"Mj_corr_Pnetc/F");

   ExTree->Branch("Mj_corr_a",&Mj_corr_a,"Mj_corr_a/F");
   ExTree->Branch("Mj_corr_b",&Mj_corr_b,"Mj_corr_b/F");
   ExTree->Branch("Mj_corr_c",&Mj_corr_c,"Mj_corr_c/F");

   ExTree->Branch("Mj_corr_max",&Mj_corr_max,"Mj_corr_max/F");
   ExTree->Branch("Mj_corr_mid",&Mj_corr_mid,"Mj_corr_mid/F");
   ExTree->Branch("Mj_corr_min",&Mj_corr_min,"Mj_corr_min/F");

   ExTree->Branch("Mj_corr",&Mj_corr,"Mj_corr/F");
   ExTree->Branch("Mj_corr_2",&Mj_corr_2,"Mj_corr_2/F");
   ExTree->Branch("Mj_corr_3",&Mj_corr_3,"Mj_corr_3/F");

   ExTree->Branch("MET_T1Smear_phi_XYcorr",&MET_T1Smear_phi_XYcorr,"MET_T1Smear_phi_XYcorr/F");
   ExTree->Branch("MET_T1Smear_pt_XYcorr",&MET_T1Smear_pt_XYcorr,"MET_T1Smear_pt_XYcorr/F");
}



void EDBR2PKUTree::OutputBranches_HWW() {
   if (IsData > 0){
      ExTree->Branch("matchingt_a", &matchingt_a, "matchingt_a/I");
      ExTree->Branch("matchingW_a", &matchingW_a, "matchingW_a/I");
      ExTree->Branch("matchingg_a", &matchingg_a, "matchingg_a/I");
      ExTree->Branch("matchingZ_a", &matchingZ_a, "matchingZ_a/I");
      ExTree->Branch("matchingu_a", &matchingu_a, "matchingu_a/I");
      ExTree->Branch("matchingd_a", &matchingd_a, "matchingd_a/I");
      ExTree->Branch("matchings_a", &matchings_a, "matchings_a/I");
      ExTree->Branch("matchingc_a", &matchingc_a, "matchingc_a/I");
      ExTree->Branch("matchingg_first_a", &matchingg_first_a, "matchingg_first_a/I");
      ExTree->Branch("matchingu_first_a", &matchingu_first_a, "matchingu_first_a/I");
      ExTree->Branch("matchingd_first_a", &matchingd_first_a, "matchingd_first_a/I");
      ExTree->Branch("matchings_first_a", &matchings_first_a, "matchings_first_a/I");
      ExTree->Branch("matchingc_first_a", &matchingc_first_a, "matchingc_first_a/I");
      ExTree->Branch("matchingqg_first_a", &matchingqg_first_a, "matchingqg_first_a/I");
      ExTree->Branch("matchingt_first_a", &matchingt_first_a, "matchingt_first_a/I");

      ExTree->Branch("matchingt_b", &matchingt_b, "matchingt_b/I");
      ExTree->Branch("matchingW_b", &matchingW_b, "matchingW_b/I");
      ExTree->Branch("matchingg_b", &matchingg_b, "matchingg_b/I");
      ExTree->Branch("matchingZ_b", &matchingZ_b, "matchingZ_b/I");
      ExTree->Branch("matchingu_b", &matchingu_b, "matchingu_b/I");
      ExTree->Branch("matchingd_b", &matchingd_b, "matchingd_b/I");
      ExTree->Branch("matchings_b", &matchings_b, "matchings_b/I");
      ExTree->Branch("matchingc_b", &matchingc_b, "matchingc_b/I");
      ExTree->Branch("matchingg_first_b", &matchingg_first_b, "matchingg_first_b/I");
      ExTree->Branch("matchingu_first_b", &matchingu_first_b, "matchingu_first_b/I");
      ExTree->Branch("matchingd_first_b", &matchingd_first_b, "matchingd_first_b/I");
      ExTree->Branch("matchings_first_b", &matchings_first_b, "matchings_first_b/I");
      ExTree->Branch("matchingc_first_b", &matchingc_first_b, "matchingc_first_b/I");
      ExTree->Branch("matchingqg_first_b", &matchingqg_first_b, "matchingqg_first_b/I");
      ExTree->Branch("matchingt_first_b", &matchingt_first_b, "matchingt_first_b/I");

      ExTree->Branch("matchingt_c", &matchingt_c, "matchingt_c/I");
      ExTree->Branch("matchingW_c", &matchingW_c, "matchingW_c/I");
      ExTree->Branch("matchingg_c", &matchingg_c, "matchingg_c/I");
      ExTree->Branch("matchingZ_c", &matchingZ_c, "matchingZ_c/I");
      ExTree->Branch("matchingu_c", &matchingu_c, "matchingu_c/I");
      ExTree->Branch("matchingd_c", &matchingd_c, "matchingd_c/I");
      ExTree->Branch("matchings_c", &matchings_c, "matchings_c/I");
      ExTree->Branch("matchingc_c", &matchingc_c, "matchingc_c/I");
      ExTree->Branch("matchingg_first_c", &matchingg_first_c, "matchingg_first_c/I");
      ExTree->Branch("matchingu_first_c", &matchingu_first_c, "matchingu_first_c/I");
      ExTree->Branch("matchingd_first_c", &matchingd_first_c, "matchingd_first_c/I");
      ExTree->Branch("matchings_first_c", &matchings_first_c, "matchings_first_c/I");
      ExTree->Branch("matchingc_first_c", &matchingc_first_c, "matchingc_first_c/I");
      ExTree->Branch("matchingqg_first_c", &matchingqg_first_c, "matchingqg_first_c/I");
      ExTree->Branch("matchingt_first_c", &matchingt_first_c, "matchingt_first_c/I");



      ExTree->Branch("R4q_max", &R4q_max, "R4q_max/I");
      ExTree->Branch("R3q_max", &R3q_max, "R3q_max/I");
      ExTree->Branch("R2q_max", &R2q_max, "R2q_max/I");
      ExTree->Branch("Rlqq_max", &Rlqq_max, "Rlqq_max/I");
      ExTree->Branch("Rlq_max", &Rlq_max, "Rlq_max/I");
      ExTree->Branch("w_max", &w_max, "w_max/I");
      ExTree->Branch("u_max", &u_max, "u_max/I");
      ExTree->Branch("R4q_min", &R4q_min, "R4q_min/I");
      ExTree->Branch("R3q_min", &R3q_min, "R3q_min/I");
      ExTree->Branch("R2q_min", &R2q_min, "R2q_min/I");
      ExTree->Branch("Rlqq_min", &Rlqq_min, "Rlqq_min/I");
      ExTree->Branch("Rlq_min", &Rlq_min, "Rlq_min/I");
      ExTree->Branch("w_min", &w_min, "w_min/I");
      ExTree->Branch("u_min", &u_min, "u_min/I");
      ExTree->Branch("gKK_g_max", &gKK_g_max, "gKK_g_max/I");
      ExTree->Branch("gKK_g_min", &gKK_g_min, "gKK_g_min/I");
      ExTree->Branch("R3q_taudecay_max", &R3q_taudecay_max, "R3q_taudecay_max/I");
      ExTree->Branch("R2q_qq_taudecay_max", &R2q_qq_taudecay_max, "R2q_qq_taudecay_max/I");
      ExTree->Branch("R2q_qtau_taudecay_max", &R2q_qtau_taudecay_max, "R2q_qtau_taudecay_max/I");
      ExTree->Branch("R2q_tautau_taudecay_max", &R2q_tautau_taudecay_max, "R2q_tautau_taudecay_max/I");
      ExTree->Branch("Rlqq_emu_taudecay_max", &Rlqq_emu_taudecay_max, "Rlqq_emu_taudecay_max/I");
      ExTree->Branch("Rlqq_tau_taudecay_max", &Rlqq_tau_taudecay_max, "Rlqq_tau_taudecay_max/I");
      ExTree->Branch("Rlq_taudecay_max", &Rlq_taudecay_max, "Rlq_taudecay_max/I");
      ExTree->Branch("w_taudecay_max", &w_taudecay_max, "w_taudecay_max/I");
      ExTree->Branch("u_taudecay_max", &u_taudecay_max, "u_taudecay_max/I");
      ExTree->Branch("R3q_taudecay_min", &R3q_taudecay_min, "R3q_taudecay_min/I");
      ExTree->Branch("R2q_qq_taudecay_min", &R2q_qq_taudecay_min, "R2q_qq_taudecay_min/I");
      ExTree->Branch("R2q_qtau_taudecay_min", &R2q_qtau_taudecay_min, "R2q_qtau_taudecay_min/I");
      ExTree->Branch("R2q_tautau_taudecay_min", &R2q_tautau_taudecay_min, "R2q_tautau_taudecay_min/I");
      ExTree->Branch("Rlqq_emu_taudecay_min", &Rlqq_emu_taudecay_min, "Rlqq_emu_taudecay_min/I");
      ExTree->Branch("Rlqq_tau_taudecay_min", &Rlqq_tau_taudecay_min, "Rlqq_tau_taudecay_min/I");
      ExTree->Branch("Rlq_taudecay_min", &Rlq_taudecay_min, "Rlq_taudecay_min/I");
      ExTree->Branch("w_taudecay_min", &w_taudecay_min, "w_taudecay_min/I");
      ExTree->Branch("u_taudecay_min", &u_taudecay_min, "u_taudecay_min/I");
      ExTree->Branch("R3q_tauhad_max", &R3q_tauhad_max, "R3q_tauhad_max/I");
      ExTree->Branch("R2q_qtau_tauhad_max", &R2q_qtau_tauhad_max, "R2q_qtau_tauhad_max/I");
      ExTree->Branch("R2q_tautau_tauhad_max", &R2q_tautau_tauhad_max, "R2q_tautau_tauhad_max/I");
      ExTree->Branch("Rlqq_emu_tauhad_max", &Rlqq_emu_tauhad_max, "Rlqq_emu_tauhad_max/I");
      ExTree->Branch("Rlq_tauhad_max", &Rlq_tauhad_max, "Rlq_tauhad_max/I");
      ExTree->Branch("w_tauhad_max", &w_tauhad_max, "w_tauhad_max/I");
      ExTree->Branch("u_tauhad_max", &u_tauhad_max, "u_tauhad_max/I");
      ExTree->Branch("R3q_tauhad_min", &R3q_tauhad_min, "R3q_tauhad_min/I");
      ExTree->Branch("R2q_qtau_tauhad_min", &R2q_qtau_tauhad_min, "R2q_qtau_tauhad_min/I");
      ExTree->Branch("R2q_tautau_tauhad_min", &R2q_tautau_tauhad_min, "R2q_tautau_tauhad_min/I");
      ExTree->Branch("Rlqq_emu_tauhad_min", &Rlqq_emu_tauhad_min, "Rlqq_emu_tauhad_min/I");
      ExTree->Branch("Rlq_tauhad_min", &Rlq_tauhad_min, "Rlq_tauhad_min/I");
      ExTree->Branch("w_tauhad_min", &w_tauhad_min, "w_tauhad_min/I");
      ExTree->Branch("u_tauhad_min", &u_tauhad_min, "u_tauhad_min/I");
      ExTree->Branch("R3q_td_max", &R3q_td_max, "R3q_td_max/I");
      ExTree->Branch("rest_td_max", &rest_td_max, "rest_td_max/I");
      ExTree->Branch("R2q_Rlqq_td_max", &R2q_Rlqq_td_max, "R2q_Rlqq_td_max/I");
      ExTree->Branch("R3q_td_min", &R3q_td_min, "R3q_td_min/I");
      ExTree->Branch("rest_td_min", &rest_td_min, "rest_td_min/I");
      ExTree->Branch("R2q_Rlqq_td_min", &R2q_Rlqq_td_min, "R2q_Rlqq_td_min/I");
      ExTree->Branch("R4q_mid", &R4q_mid, "R4q_mid/I");
      ExTree->Branch("R3q_mid", &R3q_mid, "R3q_mid/I");
      ExTree->Branch("R2q_mid", &R2q_mid, "R2q_mid/I");
      ExTree->Branch("Rlqq_mid", &Rlqq_mid, "Rlqq_mid/I");
      ExTree->Branch("Rlq_mid", &Rlq_mid, "Rlq_mid/I");
      ExTree->Branch("w_mid", &w_mid, "w_mid/I");
      ExTree->Branch("u_mid", &u_mid, "u_mid/I");
      ExTree->Branch("gKK_g_mid", &gKK_g_mid, "gKK_g_mid/I");
      ExTree->Branch("R3q_taudecay_mid", &R3q_taudecay_mid, "R3q_taudecay_mid/I");
      ExTree->Branch("R2q_qq_taudecay_mid", &R2q_qq_taudecay_mid, "R2q_qq_taudecay_mid/I");
      ExTree->Branch("R2q_qtau_taudecay_mid", &R2q_qtau_taudecay_mid, "R2q_qtau_taudecay_mid/I");
      ExTree->Branch("R2q_tautau_taudecay_mid", &R2q_tautau_taudecay_mid, "R2q_tautau_taudecay_mid/I");
      ExTree->Branch("Rlqq_emu_taudecay_mid", &Rlqq_emu_taudecay_mid, "Rlqq_emu_taudecay_mid/I");
      ExTree->Branch("Rlqq_tau_taudecay_mid", &Rlqq_tau_taudecay_mid, "Rlqq_tau_taudecay_mid/I");
      ExTree->Branch("Rlq_taudecay_mid", &Rlq_taudecay_mid, "Rlq_taudecay_mid/I");
      ExTree->Branch("w_taudecay_mid", &w_taudecay_mid, "w_taudecay_mid/I");
      ExTree->Branch("u_taudecay_mid", &u_taudecay_mid, "u_taudecay_mid/I");
      ExTree->Branch("R3q_tauhad_mid", &R3q_tauhad_mid, "R3q_tauhad_mid/I");
      ExTree->Branch("R2q_qtau_tauhad_mid", &R2q_qtau_tauhad_mid, "R2q_qtau_tauhad_mid/I");
      ExTree->Branch("R2q_tautau_tauhad_mid", &R2q_tautau_tauhad_mid, "R2q_tautau_tauhad_mid/I");
      ExTree->Branch("Rlqq_emu_tauhad_mid", &Rlqq_emu_tauhad_mid, "Rlqq_emu_tauhad_mid/I");
      ExTree->Branch("Rlq_tauhad_mid", &Rlq_tauhad_mid, "Rlq_tauhad_mid/I");
      ExTree->Branch("w_tauhad_mid", &w_tauhad_mid, "w_tauhad_mid/I");
      ExTree->Branch("u_tauhad_mid", &u_tauhad_mid, "u_tauhad_mid/I");
      ExTree->Branch("R3q_td_mid", &R3q_td_mid, "R3q_td_mid/I");
      ExTree->Branch("rest_td_mid", &rest_td_mid, "rest_td_mid/I");
      ExTree->Branch("R2q_Rlqq_td_mid", &R2q_Rlqq_td_mid, "R2q_Rlqq_td_mid/I");


      ExTree->Branch("gen_gKK_g_pt_f",&gen_gKK_g_pt_f,"gen_gKK_g_pt_f/F");
      ExTree->Branch("gen_gKK_g_eta_f",&gen_gKK_g_eta_f,"gen_gKK_g_eta_f/F");
      ExTree->Branch("gen_gKK_g_phi_f",&gen_gKK_g_phi_f,"gen_gKK_g_phi_f/F");
      ExTree->Branch("gen_gKK_g_mass_f",&gen_gKK_g_mass_f,"gen_gKK_g_mass_f/F");

      ExTree->Branch("gen_tau_decay_2",&gen_tau_decay_2,"gen_tau_decay_2/I");
      ExTree->Branch("gen_tau_decay_3",&gen_tau_decay_3,"gen_tau_decay_3/I");

      ExTree->Branch("z_max",&z_max,"z_max/I");
      ExTree->Branch("t_max",&t_max,"t_max/I");
      ExTree->Branch("t_max_tag",&t_max_tag,"t_max_tag/I");
      ExTree->Branch("w_max",&w_max,"w_max/I");
      ExTree->Branch("g_max",&g_max,"g_max/I");
      ExTree->Branch("q_max",&q_max,"q_max/I");
      ExTree->Branch("u_max",&u_max,"u_max/I");
      ExTree->Branch("z_mid",&z_mid,"z_mid/I");
      ExTree->Branch("t_mid",&t_mid,"t_mid/I");
      ExTree->Branch("t_mid_tag",&t_mid_tag,"t_mid_tag/I");
      ExTree->Branch("w_mid",&w_mid,"w_mid/I");
      ExTree->Branch("g_mid",&g_mid,"g_mid/I");
      ExTree->Branch("q_mid",&q_mid,"q_mid/I");
      ExTree->Branch("u_mid",&u_mid,"u_mid/I");
      ExTree->Branch("z_min",&z_min,"z_min/I");
      ExTree->Branch("t_min",&t_min,"t_min/I");
      ExTree->Branch("t_min_tag",&t_min_tag,"t_min_tag/I");
      ExTree->Branch("w_min",&w_min,"w_min/I");
      ExTree->Branch("g_min",&g_min,"g_min/I");
      ExTree->Branch("q_min",&q_min,"q_min/I");
      ExTree->Branch("u_min",&u_min,"u_min/I");
      ExTree->Branch("z_4",&z_4,"z_4/I");
      ExTree->Branch("t_4",&t_4,"t_4/I");
      ExTree->Branch("t_4_tag",&t_4_tag,"t_4_tag/I");
      ExTree->Branch("w_4",&w_4,"w_4/I");
      ExTree->Branch("g_4",&g_4,"g_4/I");
      ExTree->Branch("q_4",&q_4,"q_4/I");
      ExTree->Branch("u_4",&u_4,"u_4/I");

      ExTree->Branch("t34_max_tag",&t34_max_tag,"t34_max_tag/I");
      ExTree->Branch("t34_mid_tag",&t34_mid_tag,"t34_mid_tag/I");
      ExTree->Branch("t34_min_tag",&t34_min_tag,"t34_min_tag/I");
      ExTree->Branch("t34_4_tag",&t34_4_tag,"t34_4_tag/I");

      ExTree->Branch("R4q_a",&R4q_a,"R4q_a/I");
      ExTree->Branch("R4q_b",&R4q_b,"R4q_b/I");
      ExTree->Branch("R4q_c",&R4q_c,"R4q_c/I");
      ExTree->Branch("R3q_a",&R3q_a,"R3q_a/I");
      ExTree->Branch("R3q_b",&R3q_b,"R3q_b/I");
      ExTree->Branch("R3q_c",&R3q_c,"R3q_c/I");
      ExTree->Branch("R2q_a",&R2q_a,"R2q_a/I");
      ExTree->Branch("R2q_b",&R2q_b,"R2q_b/I");
      ExTree->Branch("R2q_c",&R2q_c,"R2q_c/I");
      ExTree->Branch("w_a",&w_a,"w_a/I");
      ExTree->Branch("w_b",&w_b,"w_b/I");
      ExTree->Branch("w_c",&w_c,"w_c/I");
      ExTree->Branch("z_a",&z_a,"z_a/I");
      ExTree->Branch("z_b",&z_b,"z_b/I");
      ExTree->Branch("z_c",&z_c,"z_c/I");
      ExTree->Branch("Rlqq_a",&Rlqq_a,"Rlqq_a/I");
      ExTree->Branch("Rlqq_b",&Rlqq_b,"Rlqq_b/I");
      ExTree->Branch("Rlqq_c",&Rlqq_c,"Rlqq_c/I");
      ExTree->Branch("Rlq_a",&Rlq_a,"Rlq_a/I");
      ExTree->Branch("Rlq_b",&Rlq_b,"Rlq_b/I");
      ExTree->Branch("Rlq_c",&Rlq_c,"Rlq_c/I");
      ExTree->Branch("gKK_g_a",&gKK_g_a,"gKK_g_a/I");
      ExTree->Branch("gKK_g_b",&gKK_g_b,"gKK_g_b/I");
      ExTree->Branch("gKK_g_c",&gKK_g_c,"gKK_g_c/I");
      ExTree->Branch("u_a",&u_a,"u_a/I");
      ExTree->Branch("u_b",&u_b,"u_b/I");
      ExTree->Branch("u_c",&u_c,"u_c/I");
      ExTree->Branch("R3q_taudecay_a",&R3q_taudecay_a,"R3q_taudecay_a/I");
      ExTree->Branch("R3q_taudecay_b",&R3q_taudecay_b,"R3q_taudecay_b/I");
      ExTree->Branch("R3q_taudecay_c",&R3q_taudecay_c,"R3q_taudecay_c/I");
   }




   ExTree->Branch("goodRun", &goodRun, "goodRun/b");
   ExTree->Branch("Flag", &Flag, "Flag/b");

   ExTree->Branch("MET_eta", &MET_eta, "MET_eta/F");
   ExTree->Branch("MET_et", &MET_et, "MET_et/F");


   ExTree->Branch("Mj",&Mj,"Mj/F");
   ExTree->Branch("Mj_2",&Mj_2,"Mj_2/F");
   ExTree->Branch("Mj_3",&Mj_3,"Mj_3/F");
   ExTree->Branch("Mj_4",&Mj_4,"Mj_4/F");


      

   ExTree->Branch("num_ak4jetsex", &num_ak4jetsex, "num_ak4jetsex/I");
   ExTree->Branch("num_ak4jetsin", &num_ak4jetsin, "num_ak4jetsin/I");


   ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
   ExTree->Branch("pileupWeight", &pileupWeight, "pileupWeight/D");

      
   ExTree->Branch("MJJ", &MJJ, "MJJ/D");
      
   ExTree->Branch("event",&event,"event/L");
   ExTree->Branch("lumi",&ls,"lumi/I");
   ExTree->Branch("nPV",&nVtx,"nPV/I");

   ExTree->Branch("weight", &weight, "weight/D");
   
   ExTree->Branch("Mj_max",&Mj_max,"Mj_max/F");
   ExTree->Branch("Mj_mid",&Mj_mid,"Mj_mid/F");
   ExTree->Branch("Mj_min",&Mj_min,"Mj_min/F");
   ExTree->Branch("PTj_max",&PTj_max,"PTj_max/F");
   ExTree->Branch("PTj_mid",&PTj_mid,"PTj_mid/F");
   ExTree->Branch("PTj_min",&PTj_min,"PTj_min/F");
   

   ExTree->Branch("Etaj_max",&Etaj_max,"Etaj_max/F");
   ExTree->Branch("Etaj_mid",&Etaj_mid,"Etaj_mid/F");
   ExTree->Branch("Etaj_min",&Etaj_min,"Etaj_min/F");
   ExTree->Branch("Phij_max",&Phij_max,"Phij_max/F");
   ExTree->Branch("Phij_mid",&Phij_mid,"Phij_mid/F");
   ExTree->Branch("Phij_min",&Phij_min,"Phij_min/F");
   
   ExTree->Branch("PTj",&PTj,"PTj/F");
   ExTree->Branch("PTj_2",&PTj_2,"PTj_2/D");
   ExTree->Branch("PTj_3",&PTj_3,"PTj_3/D");
   ExTree->Branch("PTj_4",&PTj_4,"PTj_4/F");
   ExTree->Branch("Etaj",&Etaj,"Etaj/F");
   ExTree->Branch("Etaj_2",&Etaj_2,"Etaj_2/F");
   ExTree->Branch("Etaj_3",&Etaj_3,"Etaj_3/F");
   ExTree->Branch("Etaj_4",&Etaj_4,"Etaj_4/F");
   ExTree->Branch("Phij",&Phij,"Phij/F");
   ExTree->Branch("Phij_2",&Phij_2,"Phij_2/F");
   ExTree->Branch("Phij_4",&Phij_4,"Phij_4/F");
   ExTree->Branch("Phij_3",&Phij_3,"Phij_3/F");

   ExTree->Branch("ST",&ST,"ST/F");
   ExTree->Branch("HT",&HT,"HT/F");
   ExTree->Branch("Nj4",&Nj4,"Nj4/I");
   ExTree->Branch("Nj8",&Nj8,"Nj8/I");
   ExTree->Branch("MJJJ",&MJJJ,"MJJJ/F");

   ExTree->Branch("Nj4_ex",&Nj4_ex,"Nj4_ex/I");
   ExTree->Branch("Nj4_in",&Nj4_in,"Nj4_in/I");

   ExTree->Branch("MET_et",&MET_et,"MET_et/D");
   ExTree->Branch("MET_phi",&MET_phi,"MET_phi/F");


   ExTree->Branch("Mj_a",&Mj_a,"Mj_a/F");
   ExTree->Branch("Mj_b",&Mj_b,"Mj_b/F");
   ExTree->Branch("Mj_c",&Mj_c,"Mj_c/F");
   ExTree->Branch("PTj_a",&PTj_a,"PTj_a/F");
   ExTree->Branch("PTj_b",&PTj_b,"PTj_b/F");
   ExTree->Branch("PTj_c",&PTj_c,"PTj_c/F");
   ExTree->Branch("Etaj_a",&Etaj_a,"Etaj_a/F");
   ExTree->Branch("Etaj_b",&Etaj_b,"Etaj_b/F");
   ExTree->Branch("Etaj_c",&Etaj_c,"Etaj_c/F");
   ExTree->Branch("Phij_a",&Phij_a,"Phij_a/F");
   ExTree->Branch("Phij_b",&Phij_b,"Phij_b/F");
   ExTree->Branch("Phij_c",&Phij_c,"Phij_c/F");

   ExTree->Branch("Mj_Pneta",&Mj_Pneta,"Mj_Pneta/F");
   ExTree->Branch("Mj_Pnetb",&Mj_Pnetb,"Mj_Pnetb/F");
   ExTree->Branch("Mj_Pnetc",&Mj_Pnetc,"Mj_Pnetc/F");
   ExTree->Branch("PTj_Pneta",&PTj_Pneta,"PTj_Pneta/F");
   ExTree->Branch("PTj_Pnetb",&PTj_Pnetb,"PTj_Pnetb/F");
   ExTree->Branch("PTj_Pnetc",&PTj_Pnetc,"PTj_Pnetc/F");
   ExTree->Branch("Etaj_Pneta",&Etaj_Pneta,"Etaj_Pneta/F");
   ExTree->Branch("Etaj_Pnetb",&Etaj_Pnetb,"Etaj_Pnetb/F");
   ExTree->Branch("Etaj_Pnetc",&Etaj_Pnetc,"Etaj_Pnetc/F");
   ExTree->Branch("Phij_Pneta",&Phij_Pneta,"Phij_Pneta/F");
   ExTree->Branch("Phij_Pnetb",&Phij_Pnetb,"Phij_Pnetb/F");
   ExTree->Branch("Phij_Pnetc",&Phij_Pnetc,"Phij_Pnetc/F");

   ExTree->Branch("PartNet_MD_W_Pneta",&PartNet_MD_W_Pneta,"PartNet_MD_W_Pneta/F");
   ExTree->Branch("PartNet_MD_W_Pnetb",&PartNet_MD_W_Pnetb,"PartNet_MD_W_Pnetb/F");
   ExTree->Branch("PartNet_MD_W_Pnetc",&PartNet_MD_W_Pnetc,"PartNet_MD_W_Pnetc/F");


   ExTree->Branch("nb_l_deep_ex",&nb_l_deep_ex,"nb_l_deep_ex/I");
   ExTree->Branch("nb_m_deep_ex",&nb_m_deep_ex,"nb_m_deep_ex/I");
   ExTree->Branch("nb_t_deep_ex",&nb_t_deep_ex,"nb_t_deep_ex/I");
   ExTree->Branch("nb_l_deep_in",&nb_l_deep_in,"nb_l_deep_in/I");
   ExTree->Branch("nb_m_deep_in",&nb_m_deep_in,"nb_m_deep_in/I");
   ExTree->Branch("nb_t_deep_in",&nb_t_deep_in,"nb_t_deep_in/I");

   // define ExTree for gKK 0lepton output

   ExTree->Branch("deepHWW_probHww3q_a",&deepHWW_probHww3q_a,"deepHWW_probHww3q_a/F");
   ExTree->Branch("deepHWW_probHww4q_a",&deepHWW_probHww4q_a,"deepHWW_probHww4q_a/F");
   ExTree->Branch("deepHWW_probHww4q3qvsQCD_a",&deepHWW_probHww4q3qvsQCD_a,"deepHWW_probHww4q3qvsQCD_a/F");
   ExTree->Branch("deepHWW_probHww4qvsQCD_a",&deepHWW_probHww4qvsQCD_a,"deepHWW_probHww4qvsQCD_a/F");
   ExTree->Branch("deepHWW_probHwwevqq_a",&deepHWW_probHwwevqq_a,"deepHWW_probHwwevqq_a/F");
   ExTree->Branch("deepHWW_probHwwmvqq_a",&deepHWW_probHwwmvqq_a,"deepHWW_probHwwmvqq_a/F");
   ExTree->Branch("deepHWW_probHwwhadtauvqq_a",&deepHWW_probHwwhadtauvqq_a,"deepHWW_probHwwhadtauvqq_a/F");
   ExTree->Branch("deepHWW_probHwwleptauevqq_a",&deepHWW_probHwwleptauevqq_a,"deepHWW_probHwwleptauevqq_a/F");
   ExTree->Branch("deepHWW_probHwwleptaumvqq_a",&deepHWW_probHwwleptaumvqq_a,"deepHWW_probHwwleptaumvqq_a/F");
   ExTree->Branch("deepHWW_probQCDb_a",&deepHWW_probQCDb_a,"deepHWW_probQCDb_a/F");
   ExTree->Branch("deepHWW_probQCDbb_a",&deepHWW_probQCDbb_a,"deepHWW_probQCDbb_a/F");
   ExTree->Branch("deepHWW_probQCDc_a",&deepHWW_probQCDc_a,"deepHWW_probQCDc_a/F");
   ExTree->Branch("deepHWW_probQCDcc_a",&deepHWW_probQCDcc_a,"deepHWW_probQCDcc_a/F");
   ExTree->Branch("deepHWW_probQCDothers_a",&deepHWW_probQCDothers_a,"deepHWW_probQCDothers_a/F");
   ExTree->Branch("deepHWW_H4q_a",&deepHWW_H4q_a,"deepHWW_H4q_a/F");

   ExTree->Branch("deepHWW_probHww3q_b",&deepHWW_probHww3q_b,"deepHWW_probHww3q_b/F");
   ExTree->Branch("deepHWW_probHww4q_b",&deepHWW_probHww4q_b,"deepHWW_probHww4q_b/F");
   ExTree->Branch("deepHWW_probHww4q3qvsQCD_b",&deepHWW_probHww4q3qvsQCD_b,"deepHWW_probHww4q3qvsQCD_b/F");
   ExTree->Branch("deepHWW_probHww4qvsQCD_b",&deepHWW_probHww4qvsQCD_b,"deepHWW_probHww4qvsQCD_b/F");
   ExTree->Branch("deepHWW_probHwwevqq_b",&deepHWW_probHwwevqq_b,"deepHWW_probHwwevqq_b/F");
   ExTree->Branch("deepHWW_probHwwmvqq_b",&deepHWW_probHwwmvqq_b,"deepHWW_probHwwmvqq_b/F");
   ExTree->Branch("deepHWW_probHwwhadtauvqq_b",&deepHWW_probHwwhadtauvqq_b,"deepHWW_probHwwhadtauvqq_b/F");
   ExTree->Branch("deepHWW_probHwwleptauevqq_b",&deepHWW_probHwwleptauevqq_b,"deepHWW_probHwwleptauevqq_b/F");
   ExTree->Branch("deepHWW_probHwwleptaumvqq_b",&deepHWW_probHwwleptaumvqq_b,"deepHWW_probHwwleptaumvqq_b/F");
   ExTree->Branch("deepHWW_probQCDb_b",&deepHWW_probQCDb_b,"deepHWW_probQCDb_b/F");
   ExTree->Branch("deepHWW_probQCDbb_b",&deepHWW_probQCDbb_b,"deepHWW_probQCDbb_b/F");
   ExTree->Branch("deepHWW_probQCDc_b",&deepHWW_probQCDc_b,"deepHWW_probQCDc_b/F");
   ExTree->Branch("deepHWW_probQCDcc_b",&deepHWW_probQCDcc_b,"deepHWW_probQCDcc_b/F");
   ExTree->Branch("deepHWW_probQCDothers_b",&deepHWW_probQCDothers_b,"deepHWW_probQCDothers_b/F");
   ExTree->Branch("deepHWW_H4q_b",&deepHWW_H4q_b,"deepHWW_H4q_b/F");

   ExTree->Branch("deepHWW_probHww3q_c",&deepHWW_probHww3q_c,"deepHWW_probHww3q_c/F");
   ExTree->Branch("deepHWW_probHww4q_c",&deepHWW_probHww4q_c,"deepHWW_probHww4q_c/F");
   ExTree->Branch("deepHWW_probHww4q3qvsQCD_c",&deepHWW_probHww4q3qvsQCD_c,"deepHWW_probHww4q3qvsQCD_c/F");
   ExTree->Branch("deepHWW_probHww4qvsQCD_c",&deepHWW_probHww4qvsQCD_c,"deepHWW_probHww4qvsQCD_c/F");
   ExTree->Branch("deepHWW_probHwwevqq_c",&deepHWW_probHwwevqq_c,"deepHWW_probHwwevqq_c/F");
   ExTree->Branch("deepHWW_probHwwmvqq_c",&deepHWW_probHwwmvqq_c,"deepHWW_probHwwmvqq_c/F");
   ExTree->Branch("deepHWW_probHwwhadtauvqq_c",&deepHWW_probHwwhadtauvqq_c,"deepHWW_probHwwhadtauvqq_c/F");
   ExTree->Branch("deepHWW_probHwwleptauevqq_c",&deepHWW_probHwwleptauevqq_c,"deepHWW_probHwwleptauevqq_c/F");
   ExTree->Branch("deepHWW_probHwwleptaumvqq_c",&deepHWW_probHwwleptaumvqq_c,"deepHWW_probHwwleptaumvqq_c/F");
   ExTree->Branch("deepHWW_probQCDb_c",&deepHWW_probQCDb_c,"deepHWW_probQCDb_c/F");
   ExTree->Branch("deepHWW_probQCDbb_c",&deepHWW_probQCDbb_c,"deepHWW_probQCDbb_c/F");
   ExTree->Branch("deepHWW_probQCDc_c",&deepHWW_probQCDc_c,"deepHWW_probQCDc_c/F");
   ExTree->Branch("deepHWW_probQCDcc_c",&deepHWW_probQCDcc_c,"deepHWW_probQCDcc_c/F");
   ExTree->Branch("deepHWW_probQCDothers_c",&deepHWW_probQCDothers_c,"deepHWW_probQCDothers_c/F");
   ExTree->Branch("deepHWW_H4q_c",&deepHWW_H4q_c,"deepHWW_H4q_c/F");

   ExTree->Branch("Mj_HWWa",&Mj_HWWa,"Mj_HWWa/F");
   ExTree->Branch("Mj_HWWb",&Mj_HWWb,"Mj_HWWb/F");
   ExTree->Branch("Mj_HWWc",&Mj_HWWc,"Mj_HWWc/F");

   ExTree->Branch("PTj_HWWa",&PTj_HWWa,"PTj_HWWa/F");
   ExTree->Branch("PTj_HWWb",&PTj_HWWb,"PTj_HWWb/F");
   ExTree->Branch("PTj_HWWc",&PTj_HWWc,"PTj_HWWc/F");

   ExTree->Branch("Etaj_HWWa",&Etaj_HWWa,"Etaj_HWWa/F");
   ExTree->Branch("Etaj_HWWb",&Etaj_HWWb,"Etaj_HWWb/F");
   ExTree->Branch("Etaj_HWWc",&Etaj_HWWc,"Etaj_HWWc/F");

   ExTree->Branch("Phij_HWWa",&Phij_HWWa,"Phij_HWWa/F");
   ExTree->Branch("Phij_HWWb",&Phij_HWWb,"Phij_HWWb/F");
   ExTree->Branch("Phij_HWWc",&Phij_HWWc,"Phij_HWWc/F");

   ExTree->Branch("deepHWWMDV1_H4qvsQCD_a",&deepHWWMDV1_H4qvsQCD_a,"deepHWWMDV1_H4qvsQCD_a/F");
   ExTree->Branch("deepHWWMDV1_HallvsQCD_a",&deepHWWMDV1_HallvsQCD_a,"deepHWWMDV1_HallvsQCD_a/F");
   ExTree->Branch("deepHWWMDV1_H4q3qvsQCD_a",&deepHWWMDV1_H4q3qvsQCD_a,"deepHWWMDV1_H4q3qvsQCD_a/F");
   ExTree->Branch("deepHWWMDV1_HevqqvsQCD_a",&deepHWWMDV1_HevqqvsQCD_a,"deepHWWMDV1_HevqqvsQCD_a/F");
   ExTree->Branch("deepHWWMDV1_HmvqqvsQCD_a",&deepHWWMDV1_HmvqqvsQCD_a,"deepHWWMDV1_HmvqqvsQCD_a/F");
   ExTree->Branch("deepHWWMDV1_HtauevqqvsQCD_a",&deepHWWMDV1_HtauevqqvsQCD_a,"deepHWWMDV1_HtauevqqvsQCD_a/F");
   ExTree->Branch("deepHWWMDV1_HtaumvqqvsQCD_a",&deepHWWMDV1_HtaumvqqvsQCD_a,"deepHWWMDV1_HtaumvqqvsQCD_a/F");
   ExTree->Branch("deepHWWMDV1_HhadtauvqqvsQCD_a",&deepHWWMDV1_HhadtauvqqvsQCD_a,"deepHWWMDV1_HhadtauvqqvsQCD_a/F");

   ExTree->Branch("deepHWWMDV1_HallvsQCD_b",&deepHWWMDV1_HallvsQCD_b,"deepHWWMDV1_HallvsQCD_b/F");
   ExTree->Branch("deepHWWMDV1_H4qvsQCD_b",&deepHWWMDV1_H4qvsQCD_b,"deepHWWMDV1_H4qvsQCD_b/F");
   ExTree->Branch("deepHWWMDV1_H4q3qvsQCD_b",&deepHWWMDV1_H4q3qvsQCD_b,"deepHWWMDV1_H4q3qvsQCD_b/F");
   ExTree->Branch("deepHWWMDV1_HevqqvsQCD_b",&deepHWWMDV1_HevqqvsQCD_b,"deepHWWMDV1_HevqqvsQCD_b/F");
   ExTree->Branch("deepHWWMDV1_HmvqqvsQCD_b",&deepHWWMDV1_HmvqqvsQCD_b,"deepHWWMDV1_HmvqqvsQCD_b/F");
   ExTree->Branch("deepHWWMDV1_HtauevqqvsQCD_b",&deepHWWMDV1_HtauevqqvsQCD_b,"deepHWWMDV1_HtauevqqvsQCD_b/F");
   ExTree->Branch("deepHWWMDV1_HtaumvqqvsQCD_b",&deepHWWMDV1_HtaumvqqvsQCD_b,"deepHWWMDV1_HtaumvqqvsQCD_b/F");
   ExTree->Branch("deepHWWMDV1_HhadtauvqqvsQCD_b",&deepHWWMDV1_HhadtauvqqvsQCD_b,"deepHWWMDV1_HhadtauvqqvsQCD_b/F");

   ExTree->Branch("deepHWWMDV1_HallvsQCD_c",&deepHWWMDV1_HallvsQCD_c,"deepHWWMDV1_HallvsQCD_c/F");
   ExTree->Branch("deepHWWMDV1_H4qvsQCD_c",&deepHWWMDV1_H4qvsQCD_c,"deepHWWMDV1_H4qvsQCD_c/F");
   ExTree->Branch("deepHWWMDV1_H4q3qvsQCD_c",&deepHWWMDV1_H4q3qvsQCD_c,"deepHWWMDV1_H4q3qvsQCD_c/F");
   ExTree->Branch("deepHWWMDV1_HevqqvsQCD_c",&deepHWWMDV1_HevqqvsQCD_c,"deepHWWMDV1_HevqqvsQCD_c/F");
   ExTree->Branch("deepHWWMDV1_HmvqqvsQCD_c",&deepHWWMDV1_HmvqqvsQCD_c,"deepHWWMDV1_HmvqqvsQCD_c/F");
   ExTree->Branch("deepHWWMDV1_HtauevqqvsQCD_c",&deepHWWMDV1_HtauevqqvsQCD_c,"deepHWWMDV1_HtauevqqvsQCD_c/F");
   ExTree->Branch("deepHWWMDV1_HtaumvqqvsQCD_c",&deepHWWMDV1_HtaumvqqvsQCD_c,"deepHWWMDV1_HtaumvqqvsQCD_c/F");
   ExTree->Branch("deepHWWMDV1_HhadtauvqqvsQCD_c",&deepHWWMDV1_HhadtauvqqvsQCD_c,"deepHWWMDV1_HhadtauvqqvsQCD_c/F");

 
 




   
   // define ExTree for HWW output.

   ExTree->Branch("MET_phi_NoXYCorr",&MET_phi_NoXYCorr,"MET_phi_NoXYCorr/F");
   ExTree->Branch("MET_et_NoXYCorr",&MET_et_NoXYCorr,"MET_et_NoXYCorr/F");
   
   ExTree->Branch("Jet_mass_nom_out",&Jet_mass_nom_out);
   ExTree->Branch("Jet_pt_nom_out",&Jet_pt_nom_out);

   ExTree->Branch("Jet_pt_out",&Jet_pt_out);
   ExTree->Branch("Jet_eta_out",&Jet_eta_out);
   ExTree->Branch("Jet_phi_out",&Jet_phi_out);
   ExTree->Branch("Jet_mass_out",&Jet_mass_out);
   ExTree->Branch("Jet_btagDeepFlavB_out",&Jet_btagDeepFlavB_out);
   ExTree->Branch("Jet_jetId_out",&Jet_jetId_out);
   ExTree->Branch("Jet_hadronFlavour_out",&Jet_hadronFlavour_out);

   ExTree->Branch("Mj_corr_Pneta",&Mj_corr_Pneta,"Mj_corr_Pneta/F");
   ExTree->Branch("Mj_corr_Pnetb",&Mj_corr_Pnetb,"Mj_corr_Pnetb/F");
   ExTree->Branch("Mj_corr_Pnetc",&Mj_corr_Pnetc,"Mj_corr_Pnetc/F");

   ExTree->Branch("Mj_corr_a",&Mj_corr_a,"Mj_corr_a/F");
   ExTree->Branch("Mj_corr_b",&Mj_corr_b,"Mj_corr_b/F");
   ExTree->Branch("Mj_corr_c",&Mj_corr_c,"Mj_corr_c/F");

   ExTree->Branch("Mj_corr_max",&Mj_corr_max,"Mj_corr_max/F");
   ExTree->Branch("Mj_corr_mid",&Mj_corr_mid,"Mj_corr_mid/F");
   ExTree->Branch("Mj_corr_min",&Mj_corr_min,"Mj_corr_min/F");

   ExTree->Branch("Mj_corr",&Mj_corr,"Mj_corr/F");
   ExTree->Branch("Mj_corr_2",&Mj_corr_2,"Mj_corr_2/F");
   ExTree->Branch("Mj_corr_3",&Mj_corr_3,"Mj_corr_3/F");

   ExTree->Branch("MET_T1Smear_phi_XYcorr",&MET_T1Smear_phi_XYcorr,"MET_T1Smear_phi_XYcorr/F");
   ExTree->Branch("MET_T1Smear_pt_XYcorr",&MET_T1Smear_pt_XYcorr,"MET_T1Smear_pt_XYcorr/F");
}
#endif
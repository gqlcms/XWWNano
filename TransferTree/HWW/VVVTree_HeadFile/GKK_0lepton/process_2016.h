#ifndef _GKK_0lepton__process_2016_
#define _GKK_0lepton__process_2016_

void EDBR2PKUTree::initFatJet_Collection_2016(){
    FatJet_P FatJet_P_ = {
        &v_FatJet_pt_,
        &v_FatJet_eta_,
        &v_FatJet_phi_,
        &v_FatJet_msoftdrop_,
        &v_FatJet_jetId_,
        &v_FatJet_particleNetMD_QCD_,
        &v_FatJet_particleNetMD_Xbb_,
        &v_FatJet_particleNetMD_Xcc_,
        &v_FatJet_particleNetMD_Xqq_,
        &v_FatJet_particleNet_H4qvsQCD_,
        &v_FatJet_particleNet_HbbvsQCD_,
        &v_FatJet_particleNet_HccvsQCD_,
        &v_FatJet_particleNet_QCD_,
        &v_FatJet_particleNet_TvsQCD_,
        &v_FatJet_particleNet_WvsQCD_,
        &v_FatJet_particleNet_ZvsQCD_,
        &v_FatJet_deepTagMD_probHbb_,
        &v_FatJet_deepTagMD_probHcc_,
        &v_FatJet_deepTagMD_probHqqqq_,
        &v_FatJet_deepTagMD_probQCDb_,
        &v_FatJet_deepTagMD_probQCDbb_,
        &v_FatJet_deepTagMD_probQCDc_,
        &v_FatJet_deepTagMD_probQCDcc_,
        &v_FatJet_deepTagMD_probQCDothers_,
        &v_FatJet_deepTagMD_probTbc_,
        &v_FatJet_deepTagMD_probTbcq_,
        &v_FatJet_deepTagMD_probTbq_,
        &v_FatJet_deepTagMD_probTbqq_,
        &v_FatJet_deepTagMD_probWcq_,
        &v_FatJet_deepTagMD_probWqq_,
        &v_FatJet_deepTagMD_probZbb_,
        &v_FatJet_deepTagMD_probZcc_,
        &v_FatJet_deepTagMD_probZqq_,
        &v_FatJet_deepTag_probHbb_,
        &v_FatJet_deepTag_probHcc_,
        &v_FatJet_deepTag_probHqqqq_,
        &v_FatJet_deepTag_probQCDb_,
        &v_FatJet_deepTag_probQCDbb_,
        &v_FatJet_deepTag_probQCDc_,
        &v_FatJet_deepTag_probQCDcc_,
        &v_FatJet_deepTag_probQCDothers_,
        &v_FatJet_deepTag_probTbc_,
        &v_FatJet_deepTag_probTbcq_,
        &v_FatJet_deepTag_probTbq_,
        &v_FatJet_deepTag_probTbqq_,
        &v_FatJet_deepTag_probWcq_,
        &v_FatJet_deepTag_probWqq_,
        &v_FatJet_deepTag_probZbb_,
        &v_FatJet_deepTag_probZcc_,
        &v_FatJet_tau1_,
        &v_FatJet_tau2_,
        &v_FatJet_tau3_,
        &v_FatJet_tau4_,
        &v_FatJet_msoftdrop_raw_,
        &v_FatJet_msoftdrop_nom_,
        &v_FatJet_msoftdrop_corr_JMR_,
        &v_FatJet_msoftdrop_corr_JMS_,
        &v_FatJet_msoftdrop_corr_PUPPI_,
        &v_FatJet_ParticleNetMDraw_probQCDb_,
        &v_FatJet_ParticleNetMDraw_probQCDbb_,
        &v_FatJet_ParticleNetMDraw_probQCDc_,
        &v_FatJet_ParticleNetMDraw_probQCDcc_,
        &v_FatJet_ParticleNetMDraw_probQCDothers_,
        &v_FatJet_ParticleNetMDraw_probXbb_,
        &v_FatJet_ParticleNetMDraw_probXcc_,
        &v_FatJet_ParticleNetMDraw_probXqq_,
        &v_FatJet_pt_nom_,

        //New tagger.
        &v_FatJet_deepHWWMDV1_probHww3q_,
        &v_FatJet_deepHWWMDV1_probHww4q_,
        &v_FatJet_deepHWWMDV1_probHww4q3qvsQCD_,
        &v_FatJet_deepHWWMDV1_probHww4qvsQCD_,
        &v_FatJet_deepHWWMDV1_probHwwevqq_,
        &v_FatJet_deepHWWMDV1_probHwwmvqq_,
        &v_FatJet_deepHWWMDV1_probHwwhadtauvqq_,
        &v_FatJet_deepHWWMDV1_probHwwleptauevqq_,
        &v_FatJet_deepHWWMDV1_probHwwleptaumvqq_,
        &v_FatJet_deepHWWMDV1_probQCDb_,
        &v_FatJet_deepHWWMDV1_probQCDbb_,
        &v_FatJet_deepHWWMDV1_probQCDc_,
        &v_FatJet_deepHWWMDV1_probQCDcc_,
        &v_FatJet_deepHWWMDV1_probQCDothers_,
    } ;
    FatJets = FatJet_Collection( FatJet_P_, 3, 1 );
}

void EDBR2PKUTree::GKK_process_1_2016(Long64_t jentry, TString YEAR) {
    Jets_GetEntry(jentry);
    fatJets_GetEntry(jentry);

    initFatJet_Collection_2016();
    Nj8 = FatJets.size();

    FatJets_P4_PTOrder_2016();
    FatJets_P4_MASSOrder_2016();
    FatJets_P4_DEEP_MD_W_Order_2016();
    FatJets_P4_PNet_MD_W_Order_2016();
    FatJets_P4_HWWH4q_Order_2016();

    MJJ_MJJJf();
    HT_ST();

}

void EDBR2PKUTree::GKK_process_2_2016(Long64_t jentry, TString YEAR) {

    initJet_Collection(YEAR);

    FatJets_DEEP_MD_W_Order();
    FatJets_PNet_MD_W_Order();
    FatJets_HWWH4q_Order(); 
    
    Nbtagf();

    METf_2016();

}

void EDBR2PKUTree::FatJets_P4_PTOrder_2016() {
    PTj  = FatJets.Get("PT","pt" , 0);
    Etaj = FatJets.Get("PT","eta", 0);
    Phij = FatJets.Get("PT","phi", 0);
    Mj   = FatJets.Get("PT","msoftdrop", 0);

    PTj_2  = FatJets.Get("PT","pt" , 1);
    Etaj_2 = FatJets.Get("PT","eta", 1);
    Phij_2 = FatJets.Get("PT","phi", 1);
    Mj_2   = FatJets.Get("PT","msoftdrop", 1);

    PTj_3  = FatJets.Get("PT","pt" , 2);
    Etaj_3 = FatJets.Get("PT","eta", 2);
    Phij_3 = FatJets.Get("PT","phi", 2);
    Mj_3   = FatJets.Get("PT","msoftdrop", 2);

}

void EDBR2PKUTree::FatJets_P4_MASSOrder_2016() {
    PTj_max  = FatJets.Get("Mass","pt" , 0);
    Etaj_max = FatJets.Get("Mass","eta", 0);
    Phij_max = FatJets.Get("Mass","phi", 0);
    Mj_max   = FatJets.Get("Mass","msoftdrop", 0);

    PTj_mid  = FatJets.Get("Mass","pt" , 1);
    Etaj_mid = FatJets.Get("Mass","eta", 1);
    Phij_mid = FatJets.Get("Mass","phi", 1);
    Mj_mid   = FatJets.Get("Mass","msoftdrop", 1);

    PTj_min  = FatJets.Get("Mass","pt" , 2);
    Etaj_min = FatJets.Get("Mass","eta", 2);
    Phij_min = FatJets.Get("Mass","phi", 2);
    Mj_min   = FatJets.Get("Mass","msoftdrop", 2);
}

void EDBR2PKUTree::FatJets_P4_DEEP_MD_W_Order_2016() {
    PTj_a  = FatJets.Get("deep-W-MD","pt" , 0);
    Etaj_a = FatJets.Get("deep-W-MD","eta", 0);
    Phij_a = FatJets.Get("deep-W-MD","phi", 0);
    Mj_a   = FatJets.Get("deep-W-MD","msoftdrop", 0);

    PTj_b  = FatJets.Get("deep-W-MD","pt" , 1);
    Etaj_b = FatJets.Get("deep-W-MD","eta", 1);
    Phij_b = FatJets.Get("deep-W-MD","phi", 1);
    Mj_b   = FatJets.Get("deep-W-MD","msoftdrop", 1);

    PTj_c  = FatJets.Get("deep-W-MD","pt" , 2);
    Etaj_c = FatJets.Get("deep-W-MD","eta", 2);
    Phij_c = FatJets.Get("deep-W-MD","phi", 2);
    Mj_c   = FatJets.Get("deep-W-MD","msoftdrop", 2);
}

void EDBR2PKUTree::FatJets_P4_PNet_MD_W_Order_2016() {
    PTj_Pneta  = FatJets.Get("PNet-W-MD","pt" , 0);
    Etaj_Pneta = FatJets.Get("PNet-W-MD","eta", 0);
    Phij_Pneta = FatJets.Get("PNet-W-MD","phi", 0);
    Mj_Pneta   = FatJets.Get("PNet-W-MD","msoftdrop", 0);

    PTj_Pnetb  = FatJets.Get("PNet-W-MD","pt" , 1);
    Etaj_Pnetb = FatJets.Get("PNet-W-MD","eta", 1);
    Phij_Pnetb = FatJets.Get("PNet-W-MD","phi", 1);
    Mj_Pnetb   = FatJets.Get("PNet-W-MD","msoftdrop", 1);

    PTj_Pnetc  = FatJets.Get("PNet-W-MD","pt" , 2);
    Etaj_Pnetc = FatJets.Get("PNet-W-MD","eta", 2);
    Phij_Pnetc = FatJets.Get("PNet-W-MD","phi", 2);
    Mj_Pnetc   = FatJets.Get("PNet-W-MD","msoftdrop", 2);
}

void EDBR2PKUTree::FatJets_P4_HWWH4q_Order_2016() {
    PTj_HWWa  = FatJets.Get("HWW-H4q-MD","pt" , 0);
    Etaj_HWWa = FatJets.Get("HWW-H4q-MD","eta", 0);
    Phij_HWWa = FatJets.Get("HWW-H4q-MD","phi", 0);
    Mj_HWWa   = FatJets.Get("HWW-H4q-MD","msoftdrop", 0);

    PTj_HWWb  = FatJets.Get("HWW-H4q-MD","pt" , 1);
    Etaj_HWWb = FatJets.Get("HWW-H4q-MD","eta", 1);
    Phij_HWWb = FatJets.Get("HWW-H4q-MD","phi", 1);
    Mj_HWWb   = FatJets.Get("HWW-H4q-MD","msoftdrop", 1);

    PTj_HWWc  = FatJets.Get("HWW-H4q-MD","pt" , 2);
    Etaj_HWWc = FatJets.Get("HWW-H4q-MD","eta", 2);
    Phij_HWWc = FatJets.Get("HWW-H4q-MD","phi", 2);
    Mj_HWWc   = FatJets.Get("HWW-H4q-MD","msoftdrop", 2);
}

void EDBR2PKUTree::METf_2016() {
    MET_et_NoXYCorr = MET_pt ;
    MET_phi_NoXYCorr = MET_phi ;

    int  runnb = 0 ;
    bool isMC  = true ;
    if(IsData == 0){
        isMC  = false ;
        runnb = run;
    }
    TString year;
    //  yUL2016MCAPV,  yUL2016MCnonAPV, yUL2017MC,yUL2018MC
    if( YEAR_g.Contains("2016preVFP") ){
        year = "2016APV";
    }
    if( YEAR_g.Contains("2016postVFP") ){
        year = "2016nonAPV";
    }
    if( YEAR_g.Contains("2017") ){
        year = "2017";
    }
    if( YEAR_g.Contains("2018") ){
        year = "2018";
    }
    std::pair<double,double> MET_T1Smear_XYcorr = METXYCorr_Met_MetPhi( MET_pt, MET_phi, runnb, year, isMC, PV_npvs, true);
    MET_et  = MET_T1Smear_XYcorr.first; 
    MET_phi = MET_T1Smear_XYcorr.second;
}

#endif

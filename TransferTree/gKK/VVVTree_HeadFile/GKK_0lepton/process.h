#ifndef _GKK_0lepton__process_
#define _GKK_0lepton__process_


void EDBR2PKUTree::initFatJet_Collection(){
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

    } ;
    FatJets = FatJet_Collection( FatJet_P_, 3, 2 );
}

void EDBR2PKUTree::GKK_process_1(Long64_t jentry, TString YEAR) {
    Jets_GetEntry(jentry);
    fatJets_GetEntry(jentry);

    initFatJet_Collection();
    Nj8 = FatJets.size();

    FatJets_P4_PTOrder();
    FatJets_P4_MASSOrder();
    FatJets_P4_DEEP_MD_W_Order();
    FatJets_P4_PNet_MD_W_Order();

    MJJ_MJJJf();
    METf();
    HT_ST();

}

void EDBR2PKUTree::initJet_Collection(TString YEAR){
    Jet_P Jet_P_ = {
        &v_Jet_pt_,
        &v_Jet_eta_,
        &v_Jet_phi_,
        &v_Jet_mass_,
        &v_Jet_btagDeepFlavB_,
        &v_Jet_jetId_,
        &v_Jet_hadronFlavour_,
        &v_Jet_pt_nom_,
        &v_Jet_mass_nom_,
    };
    
    vector<TLorentzVector> FatJets_;
    TLorentzVector AK8;
    if(PTj > 200){
        AK8.SetPtEtaPhiM( PTj, Etaj, Phij, Mj );
        FatJets_.push_back(AK8);
    }
    if(PTj_2 > 200){
        AK8.SetPtEtaPhiM( PTj_2, Etaj_2, Phij_2, Mj_2 );
        FatJets_.push_back(AK8);
    }
    if(PTj_3 > 200){
        AK8.SetPtEtaPhiM( PTj_3, Etaj_3, Phij_3, Mj_3 );
        FatJets_.push_back(AK8);
    }

    Jets = Jet_Collection( Jet_P_, 1, YEAR, FatJets_);
}

void EDBR2PKUTree::GKK_process_2(Long64_t jentry, TString YEAR) {

    initJet_Collection(YEAR);

    FatJets_DEEP_MD_W_Order();
    FatJets_PNet_MD_W_Order();
    
    Nbtagf();


}

void EDBR2PKUTree::FatJets_P4_PTOrder() {
    PTj  = FatJets.Get("pt_nom","pt_nom" , 0);
    Etaj = FatJets.Get("pt_nom","eta", 0);
    Phij = FatJets.Get("pt_nom","phi", 0);
    Mj   = FatJets.Get("pt_nom","msoftdrop_nom_noJWS", 0);
    Mj_corr   = FatJets.Get("pt_nom","msoftdrop_nom", 0);

    PTj_2  = FatJets.Get("pt_nom","pt_nom" , 1);
    Etaj_2 = FatJets.Get("pt_nom","eta", 1);
    Phij_2 = FatJets.Get("pt_nom","phi", 1);
    Mj_2   = FatJets.Get("pt_nom","msoftdrop_nom_noJWS", 1);
    Mj_corr_2   = FatJets.Get("pt_nom","msoftdrop_nom", 1);

    PTj_3  = FatJets.Get("pt_nom","pt_nom" , 2);
    Etaj_3 = FatJets.Get("pt_nom","eta", 2);
    Phij_3 = FatJets.Get("pt_nom","phi", 2);
    Mj_3   = FatJets.Get("pt_nom","msoftdrop_nom_noJWS", 2);
    Mj_corr_3   = FatJets.Get("pt_nom","msoftdrop_nom", 2);
}

void EDBR2PKUTree::FatJets_P4_MASSOrder() {
    PTj_max  = FatJets.Get("Mass","pt_nom" , 0);
    Etaj_max = FatJets.Get("Mass","eta", 0);
    Phij_max = FatJets.Get("Mass","phi", 0);
    Mj_max   = FatJets.Get("Mass","msoftdrop_nom_noJWS", 0);
    Mj_corr_max   = FatJets.Get("Mass","msoftdrop_nom", 0);

    PTj_mid  = FatJets.Get("Mass","pt_nom" , 1);
    Etaj_mid = FatJets.Get("Mass","eta", 1);
    Phij_mid = FatJets.Get("Mass","phi", 1);
    Mj_mid   = FatJets.Get("Mass","msoftdrop_nom_noJWS", 1);
    Mj_corr_mid   = FatJets.Get("Mass","msoftdrop_nom", 1);

    PTj_min  = FatJets.Get("Mass","pt_nom" , 2);
    Etaj_min = FatJets.Get("Mass","eta", 2);
    Phij_min = FatJets.Get("Mass","phi", 2);
    Mj_min   = FatJets.Get("Mass","msoftdrop_nom_noJWS", 2);
    Mj_corr_min   = FatJets.Get("Mass","msoftdrop_nom", 2);
}

void EDBR2PKUTree::FatJets_P4_DEEP_MD_W_Order() {
    PTj_a  = FatJets.Get("deep-W-MD","pt_nom" , 0);
    Etaj_a = FatJets.Get("deep-W-MD","eta", 0);
    Phij_a = FatJets.Get("deep-W-MD","phi", 0);
    Mj_a   = FatJets.Get("deep-W-MD","msoftdrop_nom_noJWS", 0);
    Mj_corr_a   = FatJets.Get("deep-W-MD","msoftdrop_nom", 0);

    PTj_b  = FatJets.Get("deep-W-MD","pt_nom" , 1);
    Etaj_b = FatJets.Get("deep-W-MD","eta", 1);
    Phij_b = FatJets.Get("deep-W-MD","phi", 1);
    Mj_b   = FatJets.Get("deep-W-MD","msoftdrop_nom_noJWS", 1);
    Mj_corr_b   = FatJets.Get("deep-W-MD","msoftdrop_nom", 1);

    PTj_c  = FatJets.Get("deep-W-MD","pt_nom" , 2);
    Etaj_c = FatJets.Get("deep-W-MD","eta", 2);
    Phij_c = FatJets.Get("deep-W-MD","phi", 2);
    Mj_c   = FatJets.Get("deep-W-MD","msoftdrop_nom_noJWS", 2);
    Mj_corr_c   = FatJets.Get("deep-W-MD","msoftdrop_nom", 2);
}

void EDBR2PKUTree::FatJets_DEEP_MD_W_Order(){
    dnnDecorr_probTbcq_a      = FatJets.Get("deep-W-MD","deepTagMD_probTbcq",0);
    dnnDecorr_probTbqq_a      = FatJets.Get("deep-W-MD","deepTagMD_probTbqq",0);
    dnnDecorr_probTbc_a       = FatJets.Get("deep-W-MD","deepTagMD_probTbc",0);
    dnnDecorr_probTbq_a       = FatJets.Get("deep-W-MD","deepTagMD_probTbq",0);
    dnnDecorr_probWcq_a       = FatJets.Get("deep-W-MD","deepTagMD_probWcq",0);
    dnnDecorr_probWqq_a       = FatJets.Get("deep-W-MD","deepTagMD_probWqq",0);
    dnnDecorr_probZbb_a       = FatJets.Get("deep-W-MD","deepTagMD_probZbb",0);
    dnnDecorr_probZcc_a       = FatJets.Get("deep-W-MD","deepTagMD_probZcc",0);
    dnnDecorr_probZqq_a       = FatJets.Get("deep-W-MD","deepTagMD_probZqq",0);
    dnnDecorr_probHbb_a       = FatJets.Get("deep-W-MD","deepTagMD_probHbb",0);
    dnnDecorr_probHcc_a       = FatJets.Get("deep-W-MD","deepTagMD_probHcc",0);
    dnnDecorr_probHqqqq_a     = FatJets.Get("deep-W-MD","deepTagMD_probHqqqq",0);
    dnnDecorr_probQCDbb_a     = FatJets.Get("deep-W-MD","deepTagMD_probQCDbb",0);
    dnnDecorr_probQCDcc_a     = FatJets.Get("deep-W-MD","deepTagMD_probQCDcc",0);
    dnnDecorr_probQCDb_a      = FatJets.Get("deep-W-MD","deepTagMD_probQCDb",0);
    dnnDecorr_probQCDc_a      = FatJets.Get("deep-W-MD","deepTagMD_probQCDc",0);
    dnnDecorr_probQCDothers_a = FatJets.Get("deep-W-MD","deepTagMD_probQCDothers",0);
    FatJet_tau1_a             = FatJets.Get("deep-W-MD","tau1",0);
    FatJet_tau2_a             = FatJets.Get("deep-W-MD","tau2",0);
    FatJet_tau3_a             = FatJets.Get("deep-W-MD","tau3",0);
    FatJet_tau4_a             = FatJets.Get("deep-W-MD","tau4",0);


    dnnDecorr_probTbcq_b      = FatJets.Get("deep-W-MD","deepTagMD_probTbcq",1);
    dnnDecorr_probTbqq_b      = FatJets.Get("deep-W-MD","deepTagMD_probTbqq",1);
    dnnDecorr_probTbc_b       = FatJets.Get("deep-W-MD","deepTagMD_probTbc",1);
    dnnDecorr_probTbq_b       = FatJets.Get("deep-W-MD","deepTagMD_probTbq",1);
    dnnDecorr_probWcq_b       = FatJets.Get("deep-W-MD","deepTagMD_probWcq",1);
    dnnDecorr_probWqq_b       = FatJets.Get("deep-W-MD","deepTagMD_probWqq",1);
    dnnDecorr_probZbb_b       = FatJets.Get("deep-W-MD","deepTagMD_probZbb",1);
    dnnDecorr_probZcc_b       = FatJets.Get("deep-W-MD","deepTagMD_probZcc",1);
    dnnDecorr_probZqq_b       = FatJets.Get("deep-W-MD","deepTagMD_probZqq",1);
    dnnDecorr_probHbb_b       = FatJets.Get("deep-W-MD","deepTagMD_probHbb",1);
    dnnDecorr_probHcc_b       = FatJets.Get("deep-W-MD","deepTagMD_probHcc",1);
    dnnDecorr_probHqqqq_b     = FatJets.Get("deep-W-MD","deepTagMD_probHqqqq",1);
    dnnDecorr_probQCDbb_b     = FatJets.Get("deep-W-MD","deepTagMD_probQCDbb",1);
    dnnDecorr_probQCDcc_b     = FatJets.Get("deep-W-MD","deepTagMD_probQCDcc",1);
    dnnDecorr_probQCDb_b      = FatJets.Get("deep-W-MD","deepTagMD_probQCDb",1);
    dnnDecorr_probQCDc_b      = FatJets.Get("deep-W-MD","deepTagMD_probQCDc",1);
    dnnDecorr_probQCDothers_b = FatJets.Get("deep-W-MD","deepTagMD_probQCDothers",1);
    FatJet_tau1_b      = FatJets.Get("deep-W-MD","tau1",1);
    FatJet_tau2_b      = FatJets.Get("deep-W-MD","tau2",1);
    FatJet_tau3_b      = FatJets.Get("deep-W-MD","tau3",1);
    FatJet_tau4_b      = FatJets.Get("deep-W-MD","tau4",1);

    dnnDecorr_probTbcq_c      = FatJets.Get("deep-W-MD","deepTagMD_probTbcq",2);
    dnnDecorr_probTbqq_c      = FatJets.Get("deep-W-MD","deepTagMD_probTbqq",2);
    dnnDecorr_probTbc_c       = FatJets.Get("deep-W-MD","deepTagMD_probTbc",2);
    dnnDecorr_probTbq_c       = FatJets.Get("deep-W-MD","deepTagMD_probTbq",2);
    dnnDecorr_probWcq_c       = FatJets.Get("deep-W-MD","deepTagMD_probWcq",2);
    dnnDecorr_probWqq_c       = FatJets.Get("deep-W-MD","deepTagMD_probWqq",2);
    dnnDecorr_probZbb_c       = FatJets.Get("deep-W-MD","deepTagMD_probZbb",2);
    dnnDecorr_probZcc_c       = FatJets.Get("deep-W-MD","deepTagMD_probZcc",2);
    dnnDecorr_probZqq_c       = FatJets.Get("deep-W-MD","deepTagMD_probZqq",2);
    dnnDecorr_probHbb_c       = FatJets.Get("deep-W-MD","deepTagMD_probHbb",2);
    dnnDecorr_probHcc_c       = FatJets.Get("deep-W-MD","deepTagMD_probHcc",2);
    dnnDecorr_probHqqqq_c     = FatJets.Get("deep-W-MD","deepTagMD_probHqqqq",2);
    dnnDecorr_probQCDbb_c     = FatJets.Get("deep-W-MD","deepTagMD_probQCDbb",2);
    dnnDecorr_probQCDcc_c     = FatJets.Get("deep-W-MD","deepTagMD_probQCDcc",2);
    dnnDecorr_probQCDb_c      = FatJets.Get("deep-W-MD","deepTagMD_probQCDb",2);
    dnnDecorr_probQCDc_c      = FatJets.Get("deep-W-MD","deepTagMD_probQCDc",2);
    dnnDecorr_probQCDothers_c = FatJets.Get("deep-W-MD","deepTagMD_probQCDothers",2);
    FatJet_tau1_c = FatJets.Get("deep-W-MD","tau1",2);
    FatJet_tau2_c = FatJets.Get("deep-W-MD","tau2",2);
    FatJet_tau3_c = FatJets.Get("deep-W-MD","tau3",2);
    FatJet_tau4_c = FatJets.Get("deep-W-MD","tau4",2);

    PartNet_MD_W_a   = FatJets.Get("deep-W-MD","particleNetMD_WvsQCD", 0);
    PartNet_MD_W_b   = FatJets.Get("deep-W-MD","particleNetMD_WvsQCD", 1);
    PartNet_MD_W_c   = FatJets.Get("deep-W-MD","particleNetMD_WvsQCD", 2);
}

void EDBR2PKUTree::FatJets_P4_PNet_MD_W_Order() {
    PTj_Pneta  = FatJets.Get("PNet-W-MD","pt_nom" , 0);
    Etaj_Pneta = FatJets.Get("PNet-W-MD","eta", 0);
    Phij_Pneta = FatJets.Get("PNet-W-MD","phi", 0);
    Mj_Pneta   = FatJets.Get("PNet-W-MD","msoftdrop_nom_noJWS", 0);
    Mj_corr_Pneta   = FatJets.Get("PNet-W-MD","msoftdrop_nom", 0);

    PTj_Pnetb  = FatJets.Get("PNet-W-MD","pt_nom" , 1);
    Etaj_Pnetb = FatJets.Get("PNet-W-MD","eta", 1);
    Phij_Pnetb = FatJets.Get("PNet-W-MD","phi", 1);
    Mj_Pnetb   = FatJets.Get("PNet-W-MD","msoftdrop_nom_noJWS", 1);
    Mj_corr_Pnetb   = FatJets.Get("PNet-W-MD","msoftdrop_nom", 1);

    PTj_Pnetc  = FatJets.Get("PNet-W-MD","pt_nom" , 2);
    Etaj_Pnetc = FatJets.Get("PNet-W-MD","eta", 2);
    Phij_Pnetc = FatJets.Get("PNet-W-MD","phi", 2);
    Mj_Pnetc   = FatJets.Get("PNet-W-MD","msoftdrop_nom_noJWS", 2);
    Mj_corr_Pnetc   = FatJets.Get("PNet-W-MD","msoftdrop_nom", 2);
}

void EDBR2PKUTree::FatJets_PNet_MD_W_Order() {
    PartNet_MD_W_Pneta   = FatJets.Get("PNet-W-MD","particleNetMD_WvsQCD", 0);
    PartNet_MD_W_Pnetb   = FatJets.Get("PNet-W-MD","particleNetMD_WvsQCD", 1);
    PartNet_MD_W_Pnetc   = FatJets.Get("PNet-W-MD","particleNetMD_WvsQCD", 2);

    dnnDecorr_probTbcq_Pnetc      = FatJets.Get("PNet-W-MD","deepTagMD_probTbcq",2);
    dnnDecorr_probTbqq_Pnetc      = FatJets.Get("PNet-W-MD","deepTagMD_probTbqq",2);
    dnnDecorr_probTbc_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probTbc",2);
    dnnDecorr_probTbq_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probTbq",2);
    dnnDecorr_probWcq_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probWcq",2);
    dnnDecorr_probWqq_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probWqq",2);
    dnnDecorr_probZbb_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probZbb",2);
    dnnDecorr_probZcc_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probZcc",2);
    dnnDecorr_probZqq_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probZqq",2);
    dnnDecorr_probHbb_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probHbb",2);
    dnnDecorr_probHcc_Pnetc       = FatJets.Get("PNet-W-MD","deepTagMD_probHcc",2);
    dnnDecorr_probHqqqq_Pnetc     = FatJets.Get("PNet-W-MD","deepTagMD_probHqqqq",2);
    dnnDecorr_probQCDbb_Pnetc     = FatJets.Get("PNet-W-MD","deepTagMD_probQCDbb",2);
    dnnDecorr_probQCDcc_Pnetc     = FatJets.Get("PNet-W-MD","deepTagMD_probQCDcc",2);
    dnnDecorr_probQCDb_Pnetc      = FatJets.Get("PNet-W-MD","deepTagMD_probQCDb",2);
    dnnDecorr_probQCDc_Pnetc      = FatJets.Get("PNet-W-MD","deepTagMD_probQCDc",2);
    dnnDecorr_probQCDothers_Pnetc = FatJets.Get("PNet-W-MD","deepTagMD_probQCDothers",2);

    FatJet_tau1_Pneta = FatJets.Get("PNet-W-MD","tau1",0);
    FatJet_tau2_Pneta = FatJets.Get("PNet-W-MD","tau2",0);
    FatJet_tau3_Pneta = FatJets.Get("PNet-W-MD","tau3",0);
    FatJet_tau4_Pneta = FatJets.Get("PNet-W-MD","tau4",0);

    FatJet_tau1_Pnetb = FatJets.Get("PNet-W-MD","tau1",1);
    FatJet_tau2_Pnetb = FatJets.Get("PNet-W-MD","tau2",1);
    FatJet_tau3_Pnetb = FatJets.Get("PNet-W-MD","tau3",1);
    FatJet_tau4_Pnetb = FatJets.Get("PNet-W-MD","tau4",1);

    FatJet_tau1_Pnetc = FatJets.Get("PNet-W-MD","tau1",2);
    FatJet_tau2_Pnetc = FatJets.Get("PNet-W-MD","tau2",2);
    FatJet_tau3_Pnetc = FatJets.Get("PNet-W-MD","tau3",2);
    FatJet_tau4_Pnetc = FatJets.Get("PNet-W-MD","tau4",2);
}

bool EDBR2PKUTree::Filter_Events(TString YEAR, Int_t IS_Data) {
    bool Fill = true;
    bool HLT  = false;
    if ( !(Nj8 == 2 || Nj8 == 3 ) ){ 
        Fill = false; 
    }
    if ( !( Mj_max >= 50 ) ){ 
        Fill = false; 
    }
    if ( !( HT >= 1100 ) ){ 
        Fill = false; 
    }
    if ( !( PTj > 400 ) ){ 
        Fill = false; 
    }
    // if( IS_Data == 0 ){ goodRun = goodrun(run, luminosityBlock) ; }
    // else{ goodRun = true ; }
    if(YEAR.Contains("2016")){
        if( IS_Data == 0 ){
            Flag = Flag_METFilters && Flag_goodVertices && Flag_globalSuperTightHalo2016Filter && Flag_HBHENoiseFilter && Flag_HBHENoiseIsoFilter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_BadPFMuonFilter && Flag_eeBadScFilter;
        }
        else{
            Flag = Flag_METFilters && Flag_goodVertices && Flag_HBHENoiseFilter && Flag_HBHENoiseIsoFilter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_BadPFMuonFilter && Flag_eeBadScFilter;
        }
        HLT = ( HLT_PFHT650_WideJetMJJ900DEtaJJ1p5 || HLT_PFHT650_WideJetMJJ950DEtaJJ1p5 || HLT_PFHT800 || HLT_PFHT900 || HLT_PFJet450 || HLT_AK8PFJet450 || HLT_AK8PFJet500 || HLT_PFJet500 || HLT_AK8PFJet360_TrimMass30 || HLT_AK8PFHT700_TrimR0p1PT0p03Mass50 );
    }

    if(YEAR.Contains("2017")){
        if( IS_Data == 0 ){
            Flag = Flag_goodVertices and Flag_globalSuperTightHalo2016Filter and Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        else{
            Flag = Flag_goodVertices and                                              Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        HLT = ( HLT_PFHT1050 || HLT_AK8PFJet380_TrimMass30 || HLT_AK8PFJet400_TrimMass30 || HLT_AK8PFJet420_TrimMass30 || HLT_AK8PFHT750_TrimMass50 || HLT_AK8PFHT800_TrimMass50 || HLT_AK8PFHT850_TrimMass50 || HLT_AK8PFHT900_TrimMass50 || HLT_AK8PFJet500 || HLT_AK8PFJet360_TrimMass30 );

    }

    if(YEAR.Contains("2018")){
        if( IS_Data == 0 ){
            Flag = Flag_goodVertices and Flag_globalSuperTightHalo2016Filter and Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        else{
            Flag = Flag_goodVertices and                                              Flag_HBHENoiseFilter and Flag_HBHENoiseIsoFilter and Flag_EcalDeadCellTriggerPrimitiveFilter and Flag_BadPFMuonFilter and Flag_ecalBadCalibFilter;
        }
        HLT = ( HLT_PFHT1050 || HLT_AK8PFJet380_TrimMass30 || HLT_AK8PFJet400_TrimMass30 || HLT_AK8PFJet420_TrimMass30 || HLT_AK8PFHT750_TrimMass50 || HLT_AK8PFHT800_TrimMass50 || HLT_AK8PFHT850_TrimMass50 || HLT_AK8PFHT900_TrimMass50 || HLT_AK8PFJet500 || HLT_AK8PFJet360_TrimMass30 );
    }

    if( !( Flag ) || !(HLT) ){ 
        Fill = false; 
    }

    return Fill;
}

void EDBR2PKUTree::METf() {
    MET_et_NoXYCorr  = MET_T1Smear_pt ;
    MET_phi_NoXYCorr = MET_T1Smear_phi ;

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
    std::pair<double,double> MET_T1Smear_XYcorr = METXYCorr_Met_MetPhi( MET_T1Smear_pt, MET_T1Smear_phi, runnb, year, isMC, PV_npvs, true);

    MET_et  = MET_T1Smear_XYcorr.first; 
    MET_phi = MET_T1Smear_XYcorr.second;

}

void EDBR2PKUTree::Weightf(Double_t XS, Int_t Nevents, Double_t LUMI) {

	Double_t nn;
	Float_t Identical_lumiWeight = XS;//All the events inside a sample are same lumiweight

    trigger_eff=1.0;
    IDweight=1.0;
    IDweightISO=1.0;
    IDweighttrk=1.0;
    ToppTweight=1.0;

    if(genWeight>0) nn=1;    else nn= -1;
    lumiWeight=Identical_lumiWeight/abs(Nevents);
    lumiWeight=lumiWeight*LUMI;
    weight=lumiWeight*nn;

    if ( IsData==0 ) weight=1;weight_deep = 1;

}

void EDBR2PKUTree::MJJ_MJJJf() {
    
    if(Nj8==2){
        AK81.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
        AK82.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
        MJJ=(AK81+AK82).M();
    }

    if(Nj8==3){
        AK81.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
        AK82.SetPtEtaPhiM(PTj_mid,Etaj_mid,Phij_mid,Mj_mid);
        AK83.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
        MJJJ=(AK81+AK82+AK83).M();
        MJJ=-99;
    }
}

void EDBR2PKUTree::HT_ST() {
    HT = (PTj>0)*PTj+(PTj_2>0)*PTj_2+(PTj_3>0)*PTj_3;
    ST = Float_t(HT+MET_et);
}

void EDBR2PKUTree::Nbtagf() {

    Nj4_in = Jets.Nj4_inclusive();
    Nj4_ex = Jets.Nj4_exclusive();

    Jet_WP Jet_WP_in = Jets.Nj4_btag_inclusive();
    Jet_WP Jet_WP_ex = Jets.Nj4_btag_exclusive();

    nb_l_deep_ex = Jet_WP_ex.l;
    nb_m_deep_ex = Jet_WP_ex.m;
    nb_t_deep_ex = Jet_WP_ex.t;

    nb_l_deep_in = Jet_WP_in.l;
    nb_m_deep_in = Jet_WP_in.m;
    nb_t_deep_in = Jet_WP_in.t;

    Jets.branch("pt",Jet_pt_out);
    Jets.branch("eta",Jet_eta_out);
    Jets.branch("phi",Jet_phi_out);
    Jets.branch("mass",Jet_mass_out);
    Jets.branch("btagDeepFlavB",Jet_btagDeepFlavB_out);
    Jets.branch("jetId",Jet_jetId_out);
    Jets.branch("hadronFlavour",Jet_hadronFlavour_out);
    Jets.branch("pt_nom",Jet_pt_nom_out);
    Jets.branch("mass_nom",Jet_mass_nom_out);

}

#endif


// dnnDecorr_probTbcq_a 
// deepTagMD_probTbcq

// dnnDecorr_(.*)_a

// dnnDecorr_$1_a = FatJets.Get("deep-W-MD","deepTagMD_$1",0);
// dnnDecorr_$1_b = FatJets.Get("deep-W-MD","deepTagMD_$1",1);
// dnnDecorr_$1_c = FatJets.Get("deep-W-MD","deepTagMD_$1",2);


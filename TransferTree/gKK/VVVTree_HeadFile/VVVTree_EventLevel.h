#ifndef _VVVTree_MJJ_MJJJ_
#define _VVVTree_MJJ_MJJJ_

void EDBR2PKUTree::EventLevel(Long64_t jentry, TString YEAR, Int_t IS_Data) {
    METf();
    AK4_init(jentry);
    Nj4_Nj8();
    MJJ_MJJJf();
    HT_ST();
    Nbtagf(YEAR, IS_Data);
}

void EDBR2PKUTree::GlobalInit(TString YEAR, Int_t IS_Data) {
    goldenjsoninit(YEAR, IS_Data);
}

void EDBR2PKUTree::goldenjsoninit(TString YEAR, Int_t IS_Data) {
    std::string list = "";
    if(IS_Data == 0){
        if(YEAR.Contains("2016")){
            list = "config/Cert_271036-284044_13TeV_PromptReco_Collisions16_JSON_formatted.txt"; //36.773 ifb
        }
        if(YEAR.Contains("2017")){
            list = "config/Cert_294927-306462_13TeV_PromptReco_Collisions17_JSON_formatted.txt"; //41.53 ifb
        }
        if(YEAR.Contains("2018")){
            list = "config/Cert_314472-325175_13TeV_PromptReco_Collisions18_JSON_formatted.txt"; //59.69 ifb
        }
        set_goodrun_file(list.c_str());
    }
    
}

bool EDBR2PKUTree::Filter_Events(TString YEAR, Int_t IS_Data) {
    bool Fill = true;
    if ( !(Nj8 == 2 || Nj8 == 3 ) ){ 
        Fill = false; 
    }
    if ( !( Mj >= 40 || Mj_2 >= 40 || Mj_3 >= 40 ) ){ 
        Fill = false; 
    }
    if ( !( PTj > 400 ) ){ 
        Fill = false; 
    }
    if( IS_Data == 0 ){ goodRun = goodrun(run, luminosityBlock) ; }
    else{ goodRun = true ; }
    if(YEAR.Contains("2016")){
        if( IS_Data == 0 ){
            Flag = Flag_METFilters && Flag_goodVertices && Flag_globalSuperTightHalo2016Filter && Flag_HBHENoiseFilter && Flag_HBHENoiseIsoFilter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_BadPFMuonFilter && Flag_eeBadScFilter;
        }
        else{
            Flag = Flag_METFilters && Flag_goodVertices && Flag_HBHENoiseFilter && Flag_HBHENoiseIsoFilter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_BadPFMuonFilter && Flag_eeBadScFilter;
        }
    }
    return Fill;
}

void EDBR2PKUTree::METf() {
    MET_et  = MET_pt;
    // MET_phi = MET_phi;
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

    if (IsData==2 ) weight = weight*1.21*1.06684;weight_deep = weight_deep*1.21*1.06684;
    if (IsData==3 ) weight = weight*1.21*1.046;weight_deep = weight_deep*1.21*1.046;
    if (IsData==4 ) weight = weight*1.21*0.99246;weight_deep = weight_deep*1.21*0.99246;
    if (IsData==5 ) weight = weight*1.21*0.9155;weight_deep = weight_deep*1.21*0.9155;
    if (IsData==6 ) weight = weight*1.21*0.8093;weight_deep = weight_deep*1.21*0.8093;
    if (IsData==7 ) weight = weight*1.21*0.6498;weight_deep = weight_deep*1.21*0.6498;
    if (IsData==8 ) weight = weight*1.21*0.4843;weight_deep = weight_deep*1.21*0.4843;
    if ( IsData==0 ) weight=1;weight_deep = 1;
}

void EDBR2PKUTree::MJJ_MJJJf() {
    
    if(Nj8==2){
        AK81.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
        AK82.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
        MJJ=(AK81+AK82).M();
        if(MJJ>100000||MJJ<-99){
            cout<<"MJJ:"<<MJJ<<endl;
        }
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

    ST=Float_t(HT+MET_et);
                
}

void EDBR2PKUTree::Nj4_Nj8() {
    Nj4=(ak4jet_pt[0]>0)+(ak4jet_pt[1]>0)+(ak4jet_pt[2]>0)+(ak4jet_pt[3]>0)+(ak4jet_pt[4]>0)+(ak4jet_pt[5]>0)+(ak4jet_pt[6]>0)+(ak4jet_pt[7]>0)+(ak4jet_pt[8]>0)+(ak4jet_pt[9]>0)+(ak4jet_pt[10]>0)+(ak4jet_pt[11]>0)+(ak4jet_pt[12]>0)+(ak4jet_pt[13]>0)+(ak4jet_pt[14]>0);

    Nj8=(PTj>0)+(PTj_2>0)+(PTj_3>0)+(PTj_4>0);
}

void EDBR2PKUTree::AK4_init(Long64_t jentry) {
    
    int bytes_Jet_btagDeepB = b_Jet_btagDeepB_->GetEntry(jentry);
    v_Jet_btagDeepB_ = vector<float>(Jet_btagDeepB_,Jet_btagDeepB_+bytes_Jet_btagDeepB/sizeof(Jet_btagDeepB_[0]));
    size_t nJet_btagDeepB = v_Jet_btagDeepB_.size();
    
    int bytes_Jet_btagDeepFlavB = b_Jet_btagDeepFlavB_->GetEntry(jentry);
    v_Jet_btagDeepFlavB_ = vector<float>(Jet_btagDeepFlavB_,Jet_btagDeepFlavB_+bytes_Jet_btagDeepFlavB/sizeof(Jet_btagDeepFlavB_[0]));
    size_t nJet_btagDeepFlavB = v_Jet_btagDeepFlavB_.size();
    
    int bytes_Jet_btagDeepFlavCvB = b_Jet_btagDeepFlavCvB_->GetEntry(jentry);
    v_Jet_btagDeepFlavCvB_ = vector<float>(Jet_btagDeepFlavCvB_,Jet_btagDeepFlavCvB_+bytes_Jet_btagDeepFlavCvB/sizeof(Jet_btagDeepFlavCvB_[0]));
    size_t nJet_btagDeepFlavCvB = v_Jet_btagDeepFlavCvB_.size();
    
    int bytes_Jet_btagDeepFlavCvL = b_Jet_btagDeepFlavCvL_->GetEntry(jentry);
    v_Jet_btagDeepFlavCvL_ = vector<float>(Jet_btagDeepFlavCvL_,Jet_btagDeepFlavCvL_+bytes_Jet_btagDeepFlavCvL/sizeof(Jet_btagDeepFlavCvL_[0]));
    size_t nJet_btagDeepFlavCvL = v_Jet_btagDeepFlavCvL_.size();
    
    int bytes_Jet_btagDeepFlavQG = b_Jet_btagDeepFlavQG_->GetEntry(jentry);
    v_Jet_btagDeepFlavQG_ = vector<float>(Jet_btagDeepFlavQG_,Jet_btagDeepFlavQG_+bytes_Jet_btagDeepFlavQG/sizeof(Jet_btagDeepFlavQG_[0]));
    size_t nJet_btagDeepFlavQG = v_Jet_btagDeepFlavQG_.size();
    
    int bytes_Jet_eta = b_Jet_eta_->GetEntry(jentry);
    v_Jet_eta_ = vector<float>(Jet_eta_,Jet_eta_+bytes_Jet_eta/sizeof(Jet_eta_[0]));
    size_t nJet_eta = v_Jet_eta_.size();
    
    if (b_Jet_hadronFlavour_){
        int bytes_Jet_hadronFlavour = b_Jet_hadronFlavour_->GetEntry(jentry);
        v_Jet_hadronFlavour_ = vector<float>(Jet_hadronFlavour_,Jet_hadronFlavour_+bytes_Jet_hadronFlavour/sizeof(Jet_hadronFlavour_[0]));
        size_t nJet_hadronFlavour = v_Jet_hadronFlavour_.size();
    }
    
    int bytes_Jet_jetId = b_Jet_jetId_->GetEntry(jentry);
    v_Jet_jetId_ = vector<float>(Jet_jetId_,Jet_jetId_+bytes_Jet_jetId/sizeof(Jet_jetId_[0]));
    size_t nJet_jetId = v_Jet_jetId_.size();
    
    int bytes_Jet_mass = b_Jet_mass_->GetEntry(jentry);
    v_Jet_mass_ = vector<float>(Jet_mass_,Jet_mass_+bytes_Jet_mass/sizeof(Jet_mass_[0]));
    size_t nJet_mass = v_Jet_mass_.size();
    
    if (b_Jet_partonFlavour_){
        int bytes_Jet_partonFlavour = b_Jet_partonFlavour_->GetEntry(jentry);
        v_Jet_partonFlavour_ = vector<float>(Jet_partonFlavour_,Jet_partonFlavour_+bytes_Jet_partonFlavour/sizeof(Jet_partonFlavour_[0]));
        size_t nJet_partonFlavour = v_Jet_partonFlavour_.size();
    }
    
    int bytes_Jet_phi = b_Jet_phi_->GetEntry(jentry);
    v_Jet_phi_ = vector<float>(Jet_phi_,Jet_phi_+bytes_Jet_phi/sizeof(Jet_phi_[0]));
    size_t nJet_phi = v_Jet_phi_.size();
    
    int bytes_Jet_pt = b_Jet_pt_->GetEntry(jentry);
    v_Jet_pt_ = vector<float>(Jet_pt_,Jet_pt_+bytes_Jet_pt/sizeof(Jet_pt_[0]));
    size_t nJet_pt = v_Jet_pt_.size();
    
    int bytes_Jet_puId = b_Jet_puId_->GetEntry(jentry);
    v_Jet_puId_ = vector<float>(Jet_puId_,Jet_puId_+bytes_Jet_puId/sizeof(Jet_puId_[0]));
    size_t nJet_puId = v_Jet_puId_.size();
    
    
    int bytes_Jet_puIdDisc = b_Jet_puIdDisc_->GetEntry(jentry);
    v_Jet_puIdDisc_ = vector<float>(Jet_puIdDisc_,Jet_puIdDisc_+bytes_Jet_puIdDisc/sizeof(Jet_puIdDisc_[0]));
    size_t nJet_puIdDisc = v_Jet_puIdDisc_.size();
    

    
    int bytes_Jet_qgl = b_Jet_qgl_->GetEntry(jentry);
    v_Jet_qgl_ = vector<float>(Jet_qgl_,Jet_qgl_+bytes_Jet_qgl/sizeof(Jet_qgl_[0]));
    size_t nJet_qgl = v_Jet_qgl_.size();
    

    
    int bytes_Jet_rawFactor = b_Jet_rawFactor_->GetEntry(jentry);
    v_Jet_rawFactor_ = vector<float>(Jet_rawFactor_,Jet_rawFactor_+bytes_Jet_rawFactor/sizeof(Jet_rawFactor_[0]));
    size_t nJet_rawFactor = v_Jet_rawFactor_.size();

}

void EDBR2PKUTree::Nbtagf(TString YEAR, Int_t IS_Data) {

    float bWPloose ;
    float bWPmedium;
    float bWPtight ;
    if(YEAR.Contains("2016preVFP")){
        bWPloose  = 0.0508;
        bWPmedium = 0.2598;
        bWPtight  = 0.6502;
    }
    if(YEAR.Contains("2016postVFP")){
        bWPloose  = 0.0480;
        bWPmedium = 0.2489;
        bWPtight  = 0.6377;
    }
    
    nb_l_deep_ex = 0;
    nb_m_deep_ex = 0;
    nb_t_deep_ex = 0;
    nb_l_deep_in = 0;
    nb_m_deep_in = 0;
    nb_t_deep_in = 0;

    TLorentzVector AK8_1, AK8_2, AK8_3, AK8_4, Jet;
    vector<TLorentzVector> AK8s;
    AK8_1.SetPtEtaPhiM(PTj  , Etaj  , Phij  , Mj  ); AK8s.push_back(AK8_1);
    AK8_2.SetPtEtaPhiM(PTj_2, Etaj_2, Phij_2, Mj_2); AK8s.push_back(AK8_2);
    if( PTj_3 > 0 ){ AK8_3.SetPtEtaPhiM(PTj_3, Etaj_3, Phij_3, Mj_3); AK8s.push_back(AK8_3); }
    if( PTj_4 > 0 ){ AK8_4.SetPtEtaPhiM(PTj_4, Etaj_4, Phij_4, Mj_4); AK8s.push_back(AK8_4); }

    for ( Int_t i = 0 ; i < v_Jet_pt_.size() ; i++ ) {
        Jet.SetPtEtaPhiM( v_Jet_pt_[i], v_Jet_eta_[i], v_Jet_phi_[i], v_Jet_mass_[i] );
        bool exclusive = Exclusive_Collection(Jet,AK8s,0.8);
        if(v_Jet_pt_[i]      <30  ){ continue; }
        if(fabs(v_Jet_eta_[i])>2.5){ continue; }
        if(exclusive && v_Jet_btagDeepFlavB_[i] > bWPloose ) { nb_l_deep_ex ++; }
        if(exclusive && v_Jet_btagDeepFlavB_[i] > bWPmedium) { nb_m_deep_ex ++; }
        if(exclusive && v_Jet_btagDeepFlavB_[i] > bWPtight ) { nb_t_deep_ex ++; }
        if(             v_Jet_btagDeepFlavB_[i] > bWPloose ) { nb_l_deep_in ++; }
        if(             v_Jet_btagDeepFlavB_[i] > bWPmedium) { nb_m_deep_in ++; }
        if(             v_Jet_btagDeepFlavB_[i] > bWPtight ) { nb_t_deep_in ++; }
    }
    
}


#endif
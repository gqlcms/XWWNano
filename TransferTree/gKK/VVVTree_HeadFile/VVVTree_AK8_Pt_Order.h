#ifndef _VVVTree_AK8_Pt_Order_
#define _VVVTree_AK8_Pt_Order_

/*
jetAK8puppi_pt_2
*/

void EDBR2PKUTree::AK8_Pt_Ordered(Long64_t jentry) {
    AK8_Pt_Ordered_p4_flatVector(jentry);
    AK8_Nsubjetness_Init(jentry);
    AK8_Pt_Ordered_p4();
    AK8_Pt_Ordered_RawScore_flatVector(jentry);
    AK8_Pt_Ordered_PnScore_flatVector(jentry);
    AK8_Pt_Ordered_RawScore_swtich();
}

void EDBR2PKUTree::AK8_Pt_Ordered_p4(){

    PTj    = FatJet_pt_1;
    PTj_2  = FatJet_pt_2;
    PTj_3  = FatJet_pt_3;
    PTj_4  = FatJet_pt_4;

    Etaj   = FatJet_eta_1;
    Etaj_2 = FatJet_eta_2;
    Etaj_3 = FatJet_eta_3;

    Phij   = FatJet_phi_1;
    Phij_2 = FatJet_phi_2;
    Phij_3 = FatJet_phi_3;
    
    Mj   = FatJet_msoftdrop_1 ; 
    Mj_2 = FatJet_msoftdrop_2 ; 
    Mj_3 = FatJet_msoftdrop_3 ; 

}

void EDBR2PKUTree::AK8_Nsubjetness_Init(Long64_t jentry){
    int bytes_FatJet_tau1 = b_FatJet_tau1_->GetEntry(jentry);
    v_FatJet_tau1_ = vector<float>(FatJet_tau1_,FatJet_tau1_+bytes_FatJet_tau1/sizeof(FatJet_tau1_[0]));

    int bytes_FatJet_tau2 = b_FatJet_tau2_->GetEntry(jentry);
    v_FatJet_tau2_ = vector<float>(FatJet_tau2_,FatJet_tau2_+bytes_FatJet_tau2/sizeof(FatJet_tau2_[0]));
    
    int bytes_FatJet_tau3 = b_FatJet_tau3_->GetEntry(jentry);
    v_FatJet_tau3_ = vector<float>(FatJet_tau3_,FatJet_tau3_+bytes_FatJet_tau3/sizeof(FatJet_tau3_[0]));
    
    int bytes_FatJet_tau4 = b_FatJet_tau4_->GetEntry(jentry);
    v_FatJet_tau4_ = vector<float>(FatJet_tau4_,FatJet_tau4_+bytes_FatJet_tau4/sizeof(FatJet_tau4_[0]));

}

void EDBR2PKUTree::AK8_Pt_Ordered_p4_flatVector(Long64_t jentry){
    int bytes_FatJet_pt = b_FatJet_pt_->GetEntry(jentry);
    v_FatJet_pt_ = vector<float>(FatJet_pt_,FatJet_pt_+bytes_FatJet_pt/sizeof(FatJet_pt_[0]));
    size_t nFatJet_pt = v_FatJet_pt_.size();
    if(nFatJet_pt > size_t(0)){
        FatJet_pt_1 = v_FatJet_pt_.at(0);
    }
    else{
        FatJet_pt_1 = -99;
    }
    if(nFatJet_pt > size_t(1)){
        FatJet_pt_2 = v_FatJet_pt_.at(1);
    }
    else{
        FatJet_pt_2 = -99;
    }
    if(nFatJet_pt > size_t(2)){
        FatJet_pt_3 = v_FatJet_pt_.at(2);
    }
    else{
        FatJet_pt_3 = -99;
    }
    if(nFatJet_pt > size_t(3)){
        FatJet_pt_4 = v_FatJet_pt_.at(3);
    }
    else{
        FatJet_pt_4 = -99;
    }

    
    int bytes_FatJet_eta = b_FatJet_eta_->GetEntry(jentry);
    v_FatJet_eta_ = vector<float>(FatJet_eta_,FatJet_eta_+bytes_FatJet_eta/sizeof(FatJet_eta_[0]));
    size_t nFatJet_eta = v_FatJet_eta_.size();
    if(nFatJet_eta > size_t(0)){
        FatJet_eta_1 = v_FatJet_eta_.at(0);
    }
    else{
        FatJet_eta_1 = -99;
    }
    if(nFatJet_eta > size_t(1)){
        FatJet_eta_2 = v_FatJet_eta_.at(1);
    }
    else{
        FatJet_eta_2 = -99;
    }
    if(nFatJet_eta > size_t(2)){
        FatJet_eta_3 = v_FatJet_eta_.at(2);
    }
    else{
        FatJet_eta_3 = -99;
    }
    if(nFatJet_eta > size_t(3)){
        FatJet_eta_4 = v_FatJet_eta_.at(3);
    }
    else{
        FatJet_eta_4 = -99;
    }

    
    int bytes_FatJet_phi = b_FatJet_phi_->GetEntry(jentry);
    v_FatJet_phi_ = vector<float>(FatJet_phi_,FatJet_phi_+bytes_FatJet_phi/sizeof(FatJet_phi_[0]));
    size_t nFatJet_phi = v_FatJet_phi_.size();
    if(nFatJet_phi > size_t(0)){
        FatJet_phi_1 = v_FatJet_phi_.at(0);
    }
    else{
        FatJet_phi_1 = -99;
    }
    if(nFatJet_phi > size_t(1)){
        FatJet_phi_2 = v_FatJet_phi_.at(1);
    }
    else{
        FatJet_phi_2 = -99;
    }
    if(nFatJet_phi > size_t(2)){
        FatJet_phi_3 = v_FatJet_phi_.at(2);
    }
    else{
        FatJet_phi_3 = -99;
    }
    if(nFatJet_phi > size_t(3)){
        FatJet_phi_4 = v_FatJet_phi_.at(3);
    }
    else{
        FatJet_phi_4 = -99;
    }

    
    int bytes_FatJet_msoftdrop = b_FatJet_msoftdrop_->GetEntry(jentry);
    v_FatJet_msoftdrop_ = vector<float>(FatJet_msoftdrop_,FatJet_msoftdrop_+bytes_FatJet_msoftdrop/sizeof(FatJet_msoftdrop_[0]));
    size_t nFatJet_msoftdrop = v_FatJet_msoftdrop_.size();
    if(nFatJet_msoftdrop > size_t(0)){
        FatJet_msoftdrop_1 = v_FatJet_msoftdrop_.at(0);
    }
    else{
        FatJet_msoftdrop_1 = -99;
    }
    if(nFatJet_msoftdrop > size_t(1)){
        FatJet_msoftdrop_2 = v_FatJet_msoftdrop_.at(1);
    }
    else{
        FatJet_msoftdrop_2 = -99;
    }
    if(nFatJet_msoftdrop > size_t(2)){
        FatJet_msoftdrop_3 = v_FatJet_msoftdrop_.at(2);
    }
    else{
        FatJet_msoftdrop_3 = -99;
    }
    if(nFatJet_msoftdrop > size_t(3)){
        FatJet_msoftdrop_4 = v_FatJet_msoftdrop_.at(3);
    }
    else{
        FatJet_msoftdrop_4 = -99;
    }

}

void EDBR2PKUTree::AK8_Pt_Ordered_PnScore_flatVector(Long64_t jentry){
    
    int bytes_FatJet_particleNetMD_QCD = b_FatJet_particleNetMD_QCD_->GetEntry(jentry);
    v_FatJet_particleNetMD_QCD_ = vector<float>(FatJet_particleNetMD_QCD_,FatJet_particleNetMD_QCD_+bytes_FatJet_particleNetMD_QCD/sizeof(FatJet_particleNetMD_QCD_[0]));
    size_t nFatJet_particleNetMD_QCD = v_FatJet_particleNetMD_QCD_.size();
    if(nFatJet_particleNetMD_QCD > size_t(0)){
        FatJet_particleNetMD_QCD_1 = v_FatJet_particleNetMD_QCD_.at(0);
    }
    else{
        FatJet_particleNetMD_QCD_1 = -99;
    }
    if(nFatJet_particleNetMD_QCD > size_t(1)){
        FatJet_particleNetMD_QCD_2 = v_FatJet_particleNetMD_QCD_.at(1);
    }
    else{
        FatJet_particleNetMD_QCD_2 = -99;
    }
    if(nFatJet_particleNetMD_QCD > size_t(2)){
        FatJet_particleNetMD_QCD_3 = v_FatJet_particleNetMD_QCD_.at(2);
    }
    else{
        FatJet_particleNetMD_QCD_3 = -99;
    }

    
    int bytes_FatJet_particleNetMD_Xbb = b_FatJet_particleNetMD_Xbb_->GetEntry(jentry);
    v_FatJet_particleNetMD_Xbb_ = vector<float>(FatJet_particleNetMD_Xbb_,FatJet_particleNetMD_Xbb_+bytes_FatJet_particleNetMD_Xbb/sizeof(FatJet_particleNetMD_Xbb_[0]));
    size_t nFatJet_particleNetMD_Xbb = v_FatJet_particleNetMD_Xbb_.size();
    if(nFatJet_particleNetMD_Xbb > size_t(0)){
        FatJet_particleNetMD_Xbb_1 = v_FatJet_particleNetMD_Xbb_.at(0);
    }
    else{
        FatJet_particleNetMD_Xbb_1 = -99;
    }
    if(nFatJet_particleNetMD_Xbb > size_t(1)){
        FatJet_particleNetMD_Xbb_2 = v_FatJet_particleNetMD_Xbb_.at(1);
    }
    else{
        FatJet_particleNetMD_Xbb_2 = -99;
    }
    if(nFatJet_particleNetMD_Xbb > size_t(2)){
        FatJet_particleNetMD_Xbb_3 = v_FatJet_particleNetMD_Xbb_.at(2);
    }
    else{
        FatJet_particleNetMD_Xbb_3 = -99;
    }

    
    int bytes_FatJet_particleNetMD_Xcc = b_FatJet_particleNetMD_Xcc_->GetEntry(jentry);
    v_FatJet_particleNetMD_Xcc_ = vector<float>(FatJet_particleNetMD_Xcc_,FatJet_particleNetMD_Xcc_+bytes_FatJet_particleNetMD_Xcc/sizeof(FatJet_particleNetMD_Xcc_[0]));
    size_t nFatJet_particleNetMD_Xcc = v_FatJet_particleNetMD_Xcc_.size();
    if(nFatJet_particleNetMD_Xcc > size_t(0)){
        FatJet_particleNetMD_Xcc_1 = v_FatJet_particleNetMD_Xcc_.at(0);
    }
    else{
        FatJet_particleNetMD_Xcc_1 = -99;
    }
    if(nFatJet_particleNetMD_Xcc > size_t(1)){
        FatJet_particleNetMD_Xcc_2 = v_FatJet_particleNetMD_Xcc_.at(1);
    }
    else{
        FatJet_particleNetMD_Xcc_2 = -99;
    }
    if(nFatJet_particleNetMD_Xcc > size_t(2)){
        FatJet_particleNetMD_Xcc_3 = v_FatJet_particleNetMD_Xcc_.at(2);
    }
    else{
        FatJet_particleNetMD_Xcc_3 = -99;
    }

    
    int bytes_FatJet_particleNetMD_Xqq = b_FatJet_particleNetMD_Xqq_->GetEntry(jentry);
    v_FatJet_particleNetMD_Xqq_ = vector<float>(FatJet_particleNetMD_Xqq_,FatJet_particleNetMD_Xqq_+bytes_FatJet_particleNetMD_Xqq/sizeof(FatJet_particleNetMD_Xqq_[0]));
    size_t nFatJet_particleNetMD_Xqq = v_FatJet_particleNetMD_Xqq_.size();
    if(nFatJet_particleNetMD_Xqq > size_t(0)){
        FatJet_particleNetMD_Xqq_1 = v_FatJet_particleNetMD_Xqq_.at(0);
    }
    else{
        FatJet_particleNetMD_Xqq_1 = -99;
    }
    if(nFatJet_particleNetMD_Xqq > size_t(1)){
        FatJet_particleNetMD_Xqq_2 = v_FatJet_particleNetMD_Xqq_.at(1);
    }
    else{
        FatJet_particleNetMD_Xqq_2 = -99;
    }
    if(nFatJet_particleNetMD_Xqq > size_t(2)){
        FatJet_particleNetMD_Xqq_3 = v_FatJet_particleNetMD_Xqq_.at(2);
    }
    else{
        FatJet_particleNetMD_Xqq_3 = -99;
    }

    
    int bytes_FatJet_particleNet_H4qvsQCD = b_FatJet_particleNet_H4qvsQCD_->GetEntry(jentry);
    v_FatJet_particleNet_H4qvsQCD_ = vector<float>(FatJet_particleNet_H4qvsQCD_,FatJet_particleNet_H4qvsQCD_+bytes_FatJet_particleNet_H4qvsQCD/sizeof(FatJet_particleNet_H4qvsQCD_[0]));
    size_t nFatJet_particleNet_H4qvsQCD = v_FatJet_particleNet_H4qvsQCD_.size();
    if(nFatJet_particleNet_H4qvsQCD > size_t(0)){
        FatJet_particleNet_H4qvsQCD_1 = v_FatJet_particleNet_H4qvsQCD_.at(0);
    }
    else{
        FatJet_particleNet_H4qvsQCD_1 = -99;
    }
    if(nFatJet_particleNet_H4qvsQCD > size_t(1)){
        FatJet_particleNet_H4qvsQCD_2 = v_FatJet_particleNet_H4qvsQCD_.at(1);
    }
    else{
        FatJet_particleNet_H4qvsQCD_2 = -99;
    }
    if(nFatJet_particleNet_H4qvsQCD > size_t(2)){
        FatJet_particleNet_H4qvsQCD_3 = v_FatJet_particleNet_H4qvsQCD_.at(2);
    }
    else{
        FatJet_particleNet_H4qvsQCD_3 = -99;
    }

    
    int bytes_FatJet_particleNet_HbbvsQCD = b_FatJet_particleNet_HbbvsQCD_->GetEntry(jentry);
    v_FatJet_particleNet_HbbvsQCD_ = vector<float>(FatJet_particleNet_HbbvsQCD_,FatJet_particleNet_HbbvsQCD_+bytes_FatJet_particleNet_HbbvsQCD/sizeof(FatJet_particleNet_HbbvsQCD_[0]));
    size_t nFatJet_particleNet_HbbvsQCD = v_FatJet_particleNet_HbbvsQCD_.size();
    if(nFatJet_particleNet_HbbvsQCD > size_t(0)){
        FatJet_particleNet_HbbvsQCD_1 = v_FatJet_particleNet_HbbvsQCD_.at(0);
    }
    else{
        FatJet_particleNet_HbbvsQCD_1 = -99;
    }
    if(nFatJet_particleNet_HbbvsQCD > size_t(1)){
        FatJet_particleNet_HbbvsQCD_2 = v_FatJet_particleNet_HbbvsQCD_.at(1);
    }
    else{
        FatJet_particleNet_HbbvsQCD_2 = -99;
    }
    if(nFatJet_particleNet_HbbvsQCD > size_t(2)){
        FatJet_particleNet_HbbvsQCD_3 = v_FatJet_particleNet_HbbvsQCD_.at(2);
    }
    else{
        FatJet_particleNet_HbbvsQCD_3 = -99;
    }

    
    int bytes_FatJet_particleNet_HccvsQCD = b_FatJet_particleNet_HccvsQCD_->GetEntry(jentry);
    v_FatJet_particleNet_HccvsQCD_ = vector<float>(FatJet_particleNet_HccvsQCD_,FatJet_particleNet_HccvsQCD_+bytes_FatJet_particleNet_HccvsQCD/sizeof(FatJet_particleNet_HccvsQCD_[0]));
    size_t nFatJet_particleNet_HccvsQCD = v_FatJet_particleNet_HccvsQCD_.size();
    if(nFatJet_particleNet_HccvsQCD > size_t(0)){
        FatJet_particleNet_HccvsQCD_1 = v_FatJet_particleNet_HccvsQCD_.at(0);
    }
    else{
        FatJet_particleNet_HccvsQCD_1 = -99;
    }
    if(nFatJet_particleNet_HccvsQCD > size_t(1)){
        FatJet_particleNet_HccvsQCD_2 = v_FatJet_particleNet_HccvsQCD_.at(1);
    }
    else{
        FatJet_particleNet_HccvsQCD_2 = -99;
    }
    if(nFatJet_particleNet_HccvsQCD > size_t(2)){
        FatJet_particleNet_HccvsQCD_3 = v_FatJet_particleNet_HccvsQCD_.at(2);
    }
    else{
        FatJet_particleNet_HccvsQCD_3 = -99;
    }

    
    int bytes_FatJet_particleNet_QCD = b_FatJet_particleNet_QCD_->GetEntry(jentry);
    v_FatJet_particleNet_QCD_ = vector<float>(FatJet_particleNet_QCD_,FatJet_particleNet_QCD_+bytes_FatJet_particleNet_QCD/sizeof(FatJet_particleNet_QCD_[0]));
    size_t nFatJet_particleNet_QCD = v_FatJet_particleNet_QCD_.size();
    if(nFatJet_particleNet_QCD > size_t(0)){
        FatJet_particleNet_QCD_1 = v_FatJet_particleNet_QCD_.at(0);
    }
    else{
        FatJet_particleNet_QCD_1 = -99;
    }
    if(nFatJet_particleNet_QCD > size_t(1)){
        FatJet_particleNet_QCD_2 = v_FatJet_particleNet_QCD_.at(1);
    }
    else{
        FatJet_particleNet_QCD_2 = -99;
    }
    if(nFatJet_particleNet_QCD > size_t(2)){
        FatJet_particleNet_QCD_3 = v_FatJet_particleNet_QCD_.at(2);
    }
    else{
        FatJet_particleNet_QCD_3 = -99;
    }

    
    int bytes_FatJet_particleNet_TvsQCD = b_FatJet_particleNet_TvsQCD_->GetEntry(jentry);
    v_FatJet_particleNet_TvsQCD_ = vector<float>(FatJet_particleNet_TvsQCD_,FatJet_particleNet_TvsQCD_+bytes_FatJet_particleNet_TvsQCD/sizeof(FatJet_particleNet_TvsQCD_[0]));
    size_t nFatJet_particleNet_TvsQCD = v_FatJet_particleNet_TvsQCD_.size();
    if(nFatJet_particleNet_TvsQCD > size_t(0)){
        FatJet_particleNet_TvsQCD_1 = v_FatJet_particleNet_TvsQCD_.at(0);
    }
    else{
        FatJet_particleNet_TvsQCD_1 = -99;
    }
    if(nFatJet_particleNet_TvsQCD > size_t(1)){
        FatJet_particleNet_TvsQCD_2 = v_FatJet_particleNet_TvsQCD_.at(1);
    }
    else{
        FatJet_particleNet_TvsQCD_2 = -99;
    }
    if(nFatJet_particleNet_TvsQCD > size_t(2)){
        FatJet_particleNet_TvsQCD_3 = v_FatJet_particleNet_TvsQCD_.at(2);
    }
    else{
        FatJet_particleNet_TvsQCD_3 = -99;
    }

    
    int bytes_FatJet_particleNet_WvsQCD = b_FatJet_particleNet_WvsQCD_->GetEntry(jentry);
    v_FatJet_particleNet_WvsQCD_ = vector<float>(FatJet_particleNet_WvsQCD_,FatJet_particleNet_WvsQCD_+bytes_FatJet_particleNet_WvsQCD/sizeof(FatJet_particleNet_WvsQCD_[0]));
    size_t nFatJet_particleNet_WvsQCD = v_FatJet_particleNet_WvsQCD_.size();
    if(nFatJet_particleNet_WvsQCD > size_t(0)){
        FatJet_particleNet_WvsQCD_1 = v_FatJet_particleNet_WvsQCD_.at(0);
    }
    else{
        FatJet_particleNet_WvsQCD_1 = -99;
    }
    if(nFatJet_particleNet_WvsQCD > size_t(1)){
        FatJet_particleNet_WvsQCD_2 = v_FatJet_particleNet_WvsQCD_.at(1);
    }
    else{
        FatJet_particleNet_WvsQCD_2 = -99;
    }
    if(nFatJet_particleNet_WvsQCD > size_t(2)){
        FatJet_particleNet_WvsQCD_3 = v_FatJet_particleNet_WvsQCD_.at(2);
    }
    else{
        FatJet_particleNet_WvsQCD_3 = -99;
    }

    
    int bytes_FatJet_particleNet_ZvsQCD = b_FatJet_particleNet_ZvsQCD_->GetEntry(jentry);
    v_FatJet_particleNet_ZvsQCD_ = vector<float>(FatJet_particleNet_ZvsQCD_,FatJet_particleNet_ZvsQCD_+bytes_FatJet_particleNet_ZvsQCD/sizeof(FatJet_particleNet_ZvsQCD_[0]));
    size_t nFatJet_particleNet_ZvsQCD = v_FatJet_particleNet_ZvsQCD_.size();
    if(nFatJet_particleNet_ZvsQCD > size_t(0)){
        FatJet_particleNet_ZvsQCD_1 = v_FatJet_particleNet_ZvsQCD_.at(0);
    }
    else{
        FatJet_particleNet_ZvsQCD_1 = -99;
    }
    if(nFatJet_particleNet_ZvsQCD > size_t(1)){
        FatJet_particleNet_ZvsQCD_2 = v_FatJet_particleNet_ZvsQCD_.at(1);
    }
    else{
        FatJet_particleNet_ZvsQCD_2 = -99;
    }
    if(nFatJet_particleNet_ZvsQCD > size_t(2)){
        FatJet_particleNet_ZvsQCD_3 = v_FatJet_particleNet_ZvsQCD_.at(2);
    }
    else{
        FatJet_particleNet_ZvsQCD_3 = -99;
    }

    if(b_FatJet_particleNet_mass_){
        int bytes_FatJet_particleNet_mass = b_FatJet_particleNet_mass_->GetEntry(jentry);
        v_FatJet_particleNet_mass_ = vector<float>(FatJet_particleNet_mass_,FatJet_particleNet_mass_+bytes_FatJet_particleNet_mass/sizeof(FatJet_particleNet_mass_[0]));
        size_t nFatJet_particleNet_mass = v_FatJet_particleNet_mass_.size();
        if(nFatJet_particleNet_mass > size_t(0)){
            FatJet_particleNet_mass_1 = v_FatJet_particleNet_mass_.at(0);
        }
        else{
            FatJet_particleNet_mass_1 = -99;
        }
        if(nFatJet_particleNet_mass > size_t(1)){
            FatJet_particleNet_mass_2 = v_FatJet_particleNet_mass_.at(1);
        }
        else{
            FatJet_particleNet_mass_2 = -99;
        }
        if(nFatJet_particleNet_mass > size_t(2)){
            FatJet_particleNet_mass_3 = v_FatJet_particleNet_mass_.at(2);
        }
        else{
            FatJet_particleNet_mass_3 = -99;
        }
    }

    
}

void EDBR2PKUTree::AK8_Pt_Ordered_RawScore_flatVector(Long64_t jentry){

    int bytes_FatJet_deepTagMD_probHbb = b_FatJet_deepTagMD_probHbb_->GetEntry(jentry);
    v_FatJet_deepTagMD_probHbb_ = vector<float>(FatJet_deepTagMD_probHbb_,FatJet_deepTagMD_probHbb_+bytes_FatJet_deepTagMD_probHbb/sizeof(FatJet_deepTagMD_probHbb_[0]));
    size_t nFatJet_deepTagMD_probHbb = v_FatJet_deepTagMD_probHbb_.size();
    if(nFatJet_deepTagMD_probHbb > size_t(0)){
        FatJet_deepTagMD_probHbb_1 = v_FatJet_deepTagMD_probHbb_.at(0);
    }
    else{
        FatJet_deepTagMD_probHbb_1 = -99;
    }
    if(nFatJet_deepTagMD_probHbb > size_t(1)){
        FatJet_deepTagMD_probHbb_2 = v_FatJet_deepTagMD_probHbb_.at(1);
    }
    else{
        FatJet_deepTagMD_probHbb_2 = -99;
    }
    if(nFatJet_deepTagMD_probHbb > size_t(2)){
        FatJet_deepTagMD_probHbb_3 = v_FatJet_deepTagMD_probHbb_.at(2);
    }
    else{
        FatJet_deepTagMD_probHbb_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probHcc = b_FatJet_deepTagMD_probHcc_->GetEntry(jentry);
    v_FatJet_deepTagMD_probHcc_ = vector<float>(FatJet_deepTagMD_probHcc_,FatJet_deepTagMD_probHcc_+bytes_FatJet_deepTagMD_probHcc/sizeof(FatJet_deepTagMD_probHcc_[0]));
    size_t nFatJet_deepTagMD_probHcc = v_FatJet_deepTagMD_probHcc_.size();
    if(nFatJet_deepTagMD_probHcc > size_t(0)){
        FatJet_deepTagMD_probHcc_1 = v_FatJet_deepTagMD_probHcc_.at(0);
    }
    else{
        FatJet_deepTagMD_probHcc_1 = -99;
    }
    if(nFatJet_deepTagMD_probHcc > size_t(1)){
        FatJet_deepTagMD_probHcc_2 = v_FatJet_deepTagMD_probHcc_.at(1);
    }
    else{
        FatJet_deepTagMD_probHcc_2 = -99;
    }
    if(nFatJet_deepTagMD_probHcc > size_t(2)){
        FatJet_deepTagMD_probHcc_3 = v_FatJet_deepTagMD_probHcc_.at(2);
    }
    else{
        FatJet_deepTagMD_probHcc_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probHqqqq = b_FatJet_deepTagMD_probHqqqq_->GetEntry(jentry);
    v_FatJet_deepTagMD_probHqqqq_ = vector<float>(FatJet_deepTagMD_probHqqqq_,FatJet_deepTagMD_probHqqqq_+bytes_FatJet_deepTagMD_probHqqqq/sizeof(FatJet_deepTagMD_probHqqqq_[0]));
    size_t nFatJet_deepTagMD_probHqqqq = v_FatJet_deepTagMD_probHqqqq_.size();
    if(nFatJet_deepTagMD_probHqqqq > size_t(0)){
        FatJet_deepTagMD_probHqqqq_1 = v_FatJet_deepTagMD_probHqqqq_.at(0);
    }
    else{
        FatJet_deepTagMD_probHqqqq_1 = -99;
    }
    if(nFatJet_deepTagMD_probHqqqq > size_t(1)){
        FatJet_deepTagMD_probHqqqq_2 = v_FatJet_deepTagMD_probHqqqq_.at(1);
    }
    else{
        FatJet_deepTagMD_probHqqqq_2 = -99;
    }
    if(nFatJet_deepTagMD_probHqqqq > size_t(2)){
        FatJet_deepTagMD_probHqqqq_3 = v_FatJet_deepTagMD_probHqqqq_.at(2);
    }
    else{
        FatJet_deepTagMD_probHqqqq_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probQCDb = b_FatJet_deepTagMD_probQCDb_->GetEntry(jentry);
    v_FatJet_deepTagMD_probQCDb_ = vector<float>(FatJet_deepTagMD_probQCDb_,FatJet_deepTagMD_probQCDb_+bytes_FatJet_deepTagMD_probQCDb/sizeof(FatJet_deepTagMD_probQCDb_[0]));
    size_t nFatJet_deepTagMD_probQCDb = v_FatJet_deepTagMD_probQCDb_.size();
    if(nFatJet_deepTagMD_probQCDb > size_t(0)){
        FatJet_deepTagMD_probQCDb_1 = v_FatJet_deepTagMD_probQCDb_.at(0);
    }
    else{
        FatJet_deepTagMD_probQCDb_1 = -99;
    }
    if(nFatJet_deepTagMD_probQCDb > size_t(1)){
        FatJet_deepTagMD_probQCDb_2 = v_FatJet_deepTagMD_probQCDb_.at(1);
    }
    else{
        FatJet_deepTagMD_probQCDb_2 = -99;
    }
    if(nFatJet_deepTagMD_probQCDb > size_t(2)){
        FatJet_deepTagMD_probQCDb_3 = v_FatJet_deepTagMD_probQCDb_.at(2);
    }
    else{
        FatJet_deepTagMD_probQCDb_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probQCDbb = b_FatJet_deepTagMD_probQCDbb_->GetEntry(jentry);
    v_FatJet_deepTagMD_probQCDbb_ = vector<float>(FatJet_deepTagMD_probQCDbb_,FatJet_deepTagMD_probQCDbb_+bytes_FatJet_deepTagMD_probQCDbb/sizeof(FatJet_deepTagMD_probQCDbb_[0]));
    size_t nFatJet_deepTagMD_probQCDbb = v_FatJet_deepTagMD_probQCDbb_.size();
    if(nFatJet_deepTagMD_probQCDbb > size_t(0)){
        FatJet_deepTagMD_probQCDbb_1 = v_FatJet_deepTagMD_probQCDbb_.at(0);
    }
    else{
        FatJet_deepTagMD_probQCDbb_1 = -99;
    }
    if(nFatJet_deepTagMD_probQCDbb > size_t(1)){
        FatJet_deepTagMD_probQCDbb_2 = v_FatJet_deepTagMD_probQCDbb_.at(1);
    }
    else{
        FatJet_deepTagMD_probQCDbb_2 = -99;
    }
    if(nFatJet_deepTagMD_probQCDbb > size_t(2)){
        FatJet_deepTagMD_probQCDbb_3 = v_FatJet_deepTagMD_probQCDbb_.at(2);
    }
    else{
        FatJet_deepTagMD_probQCDbb_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probQCDc = b_FatJet_deepTagMD_probQCDc_->GetEntry(jentry);
    v_FatJet_deepTagMD_probQCDc_ = vector<float>(FatJet_deepTagMD_probQCDc_,FatJet_deepTagMD_probQCDc_+bytes_FatJet_deepTagMD_probQCDc/sizeof(FatJet_deepTagMD_probQCDc_[0]));
    size_t nFatJet_deepTagMD_probQCDc = v_FatJet_deepTagMD_probQCDc_.size();
    if(nFatJet_deepTagMD_probQCDc > size_t(0)){
        FatJet_deepTagMD_probQCDc_1 = v_FatJet_deepTagMD_probQCDc_.at(0);
    }
    else{
        FatJet_deepTagMD_probQCDc_1 = -99;
    }
    if(nFatJet_deepTagMD_probQCDc > size_t(1)){
        FatJet_deepTagMD_probQCDc_2 = v_FatJet_deepTagMD_probQCDc_.at(1);
    }
    else{
        FatJet_deepTagMD_probQCDc_2 = -99;
    }
    if(nFatJet_deepTagMD_probQCDc > size_t(2)){
        FatJet_deepTagMD_probQCDc_3 = v_FatJet_deepTagMD_probQCDc_.at(2);
    }
    else{
        FatJet_deepTagMD_probQCDc_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probQCDcc = b_FatJet_deepTagMD_probQCDcc_->GetEntry(jentry);
    v_FatJet_deepTagMD_probQCDcc_ = vector<float>(FatJet_deepTagMD_probQCDcc_,FatJet_deepTagMD_probQCDcc_+bytes_FatJet_deepTagMD_probQCDcc/sizeof(FatJet_deepTagMD_probQCDcc_[0]));
    size_t nFatJet_deepTagMD_probQCDcc = v_FatJet_deepTagMD_probQCDcc_.size();
    if(nFatJet_deepTagMD_probQCDcc > size_t(0)){
        FatJet_deepTagMD_probQCDcc_1 = v_FatJet_deepTagMD_probQCDcc_.at(0);
    }
    else{
        FatJet_deepTagMD_probQCDcc_1 = -99;
    }
    if(nFatJet_deepTagMD_probQCDcc > size_t(1)){
        FatJet_deepTagMD_probQCDcc_2 = v_FatJet_deepTagMD_probQCDcc_.at(1);
    }
    else{
        FatJet_deepTagMD_probQCDcc_2 = -99;
    }
    if(nFatJet_deepTagMD_probQCDcc > size_t(2)){
        FatJet_deepTagMD_probQCDcc_3 = v_FatJet_deepTagMD_probQCDcc_.at(2);
    }
    else{
        FatJet_deepTagMD_probQCDcc_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probQCDothers = b_FatJet_deepTagMD_probQCDothers_->GetEntry(jentry);
    v_FatJet_deepTagMD_probQCDothers_ = vector<float>(FatJet_deepTagMD_probQCDothers_,FatJet_deepTagMD_probQCDothers_+bytes_FatJet_deepTagMD_probQCDothers/sizeof(FatJet_deepTagMD_probQCDothers_[0]));
    size_t nFatJet_deepTagMD_probQCDothers = v_FatJet_deepTagMD_probQCDothers_.size();
    if(nFatJet_deepTagMD_probQCDothers > size_t(0)){
        FatJet_deepTagMD_probQCDothers_1 = v_FatJet_deepTagMD_probQCDothers_.at(0);
    }
    else{
        FatJet_deepTagMD_probQCDothers_1 = -99;
    }
    if(nFatJet_deepTagMD_probQCDothers > size_t(1)){
        FatJet_deepTagMD_probQCDothers_2 = v_FatJet_deepTagMD_probQCDothers_.at(1);
    }
    else{
        FatJet_deepTagMD_probQCDothers_2 = -99;
    }
    if(nFatJet_deepTagMD_probQCDothers > size_t(2)){
        FatJet_deepTagMD_probQCDothers_3 = v_FatJet_deepTagMD_probQCDothers_.at(2);
    }
    else{
        FatJet_deepTagMD_probQCDothers_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probTbc = b_FatJet_deepTagMD_probTbc_->GetEntry(jentry);
    v_FatJet_deepTagMD_probTbc_ = vector<float>(FatJet_deepTagMD_probTbc_,FatJet_deepTagMD_probTbc_+bytes_FatJet_deepTagMD_probTbc/sizeof(FatJet_deepTagMD_probTbc_[0]));
    size_t nFatJet_deepTagMD_probTbc = v_FatJet_deepTagMD_probTbc_.size();
    if(nFatJet_deepTagMD_probTbc > size_t(0)){
        FatJet_deepTagMD_probTbc_1 = v_FatJet_deepTagMD_probTbc_.at(0);
    }
    else{
        FatJet_deepTagMD_probTbc_1 = -99;
    }
    if(nFatJet_deepTagMD_probTbc > size_t(1)){
        FatJet_deepTagMD_probTbc_2 = v_FatJet_deepTagMD_probTbc_.at(1);
    }
    else{
        FatJet_deepTagMD_probTbc_2 = -99;
    }
    if(nFatJet_deepTagMD_probTbc > size_t(2)){
        FatJet_deepTagMD_probTbc_3 = v_FatJet_deepTagMD_probTbc_.at(2);
    }
    else{
        FatJet_deepTagMD_probTbc_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probTbcq = b_FatJet_deepTagMD_probTbcq_->GetEntry(jentry);
    v_FatJet_deepTagMD_probTbcq_ = vector<float>(FatJet_deepTagMD_probTbcq_,FatJet_deepTagMD_probTbcq_+bytes_FatJet_deepTagMD_probTbcq/sizeof(FatJet_deepTagMD_probTbcq_[0]));
    size_t nFatJet_deepTagMD_probTbcq = v_FatJet_deepTagMD_probTbcq_.size();
    if(nFatJet_deepTagMD_probTbcq > size_t(0)){
        FatJet_deepTagMD_probTbcq_1 = v_FatJet_deepTagMD_probTbcq_.at(0);
    }
    else{
        FatJet_deepTagMD_probTbcq_1 = -99;
    }
    if(nFatJet_deepTagMD_probTbcq > size_t(1)){
        FatJet_deepTagMD_probTbcq_2 = v_FatJet_deepTagMD_probTbcq_.at(1);
    }
    else{
        FatJet_deepTagMD_probTbcq_2 = -99;
    }
    if(nFatJet_deepTagMD_probTbcq > size_t(2)){
        FatJet_deepTagMD_probTbcq_3 = v_FatJet_deepTagMD_probTbcq_.at(2);
    }
    else{
        FatJet_deepTagMD_probTbcq_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probTbq = b_FatJet_deepTagMD_probTbq_->GetEntry(jentry);
    v_FatJet_deepTagMD_probTbq_ = vector<float>(FatJet_deepTagMD_probTbq_,FatJet_deepTagMD_probTbq_+bytes_FatJet_deepTagMD_probTbq/sizeof(FatJet_deepTagMD_probTbq_[0]));
    size_t nFatJet_deepTagMD_probTbq = v_FatJet_deepTagMD_probTbq_.size();
    if(nFatJet_deepTagMD_probTbq > size_t(0)){
        FatJet_deepTagMD_probTbq_1 = v_FatJet_deepTagMD_probTbq_.at(0);
    }
    else{
        FatJet_deepTagMD_probTbq_1 = -99;
    }
    if(nFatJet_deepTagMD_probTbq > size_t(1)){
        FatJet_deepTagMD_probTbq_2 = v_FatJet_deepTagMD_probTbq_.at(1);
    }
    else{
        FatJet_deepTagMD_probTbq_2 = -99;
    }
    if(nFatJet_deepTagMD_probTbq > size_t(2)){
        FatJet_deepTagMD_probTbq_3 = v_FatJet_deepTagMD_probTbq_.at(2);
    }
    else{
        FatJet_deepTagMD_probTbq_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probTbqq = b_FatJet_deepTagMD_probTbqq_->GetEntry(jentry);
    v_FatJet_deepTagMD_probTbqq_ = vector<float>(FatJet_deepTagMD_probTbqq_,FatJet_deepTagMD_probTbqq_+bytes_FatJet_deepTagMD_probTbqq/sizeof(FatJet_deepTagMD_probTbqq_[0]));
    size_t nFatJet_deepTagMD_probTbqq = v_FatJet_deepTagMD_probTbqq_.size();
    if(nFatJet_deepTagMD_probTbqq > size_t(0)){
        FatJet_deepTagMD_probTbqq_1 = v_FatJet_deepTagMD_probTbqq_.at(0);
    }
    else{
        FatJet_deepTagMD_probTbqq_1 = -99;
    }
    if(nFatJet_deepTagMD_probTbqq > size_t(1)){
        FatJet_deepTagMD_probTbqq_2 = v_FatJet_deepTagMD_probTbqq_.at(1);
    }
    else{
        FatJet_deepTagMD_probTbqq_2 = -99;
    }
    if(nFatJet_deepTagMD_probTbqq > size_t(2)){
        FatJet_deepTagMD_probTbqq_3 = v_FatJet_deepTagMD_probTbqq_.at(2);
    }
    else{
        FatJet_deepTagMD_probTbqq_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probWcq = b_FatJet_deepTagMD_probWcq_->GetEntry(jentry);
    v_FatJet_deepTagMD_probWcq_ = vector<float>(FatJet_deepTagMD_probWcq_,FatJet_deepTagMD_probWcq_+bytes_FatJet_deepTagMD_probWcq/sizeof(FatJet_deepTagMD_probWcq_[0]));
    size_t nFatJet_deepTagMD_probWcq = v_FatJet_deepTagMD_probWcq_.size();
    if(nFatJet_deepTagMD_probWcq > size_t(0)){
        FatJet_deepTagMD_probWcq_1 = v_FatJet_deepTagMD_probWcq_.at(0);
    }
    else{
        FatJet_deepTagMD_probWcq_1 = -99;
    }
    if(nFatJet_deepTagMD_probWcq > size_t(1)){
        FatJet_deepTagMD_probWcq_2 = v_FatJet_deepTagMD_probWcq_.at(1);
    }
    else{
        FatJet_deepTagMD_probWcq_2 = -99;
    }
    if(nFatJet_deepTagMD_probWcq > size_t(2)){
        FatJet_deepTagMD_probWcq_3 = v_FatJet_deepTagMD_probWcq_.at(2);
    }
    else{
        FatJet_deepTagMD_probWcq_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probWqq = b_FatJet_deepTagMD_probWqq_->GetEntry(jentry);
    v_FatJet_deepTagMD_probWqq_ = vector<float>(FatJet_deepTagMD_probWqq_,FatJet_deepTagMD_probWqq_+bytes_FatJet_deepTagMD_probWqq/sizeof(FatJet_deepTagMD_probWqq_[0]));
    size_t nFatJet_deepTagMD_probWqq = v_FatJet_deepTagMD_probWqq_.size();
    if(nFatJet_deepTagMD_probWqq > size_t(0)){
        FatJet_deepTagMD_probWqq_1 = v_FatJet_deepTagMD_probWqq_.at(0);
    }
    else{
        FatJet_deepTagMD_probWqq_1 = -99;
    }
    if(nFatJet_deepTagMD_probWqq > size_t(1)){
        FatJet_deepTagMD_probWqq_2 = v_FatJet_deepTagMD_probWqq_.at(1);
    }
    else{
        FatJet_deepTagMD_probWqq_2 = -99;
    }
    if(nFatJet_deepTagMD_probWqq > size_t(2)){
        FatJet_deepTagMD_probWqq_3 = v_FatJet_deepTagMD_probWqq_.at(2);
    }
    else{
        FatJet_deepTagMD_probWqq_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probZbb = b_FatJet_deepTagMD_probZbb_->GetEntry(jentry);
    v_FatJet_deepTagMD_probZbb_ = vector<float>(FatJet_deepTagMD_probZbb_,FatJet_deepTagMD_probZbb_+bytes_FatJet_deepTagMD_probZbb/sizeof(FatJet_deepTagMD_probZbb_[0]));
    size_t nFatJet_deepTagMD_probZbb = v_FatJet_deepTagMD_probZbb_.size();
    if(nFatJet_deepTagMD_probZbb > size_t(0)){
        FatJet_deepTagMD_probZbb_1 = v_FatJet_deepTagMD_probZbb_.at(0);
    }
    else{
        FatJet_deepTagMD_probZbb_1 = -99;
    }
    if(nFatJet_deepTagMD_probZbb > size_t(1)){
        FatJet_deepTagMD_probZbb_2 = v_FatJet_deepTagMD_probZbb_.at(1);
    }
    else{
        FatJet_deepTagMD_probZbb_2 = -99;
    }
    if(nFatJet_deepTagMD_probZbb > size_t(2)){
        FatJet_deepTagMD_probZbb_3 = v_FatJet_deepTagMD_probZbb_.at(2);
    }
    else{
        FatJet_deepTagMD_probZbb_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probZcc = b_FatJet_deepTagMD_probZcc_->GetEntry(jentry);
    v_FatJet_deepTagMD_probZcc_ = vector<float>(FatJet_deepTagMD_probZcc_,FatJet_deepTagMD_probZcc_+bytes_FatJet_deepTagMD_probZcc/sizeof(FatJet_deepTagMD_probZcc_[0]));
    size_t nFatJet_deepTagMD_probZcc = v_FatJet_deepTagMD_probZcc_.size();
    if(nFatJet_deepTagMD_probZcc > size_t(0)){
        FatJet_deepTagMD_probZcc_1 = v_FatJet_deepTagMD_probZcc_.at(0);
    }
    else{
        FatJet_deepTagMD_probZcc_1 = -99;
    }
    if(nFatJet_deepTagMD_probZcc > size_t(1)){
        FatJet_deepTagMD_probZcc_2 = v_FatJet_deepTagMD_probZcc_.at(1);
    }
    else{
        FatJet_deepTagMD_probZcc_2 = -99;
    }
    if(nFatJet_deepTagMD_probZcc > size_t(2)){
        FatJet_deepTagMD_probZcc_3 = v_FatJet_deepTagMD_probZcc_.at(2);
    }
    else{
        FatJet_deepTagMD_probZcc_3 = -99;
    }

    
    int bytes_FatJet_deepTagMD_probZqq = b_FatJet_deepTagMD_probZqq_->GetEntry(jentry);
    v_FatJet_deepTagMD_probZqq_ = vector<float>(FatJet_deepTagMD_probZqq_,FatJet_deepTagMD_probZqq_+bytes_FatJet_deepTagMD_probZqq/sizeof(FatJet_deepTagMD_probZqq_[0]));
    size_t nFatJet_deepTagMD_probZqq = v_FatJet_deepTagMD_probZqq_.size();
    if(nFatJet_deepTagMD_probZqq > size_t(0)){
        FatJet_deepTagMD_probZqq_1 = v_FatJet_deepTagMD_probZqq_.at(0);
    }
    else{
        FatJet_deepTagMD_probZqq_1 = -99;
    }
    if(nFatJet_deepTagMD_probZqq > size_t(1)){
        FatJet_deepTagMD_probZqq_2 = v_FatJet_deepTagMD_probZqq_.at(1);
    }
    else{
        FatJet_deepTagMD_probZqq_2 = -99;
    }
    if(nFatJet_deepTagMD_probZqq > size_t(2)){
        FatJet_deepTagMD_probZqq_3 = v_FatJet_deepTagMD_probZqq_.at(2);
    }
    else{
        FatJet_deepTagMD_probZqq_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probHbb = b_FatJet_deepTag_probHbb_->GetEntry(jentry);
    v_FatJet_deepTag_probHbb_ = vector<float>(FatJet_deepTag_probHbb_,FatJet_deepTag_probHbb_+bytes_FatJet_deepTag_probHbb/sizeof(FatJet_deepTag_probHbb_[0]));
    size_t nFatJet_deepTag_probHbb = v_FatJet_deepTag_probHbb_.size();
    if(nFatJet_deepTag_probHbb > size_t(0)){
        FatJet_deepTag_probHbb_1 = v_FatJet_deepTag_probHbb_.at(0);
    }
    else{
        FatJet_deepTag_probHbb_1 = -99;
    }
    if(nFatJet_deepTag_probHbb > size_t(1)){
        FatJet_deepTag_probHbb_2 = v_FatJet_deepTag_probHbb_.at(1);
    }
    else{
        FatJet_deepTag_probHbb_2 = -99;
    }
    if(nFatJet_deepTag_probHbb > size_t(2)){
        FatJet_deepTag_probHbb_3 = v_FatJet_deepTag_probHbb_.at(2);
    }
    else{
        FatJet_deepTag_probHbb_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probHcc = b_FatJet_deepTag_probHcc_->GetEntry(jentry);
    v_FatJet_deepTag_probHcc_ = vector<float>(FatJet_deepTag_probHcc_,FatJet_deepTag_probHcc_+bytes_FatJet_deepTag_probHcc/sizeof(FatJet_deepTag_probHcc_[0]));
    size_t nFatJet_deepTag_probHcc = v_FatJet_deepTag_probHcc_.size();
    if(nFatJet_deepTag_probHcc > size_t(0)){
        FatJet_deepTag_probHcc_1 = v_FatJet_deepTag_probHcc_.at(0);
    }
    else{
        FatJet_deepTag_probHcc_1 = -99;
    }
    if(nFatJet_deepTag_probHcc > size_t(1)){
        FatJet_deepTag_probHcc_2 = v_FatJet_deepTag_probHcc_.at(1);
    }
    else{
        FatJet_deepTag_probHcc_2 = -99;
    }
    if(nFatJet_deepTag_probHcc > size_t(2)){
        FatJet_deepTag_probHcc_3 = v_FatJet_deepTag_probHcc_.at(2);
    }
    else{
        FatJet_deepTag_probHcc_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probHqqqq = b_FatJet_deepTag_probHqqqq_->GetEntry(jentry);
    v_FatJet_deepTag_probHqqqq_ = vector<float>(FatJet_deepTag_probHqqqq_,FatJet_deepTag_probHqqqq_+bytes_FatJet_deepTag_probHqqqq/sizeof(FatJet_deepTag_probHqqqq_[0]));
    size_t nFatJet_deepTag_probHqqqq = v_FatJet_deepTag_probHqqqq_.size();
    if(nFatJet_deepTag_probHqqqq > size_t(0)){
        FatJet_deepTag_probHqqqq_1 = v_FatJet_deepTag_probHqqqq_.at(0);
    }
    else{
        FatJet_deepTag_probHqqqq_1 = -99;
    }
    if(nFatJet_deepTag_probHqqqq > size_t(1)){
        FatJet_deepTag_probHqqqq_2 = v_FatJet_deepTag_probHqqqq_.at(1);
    }
    else{
        FatJet_deepTag_probHqqqq_2 = -99;
    }
    if(nFatJet_deepTag_probHqqqq > size_t(2)){
        FatJet_deepTag_probHqqqq_3 = v_FatJet_deepTag_probHqqqq_.at(2);
    }
    else{
        FatJet_deepTag_probHqqqq_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probQCDb = b_FatJet_deepTag_probQCDb_->GetEntry(jentry);
    v_FatJet_deepTag_probQCDb_ = vector<float>(FatJet_deepTag_probQCDb_,FatJet_deepTag_probQCDb_+bytes_FatJet_deepTag_probQCDb/sizeof(FatJet_deepTag_probQCDb_[0]));
    size_t nFatJet_deepTag_probQCDb = v_FatJet_deepTag_probQCDb_.size();
    if(nFatJet_deepTag_probQCDb > size_t(0)){
        FatJet_deepTag_probQCDb_1 = v_FatJet_deepTag_probQCDb_.at(0);
    }
    else{
        FatJet_deepTag_probQCDb_1 = -99;
    }
    if(nFatJet_deepTag_probQCDb > size_t(1)){
        FatJet_deepTag_probQCDb_2 = v_FatJet_deepTag_probQCDb_.at(1);
    }
    else{
        FatJet_deepTag_probQCDb_2 = -99;
    }
    if(nFatJet_deepTag_probQCDb > size_t(2)){
        FatJet_deepTag_probQCDb_3 = v_FatJet_deepTag_probQCDb_.at(2);
    }
    else{
        FatJet_deepTag_probQCDb_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probQCDbb = b_FatJet_deepTag_probQCDbb_->GetEntry(jentry);
    v_FatJet_deepTag_probQCDbb_ = vector<float>(FatJet_deepTag_probQCDbb_,FatJet_deepTag_probQCDbb_+bytes_FatJet_deepTag_probQCDbb/sizeof(FatJet_deepTag_probQCDbb_[0]));
    size_t nFatJet_deepTag_probQCDbb = v_FatJet_deepTag_probQCDbb_.size();
    if(nFatJet_deepTag_probQCDbb > size_t(0)){
        FatJet_deepTag_probQCDbb_1 = v_FatJet_deepTag_probQCDbb_.at(0);
    }
    else{
        FatJet_deepTag_probQCDbb_1 = -99;
    }
    if(nFatJet_deepTag_probQCDbb > size_t(1)){
        FatJet_deepTag_probQCDbb_2 = v_FatJet_deepTag_probQCDbb_.at(1);
    }
    else{
        FatJet_deepTag_probQCDbb_2 = -99;
    }
    if(nFatJet_deepTag_probQCDbb > size_t(2)){
        FatJet_deepTag_probQCDbb_3 = v_FatJet_deepTag_probQCDbb_.at(2);
    }
    else{
        FatJet_deepTag_probQCDbb_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probQCDc = b_FatJet_deepTag_probQCDc_->GetEntry(jentry);
    v_FatJet_deepTag_probQCDc_ = vector<float>(FatJet_deepTag_probQCDc_,FatJet_deepTag_probQCDc_+bytes_FatJet_deepTag_probQCDc/sizeof(FatJet_deepTag_probQCDc_[0]));
    size_t nFatJet_deepTag_probQCDc = v_FatJet_deepTag_probQCDc_.size();
    if(nFatJet_deepTag_probQCDc > size_t(0)){
        FatJet_deepTag_probQCDc_1 = v_FatJet_deepTag_probQCDc_.at(0);
    }
    else{
        FatJet_deepTag_probQCDc_1 = -99;
    }
    if(nFatJet_deepTag_probQCDc > size_t(1)){
        FatJet_deepTag_probQCDc_2 = v_FatJet_deepTag_probQCDc_.at(1);
    }
    else{
        FatJet_deepTag_probQCDc_2 = -99;
    }
    if(nFatJet_deepTag_probQCDc > size_t(2)){
        FatJet_deepTag_probQCDc_3 = v_FatJet_deepTag_probQCDc_.at(2);
    }
    else{
        FatJet_deepTag_probQCDc_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probQCDcc = b_FatJet_deepTag_probQCDcc_->GetEntry(jentry);
    v_FatJet_deepTag_probQCDcc_ = vector<float>(FatJet_deepTag_probQCDcc_,FatJet_deepTag_probQCDcc_+bytes_FatJet_deepTag_probQCDcc/sizeof(FatJet_deepTag_probQCDcc_[0]));
    size_t nFatJet_deepTag_probQCDcc = v_FatJet_deepTag_probQCDcc_.size();
    if(nFatJet_deepTag_probQCDcc > size_t(0)){
        FatJet_deepTag_probQCDcc_1 = v_FatJet_deepTag_probQCDcc_.at(0);
    }
    else{
        FatJet_deepTag_probQCDcc_1 = -99;
    }
    if(nFatJet_deepTag_probQCDcc > size_t(1)){
        FatJet_deepTag_probQCDcc_2 = v_FatJet_deepTag_probQCDcc_.at(1);
    }
    else{
        FatJet_deepTag_probQCDcc_2 = -99;
    }
    if(nFatJet_deepTag_probQCDcc > size_t(2)){
        FatJet_deepTag_probQCDcc_3 = v_FatJet_deepTag_probQCDcc_.at(2);
    }
    else{
        FatJet_deepTag_probQCDcc_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probQCDothers = b_FatJet_deepTag_probQCDothers_->GetEntry(jentry);
    v_FatJet_deepTag_probQCDothers_ = vector<float>(FatJet_deepTag_probQCDothers_,FatJet_deepTag_probQCDothers_+bytes_FatJet_deepTag_probQCDothers/sizeof(FatJet_deepTag_probQCDothers_[0]));
    size_t nFatJet_deepTag_probQCDothers = v_FatJet_deepTag_probQCDothers_.size();
    if(nFatJet_deepTag_probQCDothers > size_t(0)){
        FatJet_deepTag_probQCDothers_1 = v_FatJet_deepTag_probQCDothers_.at(0);
    }
    else{
        FatJet_deepTag_probQCDothers_1 = -99;
    }
    if(nFatJet_deepTag_probQCDothers > size_t(1)){
        FatJet_deepTag_probQCDothers_2 = v_FatJet_deepTag_probQCDothers_.at(1);
    }
    else{
        FatJet_deepTag_probQCDothers_2 = -99;
    }
    if(nFatJet_deepTag_probQCDothers > size_t(2)){
        FatJet_deepTag_probQCDothers_3 = v_FatJet_deepTag_probQCDothers_.at(2);
    }
    else{
        FatJet_deepTag_probQCDothers_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probTbc = b_FatJet_deepTag_probTbc_->GetEntry(jentry);
    v_FatJet_deepTag_probTbc_ = vector<float>(FatJet_deepTag_probTbc_,FatJet_deepTag_probTbc_+bytes_FatJet_deepTag_probTbc/sizeof(FatJet_deepTag_probTbc_[0]));
    size_t nFatJet_deepTag_probTbc = v_FatJet_deepTag_probTbc_.size();
    if(nFatJet_deepTag_probTbc > size_t(0)){
        FatJet_deepTag_probTbc_1 = v_FatJet_deepTag_probTbc_.at(0);
    }
    else{
        FatJet_deepTag_probTbc_1 = -99;
    }
    if(nFatJet_deepTag_probTbc > size_t(1)){
        FatJet_deepTag_probTbc_2 = v_FatJet_deepTag_probTbc_.at(1);
    }
    else{
        FatJet_deepTag_probTbc_2 = -99;
    }
    if(nFatJet_deepTag_probTbc > size_t(2)){
        FatJet_deepTag_probTbc_3 = v_FatJet_deepTag_probTbc_.at(2);
    }
    else{
        FatJet_deepTag_probTbc_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probTbcq = b_FatJet_deepTag_probTbcq_->GetEntry(jentry);
    v_FatJet_deepTag_probTbcq_ = vector<float>(FatJet_deepTag_probTbcq_,FatJet_deepTag_probTbcq_+bytes_FatJet_deepTag_probTbcq/sizeof(FatJet_deepTag_probTbcq_[0]));
    size_t nFatJet_deepTag_probTbcq = v_FatJet_deepTag_probTbcq_.size();
    if(nFatJet_deepTag_probTbcq > size_t(0)){
        FatJet_deepTag_probTbcq_1 = v_FatJet_deepTag_probTbcq_.at(0);
    }
    else{
        FatJet_deepTag_probTbcq_1 = -99;
    }
    if(nFatJet_deepTag_probTbcq > size_t(1)){
        FatJet_deepTag_probTbcq_2 = v_FatJet_deepTag_probTbcq_.at(1);
    }
    else{
        FatJet_deepTag_probTbcq_2 = -99;
    }
    if(nFatJet_deepTag_probTbcq > size_t(2)){
        FatJet_deepTag_probTbcq_3 = v_FatJet_deepTag_probTbcq_.at(2);
    }
    else{
        FatJet_deepTag_probTbcq_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probTbq = b_FatJet_deepTag_probTbq_->GetEntry(jentry);
    v_FatJet_deepTag_probTbq_ = vector<float>(FatJet_deepTag_probTbq_,FatJet_deepTag_probTbq_+bytes_FatJet_deepTag_probTbq/sizeof(FatJet_deepTag_probTbq_[0]));
    size_t nFatJet_deepTag_probTbq = v_FatJet_deepTag_probTbq_.size();
    if(nFatJet_deepTag_probTbq > size_t(0)){
        FatJet_deepTag_probTbq_1 = v_FatJet_deepTag_probTbq_.at(0);
    }
    else{
        FatJet_deepTag_probTbq_1 = -99;
    }
    if(nFatJet_deepTag_probTbq > size_t(1)){
        FatJet_deepTag_probTbq_2 = v_FatJet_deepTag_probTbq_.at(1);
    }
    else{
        FatJet_deepTag_probTbq_2 = -99;
    }
    if(nFatJet_deepTag_probTbq > size_t(2)){
        FatJet_deepTag_probTbq_3 = v_FatJet_deepTag_probTbq_.at(2);
    }
    else{
        FatJet_deepTag_probTbq_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probTbqq = b_FatJet_deepTag_probTbqq_->GetEntry(jentry);
    v_FatJet_deepTag_probTbqq_ = vector<float>(FatJet_deepTag_probTbqq_,FatJet_deepTag_probTbqq_+bytes_FatJet_deepTag_probTbqq/sizeof(FatJet_deepTag_probTbqq_[0]));
    size_t nFatJet_deepTag_probTbqq = v_FatJet_deepTag_probTbqq_.size();
    if(nFatJet_deepTag_probTbqq > size_t(0)){
        FatJet_deepTag_probTbqq_1 = v_FatJet_deepTag_probTbqq_.at(0);
    }
    else{
        FatJet_deepTag_probTbqq_1 = -99;
    }
    if(nFatJet_deepTag_probTbqq > size_t(1)){
        FatJet_deepTag_probTbqq_2 = v_FatJet_deepTag_probTbqq_.at(1);
    }
    else{
        FatJet_deepTag_probTbqq_2 = -99;
    }
    if(nFatJet_deepTag_probTbqq > size_t(2)){
        FatJet_deepTag_probTbqq_3 = v_FatJet_deepTag_probTbqq_.at(2);
    }
    else{
        FatJet_deepTag_probTbqq_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probWcq = b_FatJet_deepTag_probWcq_->GetEntry(jentry);
    v_FatJet_deepTag_probWcq_ = vector<float>(FatJet_deepTag_probWcq_,FatJet_deepTag_probWcq_+bytes_FatJet_deepTag_probWcq/sizeof(FatJet_deepTag_probWcq_[0]));
    size_t nFatJet_deepTag_probWcq = v_FatJet_deepTag_probWcq_.size();
    if(nFatJet_deepTag_probWcq > size_t(0)){
        FatJet_deepTag_probWcq_1 = v_FatJet_deepTag_probWcq_.at(0);
    }
    else{
        FatJet_deepTag_probWcq_1 = -99;
    }
    if(nFatJet_deepTag_probWcq > size_t(1)){
        FatJet_deepTag_probWcq_2 = v_FatJet_deepTag_probWcq_.at(1);
    }
    else{
        FatJet_deepTag_probWcq_2 = -99;
    }
    if(nFatJet_deepTag_probWcq > size_t(2)){
        FatJet_deepTag_probWcq_3 = v_FatJet_deepTag_probWcq_.at(2);
    }
    else{
        FatJet_deepTag_probWcq_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probWqq = b_FatJet_deepTag_probWqq_->GetEntry(jentry);
    v_FatJet_deepTag_probWqq_ = vector<float>(FatJet_deepTag_probWqq_,FatJet_deepTag_probWqq_+bytes_FatJet_deepTag_probWqq/sizeof(FatJet_deepTag_probWqq_[0]));
    size_t nFatJet_deepTag_probWqq = v_FatJet_deepTag_probWqq_.size();
    if(nFatJet_deepTag_probWqq > size_t(0)){
        FatJet_deepTag_probWqq_1 = v_FatJet_deepTag_probWqq_.at(0);
    }
    else{
        FatJet_deepTag_probWqq_1 = -99;
    }
    if(nFatJet_deepTag_probWqq > size_t(1)){
        FatJet_deepTag_probWqq_2 = v_FatJet_deepTag_probWqq_.at(1);
    }
    else{
        FatJet_deepTag_probWqq_2 = -99;
    }
    if(nFatJet_deepTag_probWqq > size_t(2)){
        FatJet_deepTag_probWqq_3 = v_FatJet_deepTag_probWqq_.at(2);
    }
    else{
        FatJet_deepTag_probWqq_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probZbb = b_FatJet_deepTag_probZbb_->GetEntry(jentry);
    v_FatJet_deepTag_probZbb_ = vector<float>(FatJet_deepTag_probZbb_,FatJet_deepTag_probZbb_+bytes_FatJet_deepTag_probZbb/sizeof(FatJet_deepTag_probZbb_[0]));
    size_t nFatJet_deepTag_probZbb = v_FatJet_deepTag_probZbb_.size();
    if(nFatJet_deepTag_probZbb > size_t(0)){
        FatJet_deepTag_probZbb_1 = v_FatJet_deepTag_probZbb_.at(0);
    }
    else{
        FatJet_deepTag_probZbb_1 = -99;
    }
    if(nFatJet_deepTag_probZbb > size_t(1)){
        FatJet_deepTag_probZbb_2 = v_FatJet_deepTag_probZbb_.at(1);
    }
    else{
        FatJet_deepTag_probZbb_2 = -99;
    }
    if(nFatJet_deepTag_probZbb > size_t(2)){
        FatJet_deepTag_probZbb_3 = v_FatJet_deepTag_probZbb_.at(2);
    }
    else{
        FatJet_deepTag_probZbb_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probZcc = b_FatJet_deepTag_probZcc_->GetEntry(jentry);
    v_FatJet_deepTag_probZcc_ = vector<float>(FatJet_deepTag_probZcc_,FatJet_deepTag_probZcc_+bytes_FatJet_deepTag_probZcc/sizeof(FatJet_deepTag_probZcc_[0]));
    size_t nFatJet_deepTag_probZcc = v_FatJet_deepTag_probZcc_.size();
    if(nFatJet_deepTag_probZcc > size_t(0)){
        FatJet_deepTag_probZcc_1 = v_FatJet_deepTag_probZcc_.at(0);
    }
    else{
        FatJet_deepTag_probZcc_1 = -99;
    }
    if(nFatJet_deepTag_probZcc > size_t(1)){
        FatJet_deepTag_probZcc_2 = v_FatJet_deepTag_probZcc_.at(1);
    }
    else{
        FatJet_deepTag_probZcc_2 = -99;
    }
    if(nFatJet_deepTag_probZcc > size_t(2)){
        FatJet_deepTag_probZcc_3 = v_FatJet_deepTag_probZcc_.at(2);
    }
    else{
        FatJet_deepTag_probZcc_3 = -99;
    }

    
    int bytes_FatJet_deepTag_probZqq = b_FatJet_deepTag_probZqq_->GetEntry(jentry);
    v_FatJet_deepTag_probZqq_ = vector<float>(FatJet_deepTag_probZqq_,FatJet_deepTag_probZqq_+bytes_FatJet_deepTag_probZqq/sizeof(FatJet_deepTag_probZqq_[0]));
    size_t nFatJet_deepTag_probZqq = v_FatJet_deepTag_probZqq_.size();
    if(nFatJet_deepTag_probZqq > size_t(0)){
        FatJet_deepTag_probZqq_1 = v_FatJet_deepTag_probZqq_.at(0);
    }
    else{
        FatJet_deepTag_probZqq_1 = -99;
    }
    if(nFatJet_deepTag_probZqq > size_t(1)){
        FatJet_deepTag_probZqq_2 = v_FatJet_deepTag_probZqq_.at(1);
    }
    else{
        FatJet_deepTag_probZqq_2 = -99;
    }
    if(nFatJet_deepTag_probZqq > size_t(2)){
        FatJet_deepTag_probZqq_3 = v_FatJet_deepTag_probZqq_.at(2);
    }
    else{
        FatJet_deepTag_probZqq_3 = -99;
    }

    
}

void EDBR2PKUTree::AK8_Pt_Ordered_RawScore_swtich(){
    
    jetAK8puppi_dnn_probHbb = FatJet_deepTag_probHbb_1;
    jetAK8puppi_dnnDecorr_probHbb = FatJet_deepTagMD_probHbb_1;
    jetAK8puppi_dnn_probHbb_2 = FatJet_deepTag_probHbb_2;
    jetAK8puppi_dnnDecorr_probHbb_2 = FatJet_deepTagMD_probHbb_2;
    jetAK8puppi_dnn_probHbb_3 = FatJet_deepTag_probHbb_3;
    jetAK8puppi_dnnDecorr_probHbb_3 = FatJet_deepTagMD_probHbb_3;

        
    jetAK8puppi_dnn_probHcc = FatJet_deepTag_probHcc_1;
    jetAK8puppi_dnnDecorr_probHcc = FatJet_deepTagMD_probHcc_1;
    jetAK8puppi_dnn_probHcc_2 = FatJet_deepTag_probHcc_2;
    jetAK8puppi_dnnDecorr_probHcc_2 = FatJet_deepTagMD_probHcc_2;
    jetAK8puppi_dnn_probHcc_3 = FatJet_deepTag_probHcc_3;
    jetAK8puppi_dnnDecorr_probHcc_3 = FatJet_deepTagMD_probHcc_3;

        
    jetAK8puppi_dnn_probHqqqq = FatJet_deepTag_probHqqqq_1;
    jetAK8puppi_dnnDecorr_probHqqqq = FatJet_deepTagMD_probHqqqq_1;
    jetAK8puppi_dnn_probHqqqq_2 = FatJet_deepTag_probHqqqq_2;
    jetAK8puppi_dnnDecorr_probHqqqq_2 = FatJet_deepTagMD_probHqqqq_2;
    jetAK8puppi_dnn_probHqqqq_3 = FatJet_deepTag_probHqqqq_3;
    jetAK8puppi_dnnDecorr_probHqqqq_3 = FatJet_deepTagMD_probHqqqq_3;

        
    jetAK8puppi_dnn_probQCDb = FatJet_deepTag_probQCDb_1;
    jetAK8puppi_dnnDecorr_probQCDb = FatJet_deepTagMD_probQCDb_1;
    jetAK8puppi_dnn_probQCDb_2 = FatJet_deepTag_probQCDb_2;
    jetAK8puppi_dnnDecorr_probQCDb_2 = FatJet_deepTagMD_probQCDb_2;
    jetAK8puppi_dnn_probQCDb_3 = FatJet_deepTag_probQCDb_3;
    jetAK8puppi_dnnDecorr_probQCDb_3 = FatJet_deepTagMD_probQCDb_3;

        
    jetAK8puppi_dnn_probQCDbb = FatJet_deepTag_probQCDbb_1;
    jetAK8puppi_dnnDecorr_probQCDbb = FatJet_deepTagMD_probQCDbb_1;
    jetAK8puppi_dnn_probQCDbb_2 = FatJet_deepTag_probQCDbb_2;
    jetAK8puppi_dnnDecorr_probQCDbb_2 = FatJet_deepTagMD_probQCDbb_2;
    jetAK8puppi_dnn_probQCDbb_3 = FatJet_deepTag_probQCDbb_3;
    jetAK8puppi_dnnDecorr_probQCDbb_3 = FatJet_deepTagMD_probQCDbb_3;

        
    jetAK8puppi_dnn_probQCDc = FatJet_deepTag_probQCDc_1;
    jetAK8puppi_dnnDecorr_probQCDc = FatJet_deepTagMD_probQCDc_1;
    jetAK8puppi_dnn_probQCDc_2 = FatJet_deepTag_probQCDc_2;
    jetAK8puppi_dnnDecorr_probQCDc_2 = FatJet_deepTagMD_probQCDc_2;
    jetAK8puppi_dnn_probQCDc_3 = FatJet_deepTag_probQCDc_3;
    jetAK8puppi_dnnDecorr_probQCDc_3 = FatJet_deepTagMD_probQCDc_3;

        
    jetAK8puppi_dnn_probQCDcc = FatJet_deepTag_probQCDcc_1;
    jetAK8puppi_dnnDecorr_probQCDcc = FatJet_deepTagMD_probQCDcc_1;
    jetAK8puppi_dnn_probQCDcc_2 = FatJet_deepTag_probQCDcc_2;
    jetAK8puppi_dnnDecorr_probQCDcc_2 = FatJet_deepTagMD_probQCDcc_2;
    jetAK8puppi_dnn_probQCDcc_3 = FatJet_deepTag_probQCDcc_3;
    jetAK8puppi_dnnDecorr_probQCDcc_3 = FatJet_deepTagMD_probQCDcc_3;

        
    jetAK8puppi_dnn_probQCDothers = FatJet_deepTag_probQCDothers_1;
    jetAK8puppi_dnnDecorr_probQCDothers = FatJet_deepTagMD_probQCDothers_1;
    jetAK8puppi_dnn_probQCDothers_2 = FatJet_deepTag_probQCDothers_2;
    jetAK8puppi_dnnDecorr_probQCDothers_2 = FatJet_deepTagMD_probQCDothers_2;
    jetAK8puppi_dnn_probQCDothers_3 = FatJet_deepTag_probQCDothers_3;
    jetAK8puppi_dnnDecorr_probQCDothers_3 = FatJet_deepTagMD_probQCDothers_3;

        
    jetAK8puppi_dnn_probTbc = FatJet_deepTag_probTbc_1;
    jetAK8puppi_dnnDecorr_probTbc = FatJet_deepTagMD_probTbc_1;
    jetAK8puppi_dnn_probTbc_2 = FatJet_deepTag_probTbc_2;
    jetAK8puppi_dnnDecorr_probTbc_2 = FatJet_deepTagMD_probTbc_2;
    jetAK8puppi_dnn_probTbc_3 = FatJet_deepTag_probTbc_3;
    jetAK8puppi_dnnDecorr_probTbc_3 = FatJet_deepTagMD_probTbc_3;

        
    jetAK8puppi_dnn_probTbcq = FatJet_deepTag_probTbcq_1;
    jetAK8puppi_dnnDecorr_probTbcq = FatJet_deepTagMD_probTbcq_1;
    jetAK8puppi_dnn_probTbcq_2 = FatJet_deepTag_probTbcq_2;
    jetAK8puppi_dnnDecorr_probTbcq_2 = FatJet_deepTagMD_probTbcq_2;
    jetAK8puppi_dnn_probTbcq_3 = FatJet_deepTag_probTbcq_3;
    jetAK8puppi_dnnDecorr_probTbcq_3 = FatJet_deepTagMD_probTbcq_3;

        
    jetAK8puppi_dnn_probTbq = FatJet_deepTag_probTbq_1;
    jetAK8puppi_dnnDecorr_probTbq = FatJet_deepTagMD_probTbq_1;
    jetAK8puppi_dnn_probTbq_2 = FatJet_deepTag_probTbq_2;
    jetAK8puppi_dnnDecorr_probTbq_2 = FatJet_deepTagMD_probTbq_2;
    jetAK8puppi_dnn_probTbq_3 = FatJet_deepTag_probTbq_3;
    jetAK8puppi_dnnDecorr_probTbq_3 = FatJet_deepTagMD_probTbq_3;

        
    jetAK8puppi_dnn_probTbqq = FatJet_deepTag_probTbqq_1;
    jetAK8puppi_dnnDecorr_probTbqq = FatJet_deepTagMD_probTbqq_1;
    jetAK8puppi_dnn_probTbqq_2 = FatJet_deepTag_probTbqq_2;
    jetAK8puppi_dnnDecorr_probTbqq_2 = FatJet_deepTagMD_probTbqq_2;
    jetAK8puppi_dnn_probTbqq_3 = FatJet_deepTag_probTbqq_3;
    jetAK8puppi_dnnDecorr_probTbqq_3 = FatJet_deepTagMD_probTbqq_3;

        
    jetAK8puppi_dnn_probWcq = FatJet_deepTag_probWcq_1;
    jetAK8puppi_dnnDecorr_probWcq = FatJet_deepTagMD_probWcq_1;
    jetAK8puppi_dnn_probWcq_2 = FatJet_deepTag_probWcq_2;
    jetAK8puppi_dnnDecorr_probWcq_2 = FatJet_deepTagMD_probWcq_2;
    jetAK8puppi_dnn_probWcq_3 = FatJet_deepTag_probWcq_3;
    jetAK8puppi_dnnDecorr_probWcq_3 = FatJet_deepTagMD_probWcq_3;

        
    jetAK8puppi_dnn_probWqq = FatJet_deepTag_probWqq_1;
    jetAK8puppi_dnnDecorr_probWqq = FatJet_deepTagMD_probWqq_1;
    jetAK8puppi_dnn_probWqq_2 = FatJet_deepTag_probWqq_2;
    jetAK8puppi_dnnDecorr_probWqq_2 = FatJet_deepTagMD_probWqq_2;
    jetAK8puppi_dnn_probWqq_3 = FatJet_deepTag_probWqq_3;
    jetAK8puppi_dnnDecorr_probWqq_3 = FatJet_deepTagMD_probWqq_3;

        
    jetAK8puppi_dnn_probZbb = FatJet_deepTag_probZbb_1;
    jetAK8puppi_dnnDecorr_probZbb = FatJet_deepTagMD_probZbb_1;
    jetAK8puppi_dnn_probZbb_2 = FatJet_deepTag_probZbb_2;
    jetAK8puppi_dnnDecorr_probZbb_2 = FatJet_deepTagMD_probZbb_2;
    jetAK8puppi_dnn_probZbb_3 = FatJet_deepTag_probZbb_3;
    jetAK8puppi_dnnDecorr_probZbb_3 = FatJet_deepTagMD_probZbb_3;

        
    jetAK8puppi_dnn_probZcc = FatJet_deepTag_probZcc_1;
    jetAK8puppi_dnnDecorr_probZcc = FatJet_deepTagMD_probZcc_1;
    jetAK8puppi_dnn_probZcc_2 = FatJet_deepTag_probZcc_2;
    jetAK8puppi_dnnDecorr_probZcc_2 = FatJet_deepTagMD_probZcc_2;
    jetAK8puppi_dnn_probZcc_3 = FatJet_deepTag_probZcc_3;
    jetAK8puppi_dnnDecorr_probZcc_3 = FatJet_deepTagMD_probZcc_3;

        
    jetAK8puppi_dnn_probZqq = FatJet_deepTag_probZqq_1;
    jetAK8puppi_dnnDecorr_probZqq = FatJet_deepTagMD_probZqq_1;
    jetAK8puppi_dnn_probZqq_2 = FatJet_deepTag_probZqq_2;
    jetAK8puppi_dnnDecorr_probZqq_2 = FatJet_deepTagMD_probZqq_2;
    jetAK8puppi_dnn_probZqq_3 = FatJet_deepTag_probZqq_3;
    jetAK8puppi_dnnDecorr_probZqq_3 = FatJet_deepTagMD_probZqq_3;

}


#endif
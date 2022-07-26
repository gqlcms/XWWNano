#ifndef _vector_GetEntry__NanoAOD_
#define _vector_GetEntry__NanoAOD_

void EDBR2PKUTree::Jets_GetEntry(Long64_t jentry) {
    
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
        v_Jet_hadronFlavour_ = vector<int>(Jet_hadronFlavour_,Jet_hadronFlavour_+bytes_Jet_hadronFlavour/sizeof(Jet_hadronFlavour_[0]));
        size_t nJet_hadronFlavour = v_Jet_hadronFlavour_.size();
    }
    
    int bytes_Jet_jetId = b_Jet_jetId_->GetEntry(jentry);
    v_Jet_jetId_ = vector<int>(Jet_jetId_,Jet_jetId_+bytes_Jet_jetId/sizeof(Jet_jetId_[0]));
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

    if(b_Jet_pt_nom_){
        int bytes_Jet_pt_nom = b_Jet_pt_nom_->GetEntry(jentry);
        v_Jet_pt_nom_ = vector<float>(Jet_pt_nom_,Jet_pt_nom_+bytes_Jet_pt_nom/sizeof(Jet_pt_nom_[0]));
    }

    if(b_Jet_mass_nom_){
        int bytes_Jet_mass_nom = b_Jet_mass_nom_->GetEntry(jentry);
        v_Jet_mass_nom_ = vector<float>(Jet_mass_nom_,Jet_mass_nom_+bytes_Jet_mass_nom/sizeof(Jet_mass_nom_[0]));
    }

    
}

void EDBR2PKUTree::fatJets_GetEntry(Long64_t jentry) {


    if(b_FatJet_msoftdrop_raw_){
        int bytes_FatJet_msoftdrop_raw = b_FatJet_msoftdrop_raw_->GetEntry(jentry);
        v_FatJet_msoftdrop_raw_ = vector<float>(FatJet_msoftdrop_raw_,FatJet_msoftdrop_raw_+bytes_FatJet_msoftdrop_raw/sizeof(FatJet_msoftdrop_raw_[0]));
    }

    if(b_FatJet_msoftdrop_nom_){
        int bytes_FatJet_msoftdrop_nom = b_FatJet_msoftdrop_nom_->GetEntry(jentry);
        v_FatJet_msoftdrop_nom_ = vector<float>(FatJet_msoftdrop_nom_,FatJet_msoftdrop_nom_+bytes_FatJet_msoftdrop_nom/sizeof(FatJet_msoftdrop_nom_[0]));
    }

    if(b_FatJet_msoftdrop_corr_JMR_){
        int bytes_FatJet_msoftdrop_corr_JMR = b_FatJet_msoftdrop_corr_JMR_->GetEntry(jentry);
        v_FatJet_msoftdrop_corr_JMR_ = vector<float>(FatJet_msoftdrop_corr_JMR_,FatJet_msoftdrop_corr_JMR_+bytes_FatJet_msoftdrop_corr_JMR/sizeof(FatJet_msoftdrop_corr_JMR_[0]));
    }

    if(b_FatJet_msoftdrop_corr_JMS_){
        int bytes_FatJet_msoftdrop_corr_JMS = b_FatJet_msoftdrop_corr_JMS_->GetEntry(jentry);
        v_FatJet_msoftdrop_corr_JMS_ = vector<float>(FatJet_msoftdrop_corr_JMS_,FatJet_msoftdrop_corr_JMS_+bytes_FatJet_msoftdrop_corr_JMS/sizeof(FatJet_msoftdrop_corr_JMS_[0]));
    }

    if(b_FatJet_msoftdrop_corr_PUPPI_){
        int bytes_FatJet_msoftdrop_corr_PUPPI = b_FatJet_msoftdrop_corr_PUPPI_->GetEntry(jentry);
        v_FatJet_msoftdrop_corr_PUPPI_ = vector<float>(FatJet_msoftdrop_corr_PUPPI_,FatJet_msoftdrop_corr_PUPPI_+bytes_FatJet_msoftdrop_corr_PUPPI/sizeof(FatJet_msoftdrop_corr_PUPPI_[0]));
    }

    if(b_FatJet_ParticleNetMDraw_probQCDb_){
        int bytes_FatJet_ParticleNetMDraw_probQCDb = b_FatJet_ParticleNetMDraw_probQCDb_->GetEntry(jentry);
        v_FatJet_ParticleNetMDraw_probQCDb_ = vector<float>(FatJet_ParticleNetMDraw_probQCDb_,FatJet_ParticleNetMDraw_probQCDb_+bytes_FatJet_ParticleNetMDraw_probQCDb/sizeof(FatJet_ParticleNetMDraw_probQCDb_[0]));
    }

    if(b_FatJet_ParticleNetMDraw_probQCDbb_){
        int bytes_FatJet_ParticleNetMDraw_probQCDbb = b_FatJet_ParticleNetMDraw_probQCDbb_->GetEntry(jentry);
        v_FatJet_ParticleNetMDraw_probQCDbb_ = vector<float>(FatJet_ParticleNetMDraw_probQCDbb_,FatJet_ParticleNetMDraw_probQCDbb_+bytes_FatJet_ParticleNetMDraw_probQCDbb/sizeof(FatJet_ParticleNetMDraw_probQCDbb_[0]));
    }

    if(b_FatJet_ParticleNetMDraw_probQCDc_){
        int bytes_FatJet_ParticleNetMDraw_probQCDc = b_FatJet_ParticleNetMDraw_probQCDc_->GetEntry(jentry);
        v_FatJet_ParticleNetMDraw_probQCDc_ = vector<float>(FatJet_ParticleNetMDraw_probQCDc_,FatJet_ParticleNetMDraw_probQCDc_+bytes_FatJet_ParticleNetMDraw_probQCDc/sizeof(FatJet_ParticleNetMDraw_probQCDc_[0]));
    }

    if(b_FatJet_ParticleNetMDraw_probQCDcc_){
        int bytes_FatJet_ParticleNetMDraw_probQCDcc = b_FatJet_ParticleNetMDraw_probQCDcc_->GetEntry(jentry);
        v_FatJet_ParticleNetMDraw_probQCDcc_ = vector<float>(FatJet_ParticleNetMDraw_probQCDcc_,FatJet_ParticleNetMDraw_probQCDcc_+bytes_FatJet_ParticleNetMDraw_probQCDcc/sizeof(FatJet_ParticleNetMDraw_probQCDcc_[0]));
    }

    if(b_FatJet_ParticleNetMDraw_probQCDothers_){
        int bytes_FatJet_ParticleNetMDraw_probQCDothers = b_FatJet_ParticleNetMDraw_probQCDothers_->GetEntry(jentry);
        v_FatJet_ParticleNetMDraw_probQCDothers_ = vector<float>(FatJet_ParticleNetMDraw_probQCDothers_,FatJet_ParticleNetMDraw_probQCDothers_+bytes_FatJet_ParticleNetMDraw_probQCDothers/sizeof(FatJet_ParticleNetMDraw_probQCDothers_[0]));
    }

    if(b_FatJet_ParticleNetMDraw_probXbb_){
        int bytes_FatJet_ParticleNetMDraw_probXbb = b_FatJet_ParticleNetMDraw_probXbb_->GetEntry(jentry);
        v_FatJet_ParticleNetMDraw_probXbb_ = vector<float>(FatJet_ParticleNetMDraw_probXbb_,FatJet_ParticleNetMDraw_probXbb_+bytes_FatJet_ParticleNetMDraw_probXbb/sizeof(FatJet_ParticleNetMDraw_probXbb_[0]));
    }

    if(b_FatJet_ParticleNetMDraw_probXcc_){
        int bytes_FatJet_ParticleNetMDraw_probXcc = b_FatJet_ParticleNetMDraw_probXcc_->GetEntry(jentry);
        v_FatJet_ParticleNetMDraw_probXcc_ = vector<float>(FatJet_ParticleNetMDraw_probXcc_,FatJet_ParticleNetMDraw_probXcc_+bytes_FatJet_ParticleNetMDraw_probXcc/sizeof(FatJet_ParticleNetMDraw_probXcc_[0]));
    }

    if(b_FatJet_ParticleNetMDraw_probXqq_){
        int bytes_FatJet_ParticleNetMDraw_probXqq = b_FatJet_ParticleNetMDraw_probXqq_->GetEntry(jentry);
        v_FatJet_ParticleNetMDraw_probXqq_ = vector<float>(FatJet_ParticleNetMDraw_probXqq_,FatJet_ParticleNetMDraw_probXqq_+bytes_FatJet_ParticleNetMDraw_probXqq/sizeof(FatJet_ParticleNetMDraw_probXqq_[0]));
    }

    if(b_FatJet_pt_nom_){
        int bytes_FatJet_pt_nom = b_FatJet_pt_nom_->GetEntry(jentry);
        v_FatJet_pt_nom_ = vector<float>(FatJet_pt_nom_,FatJet_pt_nom_+bytes_FatJet_pt_nom/sizeof(FatJet_pt_nom_[0]));
    }

    if(b_FatJet_pt_){
        int bytes_FatJet_pt = b_FatJet_pt_->GetEntry(jentry);
        v_FatJet_pt_ = vector<float>(FatJet_pt_,FatJet_pt_+bytes_FatJet_pt/sizeof(FatJet_pt_[0]));
    }
    
    if(b_FatJet_eta_){
        int bytes_FatJet_eta = b_FatJet_eta_->GetEntry(jentry);
        v_FatJet_eta_ = vector<float>(FatJet_eta_,FatJet_eta_+bytes_FatJet_eta/sizeof(FatJet_eta_[0]));
    }
    
    if(b_FatJet_phi_){
        int bytes_FatJet_phi = b_FatJet_phi_->GetEntry(jentry);
        v_FatJet_phi_ = vector<float>(FatJet_phi_,FatJet_phi_+bytes_FatJet_phi/sizeof(FatJet_phi_[0]));
    }
    
    if(b_FatJet_msoftdrop_){
        int bytes_FatJet_msoftdrop = b_FatJet_msoftdrop_->GetEntry(jentry);
        v_FatJet_msoftdrop_ = vector<float>(FatJet_msoftdrop_,FatJet_msoftdrop_+bytes_FatJet_msoftdrop/sizeof(FatJet_msoftdrop_[0]));
    }

    if(b_FatJet_jetId_){
        int bytes_FatJet_jetId = b_FatJet_jetId_->GetEntry(jentry);
        v_FatJet_jetId_ = vector<int>(FatJet_jetId_,FatJet_jetId_+bytes_FatJet_jetId/sizeof(FatJet_jetId_[0]));
    }

    if(b_FatJet_particleNetMD_QCD_){
        int bytes_FatJet_particleNetMD_QCD = b_FatJet_particleNetMD_QCD_->GetEntry(jentry);
        v_FatJet_particleNetMD_QCD_ = vector<float>(FatJet_particleNetMD_QCD_,FatJet_particleNetMD_QCD_+bytes_FatJet_particleNetMD_QCD/sizeof(FatJet_particleNetMD_QCD_[0]));
    }
    
    if(b_FatJet_particleNetMD_Xbb_){
        int bytes_FatJet_particleNetMD_Xbb = b_FatJet_particleNetMD_Xbb_->GetEntry(jentry);
        v_FatJet_particleNetMD_Xbb_ = vector<float>(FatJet_particleNetMD_Xbb_,FatJet_particleNetMD_Xbb_+bytes_FatJet_particleNetMD_Xbb/sizeof(FatJet_particleNetMD_Xbb_[0]));
    }
    
    if(b_FatJet_particleNetMD_Xcc_){
        int bytes_FatJet_particleNetMD_Xcc = b_FatJet_particleNetMD_Xcc_->GetEntry(jentry);
        v_FatJet_particleNetMD_Xcc_ = vector<float>(FatJet_particleNetMD_Xcc_,FatJet_particleNetMD_Xcc_+bytes_FatJet_particleNetMD_Xcc/sizeof(FatJet_particleNetMD_Xcc_[0]));
    }
    
    if(b_FatJet_particleNetMD_Xqq_){
        int bytes_FatJet_particleNetMD_Xqq = b_FatJet_particleNetMD_Xqq_->GetEntry(jentry);
        v_FatJet_particleNetMD_Xqq_ = vector<float>(FatJet_particleNetMD_Xqq_,FatJet_particleNetMD_Xqq_+bytes_FatJet_particleNetMD_Xqq/sizeof(FatJet_particleNetMD_Xqq_[0]));
    }
    
    if(b_FatJet_particleNet_H4qvsQCD_){
        int bytes_FatJet_particleNet_H4qvsQCD = b_FatJet_particleNet_H4qvsQCD_->GetEntry(jentry);
        v_FatJet_particleNet_H4qvsQCD_ = vector<float>(FatJet_particleNet_H4qvsQCD_,FatJet_particleNet_H4qvsQCD_+bytes_FatJet_particleNet_H4qvsQCD/sizeof(FatJet_particleNet_H4qvsQCD_[0]));
    }
    
    if(b_FatJet_particleNet_HbbvsQCD_){
        int bytes_FatJet_particleNet_HbbvsQCD = b_FatJet_particleNet_HbbvsQCD_->GetEntry(jentry);
        v_FatJet_particleNet_HbbvsQCD_ = vector<float>(FatJet_particleNet_HbbvsQCD_,FatJet_particleNet_HbbvsQCD_+bytes_FatJet_particleNet_HbbvsQCD/sizeof(FatJet_particleNet_HbbvsQCD_[0]));
    }
    
    if(b_FatJet_particleNet_HccvsQCD_){
        int bytes_FatJet_particleNet_HccvsQCD = b_FatJet_particleNet_HccvsQCD_->GetEntry(jentry);
        v_FatJet_particleNet_HccvsQCD_ = vector<float>(FatJet_particleNet_HccvsQCD_,FatJet_particleNet_HccvsQCD_+bytes_FatJet_particleNet_HccvsQCD/sizeof(FatJet_particleNet_HccvsQCD_[0]));
    }
    
    if(b_FatJet_particleNet_QCD_){
        int bytes_FatJet_particleNet_QCD = b_FatJet_particleNet_QCD_->GetEntry(jentry);
        v_FatJet_particleNet_QCD_ = vector<float>(FatJet_particleNet_QCD_,FatJet_particleNet_QCD_+bytes_FatJet_particleNet_QCD/sizeof(FatJet_particleNet_QCD_[0]));
    }
    
    if(b_FatJet_particleNet_TvsQCD_){
        int bytes_FatJet_particleNet_TvsQCD = b_FatJet_particleNet_TvsQCD_->GetEntry(jentry);
        v_FatJet_particleNet_TvsQCD_ = vector<float>(FatJet_particleNet_TvsQCD_,FatJet_particleNet_TvsQCD_+bytes_FatJet_particleNet_TvsQCD/sizeof(FatJet_particleNet_TvsQCD_[0]));
    }
    
    if(b_FatJet_particleNet_WvsQCD_){
        int bytes_FatJet_particleNet_WvsQCD = b_FatJet_particleNet_WvsQCD_->GetEntry(jentry);
        v_FatJet_particleNet_WvsQCD_ = vector<float>(FatJet_particleNet_WvsQCD_,FatJet_particleNet_WvsQCD_+bytes_FatJet_particleNet_WvsQCD/sizeof(FatJet_particleNet_WvsQCD_[0]));
    }
    
    if(b_FatJet_particleNet_ZvsQCD_){
        int bytes_FatJet_particleNet_ZvsQCD = b_FatJet_particleNet_ZvsQCD_->GetEntry(jentry);
        v_FatJet_particleNet_ZvsQCD_ = vector<float>(FatJet_particleNet_ZvsQCD_,FatJet_particleNet_ZvsQCD_+bytes_FatJet_particleNet_ZvsQCD/sizeof(FatJet_particleNet_ZvsQCD_[0]));
    }

    if(b_FatJet_particleNet_mass_){
        int bytes_FatJet_particleNet_mass = b_FatJet_particleNet_mass_->GetEntry(jentry);
        v_FatJet_particleNet_mass_ = vector<float>(FatJet_particleNet_mass_,FatJet_particleNet_mass_+bytes_FatJet_particleNet_mass/sizeof(FatJet_particleNet_mass_[0]));
    }

    if(b_FatJet_deepTagMD_probHbb_){
        int bytes_FatJet_deepTagMD_probHbb = b_FatJet_deepTagMD_probHbb_->GetEntry(jentry);
        v_FatJet_deepTagMD_probHbb_ = vector<float>(FatJet_deepTagMD_probHbb_,FatJet_deepTagMD_probHbb_+bytes_FatJet_deepTagMD_probHbb/sizeof(FatJet_deepTagMD_probHbb_[0]));
    }
    
    if(b_FatJet_deepTagMD_probHcc_){
        int bytes_FatJet_deepTagMD_probHcc = b_FatJet_deepTagMD_probHcc_->GetEntry(jentry);
        v_FatJet_deepTagMD_probHcc_ = vector<float>(FatJet_deepTagMD_probHcc_,FatJet_deepTagMD_probHcc_+bytes_FatJet_deepTagMD_probHcc/sizeof(FatJet_deepTagMD_probHcc_[0]));
    }
    
    if(b_FatJet_deepTagMD_probHqqqq_){
        int bytes_FatJet_deepTagMD_probHqqqq = b_FatJet_deepTagMD_probHqqqq_->GetEntry(jentry);
        v_FatJet_deepTagMD_probHqqqq_ = vector<float>(FatJet_deepTagMD_probHqqqq_,FatJet_deepTagMD_probHqqqq_+bytes_FatJet_deepTagMD_probHqqqq/sizeof(FatJet_deepTagMD_probHqqqq_[0]));
    }
    
    if(b_FatJet_deepTagMD_probQCDb_){
        int bytes_FatJet_deepTagMD_probQCDb = b_FatJet_deepTagMD_probQCDb_->GetEntry(jentry);
        v_FatJet_deepTagMD_probQCDb_ = vector<float>(FatJet_deepTagMD_probQCDb_,FatJet_deepTagMD_probQCDb_+bytes_FatJet_deepTagMD_probQCDb/sizeof(FatJet_deepTagMD_probQCDb_[0]));
    }
    
    if(b_FatJet_deepTagMD_probQCDbb_){
        int bytes_FatJet_deepTagMD_probQCDbb = b_FatJet_deepTagMD_probQCDbb_->GetEntry(jentry);
        v_FatJet_deepTagMD_probQCDbb_ = vector<float>(FatJet_deepTagMD_probQCDbb_,FatJet_deepTagMD_probQCDbb_+bytes_FatJet_deepTagMD_probQCDbb/sizeof(FatJet_deepTagMD_probQCDbb_[0]));
    }
    
    if(b_FatJet_deepTagMD_probQCDc_){
        int bytes_FatJet_deepTagMD_probQCDc = b_FatJet_deepTagMD_probQCDc_->GetEntry(jentry);
        v_FatJet_deepTagMD_probQCDc_ = vector<float>(FatJet_deepTagMD_probQCDc_,FatJet_deepTagMD_probQCDc_+bytes_FatJet_deepTagMD_probQCDc/sizeof(FatJet_deepTagMD_probQCDc_[0]));
    }
    
    if(b_FatJet_deepTagMD_probQCDcc_){
        int bytes_FatJet_deepTagMD_probQCDcc = b_FatJet_deepTagMD_probQCDcc_->GetEntry(jentry);
        v_FatJet_deepTagMD_probQCDcc_ = vector<float>(FatJet_deepTagMD_probQCDcc_,FatJet_deepTagMD_probQCDcc_+bytes_FatJet_deepTagMD_probQCDcc/sizeof(FatJet_deepTagMD_probQCDcc_[0]));
    }
    
    if(b_FatJet_deepTagMD_probQCDothers_){
        int bytes_FatJet_deepTagMD_probQCDothers = b_FatJet_deepTagMD_probQCDothers_->GetEntry(jentry);
        v_FatJet_deepTagMD_probQCDothers_ = vector<float>(FatJet_deepTagMD_probQCDothers_,FatJet_deepTagMD_probQCDothers_+bytes_FatJet_deepTagMD_probQCDothers/sizeof(FatJet_deepTagMD_probQCDothers_[0]));
    }
    
    if(b_FatJet_deepTagMD_probTbc_){
        int bytes_FatJet_deepTagMD_probTbc = b_FatJet_deepTagMD_probTbc_->GetEntry(jentry);
        v_FatJet_deepTagMD_probTbc_ = vector<float>(FatJet_deepTagMD_probTbc_,FatJet_deepTagMD_probTbc_+bytes_FatJet_deepTagMD_probTbc/sizeof(FatJet_deepTagMD_probTbc_[0]));
    }
    
    if(b_FatJet_deepTagMD_probTbcq_){
        int bytes_FatJet_deepTagMD_probTbcq = b_FatJet_deepTagMD_probTbcq_->GetEntry(jentry);
        v_FatJet_deepTagMD_probTbcq_ = vector<float>(FatJet_deepTagMD_probTbcq_,FatJet_deepTagMD_probTbcq_+bytes_FatJet_deepTagMD_probTbcq/sizeof(FatJet_deepTagMD_probTbcq_[0]));
    }
    
    if(b_FatJet_deepTagMD_probTbq_){
        int bytes_FatJet_deepTagMD_probTbq = b_FatJet_deepTagMD_probTbq_->GetEntry(jentry);
        v_FatJet_deepTagMD_probTbq_ = vector<float>(FatJet_deepTagMD_probTbq_,FatJet_deepTagMD_probTbq_+bytes_FatJet_deepTagMD_probTbq/sizeof(FatJet_deepTagMD_probTbq_[0]));
    }
    
    if(b_FatJet_deepTagMD_probTbqq_){
        int bytes_FatJet_deepTagMD_probTbqq = b_FatJet_deepTagMD_probTbqq_->GetEntry(jentry);
        v_FatJet_deepTagMD_probTbqq_ = vector<float>(FatJet_deepTagMD_probTbqq_,FatJet_deepTagMD_probTbqq_+bytes_FatJet_deepTagMD_probTbqq/sizeof(FatJet_deepTagMD_probTbqq_[0]));
    }
    
    if(b_FatJet_deepTagMD_probWcq_){
        int bytes_FatJet_deepTagMD_probWcq = b_FatJet_deepTagMD_probWcq_->GetEntry(jentry);
        v_FatJet_deepTagMD_probWcq_ = vector<float>(FatJet_deepTagMD_probWcq_,FatJet_deepTagMD_probWcq_+bytes_FatJet_deepTagMD_probWcq/sizeof(FatJet_deepTagMD_probWcq_[0]));
    }
    
    if(b_FatJet_deepTagMD_probWqq_){
        int bytes_FatJet_deepTagMD_probWqq = b_FatJet_deepTagMD_probWqq_->GetEntry(jentry);
        v_FatJet_deepTagMD_probWqq_ = vector<float>(FatJet_deepTagMD_probWqq_,FatJet_deepTagMD_probWqq_+bytes_FatJet_deepTagMD_probWqq/sizeof(FatJet_deepTagMD_probWqq_[0]));
    }
    
    if(b_FatJet_deepTagMD_probZbb_){
        int bytes_FatJet_deepTagMD_probZbb = b_FatJet_deepTagMD_probZbb_->GetEntry(jentry);
        v_FatJet_deepTagMD_probZbb_ = vector<float>(FatJet_deepTagMD_probZbb_,FatJet_deepTagMD_probZbb_+bytes_FatJet_deepTagMD_probZbb/sizeof(FatJet_deepTagMD_probZbb_[0]));
    }
    
    if(b_FatJet_deepTagMD_probZcc_){
        int bytes_FatJet_deepTagMD_probZcc = b_FatJet_deepTagMD_probZcc_->GetEntry(jentry);
        v_FatJet_deepTagMD_probZcc_ = vector<float>(FatJet_deepTagMD_probZcc_,FatJet_deepTagMD_probZcc_+bytes_FatJet_deepTagMD_probZcc/sizeof(FatJet_deepTagMD_probZcc_[0]));
    }
    
    if(b_FatJet_deepTagMD_probZqq_){
        int bytes_FatJet_deepTagMD_probZqq = b_FatJet_deepTagMD_probZqq_->GetEntry(jentry);
        v_FatJet_deepTagMD_probZqq_ = vector<float>(FatJet_deepTagMD_probZqq_,FatJet_deepTagMD_probZqq_+bytes_FatJet_deepTagMD_probZqq/sizeof(FatJet_deepTagMD_probZqq_[0]));
    }
    
    if(b_FatJet_deepTag_probHbb_){
        int bytes_FatJet_deepTag_probHbb = b_FatJet_deepTag_probHbb_->GetEntry(jentry);
        v_FatJet_deepTag_probHbb_ = vector<float>(FatJet_deepTag_probHbb_,FatJet_deepTag_probHbb_+bytes_FatJet_deepTag_probHbb/sizeof(FatJet_deepTag_probHbb_[0]));
    }
    
    if(b_FatJet_deepTag_probHcc_){
        int bytes_FatJet_deepTag_probHcc = b_FatJet_deepTag_probHcc_->GetEntry(jentry);
        v_FatJet_deepTag_probHcc_ = vector<float>(FatJet_deepTag_probHcc_,FatJet_deepTag_probHcc_+bytes_FatJet_deepTag_probHcc/sizeof(FatJet_deepTag_probHcc_[0]));
    }
    
    if(b_FatJet_deepTag_probHqqqq_){
        int bytes_FatJet_deepTag_probHqqqq = b_FatJet_deepTag_probHqqqq_->GetEntry(jentry);
        v_FatJet_deepTag_probHqqqq_ = vector<float>(FatJet_deepTag_probHqqqq_,FatJet_deepTag_probHqqqq_+bytes_FatJet_deepTag_probHqqqq/sizeof(FatJet_deepTag_probHqqqq_[0]));
    }
    
    if(b_FatJet_deepTag_probQCDb_){
        int bytes_FatJet_deepTag_probQCDb = b_FatJet_deepTag_probQCDb_->GetEntry(jentry);
        v_FatJet_deepTag_probQCDb_ = vector<float>(FatJet_deepTag_probQCDb_,FatJet_deepTag_probQCDb_+bytes_FatJet_deepTag_probQCDb/sizeof(FatJet_deepTag_probQCDb_[0]));
    }
    
    if(b_FatJet_deepTag_probQCDbb_){
        int bytes_FatJet_deepTag_probQCDbb = b_FatJet_deepTag_probQCDbb_->GetEntry(jentry);
        v_FatJet_deepTag_probQCDbb_ = vector<float>(FatJet_deepTag_probQCDbb_,FatJet_deepTag_probQCDbb_+bytes_FatJet_deepTag_probQCDbb/sizeof(FatJet_deepTag_probQCDbb_[0]));
    }
    
    if(b_FatJet_deepTag_probQCDc_){
        int bytes_FatJet_deepTag_probQCDc = b_FatJet_deepTag_probQCDc_->GetEntry(jentry);
        v_FatJet_deepTag_probQCDc_ = vector<float>(FatJet_deepTag_probQCDc_,FatJet_deepTag_probQCDc_+bytes_FatJet_deepTag_probQCDc/sizeof(FatJet_deepTag_probQCDc_[0]));
    }
    
    if(b_FatJet_deepTag_probQCDcc_){
        int bytes_FatJet_deepTag_probQCDcc = b_FatJet_deepTag_probQCDcc_->GetEntry(jentry);
        v_FatJet_deepTag_probQCDcc_ = vector<float>(FatJet_deepTag_probQCDcc_,FatJet_deepTag_probQCDcc_+bytes_FatJet_deepTag_probQCDcc/sizeof(FatJet_deepTag_probQCDcc_[0]));
    }
    
    if(b_FatJet_deepTag_probQCDothers_){
        int bytes_FatJet_deepTag_probQCDothers = b_FatJet_deepTag_probQCDothers_->GetEntry(jentry);
        v_FatJet_deepTag_probQCDothers_ = vector<float>(FatJet_deepTag_probQCDothers_,FatJet_deepTag_probQCDothers_+bytes_FatJet_deepTag_probQCDothers/sizeof(FatJet_deepTag_probQCDothers_[0]));
    }
    
    if(b_FatJet_deepTag_probTbc_){
        int bytes_FatJet_deepTag_probTbc = b_FatJet_deepTag_probTbc_->GetEntry(jentry);
        v_FatJet_deepTag_probTbc_ = vector<float>(FatJet_deepTag_probTbc_,FatJet_deepTag_probTbc_+bytes_FatJet_deepTag_probTbc/sizeof(FatJet_deepTag_probTbc_[0]));
    }
    
    if(b_FatJet_deepTag_probTbcq_){
        int bytes_FatJet_deepTag_probTbcq = b_FatJet_deepTag_probTbcq_->GetEntry(jentry);
        v_FatJet_deepTag_probTbcq_ = vector<float>(FatJet_deepTag_probTbcq_,FatJet_deepTag_probTbcq_+bytes_FatJet_deepTag_probTbcq/sizeof(FatJet_deepTag_probTbcq_[0]));
    }
    
    if(b_FatJet_deepTag_probTbq_){
        int bytes_FatJet_deepTag_probTbq = b_FatJet_deepTag_probTbq_->GetEntry(jentry);
        v_FatJet_deepTag_probTbq_ = vector<float>(FatJet_deepTag_probTbq_,FatJet_deepTag_probTbq_+bytes_FatJet_deepTag_probTbq/sizeof(FatJet_deepTag_probTbq_[0]));
    }
    
    if(b_FatJet_deepTag_probTbqq_){
        int bytes_FatJet_deepTag_probTbqq = b_FatJet_deepTag_probTbqq_->GetEntry(jentry);
        v_FatJet_deepTag_probTbqq_ = vector<float>(FatJet_deepTag_probTbqq_,FatJet_deepTag_probTbqq_+bytes_FatJet_deepTag_probTbqq/sizeof(FatJet_deepTag_probTbqq_[0]));
    }
    
    if(b_FatJet_deepTag_probWcq_){
        int bytes_FatJet_deepTag_probWcq = b_FatJet_deepTag_probWcq_->GetEntry(jentry);
        v_FatJet_deepTag_probWcq_ = vector<float>(FatJet_deepTag_probWcq_,FatJet_deepTag_probWcq_+bytes_FatJet_deepTag_probWcq/sizeof(FatJet_deepTag_probWcq_[0]));
    }
    
    if(b_FatJet_deepTag_probWqq_){
        int bytes_FatJet_deepTag_probWqq = b_FatJet_deepTag_probWqq_->GetEntry(jentry);
        v_FatJet_deepTag_probWqq_ = vector<float>(FatJet_deepTag_probWqq_,FatJet_deepTag_probWqq_+bytes_FatJet_deepTag_probWqq/sizeof(FatJet_deepTag_probWqq_[0]));
    }
    
    if(b_FatJet_deepTag_probZbb_){
        int bytes_FatJet_deepTag_probZbb = b_FatJet_deepTag_probZbb_->GetEntry(jentry);
        v_FatJet_deepTag_probZbb_ = vector<float>(FatJet_deepTag_probZbb_,FatJet_deepTag_probZbb_+bytes_FatJet_deepTag_probZbb/sizeof(FatJet_deepTag_probZbb_[0]));
    }
    
    if(b_FatJet_deepTag_probZcc_){
        int bytes_FatJet_deepTag_probZcc = b_FatJet_deepTag_probZcc_->GetEntry(jentry);
        v_FatJet_deepTag_probZcc_ = vector<float>(FatJet_deepTag_probZcc_,FatJet_deepTag_probZcc_+bytes_FatJet_deepTag_probZcc/sizeof(FatJet_deepTag_probZcc_[0]));
    }
    
    if(b_FatJet_deepTag_probZqq_){
        int bytes_FatJet_deepTag_probZqq = b_FatJet_deepTag_probZqq_->GetEntry(jentry);
        v_FatJet_deepTag_probZqq_ = vector<float>(FatJet_deepTag_probZqq_,FatJet_deepTag_probZqq_+bytes_FatJet_deepTag_probZqq/sizeof(FatJet_deepTag_probZqq_[0]));
    }

    if(b_FatJet_tau1_){
        int bytes_FatJet_tau1 = b_FatJet_tau1_->GetEntry(jentry);
        v_FatJet_tau1_ = vector<float>(FatJet_tau1_,FatJet_tau1_+bytes_FatJet_tau1/sizeof(FatJet_tau1_[0]));
    }

    if(b_FatJet_tau2_){
        int bytes_FatJet_tau2 = b_FatJet_tau2_->GetEntry(jentry);
        v_FatJet_tau2_ = vector<float>(FatJet_tau2_,FatJet_tau2_+bytes_FatJet_tau2/sizeof(FatJet_tau2_[0]));
    }

    if(b_FatJet_tau3_){
        int bytes_FatJet_tau3 = b_FatJet_tau3_->GetEntry(jentry);
        v_FatJet_tau3_ = vector<float>(FatJet_tau3_,FatJet_tau3_+bytes_FatJet_tau3/sizeof(FatJet_tau3_[0]));
    }

    if(b_FatJet_tau4_){
        int bytes_FatJet_tau4 = b_FatJet_tau4_->GetEntry(jentry);
        v_FatJet_tau4_ = vector<float>(FatJet_tau4_,FatJet_tau4_+bytes_FatJet_tau4/sizeof(FatJet_tau4_[0]));
    }
    //HWW tagger.

    if (b_FatJet_deepHWWMDV1_probHww3q_) {
        int bytes_FatJet_deepHWWMDV1_probHww3q = b_FatJet_deepHWWMDV1_probHww3q_->GetEntry(jentry);
        v_FatJet_deepHWWMDV1_probHww3q_ = vector<float>(FatJet_deepHWWMDV1_probHww3q_,FatJet_deepHWWMDV1_probHww3q_+bytes_FatJet_deepHWWMDV1_probHww3q/sizeof(FatJet_deepHWWMDV1_probHww3q_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probHww4q_){
        int bytes_FatJet_deepHWWMDV1_probHww4q = b_FatJet_deepHWWMDV1_probHww4q_->GetEntry(jentry);
        v_FatJet_deepHWWMDV1_probHww4q_ = vector<float>(FatJet_deepHWWMDV1_probHww4q_,FatJet_deepHWWMDV1_probHww4q_+bytes_FatJet_deepHWWMDV1_probHww4q/sizeof(FatJet_deepHWWMDV1_probHww4q_[0]));
    } 
    if(b_FatJet_deepHWWMDV1_probHww4q3qvsQCD_){
        int bytes_FatJet_deepHWWMDV1_probHww4q3qvsQCD = b_FatJet_deepHWWMDV1_probHww4q3qvsQCD_->GetEntry(jentry);
        v_FatJet_deepHWWMDV1_probHww4q3qvsQCD_ = vector<float>(FatJet_deepHWWMDV1_probHww4q3qvsQCD_,FatJet_deepHWWMDV1_probHww4q3qvsQCD_+bytes_FatJet_deepHWWMDV1_probHww4q3qvsQCD/sizeof(FatJet_deepHWWMDV1_probHww4q3qvsQCD_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probHww4qvsQCD_){
        int bytes_FatJet_deepHWWMDV1_probHww4qvsQCD = b_FatJet_deepHWWMDV1_probHww4qvsQCD_->GetEntry(jentry);
        v_FatJet_deepHWWMDV1_probHww4qvsQCD_ = vector<float>(FatJet_deepHWWMDV1_probHww4qvsQCD_,FatJet_deepHWWMDV1_probHww4qvsQCD_+bytes_FatJet_deepHWWMDV1_probHww4qvsQCD/sizeof(FatJet_deepHWWMDV1_probHww4qvsQCD_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probHwwevqq_){
        int bytes_FatJet_deepHWWMDV1_probHwwevqq = b_FatJet_deepHWWMDV1_probHwwevqq_->GetEntry(jentry);
        v_FatJet_deepHWWMDV1_probHwwevqq_ = vector<float>(FatJet_deepHWWMDV1_probHwwevqq_,FatJet_deepHWWMDV1_probHwwevqq_+bytes_FatJet_deepHWWMDV1_probHwwevqq/sizeof(FatJet_deepHWWMDV1_probHwwevqq_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probHwwmvqq_){
        int bytes_FatJet_deepHWWMDV1_probHwwmvqq = b_FatJet_deepHWWMDV1_probHwwmvqq_->GetEntry(jentry);
        v_FatJet_deepHWWMDV1_probHwwmvqq_ = vector<float>(FatJet_deepHWWMDV1_probHwwmvqq_,FatJet_deepHWWMDV1_probHwwmvqq_+bytes_FatJet_deepHWWMDV1_probHwwmvqq/sizeof(FatJet_deepHWWMDV1_probHwwmvqq_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probHwwhadtauvqq_){
        int bytes_FatJet_deepHWWMDV1_probHwwhadtauvqq = b_FatJet_deepHWWMDV1_probHwwhadtauvqq_->GetEntry(jentry);
        v_FatJet_deepHWWMDV1_probHwwhadtauvqq_ = vector<float>(FatJet_deepHWWMDV1_probHwwhadtauvqq_,FatJet_deepHWWMDV1_probHwwhadtauvqq_+bytes_FatJet_deepHWWMDV1_probHwwhadtauvqq/sizeof(FatJet_deepHWWMDV1_probHwwhadtauvqq_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probHwwleptauevqq_){
        int bytes_FatJet_deepHWWMDV1_probHwwleptauevqq = b_FatJet_deepHWWMDV1_probHwwleptauevqq_->GetEntry(jentry);
        v_FatJet_deepHWWMDV1_probHwwleptauevqq_ = vector<float>(FatJet_deepHWWMDV1_probHwwleptauevqq_,FatJet_deepHWWMDV1_probHwwleptauevqq_+bytes_FatJet_deepHWWMDV1_probHwwleptauevqq/sizeof(FatJet_deepHWWMDV1_probHwwleptauevqq_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probHwwleptaumvqq_){
            int bytes_FatJet_deepHWWMDV1_probHwwleptaumvqq = b_FatJet_deepHWWMDV1_probHwwleptaumvqq_->GetEntry(jentry);
    v_FatJet_deepHWWMDV1_probHwwleptaumvqq_ = vector<float>(FatJet_deepHWWMDV1_probHwwleptaumvqq_,FatJet_deepHWWMDV1_probHwwleptaumvqq_+bytes_FatJet_deepHWWMDV1_probHwwleptaumvqq/sizeof(FatJet_deepHWWMDV1_probHwwleptaumvqq_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probQCDb_){
            int bytes_FatJet_deepHWWMDV1_probQCDb = b_FatJet_deepHWWMDV1_probQCDb_->GetEntry(jentry);
    v_FatJet_deepHWWMDV1_probQCDb_ = vector<float>(FatJet_deepHWWMDV1_probQCDb_,FatJet_deepHWWMDV1_probQCDb_+bytes_FatJet_deepHWWMDV1_probQCDb/sizeof(FatJet_deepHWWMDV1_probQCDb_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probQCDbb_){
            int bytes_FatJet_deepHWWMDV1_probQCDbb = b_FatJet_deepHWWMDV1_probQCDbb_->GetEntry(jentry);
    v_FatJet_deepHWWMDV1_probQCDbb_ = vector<float>(FatJet_deepHWWMDV1_probQCDbb_,FatJet_deepHWWMDV1_probQCDbb_+bytes_FatJet_deepHWWMDV1_probQCDbb/sizeof(FatJet_deepHWWMDV1_probQCDbb_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probQCDc_){
    int bytes_FatJet_deepHWWMDV1_probQCDc = b_FatJet_deepHWWMDV1_probQCDc_->GetEntry(jentry);
    v_FatJet_deepHWWMDV1_probQCDc_ = vector<float>(FatJet_deepHWWMDV1_probQCDc_,FatJet_deepHWWMDV1_probQCDc_+bytes_FatJet_deepHWWMDV1_probQCDc/sizeof(FatJet_deepHWWMDV1_probQCDc_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probQCDcc_){
   int bytes_FatJet_deepHWWMDV1_probQCDcc = b_FatJet_deepHWWMDV1_probQCDcc_->GetEntry(jentry);
    v_FatJet_deepHWWMDV1_probQCDcc_ = vector<float>(FatJet_deepHWWMDV1_probQCDcc_,FatJet_deepHWWMDV1_probQCDcc_+bytes_FatJet_deepHWWMDV1_probQCDcc/sizeof(FatJet_deepHWWMDV1_probQCDcc_[0]));
    }
    if(b_FatJet_deepHWWMDV1_probQCDothers_){
            int bytes_FatJet_deepHWWMDV1_probQCDothers = b_FatJet_deepHWWMDV1_probQCDothers_->GetEntry(jentry);
    v_FatJet_deepHWWMDV1_probQCDothers_ = vector<float>(FatJet_deepHWWMDV1_probQCDothers_,FatJet_deepHWWMDV1_probQCDothers_+bytes_FatJet_deepHWWMDV1_probQCDothers/sizeof(FatJet_deepHWWMDV1_probQCDothers_[0]));
    }
}

void EDBR2PKUTree::Electron_GetEntry(Long64_t jentry) {
   int bytes_Electron_charge = b_Electron_charge_->GetEntry(jentry);
    v_Electron_charge_ = vector<int>(Electron_charge_,Electron_charge_+bytes_Electron_charge/sizeof(Electron_charge_[0]));

    int bytes_Electron_jetIdx = b_Electron_jetIdx_->GetEntry(jentry);
    v_Electron_jetIdx_ = vector<int>(Electron_jetIdx_,Electron_jetIdx_+bytes_Electron_jetIdx/sizeof(Electron_jetIdx_[0]));

    int bytes_Electron_pdgId = b_Electron_pdgId_->GetEntry(jentry);
    v_Electron_pdgId_ = vector<int>(Electron_pdgId_,Electron_pdgId_+bytes_Electron_pdgId/sizeof(Electron_pdgId_[0]));


    int bytes_Electron_jetRelIso = b_Electron_jetRelIso_->GetEntry(jentry);
    v_Electron_jetRelIso_ = vector<float>(Electron_jetRelIso_,Electron_jetRelIso_+bytes_Electron_jetRelIso/sizeof(Electron_jetRelIso_[0]));

    int bytes_Electron_eta = b_Electron_eta_->GetEntry(jentry);
    v_Electron_eta_ = vector<float>(Electron_eta_,Electron_eta_+bytes_Electron_eta/sizeof(Electron_eta_[0]));

    int bytes_Electron_mass = b_Electron_mass_->GetEntry(jentry);
    v_Electron_mass_ = vector<float>(Electron_mass_,Electron_mass_+bytes_Electron_mass/sizeof(Electron_mass_[0]));

    int bytes_Electron_pfRelIso03_all = b_Electron_pfRelIso03_all_->GetEntry(jentry);
    v_Electron_pfRelIso03_all_ = vector<float>(Electron_pfRelIso03_all_,Electron_pfRelIso03_all_+bytes_Electron_pfRelIso03_all/sizeof(Electron_pfRelIso03_all_[0]));

    int bytes_Electron_phi = b_Electron_phi_->GetEntry(jentry);
    v_Electron_phi_ = vector<float>(Electron_phi_,Electron_phi_+bytes_Electron_phi/sizeof(Electron_phi_[0]));

    int bytes_Electron_pt = b_Electron_pt_->GetEntry(jentry);
    v_Electron_pt_ = vector<float>(Electron_pt_,Electron_pt_+bytes_Electron_pt/sizeof(Electron_pt_[0]));
}

void EDBR2PKUTree::Muon_GetEntry(Long64_t jentry) {
    int bytes_Muon_charge = b_Muon_charge_->GetEntry(jentry);
    v_Muon_charge_ = vector<int>(Muon_charge_,Muon_charge_+bytes_Muon_charge/sizeof(Muon_charge_[0]));

    int bytes_Muon_highPtId = b_Muon_highPtId_->GetEntry(jentry);
    v_Muon_highPtId_ = vector<int>(Muon_highPtId_,Muon_highPtId_+bytes_Muon_highPtId/sizeof(Muon_highPtId_[0]));

    int bytes_Muon_jetIdx = b_Muon_jetIdx_->GetEntry(jentry);
    v_Muon_jetIdx_ = vector<int>(Muon_jetIdx_,Muon_jetIdx_+bytes_Muon_jetIdx/sizeof(Muon_jetIdx_[0]));

    int bytes_Muon_pdgId = b_Muon_pdgId_->GetEntry(jentry);
    v_Muon_pdgId_ = vector<int>(Muon_pdgId_,Muon_pdgId_+bytes_Muon_pdgId/sizeof(Muon_pdgId_[0]));


    int bytes_Muon_eta = b_Muon_eta_->GetEntry(jentry);
    v_Muon_eta_ = vector<float>(Muon_eta_,Muon_eta_+bytes_Muon_eta/sizeof(Muon_eta_[0]));

    int bytes_Muon_jetRelIso = b_Muon_jetRelIso_->GetEntry(jentry);
    v_Muon_jetRelIso_ = vector<float>(Muon_jetRelIso_,Muon_jetRelIso_+bytes_Muon_jetRelIso/sizeof(Muon_jetRelIso_[0]));

    int bytes_Muon_mass = b_Muon_mass_->GetEntry(jentry);
    v_Muon_mass_ = vector<float>(Muon_mass_,Muon_mass_+bytes_Muon_mass/sizeof(Muon_mass_[0]));

    int bytes_Muon_pfRelIso03_all = b_Muon_pfRelIso03_all_->GetEntry(jentry);
    v_Muon_pfRelIso03_all_ = vector<float>(Muon_pfRelIso03_all_,Muon_pfRelIso03_all_+bytes_Muon_pfRelIso03_all/sizeof(Muon_pfRelIso03_all_[0]));

    int bytes_Muon_pfRelIso04_all = b_Muon_pfRelIso04_all_->GetEntry(jentry);
    v_Muon_pfRelIso04_all_ = vector<float>(Muon_pfRelIso04_all_,Muon_pfRelIso04_all_+bytes_Muon_pfRelIso04_all/sizeof(Muon_pfRelIso04_all_[0]));

    int bytes_Muon_phi = b_Muon_phi_->GetEntry(jentry);
    v_Muon_phi_ = vector<float>(Muon_phi_,Muon_phi_+bytes_Muon_phi/sizeof(Muon_phi_[0]));

    int bytes_Muon_pt = b_Muon_pt_->GetEntry(jentry);
    v_Muon_pt_ = vector<float>(Muon_pt_,Muon_pt_+bytes_Muon_pt/sizeof(Muon_pt_[0]));

    int bytes_Muon_tkRelIso = b_Muon_tkRelIso_->GetEntry(jentry);
    v_Muon_tkRelIso_ = vector<float>(Muon_tkRelIso_,Muon_tkRelIso_+bytes_Muon_tkRelIso/sizeof(Muon_tkRelIso_[0]));

}

#endif

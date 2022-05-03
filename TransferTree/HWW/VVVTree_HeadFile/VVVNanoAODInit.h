#ifndef _VVVNanoAODInit_
#define _VVVNanoAODInit_

void EDBR2PKUTree::loadVectorBranches() {
    
    b_GenPart_eta_ = fChain->GetBranch("GenPart_eta");
    if (b_GenPart_eta_) { b_GenPart_eta_->SetAddress(&GenPart_eta_);}
        
    b_GenPart_genPartIdxMother_ = fChain->GetBranch("GenPart_genPartIdxMother");
    if (b_GenPart_genPartIdxMother_) { b_GenPart_genPartIdxMother_->SetAddress(&GenPart_genPartIdxMother_);}
        
    b_GenPart_mass_ = fChain->GetBranch("GenPart_mass");
    if (b_GenPart_mass_) { b_GenPart_mass_->SetAddress(&GenPart_mass_);}
        
    b_GenPart_pdgId_ = fChain->GetBranch("GenPart_pdgId");
    if (b_GenPart_pdgId_) { b_GenPart_pdgId_->SetAddress(&GenPart_pdgId_);}
        
    b_GenPart_phi_ = fChain->GetBranch("GenPart_phi");
    if (b_GenPart_phi_) { b_GenPart_phi_->SetAddress(&GenPart_phi_);}
        
    b_GenPart_pt_ = fChain->GetBranch("GenPart_pt");
    if (b_GenPart_pt_) { b_GenPart_pt_->SetAddress(&GenPart_pt_);}
        
    b_GenPart_status_ = fChain->GetBranch("GenPart_status");
    if (b_GenPart_status_) { b_GenPart_status_->SetAddress(&GenPart_status_);}
        
    b_GenPart_statusFlags_ = fChain->GetBranch("GenPart_statusFlags");
    if (b_GenPart_statusFlags_) { b_GenPart_statusFlags_->SetAddress(&GenPart_statusFlags_);}
    
    b_Jet_btagDeepB_ = fChain->GetBranch("Jet_btagDeepB");
    if (b_Jet_btagDeepB_) { b_Jet_btagDeepB_->SetAddress(&Jet_btagDeepB_);}
        
    b_Jet_btagDeepFlavB_ = fChain->GetBranch("Jet_btagDeepFlavB");
    if (b_Jet_btagDeepFlavB_) { b_Jet_btagDeepFlavB_->SetAddress(&Jet_btagDeepFlavB_);}
        
    b_Jet_btagDeepFlavCvB_ = fChain->GetBranch("Jet_btagDeepFlavCvB");
    if (b_Jet_btagDeepFlavCvB_) { b_Jet_btagDeepFlavCvB_->SetAddress(&Jet_btagDeepFlavCvB_);}
        
    b_Jet_btagDeepFlavCvL_ = fChain->GetBranch("Jet_btagDeepFlavCvL");
    if (b_Jet_btagDeepFlavCvL_) { b_Jet_btagDeepFlavCvL_->SetAddress(&Jet_btagDeepFlavCvL_);}
        
    b_Jet_btagDeepFlavQG_ = fChain->GetBranch("Jet_btagDeepFlavQG");
    if (b_Jet_btagDeepFlavQG_) { b_Jet_btagDeepFlavQG_->SetAddress(&Jet_btagDeepFlavQG_);}
        
    b_Jet_eta_ = fChain->GetBranch("Jet_eta");
    if (b_Jet_eta_) { b_Jet_eta_->SetAddress(&Jet_eta_);}
        
    b_Jet_hadronFlavour_ = fChain->GetBranch("Jet_hadronFlavour");
    if (b_Jet_hadronFlavour_) { b_Jet_hadronFlavour_->SetAddress(&Jet_hadronFlavour_);}
        
    b_Jet_jetId_ = fChain->GetBranch("Jet_jetId");
    if (b_Jet_jetId_) { b_Jet_jetId_->SetAddress(&Jet_jetId_);}
        
    b_Jet_mass_ = fChain->GetBranch("Jet_mass");
    if (b_Jet_mass_) { b_Jet_mass_->SetAddress(&Jet_mass_);}
        
    b_Jet_partonFlavour_ = fChain->GetBranch("Jet_partonFlavour");
    if (b_Jet_partonFlavour_) { b_Jet_partonFlavour_->SetAddress(&Jet_partonFlavour_);}
        
    b_Jet_phi_ = fChain->GetBranch("Jet_phi");
    if (b_Jet_phi_) { b_Jet_phi_->SetAddress(&Jet_phi_);}
        
    b_Jet_pt_ = fChain->GetBranch("Jet_pt");
    if (b_Jet_pt_) { b_Jet_pt_->SetAddress(&Jet_pt_);}
        
    b_Jet_puId_ = fChain->GetBranch("Jet_puId");
    if (b_Jet_puId_) { b_Jet_puId_->SetAddress(&Jet_puId_);}
        
    b_Jet_puIdDisc_ = fChain->GetBranch("Jet_puIdDisc");
    if (b_Jet_puIdDisc_) { b_Jet_puIdDisc_->SetAddress(&Jet_puIdDisc_);}
        
    b_Jet_qgl_ = fChain->GetBranch("Jet_qgl");
    if (b_Jet_qgl_) { b_Jet_qgl_->SetAddress(&Jet_qgl_);}
        
    b_Jet_rawFactor_ = fChain->GetBranch("Jet_rawFactor");
    if (b_Jet_rawFactor_) { b_Jet_rawFactor_->SetAddress(&Jet_rawFactor_);}

    b_FatJet_pt_ = fChain->GetBranch("FatJet_pt");
    if (b_FatJet_pt_) { b_FatJet_pt_->SetAddress(&FatJet_pt_);}
        
    b_FatJet_eta_ = fChain->GetBranch("FatJet_eta");
    if (b_FatJet_eta_) { b_FatJet_eta_->SetAddress(&FatJet_eta_);}
        
    b_FatJet_phi_ = fChain->GetBranch("FatJet_phi");
    if (b_FatJet_phi_) { b_FatJet_phi_->SetAddress(&FatJet_phi_);}
        
    b_FatJet_msoftdrop_ = fChain->GetBranch("FatJet_msoftdrop");
    if (b_FatJet_msoftdrop_) { b_FatJet_msoftdrop_->SetAddress(&FatJet_msoftdrop_);}
    //New tagger

    b_FatJet_deepHWWMDV1_probHww3q_ = fChain->GetBranch("FatJet_deepHWWMDV1_probHww3q"); 
    if (b_FatJet_deepHWWMDV1_probHww3q_) {b_FatJet_deepHWWMDV1_probHww3q_->SetAddress(&FatJet_deepHWWMDV1_probHww3q_);}

    b_FatJet_deepHWWMDV1_probHww4q_ = fChain->GetBranch("FatJet_deepHWWMDV1_probHww4q"); 
    if (b_FatJet_deepHWWMDV1_probHww4q_) {b_FatJet_deepHWWMDV1_probHww4q_->SetAddress(&FatJet_deepHWWMDV1_probHww4q_);}

    b_FatJet_deepHWWMDV1_probHww4qvsQCD_ = fChain->GetBranch("FatJet_deepHWWMDV1_probHww4qvsQCD"); 
    if (b_FatJet_deepHWWMDV1_probHww4qvsQCD_) {b_FatJet_deepHWWMDV1_probHww4qvsQCD_->SetAddress(&FatJet_deepHWWMDV1_probHww4qvsQCD_);}

    b_FatJet_deepHWWMDV1_probHww4q3qvsQCD_ = fChain->GetBranch("FatJet_deepHWWMDV1_probHww4q3qvsQCD"); 
    if (b_FatJet_deepHWWMDV1_probHww4q3qvsQCD_) {b_FatJet_deepHWWMDV1_probHww4q3qvsQCD_->SetAddress(&FatJet_deepHWWMDV1_probHww4q3qvsQCD_);}

    b_FatJet_deepHWWMDV1_probHwwevqq_ = fChain->GetBranch("FatJet_deepHWWMDV1_probHwwevqq"); 
    if (b_FatJet_deepHWWMDV1_probHwwevqq_) {b_FatJet_deepHWWMDV1_probHwwevqq_->SetAddress(&FatJet_deepHWWMDV1_probHwwevqq_);}

    b_FatJet_deepHWWMDV1_probHwwmvqq_ = fChain->GetBranch("FatJet_deepHWWMDV1_probHwwmvqq"); 
    if (b_FatJet_deepHWWMDV1_probHwwmvqq_) {b_FatJet_deepHWWMDV1_probHwwmvqq_->SetAddress(&FatJet_deepHWWMDV1_probHwwmvqq_);}

    b_FatJet_deepHWWMDV1_probHwwleptaumvqq_ = fChain->GetBranch("FatJet_deepHWWMDV1_probHwwleptaumvqq"); 
    if (b_FatJet_deepHWWMDV1_probHwwleptaumvqq_) {b_FatJet_deepHWWMDV1_probHwwleptaumvqq_->SetAddress(&FatJet_deepHWWMDV1_probHwwleptaumvqq_);}

    b_FatJet_deepHWWMDV1_probHwwleptauevqq_ = fChain->GetBranch("FatJet_deepHWWMDV1_probHwwleptauevqq"); 
    if (b_FatJet_deepHWWMDV1_probHwwleptauevqq_) {b_FatJet_deepHWWMDV1_probHwwleptauevqq_->SetAddress(&FatJet_deepHWWMDV1_probHwwleptauevqq_);}

    b_FatJet_deepHWWMDV1_probHwwhadtauvqq_ = fChain->GetBranch("FatJet_deepHWWMDV1_probHwwhadtauvqq"); 
    if (b_FatJet_deepHWWMDV1_probHwwhadtauvqq_) {b_FatJet_deepHWWMDV1_probHwwhadtauvqq_->SetAddress(&FatJet_deepHWWMDV1_probHwwhadtauvqq_);}

    b_FatJet_deepHWWMDV1_probQCDb_ = fChain->GetBranch("FatJet_deepHWWMDV1_probQCDb"); 
    if (b_FatJet_deepHWWMDV1_probQCDb_) {b_FatJet_deepHWWMDV1_probQCDb_->SetAddress(&FatJet_deepHWWMDV1_probQCDb_);}

    b_FatJet_deepHWWMDV1_probQCDbb_ = fChain->GetBranch("FatJet_deepHWWMDV1_probQCDbb"); 
    if (b_FatJet_deepHWWMDV1_probQCDbb_) {b_FatJet_deepHWWMDV1_probQCDbb_->SetAddress(&FatJet_deepHWWMDV1_probQCDbb_);}

    b_FatJet_deepHWWMDV1_probQCDc_ = fChain->GetBranch("FatJet_deepHWWMDV1_probQCDc"); 
    if (b_FatJet_deepHWWMDV1_probQCDc_) {b_FatJet_deepHWWMDV1_probQCDc_->SetAddress(&FatJet_deepHWWMDV1_probQCDc_);}

    b_FatJet_deepHWWMDV1_probQCDcc_ = fChain->GetBranch("FatJet_deepHWWMDV1_probQCDcc"); 
    if (b_FatJet_deepHWWMDV1_probQCDcc_) {b_FatJet_deepHWWMDV1_probQCDcc_->SetAddress(&FatJet_deepHWWMDV1_probQCDcc_);}

    b_FatJet_deepHWWMDV1_probQCDothers_ = fChain->GetBranch("FatJet_deepHWWMDV1_probQCDothers"); 
    if (b_FatJet_deepHWWMDV1_probQCDothers_) {b_FatJet_deepHWWMDV1_probQCDothers_->SetAddress(&FatJet_deepHWWMDV1_probQCDothers_);}


    //New tagger ends.


    b_FatJet_deepTagMD_probHbb_ = fChain->GetBranch("FatJet_deepTagMD_probHbb");
    if (b_FatJet_deepTagMD_probHbb_) { b_FatJet_deepTagMD_probHbb_->SetAddress(&FatJet_deepTagMD_probHbb_);}
        
    b_FatJet_deepTagMD_probHcc_ = fChain->GetBranch("FatJet_deepTagMD_probHcc");
    if (b_FatJet_deepTagMD_probHcc_) { b_FatJet_deepTagMD_probHcc_->SetAddress(&FatJet_deepTagMD_probHcc_);}
        
    b_FatJet_deepTagMD_probHqqqq_ = fChain->GetBranch("FatJet_deepTagMD_probHqqqq");
    if (b_FatJet_deepTagMD_probHqqqq_) { b_FatJet_deepTagMD_probHqqqq_->SetAddress(&FatJet_deepTagMD_probHqqqq_);}
        
    b_FatJet_deepTagMD_probQCDb_ = fChain->GetBranch("FatJet_deepTagMD_probQCDb");
    if (b_FatJet_deepTagMD_probQCDb_) { b_FatJet_deepTagMD_probQCDb_->SetAddress(&FatJet_deepTagMD_probQCDb_);}
        
    b_FatJet_deepTagMD_probQCDbb_ = fChain->GetBranch("FatJet_deepTagMD_probQCDbb");
    if (b_FatJet_deepTagMD_probQCDbb_) { b_FatJet_deepTagMD_probQCDbb_->SetAddress(&FatJet_deepTagMD_probQCDbb_);}
        
    b_FatJet_deepTagMD_probQCDc_ = fChain->GetBranch("FatJet_deepTagMD_probQCDc");
    if (b_FatJet_deepTagMD_probQCDc_) { b_FatJet_deepTagMD_probQCDc_->SetAddress(&FatJet_deepTagMD_probQCDc_);}
        
    b_FatJet_deepTagMD_probQCDcc_ = fChain->GetBranch("FatJet_deepTagMD_probQCDcc");
    if (b_FatJet_deepTagMD_probQCDcc_) { b_FatJet_deepTagMD_probQCDcc_->SetAddress(&FatJet_deepTagMD_probQCDcc_);}
        
    b_FatJet_deepTagMD_probQCDothers_ = fChain->GetBranch("FatJet_deepTagMD_probQCDothers");
    if (b_FatJet_deepTagMD_probQCDothers_) { b_FatJet_deepTagMD_probQCDothers_->SetAddress(&FatJet_deepTagMD_probQCDothers_);}
        
    b_FatJet_deepTagMD_probTbc_ = fChain->GetBranch("FatJet_deepTagMD_probTbc");
    if (b_FatJet_deepTagMD_probTbc_) { b_FatJet_deepTagMD_probTbc_->SetAddress(&FatJet_deepTagMD_probTbc_);}
        
    b_FatJet_deepTagMD_probTbcq_ = fChain->GetBranch("FatJet_deepTagMD_probTbcq");
    if (b_FatJet_deepTagMD_probTbcq_) { b_FatJet_deepTagMD_probTbcq_->SetAddress(&FatJet_deepTagMD_probTbcq_);}
        
    b_FatJet_deepTagMD_probTbq_ = fChain->GetBranch("FatJet_deepTagMD_probTbq");
    if (b_FatJet_deepTagMD_probTbq_) { b_FatJet_deepTagMD_probTbq_->SetAddress(&FatJet_deepTagMD_probTbq_);}
        
    b_FatJet_deepTagMD_probTbqq_ = fChain->GetBranch("FatJet_deepTagMD_probTbqq");
    if (b_FatJet_deepTagMD_probTbqq_) { b_FatJet_deepTagMD_probTbqq_->SetAddress(&FatJet_deepTagMD_probTbqq_);}
        
    b_FatJet_deepTagMD_probWcq_ = fChain->GetBranch("FatJet_deepTagMD_probWcq");
    if (b_FatJet_deepTagMD_probWcq_) { b_FatJet_deepTagMD_probWcq_->SetAddress(&FatJet_deepTagMD_probWcq_);}
        
    b_FatJet_deepTagMD_probWqq_ = fChain->GetBranch("FatJet_deepTagMD_probWqq");
    if (b_FatJet_deepTagMD_probWqq_) { b_FatJet_deepTagMD_probWqq_->SetAddress(&FatJet_deepTagMD_probWqq_);}
        
    b_FatJet_deepTagMD_probZbb_ = fChain->GetBranch("FatJet_deepTagMD_probZbb");
    if (b_FatJet_deepTagMD_probZbb_) { b_FatJet_deepTagMD_probZbb_->SetAddress(&FatJet_deepTagMD_probZbb_);}
        
    b_FatJet_deepTagMD_probZcc_ = fChain->GetBranch("FatJet_deepTagMD_probZcc");
    if (b_FatJet_deepTagMD_probZcc_) { b_FatJet_deepTagMD_probZcc_->SetAddress(&FatJet_deepTagMD_probZcc_);}
        
    b_FatJet_deepTagMD_probZqq_ = fChain->GetBranch("FatJet_deepTagMD_probZqq");
    if (b_FatJet_deepTagMD_probZqq_) { b_FatJet_deepTagMD_probZqq_->SetAddress(&FatJet_deepTagMD_probZqq_);}
        
    b_FatJet_deepTag_probHbb_ = fChain->GetBranch("FatJet_deepTag_probHbb");
    if (b_FatJet_deepTag_probHbb_) { b_FatJet_deepTag_probHbb_->SetAddress(&FatJet_deepTag_probHbb_);}
        
    b_FatJet_deepTag_probHcc_ = fChain->GetBranch("FatJet_deepTag_probHcc");
    if (b_FatJet_deepTag_probHcc_) { b_FatJet_deepTag_probHcc_->SetAddress(&FatJet_deepTag_probHcc_);}
        
    b_FatJet_deepTag_probHqqqq_ = fChain->GetBranch("FatJet_deepTag_probHqqqq");
    if (b_FatJet_deepTag_probHqqqq_) { b_FatJet_deepTag_probHqqqq_->SetAddress(&FatJet_deepTag_probHqqqq_);}
        
    b_FatJet_deepTag_probQCDb_ = fChain->GetBranch("FatJet_deepTag_probQCDb");
    if (b_FatJet_deepTag_probQCDb_) { b_FatJet_deepTag_probQCDb_->SetAddress(&FatJet_deepTag_probQCDb_);}
        
    b_FatJet_deepTag_probQCDbb_ = fChain->GetBranch("FatJet_deepTag_probQCDbb");
    if (b_FatJet_deepTag_probQCDbb_) { b_FatJet_deepTag_probQCDbb_->SetAddress(&FatJet_deepTag_probQCDbb_);}
        
    b_FatJet_deepTag_probQCDc_ = fChain->GetBranch("FatJet_deepTag_probQCDc");
    if (b_FatJet_deepTag_probQCDc_) { b_FatJet_deepTag_probQCDc_->SetAddress(&FatJet_deepTag_probQCDc_);}
        
    b_FatJet_deepTag_probQCDcc_ = fChain->GetBranch("FatJet_deepTag_probQCDcc");
    if (b_FatJet_deepTag_probQCDcc_) { b_FatJet_deepTag_probQCDcc_->SetAddress(&FatJet_deepTag_probQCDcc_);}
        
    b_FatJet_deepTag_probQCDothers_ = fChain->GetBranch("FatJet_deepTag_probQCDothers");
    if (b_FatJet_deepTag_probQCDothers_) { b_FatJet_deepTag_probQCDothers_->SetAddress(&FatJet_deepTag_probQCDothers_);}
        
    b_FatJet_deepTag_probTbc_ = fChain->GetBranch("FatJet_deepTag_probTbc");
    if (b_FatJet_deepTag_probTbc_) { b_FatJet_deepTag_probTbc_->SetAddress(&FatJet_deepTag_probTbc_);}
        
    b_FatJet_deepTag_probTbcq_ = fChain->GetBranch("FatJet_deepTag_probTbcq");
    if (b_FatJet_deepTag_probTbcq_) { b_FatJet_deepTag_probTbcq_->SetAddress(&FatJet_deepTag_probTbcq_);}
        
    b_FatJet_deepTag_probTbq_ = fChain->GetBranch("FatJet_deepTag_probTbq");
    if (b_FatJet_deepTag_probTbq_) { b_FatJet_deepTag_probTbq_->SetAddress(&FatJet_deepTag_probTbq_);}
        
    b_FatJet_deepTag_probTbqq_ = fChain->GetBranch("FatJet_deepTag_probTbqq");
    if (b_FatJet_deepTag_probTbqq_) { b_FatJet_deepTag_probTbqq_->SetAddress(&FatJet_deepTag_probTbqq_);}
        
    b_FatJet_deepTag_probWcq_ = fChain->GetBranch("FatJet_deepTag_probWcq");
    if (b_FatJet_deepTag_probWcq_) { b_FatJet_deepTag_probWcq_->SetAddress(&FatJet_deepTag_probWcq_);}
        
    b_FatJet_deepTag_probWqq_ = fChain->GetBranch("FatJet_deepTag_probWqq");
    if (b_FatJet_deepTag_probWqq_) { b_FatJet_deepTag_probWqq_->SetAddress(&FatJet_deepTag_probWqq_);}
        
    b_FatJet_deepTag_probZbb_ = fChain->GetBranch("FatJet_deepTag_probZbb");
    if (b_FatJet_deepTag_probZbb_) { b_FatJet_deepTag_probZbb_->SetAddress(&FatJet_deepTag_probZbb_);}
        
    b_FatJet_deepTag_probZcc_ = fChain->GetBranch("FatJet_deepTag_probZcc");
    if (b_FatJet_deepTag_probZcc_) { b_FatJet_deepTag_probZcc_->SetAddress(&FatJet_deepTag_probZcc_);}
        
    b_FatJet_deepTag_probZqq_ = fChain->GetBranch("FatJet_deepTag_probZqq");
    if (b_FatJet_deepTag_probZqq_) { b_FatJet_deepTag_probZqq_->SetAddress(&FatJet_deepTag_probZqq_);}



    b_FatJet_particleNetMD_QCD_ = fChain->GetBranch("FatJet_particleNetMD_QCD");
    if (b_FatJet_particleNetMD_QCD_) { b_FatJet_particleNetMD_QCD_->SetAddress(&FatJet_particleNetMD_QCD_);}
        
    b_FatJet_particleNetMD_Xbb_ = fChain->GetBranch("FatJet_particleNetMD_Xbb");
    if (b_FatJet_particleNetMD_Xbb_) { b_FatJet_particleNetMD_Xbb_->SetAddress(&FatJet_particleNetMD_Xbb_);}
        
    b_FatJet_particleNetMD_Xcc_ = fChain->GetBranch("FatJet_particleNetMD_Xcc");
    if (b_FatJet_particleNetMD_Xcc_) { b_FatJet_particleNetMD_Xcc_->SetAddress(&FatJet_particleNetMD_Xcc_);}
        
    b_FatJet_particleNetMD_Xqq_ = fChain->GetBranch("FatJet_particleNetMD_Xqq");
    if (b_FatJet_particleNetMD_Xqq_) { b_FatJet_particleNetMD_Xqq_->SetAddress(&FatJet_particleNetMD_Xqq_);}
        
    b_FatJet_particleNet_H4qvsQCD_ = fChain->GetBranch("FatJet_particleNet_H4qvsQCD");
    if (b_FatJet_particleNet_H4qvsQCD_) { b_FatJet_particleNet_H4qvsQCD_->SetAddress(&FatJet_particleNet_H4qvsQCD_);}
        
    b_FatJet_particleNet_HbbvsQCD_ = fChain->GetBranch("FatJet_particleNet_HbbvsQCD");
    if (b_FatJet_particleNet_HbbvsQCD_) { b_FatJet_particleNet_HbbvsQCD_->SetAddress(&FatJet_particleNet_HbbvsQCD_);}
        
    b_FatJet_particleNet_HccvsQCD_ = fChain->GetBranch("FatJet_particleNet_HccvsQCD");
    if (b_FatJet_particleNet_HccvsQCD_) { b_FatJet_particleNet_HccvsQCD_->SetAddress(&FatJet_particleNet_HccvsQCD_);}
        
    b_FatJet_particleNet_QCD_ = fChain->GetBranch("FatJet_particleNet_QCD");
    if (b_FatJet_particleNet_QCD_) { b_FatJet_particleNet_QCD_->SetAddress(&FatJet_particleNet_QCD_);}
        
    b_FatJet_particleNet_TvsQCD_ = fChain->GetBranch("FatJet_particleNet_TvsQCD");
    if (b_FatJet_particleNet_TvsQCD_) { b_FatJet_particleNet_TvsQCD_->SetAddress(&FatJet_particleNet_TvsQCD_);}
        
    b_FatJet_particleNet_WvsQCD_ = fChain->GetBranch("FatJet_particleNet_WvsQCD");
    if (b_FatJet_particleNet_WvsQCD_) { b_FatJet_particleNet_WvsQCD_->SetAddress(&FatJet_particleNet_WvsQCD_);}
        
    b_FatJet_particleNet_ZvsQCD_ = fChain->GetBranch("FatJet_particleNet_ZvsQCD");
    if (b_FatJet_particleNet_ZvsQCD_) { b_FatJet_particleNet_ZvsQCD_->SetAddress(&FatJet_particleNet_ZvsQCD_);}
        
    b_FatJet_particleNet_mass_ = fChain->GetBranch("FatJet_particleNet_mass");
    if (b_FatJet_particleNet_mass_) { b_FatJet_particleNet_mass_->SetAddress(&FatJet_particleNet_mass_);}

    b_FatJet_tau1_ = fChain->GetBranch("FatJet_tau1");
    if (b_FatJet_tau1_) { b_FatJet_tau1_->SetAddress(&FatJet_tau1_);}

    b_FatJet_tau2_ = fChain->GetBranch("FatJet_tau2");
    if (b_FatJet_tau2_) { b_FatJet_tau2_->SetAddress(&FatJet_tau2_);}

    b_FatJet_tau3_ = fChain->GetBranch("FatJet_tau3");
    if (b_FatJet_tau3_) { b_FatJet_tau3_->SetAddress(&FatJet_tau3_);}

    b_FatJet_tau4_ = fChain->GetBranch("FatJet_tau4");
    if (b_FatJet_tau4_) { b_FatJet_tau4_->SetAddress(&FatJet_tau4_);}

    

}

#endif






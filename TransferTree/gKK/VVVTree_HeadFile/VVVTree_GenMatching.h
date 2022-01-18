#ifndef _VVVTree_GenMatching_
#define _VVVTree_GenMatching_

vector<size_t> EDBR2PKUTree::GenParticles_Daughterindex(size_t Genpart_index) {
    vector<size_t> W_daughter_index_tmp;
    for (size_t id=0; id<v_GenPart_pt_.size();id++){
        if (v_GenPart_genPartIdxMother_[id] == Genpart_index){
            W_daughter_index_tmp.push_back(id);
        }
    }
    vector<size_t> W_daughter_index;
    int NW_daughter_index = W_daughter_index_tmp.size();
    if( NW_daughter_index == 2 ){
        if( abs(v_GenPart_pdgId_[W_daughter_index_tmp[0]]) < abs(v_GenPart_pdgId_[W_daughter_index_tmp[1]])  ){
            W_daughter_index.push_back(W_daughter_index_tmp[0]);
            W_daughter_index.push_back(W_daughter_index_tmp[1]);
        }
        else{
            W_daughter_index.push_back(W_daughter_index_tmp[1]);
            W_daughter_index.push_back(W_daughter_index_tmp[0]);
        }
        return W_daughter_index;
    }
    return W_daughter_index_tmp;
}

int EDBR2PKUTree::GenParticles_Lastcopy(size_t Genpart_index) {
    // use the same method miniAOD-framework used
    int LastCopyID = Genpart_index;
    int PGDID      = v_GenPart_pdgId_[Genpart_index];
    int PGDID_daughter = -99;
    vector<size_t> daughterindex = GenParticles_Daughterindex(Genpart_index);

    for (size_t id=0; id<daughterindex.size();id++){
        if(v_GenPart_pdgId_[daughterindex[id]]==PGDID){
            LastCopyID = daughterindex[id];
            PGDID_daughter = v_GenPart_pdgId_[daughterindex[id]];
        }
    }
    if(PGDID_daughter == PGDID){
        return GenParticles_Lastcopy(LastCopyID);
    }
    return LastCopyID;
}

int EDBR2PKUTree::GenParticles_Firstcopy(size_t Genpart_index){
    int FirstCopyID = -99;
    int PGDID = v_GenPart_pdgId_[Genpart_index];
    int LoopID = Genpart_index;
    while(v_GenPart_pdgId_[LoopID] == PGDID){
        FirstCopyID = LoopID;
        LoopID = v_GenPart_genPartIdxMother_[LoopID];
        if(LoopID < 0){
            break;
        }
    }
    return FirstCopyID;
}

void EDBR2PKUTree::GenMatching(Long64_t jentry) {
    loadGenpart(jentry);
    gen_tau_decay_2 = -99;
    gen_tau_decay_3 = -99;
    GenParticles();
}

void EDBR2PKUTree::loadGenpart(Long64_t jentry) {
    if (b_GenPart_eta_) {
        int bytes_GenPart_eta = b_GenPart_eta_->GetEntry(jentry);
        v_GenPart_eta_ = vector<float>(GenPart_eta_,GenPart_eta_+bytes_GenPart_eta/sizeof(GenPart_eta_[0]));
    }
    
    if (b_GenPart_genPartIdxMother_) {
        int bytes_GenPart_genPartIdxMother = b_GenPart_genPartIdxMother_->GetEntry(jentry);
        v_GenPart_genPartIdxMother_ = vector<int>(GenPart_genPartIdxMother_,GenPart_genPartIdxMother_+bytes_GenPart_genPartIdxMother/sizeof(GenPart_genPartIdxMother_[0]));
    }
    
    if (b_GenPart_mass_) {
        int bytes_GenPart_mass = b_GenPart_mass_->GetEntry(jentry);
        v_GenPart_mass_ = vector<float>(GenPart_mass_,GenPart_mass_+bytes_GenPart_mass/sizeof(GenPart_mass_[0]));
    }
    
    if (b_GenPart_pdgId_) {
        int bytes_GenPart_pdgId = b_GenPart_pdgId_->GetEntry(jentry);
        v_GenPart_pdgId_ = vector<int>(GenPart_pdgId_,GenPart_pdgId_+bytes_GenPart_pdgId/sizeof(GenPart_pdgId_[0]));
    }
    
    if (b_GenPart_phi_) {
        int bytes_GenPart_phi = b_GenPart_phi_->GetEntry(jentry);
        v_GenPart_phi_ = vector<float>(GenPart_phi_,GenPart_phi_+bytes_GenPart_phi/sizeof(GenPart_phi_[0]));
    }
    
    if (b_GenPart_pt_) {
        int bytes_GenPart_pt = b_GenPart_pt_->GetEntry(jentry);
        v_GenPart_pt_ = vector<float>(GenPart_pt_,GenPart_pt_+bytes_GenPart_pt/sizeof(GenPart_pt_[0]));
    }
    
    if (b_GenPart_status_) {
        int bytes_GenPart_status = b_GenPart_status_->GetEntry(jentry);
        v_GenPart_status_ = vector<int>(GenPart_status_,GenPart_status_+bytes_GenPart_status/sizeof(GenPart_status_[0]));
    }
    
    if (b_GenPart_statusFlags_) {
        int bytes_GenPart_statusFlags = b_GenPart_statusFlags_->GetEntry(jentry);
        v_GenPart_statusFlags_ = vector<int>(GenPart_statusFlags_,GenPart_statusFlags_+bytes_GenPart_statusFlags/sizeof(GenPart_statusFlags_[0]));
    }
    
    
}

void EDBR2PKUTree::GenParticles() {
    int Windex = 0;
    for(size_t ik=0; ik<v_GenPart_pt_.size();ik++){
        // W
        if ( abs(v_GenPart_pdgId_[ik]) == 24 ){
            if (not (v_GenPart_statusFlags_[ik]&(1<<13))) continue; // isLastCopy
            if( Windex < 5 ){
                ptgenwl[Windex]   = v_GenPart_pt_[ik];
                etagenwl[Windex]  = v_GenPart_eta_[ik];
                phigenwl[Windex]  = v_GenPart_phi_[ik];

                vector<size_t> W_daughter_index = GenParticles_Daughterindex(ik);
                int NW_daughter = W_daughter_index.size();
                if ( NW_daughter == 2){
                    genw_q1_eta[Windex]  = v_GenPart_eta_[W_daughter_index[0]];
                    genw_q1_phi[Windex]  = v_GenPart_phi_[W_daughter_index[0]];

                    genw_q2_eta[Windex]  = v_GenPart_eta_[W_daughter_index[1]];
                    genw_q2_phi[Windex]  = v_GenPart_phi_[W_daughter_index[1]];

                    if( abs(v_GenPart_pdgId_[W_daughter_index[0]]) == 11 ){
                        taggenwl[Windex] = 1;
                    }
                    if( abs(v_GenPart_pdgId_[W_daughter_index[0]]) == 13 ){
                        taggenwl[Windex] = 2;
                    }
                    if( abs(v_GenPart_pdgId_[W_daughter_index[0]]) == 15 ){
                        taggenwl[Windex] = 3;
                    }
                    if( abs(v_GenPart_pdgId_[W_daughter_index[0]]) >= 0 && abs(v_GenPart_pdgId_[W_daughter_index[0]]) <= 5  ){
                        taggenwl[Windex] = 4;
                    }
                }
                Windex++;
            }
        }
        // Radion
        if ( abs(v_GenPart_pdgId_[ik]) == 9000025 ){
            int Rlid = GenParticles_Lastcopy(ik);
            gen_rad_pt   = v_GenPart_pt_[Rlid];
            gen_rad_eta  = v_GenPart_eta_[Rlid];
            gen_rad_phi  = v_GenPart_phi_[Rlid];
            vector<size_t> R_daughter_index = GenParticles_Daughterindex(Rlid);
            int NR_daughter = R_daughter_index.size();
            if ( NR_daughter == 2){
                // W1
                int W1lid = GenParticles_Lastcopy(R_daughter_index[0]);
                vector<size_t> R_W1_daughter_index = GenParticles_Daughterindex(W1lid);
                int NR_W1_daughter = R_W1_daughter_index.size();
                if ( NR_W1_daughter == 2){
                    ptq21   = v_GenPart_pt_[R_W1_daughter_index[0]];
                    etaq21  = v_GenPart_eta_[R_W1_daughter_index[0]];
                    phiq21  = v_GenPart_phi_[R_W1_daughter_index[0]];
                    massq21 = v_GenPart_mass_[R_W1_daughter_index[0]];

                    ptq22   = v_GenPart_pt_[R_W1_daughter_index[1]];
                    etaq22  = v_GenPart_eta_[R_W1_daughter_index[1]];
                    phiq22  = v_GenPart_phi_[R_W1_daughter_index[1]];
                    massq22 = v_GenPart_mass_[R_W1_daughter_index[1]];

                    if ( abs(v_GenPart_pdgId_[R_W1_daughter_index[0]]) == 11 ){
                        status_2 = 1;
                    }
                    if ( abs(v_GenPart_pdgId_[R_W1_daughter_index[0]]) == 13 ){
                        status_2 = 2;
                    }
                    if ( abs(v_GenPart_pdgId_[R_W1_daughter_index[0]]) == 15 ){
                        status_2 = 3;
                        int taulid = GenParticles_Lastcopy(R_W1_daughter_index[0]);
                        vector<size_t> tau_daughter_index = GenParticles_Daughterindex(taulid);
                        int Ntau_daughter = tau_daughter_index.size();
                        for(size_t itaudaughter = 0;itaudaughter < tau_daughter_index.size();itaudaughter++){
                            if( abs(v_GenPart_pdgId_[tau_daughter_index[itaudaughter]]) == 24 || abs(v_GenPart_pdgId_[tau_daughter_index[itaudaughter]]) == 13 || abs(v_GenPart_pdgId_[tau_daughter_index[itaudaughter]]) == 11 ){
                                gen_tau_decay_2 = 1;
                            }
                        }
                    }
                    if ( abs(v_GenPart_pdgId_[R_W1_daughter_index[0]]) > 0 && abs(v_GenPart_pdgId_[R_W1_daughter_index[0]]) <= 5 ){
                        status_2 = 4;
                    }
                }
                // W2
                int W2lid = GenParticles_Lastcopy(R_daughter_index[1]);
                vector<size_t> R_W2_daughter_index = GenParticles_Daughterindex(W2lid);
                int NR_W2_daughter = R_W2_daughter_index.size();
                if ( NR_W2_daughter == 2){
                    ptq31   = v_GenPart_pt_[R_W2_daughter_index[0]];
                    etaq31  = v_GenPart_eta_[R_W2_daughter_index[0]];
                    phiq31  = v_GenPart_phi_[R_W2_daughter_index[0]];
                    massq31 = v_GenPart_mass_[R_W2_daughter_index[0]];

                    ptq32   = v_GenPart_pt_[R_W2_daughter_index[1]];
                    etaq32  = v_GenPart_eta_[R_W2_daughter_index[1]];
                    phiq32  = v_GenPart_phi_[R_W2_daughter_index[1]];
                    massq32 = v_GenPart_mass_[R_W2_daughter_index[1]];

                    if ( abs(v_GenPart_pdgId_[R_W2_daughter_index[0]]) == 11 ){
                        status_3 = 1;
                    }
                    if ( abs(v_GenPart_pdgId_[R_W2_daughter_index[0]]) == 13 ){
                        status_3 = 2;
                    }
                    if ( abs(v_GenPart_pdgId_[R_W2_daughter_index[0]]) == 15 ){
                        status_3 = 3;

                        int taulid = GenParticles_Lastcopy(R_W2_daughter_index[0]);
                        vector<size_t> tau_daughter_index = GenParticles_Daughterindex(taulid);
                        int Ntau_daughter = tau_daughter_index.size();
                        for(size_t itaudaughter = 0; itaudaughter < tau_daughter_index.size();itaudaughter++){
                            if(abs(v_GenPart_pdgId_[tau_daughter_index[itaudaughter]]) == 24 || abs(v_GenPart_pdgId_[tau_daughter_index[itaudaughter]]) == 13 || abs(v_GenPart_pdgId_[tau_daughter_index[itaudaughter]]) == 11 ){
                                gen_tau_decay_3 = 1;
                            }
                        }
                    }
                    if ( abs(v_GenPart_pdgId_[R_W2_daughter_index[0]]) > 0 && abs(v_GenPart_pdgId_[R_W2_daughter_index[0]]) <= 5 ){
                        status_3 = 4;
                    }
                }

            }
        }
        // gluon from gKK decay
        if ( abs(v_GenPart_pdgId_[ik]) == 21 ){
            if (v_GenPart_genPartIdxMother_[ik] > 0){
                if ( abs(v_GenPart_pdgId_[v_GenPart_genPartIdxMother_[ik]]) == 9000021 ){
                    gen_gKK_g_pt_f = v_GenPart_pt_[ik];
                    gen_gKK_g_eta_f = v_GenPart_eta_[ik];
                    gen_gKK_g_phi_f = v_GenPart_phi_[ik];
                    gen_gKK_g_mass_f = v_GenPart_mass_[ik];
                }
            }
        }
    }
}



#endif
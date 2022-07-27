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
    
    Genparticles Genparticles_ = {
        v_GenPart_eta_,
        v_GenPart_genPartIdxMother_,
        v_GenPart_mass_,
        v_GenPart_pdgId_,
        v_GenPart_phi_,
        v_GenPart_pt_,
        v_GenPart_status_,
        v_GenPart_statusFlags_,
    } ;

    GenParticle_Collection W_Collection = GenParticle_Collection(Genparticles_, 24);
    GenParticle_Collection t_Collection = GenParticle_Collection(W_Collection, 6);
    GenParticle_Collection Z_Collection = GenParticle_Collection(Genparticles_, 23);
    GenParticle_Collection g_Collection = GenParticle_Collection(W_Collection, 21);
    GenParticle_Collection d_Collection = GenParticle_Collection(W_Collection, 1);
    GenParticle_Collection u_Collection = GenParticle_Collection(W_Collection, 2);
    GenParticle_Collection s_Collection = GenParticle_Collection(W_Collection, 3);
    GenParticle_Collection c_Collection = GenParticle_Collection(W_Collection, 4);
    GenParticle_Collection d_first_Collection = GenParticle_Collection(W_Collection, 1);
    GenParticle_Collection u_first_Collection = GenParticle_Collection(W_Collection, 2);
    GenParticle_Collection s_first_Collection = GenParticle_Collection(W_Collection, 3);
    GenParticle_Collection c_first_Collection = GenParticle_Collection(W_Collection, 4);
    GenParticle_Collection g_first_Collection = GenParticle_Collection(W_Collection, 21);
    
    int Windex = 0;
    for(size_t ik=0; ik<v_GenPart_pt_.size();ik++){
        
            t_Collection.AddParticle(ik);
            W_Collection.AddParticle(ik);
            Z_Collection.AddParticle(ik);
            g_Collection.AddParticle(ik);
            u_Collection.AddParticle(ik);
            d_Collection.AddParticle(ik);
            s_Collection.AddParticle(ik);
            c_Collection.AddParticle(ik);

            g_first_Collection.AddParticle(ik,1);
            u_first_Collection.AddParticle(ik,1);
            d_first_Collection.AddParticle(ik,1);
            s_first_Collection.AddParticle(ik,1);
            c_first_Collection.AddParticle(ik,1);
        
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

    TLorentzVector AK8_a, AK8_b, AK8_c;
    AK8_a.SetPtEtaPhiM(PTj_a,Etaj_a,Phij_a,Mj_a);
    AK8_c.SetPtEtaPhiM(PTj_c,Etaj_c,Phij_c,Mj_c);
    AK8_b.SetPtEtaPhiM(PTj_b,Etaj_b,Phij_b,Mj_b);

    matchingt_a = t_Collection.matchingAK8(AK8_a);
    matchingW_a = W_Collection.matchingAK8(AK8_a);
    matchingg_a = g_Collection.matchingAK8(AK8_a);
    matchingZ_a = Z_Collection.matchingAK8(AK8_a);
    matchingu_a = u_Collection.matchingAK8(AK8_a);
    matchingd_a = d_Collection.matchingAK8(AK8_a);
    matchings_a = s_Collection.matchingAK8(AK8_a);
    matchingc_a = c_Collection.matchingAK8(AK8_a);
    matchingg_first_a = g_first_Collection.matchingAK8(AK8_a,1);
    matchingu_first_a = u_first_Collection.matchingAK8(AK8_a,1);
    matchingd_first_a = d_first_Collection.matchingAK8(AK8_a,1);
    matchings_first_a = s_first_Collection.matchingAK8(AK8_a,1);
    matchingc_first_a = c_first_Collection.matchingAK8(AK8_a,1);
    matchingqg_first_a = 0;
    vector<int> matching_qg_a = { matchingg_first_a, matchingc_first_a, matchings_first_a, matchingd_first_a, matchingu_first_a };
    for(size_t i ; i<matching_qg_a.size() ; i++){
        if( matching_qg_a[i] == 1 ){ 
            if( matchingqg_first_a < 1 ){ matchingqg_first_a = 1 ; }
        }
        else{
            if( matchingqg_first_a < matching_qg_a[i] ){ matchingqg_first_a = matching_qg_a[i] - 1  ; }
        }
    }
    matchingt_first_a = matchingt_a;
    if( matchingt_a == 5 ){
        if( matchingg_a == 1 || matchingc_a == 1 || matchings_a == 1 || matchingd_a == 1 || matchingu_a == 1 ){ matchingt_a = 6; }
        if( matchingqg_first_a == 1 ){ matchingt_first_a = 6; }
    }
    
    

    matchingt_c = t_Collection.matchingAK8(AK8_c);
    matchingW_c = W_Collection.matchingAK8(AK8_c);
    matchingg_c = g_Collection.matchingAK8(AK8_c);
    matchingZ_c = Z_Collection.matchingAK8(AK8_c);
    matchingu_c = u_Collection.matchingAK8(AK8_c);
    matchingd_c = d_Collection.matchingAK8(AK8_c);
    matchings_c = s_Collection.matchingAK8(AK8_c);
    matchingc_c = c_Collection.matchingAK8(AK8_c);
    matchingg_first_c = g_first_Collection.matchingAK8(AK8_c,1);
    matchingu_first_c = u_first_Collection.matchingAK8(AK8_c,1);
    matchingd_first_c = d_first_Collection.matchingAK8(AK8_c,1);
    matchings_first_c = s_first_Collection.matchingAK8(AK8_c,1);
    matchingc_first_c = c_first_Collection.matchingAK8(AK8_c,1);
    matchingqg_first_c = 0;
    vector<int> matching_qg_c = { matchingg_first_c, matchingc_first_c, matchings_first_c, matchingd_first_c, matchingu_first_c };
    for(size_t i ; i<matching_qg_c.size() ; i++){
        if( matching_qg_c[i] == 1 ){ 
            if( matchingqg_first_c < 1 ){ matchingqg_first_c = 1 ; }
        }
        else{
            if( matchingqg_first_c < matching_qg_c[i] ){ matchingqg_first_c = matching_qg_c[i] - 1  ; }
        }
    }
    matchingt_first_c = matchingt_c;
    if( matchingt_c == 5 ){
        if( matchingg_c == 1 || matchingc_c == 1 || matchings_c == 1 || matchingd_c == 1 || matchingu_c == 1 ){ matchingt_c = 6; }
        if( matchingqg_first_c == 1 ){ matchingt_first_c = 6; }
    }

    if( PTj_b > 200 ){
        matchingt_b = t_Collection.matchingAK8(AK8_b);
        matchingW_b = W_Collection.matchingAK8(AK8_b);
        matchingg_b = g_Collection.matchingAK8(AK8_b);
        matchingZ_b = Z_Collection.matchingAK8(AK8_b);
        matchingu_b = u_Collection.matchingAK8(AK8_b);
        matchingd_b = d_Collection.matchingAK8(AK8_b);
        matchings_b = s_Collection.matchingAK8(AK8_b);
        matchingc_b = c_Collection.matchingAK8(AK8_b);
        matchingg_first_b = g_first_Collection.matchingAK8(AK8_b,1);
        matchingu_first_b = u_first_Collection.matchingAK8(AK8_b,1);
        matchingd_first_b = d_first_Collection.matchingAK8(AK8_b,1);
        matchings_first_b = s_first_Collection.matchingAK8(AK8_b,1);
        matchingc_first_b = c_first_Collection.matchingAK8(AK8_b,1);
        matchingqg_first_b = 0;
        vector<int> matching_qg_b = { matchingg_first_b, matchingc_first_b, matchings_first_b, matchingd_first_b, matchingu_first_b };
        for(size_t i ; i<matching_qg_b.size() ; i++){
            if( matching_qg_b[i] == 1 ){ 
                if( matchingqg_first_b < 1 ){ matchingqg_first_b = 1 ; }
            }
            else{
                if( matchingqg_first_b < matching_qg_b[i] ){ matchingqg_first_b = matching_qg_b[i] - 1  ; }
            }
        }
        matchingt_first_b = matchingt_b;
        if( matchingt_b == 5 ){
            if( matchingg_b == 1 || matchingc_b == 1 || matchings_b == 1 || matchingd_b == 1 || matchingu_b == 1 ){ matchingt_b = 6; }
            if( matchingqg_first_b == 1 ){ matchingt_first_b = 6; }
        }
    }


    

    

}

#endif


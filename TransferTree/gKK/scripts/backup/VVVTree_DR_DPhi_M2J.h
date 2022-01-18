#ifndef _VVVTree_DR_DPhi_M2J_
#define _VVVTree_DR_DPhi_M2J_

void EDBR2PKUTree::DR_DPhi_M2J() {
    
    DPhi_j12 = -99;
    DPhi_j13 = -99;
    DPhi_j23 = -99;
    DPhi_j12 = -99;
    DPhi_j13 = -99;
    DPhi_j23 = -99;
    DR_j12 = -99;
    DR_j13 = -99;
    DR_j23 = -99;
    M2J_j12 = -99;
    M2J_j13 = -99;
    M2J_j23 = -99;


    TLorentzVector AK8_v_1, AK8_v_2, AK8_v_3;
    AK8_v_1.SetPtEtaPhiM(PTj,Etaj,Phij,Mj);
    AK8_v_2.SetPtEtaPhiM(PTj_2,Etaj_2,Phij_2,Mj_2);
    AK8_v_3.SetPtEtaPhiM(PTj_3,Etaj_3,Phij_3,Mj_3);

    // Nj8 = 2
    if( jetAK8puppi_ptJEC_2 > 0 && jetAK8puppi_ptJEC_3 < 0){
        // DPhi should be close to Pi
        DPhi_j12 = AK8_v_1.DeltaPhi(AK8_v_2);
        DPhi_j13 = -99;
        DPhi_j23 = -99;
        // DEta
        DEta_j12 = Etaj - Etaj_2;
        DEta_j13 = -99;
        DEta_j23 = -99;
        // DR
        DR_j12 = AK8_v_1.DeltaR(AK8_v_2);
        DR_j13 = -99;
        DR_j23 = -99;
        // M2J will not be filled
        M2J_j12 = -99;
        M2J_j13 = -99;
        M2J_j23 = -99;
    }

    // Nj8 = 3
    if( jetAK8puppi_ptJEC_3 > 0 && jetAK8puppi_ptJEC_4 < 0){
        // DPhi 
        DPhi_j12 = AK8_v_1.DeltaPhi(AK8_v_2);
        DPhi_j13 = AK8_v_1.DeltaPhi(AK8_v_3);
        DPhi_j23 = AK8_v_2.DeltaPhi(AK8_v_3);
        // DEta
        DEta_j12 = Etaj - Etaj_2;
        DEta_j13 = Etaj - Etaj_3;
        DEta_j23 = Etaj_2 - Etaj_3;
        // DR
        DR_j12 = AK8_v_1.DeltaR(AK8_v_2);
        DR_j13 = AK8_v_1.DeltaR(AK8_v_3);
        DR_j23 = AK8_v_2.DeltaR(AK8_v_3);
        // M2J
        M2J_j12 = (AK8_v_1+AK8_v_2).M();
        M2J_j13 = (AK8_v_1+AK8_v_3).M();
        M2J_j23 = (AK8_v_2+AK8_v_3).M();
    }

    // Mass ordered
    DPhi_jmaxmin = -99;
    DPhi_jmaxmid = -99;
    DPhi_jmidmin = -99;
    DEta_jmaxmin = -99;
    DEta_jmaxmid = -99;
    DEta_jmidmin = -99;
    DR_jmaxmin = -99;
    DR_jmaxmid = -99;
    DR_jmidmin = -99;
    M2J_jmaxmin = -99;
    M2J_jmaxmid = -99;
    M2J_jmidmin = -99;


    TLorentzVector AK8_v_max, AK8_v_mid, AK8_v_min;
    AK8_v_max.SetPtEtaPhiM(PTj_max, Etaj_max, Phij_max, Mj_max);
    AK8_v_mid.SetPtEtaPhiM(PTj_mid, Etaj_mid, Phij_mid, Mj_mid);
    AK8_v_min.SetPtEtaPhiM(PTj_min, Etaj_min, Phij_min, Mj_min);

    // Nj8 = 2
    if( jetAK8puppi_ptJEC_2 > 0 && jetAK8puppi_ptJEC_3 < 0){
        // DPhi should be close to Pi
        DPhi_jmaxmin = AK8_v_max.DeltaPhi(AK8_v_min);
        DPhi_jmaxmid = -99;
        DPhi_jmidmin = -99;
        // DEta
        DEta_jmaxmin = Etaj_max - Etaj_min;
        DEta_jmaxmid = -99;
        DEta_jmidmin = -99;
        // DR
        DR_jmaxmin = AK8_v_max.DeltaR(AK8_v_min);
        DR_jmaxmid = -99;
        DR_jmidmin = -99;
        // M2J will not be filled
        M2J_jmaxmin = -99;
        M2J_jmaxmid = -99;
        M2J_jmidmin = -99;
    }

    // Nj8 = 3
    if( jetAK8puppi_ptJEC_3 > 0 && jetAK8puppi_ptJEC_4 < 0){
        // DPhi 
        DPhi_jmaxmid = AK8_v_max.DeltaPhi(AK8_v_mid);
        DPhi_jmaxmin = AK8_v_max.DeltaPhi(AK8_v_min);
        DPhi_jmidmin = AK8_v_mid.DeltaPhi(AK8_v_min);
        // DEta
        DEta_jmaxmid = Etaj_max - Etaj_mid;
        DEta_jmaxmin = Etaj_max - Etaj_min;
        DEta_jmidmin = Etaj_mid - Etaj_min;
        // DR
        DR_jmaxmid = AK8_v_max.DeltaR(AK8_v_mid);
        DR_jmaxmin = AK8_v_max.DeltaR(AK8_v_min);
        DR_jmidmin = AK8_v_mid.DeltaR(AK8_v_min);
        // M2J
        M2J_jmaxmid = (AK8_v_max+AK8_v_mid).M();
        M2J_jmaxmin = (AK8_v_max+AK8_v_min).M();
        M2J_jmidmin = (AK8_v_mid+AK8_v_min).M();
    }








}


#endif
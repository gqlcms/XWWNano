#ifndef _VVVTree_MET_AK8_
#define _VVVTree_MET_AK8_

void EDBR2PKUTree::METAK8_DPhi() {
    
    DPhi_MET_j1 = -99;
    DPhi_MET_j2 = -99;
    DPhi_MET_j3 = -99;

    TLorentzVector AK8_v_1, AK8_v_2, AK8_v_3, MET_v;
    AK8_v_1.SetPtEtaPhiM(PTj,Etaj,Phij,Mj);
    AK8_v_2.SetPtEtaPhiM(PTj_2,Etaj_2,Phij_2,Mj_2);
    AK8_v_3.SetPtEtaPhiM(PTj_3,Etaj_3,Phij_3,Mj_3);
    MET_v.SetPtEtaPhiM(MET_et,MET_eta,MET_phi,0);
    
    DPhi_MET_j1 = MET_v.DeltaPhi(AK8_v_1);
    DPhi_MET_j2 = MET_v.DeltaPhi(AK8_v_2);
    DPhi_MET_j3 = MET_v.DeltaPhi(AK8_v_3);
}

void EDBR2PKUTree::METRecovery() {
    Mc_j1 = -99;
    Mc_j2 = -99;
    Mc_j3 = -99;

    Mc2_j1 = -99;
    Mc2_j2 = -99;


    TLorentzVector AK8_v_1, AK8_v_2, AK8_v_3, MET_v_1, MET_v_2, MET_v_3;
    AK8_v_1.SetPtEtaPhiM(PTj,Etaj,Phij,Mj);
    AK8_v_2.SetPtEtaPhiM(PTj_2,Etaj_2,Phij_2,Mj_2);
    AK8_v_3.SetPtEtaPhiM(PTj_3,Etaj_3,Phij_3,Mj_3);
    MET_v_1.SetPtEtaPhiM(MET_et,Etaj,MET_phi,0);
    MET_v_2.SetPtEtaPhiM(MET_et,Etaj_2,MET_phi,0);
    MET_v_3.SetPtEtaPhiM(MET_et,Etaj_3,MET_phi,0);
    
    Mc_j1 = (AK8_v_1+MET_v_1).M();
    Mc_j2 = (AK8_v_2+MET_v_2).M();
    Mc_j3 = (AK8_v_3+MET_v_3).M();

    if(Nj8 ==2){
        if(MET_et/sqrt(HT)>3.0){
            if(DPhi_MET_j1 < Pi/4 && DPhi_MET_j1 < DPhi_MET_j2){
                Mc2_j1 = (AK8_v_1+MET_v_1).M();
            }
            else{
                Mc2_j1 = Mj;
            }

            if(DPhi_MET_j2 < Pi/4 && DPhi_MET_j2 < DPhi_MET_j1){
                Mc2_j2 = (AK8_v_2+MET_v_2).M();
            }
            else{
                Mc2_j2 = Mj_2;
            }
        }
        else{
            Mc2_j1 = Mj;
            Mc2_j2 = Mj_2;
        }
    }
    
}

void EDBR2PKUTree::MET_AK8_MT() {

    MT1 = -99;
    MT2 = -99;
    MT3 = -99;
    MTdPhi_1 = -99;
    MTdPhi_2 = -99;



    
    double ET_1 = sqrt(Mj*Mj+PTj*PTj);
    double ET_2 = sqrt(Mj_2*Mj_2+PTj_2*PTj_2);
    double ET_3 = sqrt(Mj_3*Mj_3+PTj_3*PTj_3);

    TLorentzVector AK8_v_1, AK8_v_2, AK8_v_3, MET_v;
    AK8_v_1.SetPtEtaPhiM(PTj,Etaj,Phij,Mj);
    AK8_v_2.SetPtEtaPhiM(PTj_2,Etaj_2,Phij_2,Mj_2);
    AK8_v_3.SetPtEtaPhiM(PTj_3,Etaj_3,Phij_3,Mj_3);
    MET_v.SetPtEtaPhiM(MET_et,0,MET_phi,0);

    
    double Px1 = AK8_v_1.Px();
    double Py1 = AK8_v_1.Py();
    double Px2 = AK8_v_2.Px();
    double Py2 = AK8_v_2.Py();
    double Px3 = AK8_v_3.Px();
    double Py3 = AK8_v_3.Py();
    double MET_x = MET_v.Px();
    double MET_y = MET_v.Py();

    MT1 = sqrt(Mj*Mj+2*(ET_1*MET_et-(Px1*MET_x+Py1*MET_y)));
    MT2 = sqrt(Mj_2*Mj_2+2*(ET_2*MET_et-(Px2*MET_x+Py2*MET_y)));
    MT3 = sqrt(Mj_3*Mj_3+2*(ET_3*MET_et-(Px3*MET_x+Py3*MET_y)));

    if(Nj8 ==2){
        if(DPhi_MET_j1 < Pi/4 && DPhi_MET_j1 < DPhi_MET_j2){
            MTdPhi_1 = sqrt(Mj*Mj+2*(ET_1*MET_et-(Px1*MET_x+Py1*MET_y)));
        }
        else{
            MTdPhi_1 = Mj;
        }

        if(DPhi_MET_j2 < Pi/4 && DPhi_MET_j2 < DPhi_MET_j1){
            MTdPhi_2 = sqrt(Mj_2*Mj_2+2*(ET_2*MET_et-(Px2*MET_x+Py2*MET_y)));
        }
        else{
            MTdPhi_2 = Mj_2;
        }
    }





}
#endif
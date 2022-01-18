#ifndef _VVVTree_Added_Variables_
#define _VVVTree_Added_Variables_

//  ===========================  Added Pt ranked_Variables =========================
void EDBR2PKUTree::Added_Pt_ranked_Variables() {

    TLorentzVector AK8_1, AK8_2, AK8_3;

    AK8_1.SetPtEtaPhiM(jetAK8puppi_ptJEC,jetAK8puppi_eta,jetAK8puppi_phi,Mj);
    AK8_2.SetPtEtaPhiM(jetAK8puppi_ptJEC_2,jetAK8puppi_eta_2,jetAK8puppi_phi_2,Mj_2);
    AK8_3.SetPtEtaPhiM(jetAK8puppi_ptJEC_3,jetAK8puppi_eta_3,jetAK8puppi_phi_3,Mj_3);    

    // DR
    DR_j1j2 = -99;
    DR_j1j3 = -99;
    DR_j2j3 = -99;
    
    // DPhi
    DPhi_j1j2 = -99;
    DPhi_j1j3 = -99;
    DPhi_j2j3 = -99;
    
    // P4 JJ
    PT_j1j2 = -99; Eta_j1j2 = -99; Phi_j1j2 = -99;  Mass_j1j2 = -99; 
    PT_j1j3 = -99; Eta_j1j3 = -99; Phi_j1j3 = -99;  Mass_j1j3 = -99; 
    PT_j2j3 = -99; Eta_j2j3 = -99; Phi_j2j3 = -99;  Mass_j2j3 = -99; 

    if (Nj8 ==2){
        DR_j1j2 = AK8_1.DeltaR(AK8_2);
        DPhi_j1j2 = TMath::Min( double(fabs(jetAK8puppi_phi - jetAK8puppi_phi_2)) , double(2*Pi - fabs(jetAK8puppi_phi - jetAK8puppi_phi_2)) );
        PT_j1j2 = (AK8_1+AK8_2).Pt(); Eta_j1j2 = (AK8_1+AK8_2).Eta(); Phi_j1j2 = (AK8_1+AK8_2).Phi(); Mass_j1j2 = (AK8_1+AK8_2).M(); 

    }

    if (jetAK8puppi_ptJEC_3 > 0){
        DR_j1j2 = AK8_1.DeltaR(AK8_2);
        DR_j1j3 = AK8_1.DeltaR(AK8_3);
        DR_j2j3 = AK8_2.DeltaR(AK8_3);
        DPhi_j1j2 = TMath::Min( double(fabs(jetAK8puppi_phi - jetAK8puppi_phi_2)) , double(2*Pi - fabs(jetAK8puppi_phi - jetAK8puppi_phi_2)) );
        DPhi_j1j3 = TMath::Min( double(fabs(jetAK8puppi_phi - jetAK8puppi_phi_3)) , double(2*Pi - fabs(jetAK8puppi_phi - jetAK8puppi_phi_3)) );
        DPhi_j2j3 = TMath::Min( double(fabs(jetAK8puppi_phi_2 - jetAK8puppi_phi_3)) , double(2*Pi - fabs(jetAK8puppi_phi_2 - jetAK8puppi_phi_3)) );
        PT_j1j2 = (AK8_1+AK8_2).Pt(); Eta_j1j2 = (AK8_1+AK8_2).Eta(); Phi_j1j2 = (AK8_1+AK8_2).Phi(); Mass_j1j2 = (AK8_1+AK8_2).M(); 
        PT_j1j3 = (AK8_1+AK8_3).Pt(); Eta_j1j3 = (AK8_1+AK8_3).Eta(); Phi_j1j3 = (AK8_1+AK8_3).Phi(); Mass_j1j3 = (AK8_1+AK8_3).M(); 
        PT_j2j3 = (AK8_2+AK8_3).Pt(); Eta_j2j3 = (AK8_2+AK8_3).Eta(); Phi_j2j3 = (AK8_2+AK8_3).Phi(); Mass_j2j3 = (AK8_2+AK8_3).M(); 
    }


    // replace 
    // (\s*)Mass(.*) = (.*).M\(\);
    // PT$2 = $3.Pt(); Eta$2 = $3.Eta(); Phi$2 = $3.Phi(); Mass$2 = $3.M(); 

    // JJ vs J
    TLorentzVector AK8_jj12, AK8_jj13, AK8_jj23;
    AK8_jj12.SetPtEtaPhiM(PT_j1j2,Eta_j1j2,Phi_j1j2,Mass_j1j2);
    AK8_jj13.SetPtEtaPhiM(PT_j1j3,Eta_j1j3,Phi_j1j3,Mass_j1j3);
    AK8_jj23.SetPtEtaPhiM(PT_j2j3,Eta_j2j3,Phi_j2j3,Mass_j2j3);

    if (jetAK8puppi_ptJEC_3 > 0){
        DR_jj12_j3 = AK8_jj12.DeltaR(AK8_3);
        DR_jj13_j2 = AK8_jj13.DeltaR(AK8_2);
        DR_jj23_j1 = AK8_jj23.DeltaR(AK8_1);

        DPhi_jj12_j3 = TMath::Min( double(fabs(Phi_j1j2 - jetAK8puppi_phi_3)) , double(2*Pi - fabs(Phi_j1j2 - jetAK8puppi_phi_3)) );
        DPhi_jj13_j2 = TMath::Min( double(fabs(Phi_j1j3 - jetAK8puppi_phi_2)) , double(2*Pi - fabs(Phi_j1j3 - jetAK8puppi_phi_2)) );
        DPhi_jj23_j1 = TMath::Min( double(fabs(Phi_j2j3 - jetAK8puppi_phi)) , double(2*Pi - fabs(Phi_j2j3 - jetAK8puppi_phi)) );
    }

}
//  ===========================  Added Pt ranked Variables =========================

//  ===========================  Added Mass ranked_Variables =========================
void EDBR2PKUTree::Added_Mass_ranked_Variables() {
    TLorentzVector AK8_Min_Mass, AK8_Mid_Mass, AK8_Max_Mass;
    AK8_Min_Mass.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
    AK8_Mid_Mass.SetPtEtaPhiM(PTj_mid,Etaj_mid,Phij_mid,Mj_mid);
    AK8_Max_Mass.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);

    DR_j1j2_MassOrdered = -99;
    DR_j1j3_MassOrdered = -99;
    DR_j2j3_MassOrdered = -99;

    if (Nj8 ==2){
        DR_j1j2_MassOrdered = AK8_Max_Mass.DeltaR(AK8_Min_Mass);
    }

    if (jetAK8puppi_ptJEC_3 > 0){
        DR_j1j2_MassOrdered = AK8_Max_Mass.DeltaR(AK8_Mid_Mass);
        DR_j1j3_MassOrdered = AK8_Max_Mass.DeltaR(AK8_Min_Mass);
        DR_j2j3_MassOrdered = AK8_Mid_Mass.DeltaR(AK8_Min_Mass);
    }

    // DPhi
    DPhi_j1j2_Massordered = -99;
    DPhi_j1j3_Massordered = -99;
    DPhi_j2j3_Massordered = -99;

    if (Nj8 ==2){
        DPhi_j1j2_Massordered = TMath::Min( double(fabs(Phij_max - Phij_min)) , double(2*Pi - fabs(Phij_max - Phij_min)) );
    }

    if (jetAK8puppi_ptJEC_3 > 0){
        DPhi_j1j2_Massordered = TMath::Min( double(fabs(Phij_max - Phij_mid)) , double(2*Pi - fabs(Phij_max - Phij_mid)) );
        DPhi_j1j3_Massordered = TMath::Min( double(fabs(Phij_max - Phij_min)) , double(2*Pi - fabs(Phij_max - Phij_min)) );
        DPhi_j2j3_Massordered = TMath::Min( double(fabs(Phij_mid - Phij_min)) , double(2*Pi - fabs(Phij_mid - Phij_min)) );
    }

    // Mass
    PT_j1j2_Massordered = -99; Eta_j1j2_Massordered = -99; Phi_j1j2_Massordered = -99; Mass_j1j2_Massordered = -99; 
    PT_j1j3_Massordered = -99; Eta_j1j3_Massordered = -99; Phi_j1j3_Massordered = -99; Mass_j1j3_Massordered = -99; 
    PT_j2j3_Massordered = -99; Eta_j2j3_Massordered = -99; Phi_j2j3_Massordered = -99; Mass_j2j3_Massordered = -99; 

    if (Nj8 ==2){
        PT_j1j2_Massordered = (AK8_Max_Mass+AK8_Min_Mass).Pt(); Eta_j1j2_Massordered = (AK8_Max_Mass+AK8_Min_Mass).Eta(); Phi_j1j2_Massordered = (AK8_Max_Mass+AK8_Min_Mass).Phi(); Mass_j1j2_Massordered = (AK8_Max_Mass+AK8_Min_Mass).M(); 
    }

    if (jetAK8puppi_ptJEC_3 > 0){
        PT_j1j2_Massordered = (AK8_Max_Mass+AK8_Mid_Mass).Pt(); Eta_j1j2_Massordered = (AK8_Max_Mass+AK8_Mid_Mass).Eta(); Phi_j1j2_Massordered = (AK8_Max_Mass+AK8_Mid_Mass).Phi(); Mass_j1j2_Massordered = (AK8_Max_Mass+AK8_Mid_Mass).M(); 
        PT_j1j3_Massordered = (AK8_Max_Mass+AK8_Min_Mass).Pt(); Eta_j1j3_Massordered = (AK8_Max_Mass+AK8_Min_Mass).Eta(); Phi_j1j3_Massordered = (AK8_Max_Mass+AK8_Min_Mass).Phi(); Mass_j1j3_Massordered = (AK8_Max_Mass+AK8_Min_Mass).M(); 
        PT_j2j3_Massordered = (AK8_Mid_Mass+AK8_Min_Mass).Pt(); Eta_j2j3_Massordered = (AK8_Mid_Mass+AK8_Min_Mass).Eta(); Phi_j2j3_Massordered = (AK8_Mid_Mass+AK8_Min_Mass).Phi(); Mass_j2j3_Massordered = (AK8_Mid_Mass+AK8_Min_Mass).M(); 
    }

    TLorentzVector AK8_jj12, AK8_jj13, AK8_jj23;
    AK8_jj12.SetPtEtaPhiM(PT_j1j2_Massordered,Eta_j1j2_Massordered,Phi_j1j2_Massordered,Mass_j1j2_Massordered);
    AK8_jj13.SetPtEtaPhiM(PT_j1j3_Massordered,Eta_j1j3_Massordered,Phi_j1j3_Massordered,Mass_j1j3_Massordered);
    AK8_jj23.SetPtEtaPhiM(PT_j2j3_Massordered,Eta_j2j3_Massordered,Phi_j2j3_Massordered,Mass_j2j3_Massordered);

    if (jetAK8puppi_ptJEC_3 > 0){
        DR_jj12_j3_Massordered = AK8_jj12.DeltaR(AK8_Min_Mass);
        DR_jj13_j2_Massordered = AK8_jj13.DeltaR(AK8_Mid_Mass);
        DR_jj23_j1_Massordered = AK8_jj23.DeltaR(AK8_Max_Mass);

        DPhi_jj12_j3_Massordered = TMath::Min( double(fabs(Phi_j1j2_Massordered - Phij_min)) , double(2*Pi - fabs(Phi_j1j2_Massordered - Phij_min)) );
        DPhi_jj13_j2_Massordered = TMath::Min( double(fabs(Phi_j1j3_Massordered - Phij_mid)) , double(2*Pi - fabs(Phi_j1j3_Massordered - Phij_mid)) );
        DPhi_jj23_j1_Massordered = TMath::Min( double(fabs(Phi_j2j3_Massordered - Phij_max)) , double(2*Pi - fabs(Phi_j2j3_Massordered - Phij_max)) );
    }

    // replace 
    
    // (\s*)Mass(.*) = -99;
    // PT$2 = -99; Eta$2 = -99; Phi$2 = -99; Mass$2 = -99; 

    // (\s*)Mass(.*) = (.*).M\(\);
    // PT$2 = $3.Pt(); Eta$2 = $3.Eta(); Phi$2 = $3.Phi(); Mass$2 = $3.M(); 
}
//  ===========================  Added Mass ranked_Variables =========================

void EDBR2PKUTree::Added_Mass_ranked_score() {

        jetAK8puppi_dnn_probTbcq_max = -99;
    jetAK8puppi_dnn_probTbcq_mid = -99;
    jetAK8puppi_dnn_probTbcq_min = -99;
    jetAK8puppi_dnn_probTbqq_max = -99;
    jetAK8puppi_dnn_probTbqq_mid = -99;
    jetAK8puppi_dnn_probTbqq_min = -99;
    jetAK8puppi_dnn_probTbc_max = -99;
    jetAK8puppi_dnn_probTbc_mid = -99;
    jetAK8puppi_dnn_probTbc_min = -99;
    jetAK8puppi_dnn_probTbq_max = -99;
    jetAK8puppi_dnn_probTbq_mid = -99;
    jetAK8puppi_dnn_probTbq_min = -99;
    jetAK8puppi_dnn_probWcq_max = -99;
    jetAK8puppi_dnn_probWcq_mid = -99;
    jetAK8puppi_dnn_probWcq_min = -99;
    jetAK8puppi_dnn_probWqq_max = -99;
    jetAK8puppi_dnn_probWqq_mid = -99;
    jetAK8puppi_dnn_probWqq_min = -99;
    jetAK8puppi_dnn_probZbb_max = -99;
    jetAK8puppi_dnn_probZbb_mid = -99;
    jetAK8puppi_dnn_probZbb_min = -99;
    jetAK8puppi_dnn_probZcc_max = -99;
    jetAK8puppi_dnn_probZcc_mid = -99;
    jetAK8puppi_dnn_probZcc_min = -99;
    jetAK8puppi_dnn_probZqq_max = -99;
    jetAK8puppi_dnn_probZqq_mid = -99;
    jetAK8puppi_dnn_probZqq_min = -99;
    jetAK8puppi_dnn_probHbb_max = -99;
    jetAK8puppi_dnn_probHbb_mid = -99;
    jetAK8puppi_dnn_probHbb_min = -99;
    jetAK8puppi_dnn_probHcc_max = -99;
    jetAK8puppi_dnn_probHcc_mid = -99;
    jetAK8puppi_dnn_probHcc_min = -99;
    jetAK8puppi_dnn_probHqqqq_max = -99;
    jetAK8puppi_dnn_probHqqqq_mid = -99;
    jetAK8puppi_dnn_probHqqqq_min = -99;
    jetAK8puppi_dnn_probQCDbb_max = -99;
    jetAK8puppi_dnn_probQCDbb_mid = -99;
    jetAK8puppi_dnn_probQCDbb_min = -99;
    jetAK8puppi_dnn_probQCDcc_max = -99;
    jetAK8puppi_dnn_probQCDcc_mid = -99;
    jetAK8puppi_dnn_probQCDcc_min = -99;
    jetAK8puppi_dnn_probQCDb_max = -99;
    jetAK8puppi_dnn_probQCDb_mid = -99;
    jetAK8puppi_dnn_probQCDb_min = -99;
    jetAK8puppi_dnn_probQCDc_max = -99;
    jetAK8puppi_dnn_probQCDc_mid = -99;
    jetAK8puppi_dnn_probQCDc_min = -99;
    jetAK8puppi_dnn_probQCDothers_max = -99;
    jetAK8puppi_dnn_probQCDothers_mid = -99;
    jetAK8puppi_dnn_probQCDothers_min = -99;
    jetAK8puppi_dnnDecorr_probTbcq_max = -99;
    jetAK8puppi_dnnDecorr_probTbcq_mid = -99;
    jetAK8puppi_dnnDecorr_probTbcq_min = -99;
    jetAK8puppi_dnnDecorr_probTbqq_max = -99;
    jetAK8puppi_dnnDecorr_probTbqq_mid = -99;
    jetAK8puppi_dnnDecorr_probTbqq_min = -99;
    jetAK8puppi_dnnDecorr_probTbc_max = -99;
    jetAK8puppi_dnnDecorr_probTbc_mid = -99;
    jetAK8puppi_dnnDecorr_probTbc_min = -99;
    jetAK8puppi_dnnDecorr_probTbq_max = -99;
    jetAK8puppi_dnnDecorr_probTbq_mid = -99;
    jetAK8puppi_dnnDecorr_probTbq_min = -99;
    jetAK8puppi_dnnDecorr_probWcq_max = -99;
    jetAK8puppi_dnnDecorr_probWcq_mid = -99;
    jetAK8puppi_dnnDecorr_probWcq_min = -99;
    jetAK8puppi_dnnDecorr_probWqq_max = -99;
    jetAK8puppi_dnnDecorr_probWqq_mid = -99;
    jetAK8puppi_dnnDecorr_probWqq_min = -99;
    jetAK8puppi_dnnDecorr_probZbb_max = -99;
    jetAK8puppi_dnnDecorr_probZbb_mid = -99;
    jetAK8puppi_dnnDecorr_probZbb_min = -99;
    jetAK8puppi_dnnDecorr_probZcc_max = -99;
    jetAK8puppi_dnnDecorr_probZcc_mid = -99;
    jetAK8puppi_dnnDecorr_probZcc_min = -99;
    jetAK8puppi_dnnDecorr_probZqq_max = -99;
    jetAK8puppi_dnnDecorr_probZqq_mid = -99;
    jetAK8puppi_dnnDecorr_probZqq_min = -99;
    jetAK8puppi_dnnDecorr_probHbb_max = -99;
    jetAK8puppi_dnnDecorr_probHbb_mid = -99;
    jetAK8puppi_dnnDecorr_probHbb_min = -99;
    jetAK8puppi_dnnDecorr_probHcc_max = -99;
    jetAK8puppi_dnnDecorr_probHcc_mid = -99;
    jetAK8puppi_dnnDecorr_probHcc_min = -99;
    jetAK8puppi_dnnDecorr_probHqqqq_max = -99;
    jetAK8puppi_dnnDecorr_probHqqqq_mid = -99;
    jetAK8puppi_dnnDecorr_probHqqqq_min = -99;
    jetAK8puppi_dnnDecorr_probQCDbb_max = -99;
    jetAK8puppi_dnnDecorr_probQCDbb_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDbb_min = -99;
    jetAK8puppi_dnnDecorr_probQCDcc_max = -99;
    jetAK8puppi_dnnDecorr_probQCDcc_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDcc_min = -99;
    jetAK8puppi_dnnDecorr_probQCDb_max = -99;
    jetAK8puppi_dnnDecorr_probQCDb_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDb_min = -99;
    jetAK8puppi_dnnDecorr_probQCDc_max = -99;
    jetAK8puppi_dnnDecorr_probQCDc_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDc_min = -99;
    jetAK8puppi_dnnDecorr_probQCDothers_max = -99;
    jetAK8puppi_dnnDecorr_probQCDothers_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDothers_min = -99;

    // Nj8 == 2
    if( jetAK8puppi_ptJEC_2 > 0 && jetAK8puppi_ptJEC_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_Mass_sort[2] = { Mj , Mj_2 };
        TMath::Sort(2, jetAK8puppi_Mass_sort, indexTag, 1);

        Double_t jetAK8puppi_dnn_probTbcq_sort[2] = { jetAK8puppi_dnn_probTbcq , jetAK8puppi_dnn_probTbcq_2 };
        Double_t jetAK8puppi_dnn_probTbqq_sort[2] = { jetAK8puppi_dnn_probTbqq , jetAK8puppi_dnn_probTbqq_2 };
        Double_t jetAK8puppi_dnn_probTbc_sort[2] = { jetAK8puppi_dnn_probTbc , jetAK8puppi_dnn_probTbc_2 };
        Double_t jetAK8puppi_dnn_probTbq_sort[2] = { jetAK8puppi_dnn_probTbq , jetAK8puppi_dnn_probTbq_2 };
        Double_t jetAK8puppi_dnn_probWcq_sort[2] = { jetAK8puppi_dnn_probWcq , jetAK8puppi_dnn_probWcq_2 };
        Double_t jetAK8puppi_dnn_probWqq_sort[2] = { jetAK8puppi_dnn_probWqq , jetAK8puppi_dnn_probWqq_2 };
        Double_t jetAK8puppi_dnn_probZbb_sort[2] = { jetAK8puppi_dnn_probZbb , jetAK8puppi_dnn_probZbb_2 };
        Double_t jetAK8puppi_dnn_probZcc_sort[2] = { jetAK8puppi_dnn_probZcc , jetAK8puppi_dnn_probZcc_2 };
        Double_t jetAK8puppi_dnn_probZqq_sort[2] = { jetAK8puppi_dnn_probZqq , jetAK8puppi_dnn_probZqq_2 };
        Double_t jetAK8puppi_dnn_probHbb_sort[2] = { jetAK8puppi_dnn_probHbb , jetAK8puppi_dnn_probHbb_2 };
        Double_t jetAK8puppi_dnn_probHcc_sort[2] = { jetAK8puppi_dnn_probHcc , jetAK8puppi_dnn_probHcc_2 };
        Double_t jetAK8puppi_dnn_probHqqqq_sort[2] = { jetAK8puppi_dnn_probHqqqq , jetAK8puppi_dnn_probHqqqq_2 };
        Double_t jetAK8puppi_dnn_probQCDbb_sort[2] = { jetAK8puppi_dnn_probQCDbb , jetAK8puppi_dnn_probQCDbb_2 };
        Double_t jetAK8puppi_dnn_probQCDcc_sort[2] = { jetAK8puppi_dnn_probQCDcc , jetAK8puppi_dnn_probQCDcc_2 };
        Double_t jetAK8puppi_dnn_probQCDb_sort[2] = { jetAK8puppi_dnn_probQCDb , jetAK8puppi_dnn_probQCDb_2 };
        Double_t jetAK8puppi_dnn_probQCDc_sort[2] = { jetAK8puppi_dnn_probQCDc , jetAK8puppi_dnn_probQCDc_2 };
        Double_t jetAK8puppi_dnn_probQCDothers_sort[2] = { jetAK8puppi_dnn_probQCDothers , jetAK8puppi_dnn_probQCDothers_2 };
        Double_t jetAK8puppi_dnnDecorr_probTbcq_sort[2] = { jetAK8puppi_dnnDecorr_probTbcq , jetAK8puppi_dnnDecorr_probTbcq_2 };
        Double_t jetAK8puppi_dnnDecorr_probTbqq_sort[2] = { jetAK8puppi_dnnDecorr_probTbqq , jetAK8puppi_dnnDecorr_probTbqq_2 };
        Double_t jetAK8puppi_dnnDecorr_probTbc_sort[2] = { jetAK8puppi_dnnDecorr_probTbc , jetAK8puppi_dnnDecorr_probTbc_2 };
        Double_t jetAK8puppi_dnnDecorr_probTbq_sort[2] = { jetAK8puppi_dnnDecorr_probTbq , jetAK8puppi_dnnDecorr_probTbq_2 };
        Double_t jetAK8puppi_dnnDecorr_probWcq_sort[2] = { jetAK8puppi_dnnDecorr_probWcq , jetAK8puppi_dnnDecorr_probWcq_2 };
        Double_t jetAK8puppi_dnnDecorr_probWqq_sort[2] = { jetAK8puppi_dnnDecorr_probWqq , jetAK8puppi_dnnDecorr_probWqq_2 };
        Double_t jetAK8puppi_dnnDecorr_probZbb_sort[2] = { jetAK8puppi_dnnDecorr_probZbb , jetAK8puppi_dnnDecorr_probZbb_2 };
        Double_t jetAK8puppi_dnnDecorr_probZcc_sort[2] = { jetAK8puppi_dnnDecorr_probZcc , jetAK8puppi_dnnDecorr_probZcc_2 };
        Double_t jetAK8puppi_dnnDecorr_probZqq_sort[2] = { jetAK8puppi_dnnDecorr_probZqq , jetAK8puppi_dnnDecorr_probZqq_2 };
        Double_t jetAK8puppi_dnnDecorr_probHbb_sort[2] = { jetAK8puppi_dnnDecorr_probHbb , jetAK8puppi_dnnDecorr_probHbb_2 };
        Double_t jetAK8puppi_dnnDecorr_probHcc_sort[2] = { jetAK8puppi_dnnDecorr_probHcc , jetAK8puppi_dnnDecorr_probHcc_2 };
        Double_t jetAK8puppi_dnnDecorr_probHqqqq_sort[2] = { jetAK8puppi_dnnDecorr_probHqqqq , jetAK8puppi_dnnDecorr_probHqqqq_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDbb_sort[2] = { jetAK8puppi_dnnDecorr_probQCDbb , jetAK8puppi_dnnDecorr_probQCDbb_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDcc_sort[2] = { jetAK8puppi_dnnDecorr_probQCDcc , jetAK8puppi_dnnDecorr_probQCDcc_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDb_sort[2] = { jetAK8puppi_dnnDecorr_probQCDb , jetAK8puppi_dnnDecorr_probQCDb_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDc_sort[2] = { jetAK8puppi_dnnDecorr_probQCDc , jetAK8puppi_dnnDecorr_probQCDc_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDothers_sort[2] = { jetAK8puppi_dnnDecorr_probQCDothers , jetAK8puppi_dnnDecorr_probQCDothers_2 };

        jetAK8puppi_dnn_probTbcq_max = jetAK8puppi_dnn_probTbcq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbcq_min = jetAK8puppi_dnn_probTbcq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbqq_max = jetAK8puppi_dnn_probTbqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbqq_min = jetAK8puppi_dnn_probTbqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbc_max = jetAK8puppi_dnn_probTbc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbc_min = jetAK8puppi_dnn_probTbc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbq_max = jetAK8puppi_dnn_probTbq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbq_min = jetAK8puppi_dnn_probTbq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probWcq_max = jetAK8puppi_dnn_probWcq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probWcq_min = jetAK8puppi_dnn_probWcq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probWqq_max = jetAK8puppi_dnn_probWqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probWqq_min = jetAK8puppi_dnn_probWqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZbb_max = jetAK8puppi_dnn_probZbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZbb_min = jetAK8puppi_dnn_probZbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZcc_max = jetAK8puppi_dnn_probZcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZcc_min = jetAK8puppi_dnn_probZcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZqq_max = jetAK8puppi_dnn_probZqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZqq_min = jetAK8puppi_dnn_probZqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHbb_max = jetAK8puppi_dnn_probHbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHbb_min = jetAK8puppi_dnn_probHbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHcc_max = jetAK8puppi_dnn_probHcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHcc_min = jetAK8puppi_dnn_probHcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHqqqq_max = jetAK8puppi_dnn_probHqqqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHqqqq_min = jetAK8puppi_dnn_probHqqqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDbb_max = jetAK8puppi_dnn_probQCDbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDbb_min = jetAK8puppi_dnn_probQCDbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDcc_max = jetAK8puppi_dnn_probQCDcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDcc_min = jetAK8puppi_dnn_probQCDcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDb_max = jetAK8puppi_dnn_probQCDb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDb_min = jetAK8puppi_dnn_probQCDb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDc_max = jetAK8puppi_dnn_probQCDc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDc_min = jetAK8puppi_dnn_probQCDc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDothers_max = jetAK8puppi_dnn_probQCDothers_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDothers_min = jetAK8puppi_dnn_probQCDothers_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbcq_max = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbcq_min = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbqq_max = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbqq_min = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbc_max = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbc_min = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbq_max = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbq_min = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probWcq_max = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probWcq_min = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probWqq_max = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probWqq_min = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZbb_max = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZbb_min = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZcc_max = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZcc_min = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZqq_max = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZqq_min = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHbb_max = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHbb_min = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHcc_max = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHcc_min = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_max = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_min = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_max = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_min = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_max = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_min = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDb_max = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDb_min = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDc_max = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDc_min = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_max = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_min = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[1]] ;


        
    }

    if( jetAK8puppi_ptJEC_3 > 0 && jetAK8puppi_ptJEC_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_Mass_sort[3] = { Mj , Mj_2, Mj_3 };
        TMath::Sort(3, jetAK8puppi_Mass_sort, indexTag, 1);
        Double_t jetAK8puppi_dnn_probTbcq_sort[3] = { jetAK8puppi_dnn_probTbcq , jetAK8puppi_dnn_probTbcq_2 , jetAK8puppi_dnn_probTbcq_3 };
        Double_t jetAK8puppi_dnn_probTbqq_sort[3] = { jetAK8puppi_dnn_probTbqq , jetAK8puppi_dnn_probTbqq_2 , jetAK8puppi_dnn_probTbqq_3 };
        Double_t jetAK8puppi_dnn_probTbc_sort[3] = { jetAK8puppi_dnn_probTbc , jetAK8puppi_dnn_probTbc_2 , jetAK8puppi_dnn_probTbc_3 };
        Double_t jetAK8puppi_dnn_probTbq_sort[3] = { jetAK8puppi_dnn_probTbq , jetAK8puppi_dnn_probTbq_2 , jetAK8puppi_dnn_probTbq_3 };
        Double_t jetAK8puppi_dnn_probWcq_sort[3] = { jetAK8puppi_dnn_probWcq , jetAK8puppi_dnn_probWcq_2 , jetAK8puppi_dnn_probWcq_3 };
        Double_t jetAK8puppi_dnn_probWqq_sort[3] = { jetAK8puppi_dnn_probWqq , jetAK8puppi_dnn_probWqq_2 , jetAK8puppi_dnn_probWqq_3 };
        Double_t jetAK8puppi_dnn_probZbb_sort[3] = { jetAK8puppi_dnn_probZbb , jetAK8puppi_dnn_probZbb_2 , jetAK8puppi_dnn_probZbb_3 };
        Double_t jetAK8puppi_dnn_probZcc_sort[3] = { jetAK8puppi_dnn_probZcc , jetAK8puppi_dnn_probZcc_2 , jetAK8puppi_dnn_probZcc_3 };
        Double_t jetAK8puppi_dnn_probZqq_sort[3] = { jetAK8puppi_dnn_probZqq , jetAK8puppi_dnn_probZqq_2 , jetAK8puppi_dnn_probZqq_3 };
        Double_t jetAK8puppi_dnn_probHbb_sort[3] = { jetAK8puppi_dnn_probHbb , jetAK8puppi_dnn_probHbb_2 , jetAK8puppi_dnn_probHbb_3 };
        Double_t jetAK8puppi_dnn_probHcc_sort[3] = { jetAK8puppi_dnn_probHcc , jetAK8puppi_dnn_probHcc_2 , jetAK8puppi_dnn_probHcc_3 };
        Double_t jetAK8puppi_dnn_probHqqqq_sort[3] = { jetAK8puppi_dnn_probHqqqq , jetAK8puppi_dnn_probHqqqq_2 , jetAK8puppi_dnn_probHqqqq_3 };
        Double_t jetAK8puppi_dnn_probQCDbb_sort[3] = { jetAK8puppi_dnn_probQCDbb , jetAK8puppi_dnn_probQCDbb_2 , jetAK8puppi_dnn_probQCDbb_3 };
        Double_t jetAK8puppi_dnn_probQCDcc_sort[3] = { jetAK8puppi_dnn_probQCDcc , jetAK8puppi_dnn_probQCDcc_2 , jetAK8puppi_dnn_probQCDcc_3 };
        Double_t jetAK8puppi_dnn_probQCDb_sort[3] = { jetAK8puppi_dnn_probQCDb , jetAK8puppi_dnn_probQCDb_2 , jetAK8puppi_dnn_probQCDb_3 };
        Double_t jetAK8puppi_dnn_probQCDc_sort[3] = { jetAK8puppi_dnn_probQCDc , jetAK8puppi_dnn_probQCDc_2 , jetAK8puppi_dnn_probQCDc_3 };
        Double_t jetAK8puppi_dnn_probQCDothers_sort[3] = { jetAK8puppi_dnn_probQCDothers , jetAK8puppi_dnn_probQCDothers_2 , jetAK8puppi_dnn_probQCDothers_3 };
        Double_t jetAK8puppi_dnnDecorr_probTbcq_sort[3] = { jetAK8puppi_dnnDecorr_probTbcq , jetAK8puppi_dnnDecorr_probTbcq_2 , jetAK8puppi_dnnDecorr_probTbcq_3 };
        Double_t jetAK8puppi_dnnDecorr_probTbqq_sort[3] = { jetAK8puppi_dnnDecorr_probTbqq , jetAK8puppi_dnnDecorr_probTbqq_2 , jetAK8puppi_dnnDecorr_probTbqq_3 };
        Double_t jetAK8puppi_dnnDecorr_probTbc_sort[3] = { jetAK8puppi_dnnDecorr_probTbc , jetAK8puppi_dnnDecorr_probTbc_2 , jetAK8puppi_dnnDecorr_probTbc_3 };
        Double_t jetAK8puppi_dnnDecorr_probTbq_sort[3] = { jetAK8puppi_dnnDecorr_probTbq , jetAK8puppi_dnnDecorr_probTbq_2 , jetAK8puppi_dnnDecorr_probTbq_3 };
        Double_t jetAK8puppi_dnnDecorr_probWcq_sort[3] = { jetAK8puppi_dnnDecorr_probWcq , jetAK8puppi_dnnDecorr_probWcq_2 , jetAK8puppi_dnnDecorr_probWcq_3 };
        Double_t jetAK8puppi_dnnDecorr_probWqq_sort[3] = { jetAK8puppi_dnnDecorr_probWqq , jetAK8puppi_dnnDecorr_probWqq_2 , jetAK8puppi_dnnDecorr_probWqq_3 };
        Double_t jetAK8puppi_dnnDecorr_probZbb_sort[3] = { jetAK8puppi_dnnDecorr_probZbb , jetAK8puppi_dnnDecorr_probZbb_2 , jetAK8puppi_dnnDecorr_probZbb_3 };
        Double_t jetAK8puppi_dnnDecorr_probZcc_sort[3] = { jetAK8puppi_dnnDecorr_probZcc , jetAK8puppi_dnnDecorr_probZcc_2 , jetAK8puppi_dnnDecorr_probZcc_3 };
        Double_t jetAK8puppi_dnnDecorr_probZqq_sort[3] = { jetAK8puppi_dnnDecorr_probZqq , jetAK8puppi_dnnDecorr_probZqq_2 , jetAK8puppi_dnnDecorr_probZqq_3 };
        Double_t jetAK8puppi_dnnDecorr_probHbb_sort[3] = { jetAK8puppi_dnnDecorr_probHbb , jetAK8puppi_dnnDecorr_probHbb_2 , jetAK8puppi_dnnDecorr_probHbb_3 };
        Double_t jetAK8puppi_dnnDecorr_probHcc_sort[3] = { jetAK8puppi_dnnDecorr_probHcc , jetAK8puppi_dnnDecorr_probHcc_2 , jetAK8puppi_dnnDecorr_probHcc_3 };
        Double_t jetAK8puppi_dnnDecorr_probHqqqq_sort[3] = { jetAK8puppi_dnnDecorr_probHqqqq , jetAK8puppi_dnnDecorr_probHqqqq_2 , jetAK8puppi_dnnDecorr_probHqqqq_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDbb_sort[3] = { jetAK8puppi_dnnDecorr_probQCDbb , jetAK8puppi_dnnDecorr_probQCDbb_2 , jetAK8puppi_dnnDecorr_probQCDbb_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDcc_sort[3] = { jetAK8puppi_dnnDecorr_probQCDcc , jetAK8puppi_dnnDecorr_probQCDcc_2 , jetAK8puppi_dnnDecorr_probQCDcc_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDb_sort[3] = { jetAK8puppi_dnnDecorr_probQCDb , jetAK8puppi_dnnDecorr_probQCDb_2 , jetAK8puppi_dnnDecorr_probQCDb_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDc_sort[3] = { jetAK8puppi_dnnDecorr_probQCDc , jetAK8puppi_dnnDecorr_probQCDc_2 , jetAK8puppi_dnnDecorr_probQCDc_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDothers_sort[3] = { jetAK8puppi_dnnDecorr_probQCDothers , jetAK8puppi_dnnDecorr_probQCDothers_2 , jetAK8puppi_dnnDecorr_probQCDothers_3 };


        
        jetAK8puppi_dnn_probTbcq_max = jetAK8puppi_dnn_probTbcq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbcq_mid = jetAK8puppi_dnn_probTbcq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbcq_min = jetAK8puppi_dnn_probTbcq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probTbqq_max = jetAK8puppi_dnn_probTbqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbqq_mid = jetAK8puppi_dnn_probTbqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbqq_min = jetAK8puppi_dnn_probTbqq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probTbc_max = jetAK8puppi_dnn_probTbc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbc_mid = jetAK8puppi_dnn_probTbc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbc_min = jetAK8puppi_dnn_probTbc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probTbq_max = jetAK8puppi_dnn_probTbq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbq_mid = jetAK8puppi_dnn_probTbq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbq_min = jetAK8puppi_dnn_probTbq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probWcq_max = jetAK8puppi_dnn_probWcq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probWcq_mid = jetAK8puppi_dnn_probWcq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probWcq_min = jetAK8puppi_dnn_probWcq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probWqq_max = jetAK8puppi_dnn_probWqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probWqq_mid = jetAK8puppi_dnn_probWqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probWqq_min = jetAK8puppi_dnn_probWqq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probZbb_max = jetAK8puppi_dnn_probZbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZbb_mid = jetAK8puppi_dnn_probZbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZbb_min = jetAK8puppi_dnn_probZbb_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probZcc_max = jetAK8puppi_dnn_probZcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZcc_mid = jetAK8puppi_dnn_probZcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZcc_min = jetAK8puppi_dnn_probZcc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probZqq_max = jetAK8puppi_dnn_probZqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZqq_mid = jetAK8puppi_dnn_probZqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZqq_min = jetAK8puppi_dnn_probZqq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probHbb_max = jetAK8puppi_dnn_probHbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHbb_mid = jetAK8puppi_dnn_probHbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHbb_min = jetAK8puppi_dnn_probHbb_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probHcc_max = jetAK8puppi_dnn_probHcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHcc_mid = jetAK8puppi_dnn_probHcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHcc_min = jetAK8puppi_dnn_probHcc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probHqqqq_max = jetAK8puppi_dnn_probHqqqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHqqqq_mid = jetAK8puppi_dnn_probHqqqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHqqqq_min = jetAK8puppi_dnn_probHqqqq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDbb_max = jetAK8puppi_dnn_probQCDbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDbb_mid = jetAK8puppi_dnn_probQCDbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDbb_min = jetAK8puppi_dnn_probQCDbb_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDcc_max = jetAK8puppi_dnn_probQCDcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDcc_mid = jetAK8puppi_dnn_probQCDcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDcc_min = jetAK8puppi_dnn_probQCDcc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDb_max = jetAK8puppi_dnn_probQCDb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDb_mid = jetAK8puppi_dnn_probQCDb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDb_min = jetAK8puppi_dnn_probQCDb_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDc_max = jetAK8puppi_dnn_probQCDc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDc_mid = jetAK8puppi_dnn_probQCDc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDc_min = jetAK8puppi_dnn_probQCDc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDothers_max = jetAK8puppi_dnn_probQCDothers_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDothers_mid = jetAK8puppi_dnn_probQCDothers_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDothers_min = jetAK8puppi_dnn_probQCDothers_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probTbcq_max = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbcq_mid = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbcq_min = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probTbqq_max = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbqq_mid = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbqq_min = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probTbc_max = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbc_mid = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbc_min = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probTbq_max = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbq_mid = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbq_min = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probWcq_max = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probWcq_mid = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probWcq_min = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probWqq_max = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probWqq_mid = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probWqq_min = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probZbb_max = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZbb_mid = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZbb_min = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probZcc_max = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZcc_mid = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZcc_min = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probZqq_max = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZqq_mid = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZqq_min = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probHbb_max = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHbb_mid = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHbb_min = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probHcc_max = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHcc_mid = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHcc_min = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_max = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_mid = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_min = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_max = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_mid = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_min = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_max = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_mid = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_min = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDb_max = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDb_mid = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDb_min = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDc_max = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDc_mid = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDc_min = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_max = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_mid = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_min = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[2]] ;


    }

}

void EDBR2PKUTree::AK4_InsideAK8() {
    TLorentzVector AK4_tmp, gluon_AK8;
    gluon_AK8.SetPtEtaPhiM(Pt_tag3,Eta_tag3,Phi_tag3,Mass_tag3);
    
    // AK4 inside gluon AK8
    std::vector<int> AK4_inside_gluonAK8_index;
    double deltaR = 0.8; // ?? 
    for(Int_t i=0; i<15; i++)  {
        AK4_tmp.SetPtEtaPhiM(ak4jet_pt[i],ak4jet_eta[i],ak4jet_phi[i],ak4jet_e[i]);
        if ( gluon_AK8.DeltaR(AK4_tmp) < deltaR){
            AK4_inside_gluonAK8_index.push_back(i);
        }
    }

    // Max pt AK4
    int Max_pt_index = 0;
    for(int i=0;i<AK4_inside_gluonAK8_index.size();i++)
    {
        if(ak4jet_pt[i] > ak4jet_pt[Max_pt_index]){
            Max_pt_index = i;
        }
    }
    
    // max pt AK4 variables
   
    Maxpt_AK4_deepflavor_probb = -99;
    Maxpt_AK4_deepflavor_probc = -99;
    Maxpt_AK4_deepflavor_probg = -99;
    Maxpt_AK4_deepflavor_problepb = -99;
    Maxpt_AK4_deepflavor_probbb = -99;
    Maxpt_AK4_deepflavor_probuds = -99;

    
    Maxpt_AK4_deepflavor_probb = ak4jet_deepflavor_probb[Max_pt_index];
    Maxpt_AK4_deepflavor_probc = ak4jet_deepflavor_probc[Max_pt_index];
    Maxpt_AK4_deepflavor_probg = ak4jet_deepflavor_probg[Max_pt_index];
    Maxpt_AK4_deepflavor_problepb = ak4jet_deepflavor_problepb[Max_pt_index];
    Maxpt_AK4_deepflavor_probbb = ak4jet_deepflavor_probbb[Max_pt_index];
    Maxpt_AK4_deepflavor_probuds = ak4jet_deepflavor_probuds[Max_pt_index];


// Maxpt_AK4_AK8_pt_ratio
// Maxpt_AK4_AK8_deltaR
// Maxpt_AK4_gluon_pt_ratio
// Maxpt_AK4_gluon_deltaR
// Maxpt_AK4_deepflavor_probb
// Maxpt_AK4_deepflavor_probc
// Maxpt_AK4_deepflavor_probg
// Maxpt_AK4_deepflavor_problepb
// Maxpt_AK4_deepflavor_probbb
// Maxpt_AK4_deepflavor_probuds


}


#endif
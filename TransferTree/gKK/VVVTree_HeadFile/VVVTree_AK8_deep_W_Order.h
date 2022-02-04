#ifndef _VVVTree_AK8_deep_W_Order_
#define _VVVTree_AK8_deep_W_Order_

void EDBR2PKUTree::Deep_W_Ordered() {
    Deep_W_Ordered_Init();
    Deep_W_Ordered_P4();
    Deep_W_Ordered_RawScore();
    Deep_W_Ordered_CombineScore();
}

void EDBR2PKUTree::Deep_W_Ordered_Init() {
    
    jetAK8puppi_dnnDecorrW_max = ( jetAK8puppi_dnnDecorr_probWcq_max + jetAK8puppi_dnnDecorr_probWqq_max ) / ( jetAK8puppi_dnnDecorr_probWcq_max + jetAK8puppi_dnnDecorr_probWqq_max + jetAK8puppi_dnnDecorr_probQCDbb_max + jetAK8puppi_dnnDecorr_probQCDcc_max + jetAK8puppi_dnnDecorr_probQCDb_max + jetAK8puppi_dnnDecorr_probQCDc_max + jetAK8puppi_dnnDecorr_probQCDothers_max ) ;

    jetAK8puppi_dnnDecorrW_mid = ( jetAK8puppi_dnnDecorr_probWcq_mid + jetAK8puppi_dnnDecorr_probWqq_mid ) / ( jetAK8puppi_dnnDecorr_probWcq_mid + jetAK8puppi_dnnDecorr_probWqq_mid + jetAK8puppi_dnnDecorr_probQCDbb_mid + jetAK8puppi_dnnDecorr_probQCDcc_mid + jetAK8puppi_dnnDecorr_probQCDb_mid + jetAK8puppi_dnnDecorr_probQCDc_mid + jetAK8puppi_dnnDecorr_probQCDothers_mid ) ;
    
    jetAK8puppi_dnnDecorrW_min = ( jetAK8puppi_dnnDecorr_probWcq_min + jetAK8puppi_dnnDecorr_probWqq_min ) / ( jetAK8puppi_dnnDecorr_probWcq_min + jetAK8puppi_dnnDecorr_probWqq_min + jetAK8puppi_dnnDecorr_probQCDbb_min + jetAK8puppi_dnnDecorr_probQCDcc_min + jetAK8puppi_dnnDecorr_probQCDb_min + jetAK8puppi_dnnDecorr_probQCDc_min + jetAK8puppi_dnnDecorr_probQCDothers_min ) ;

}

void EDBR2PKUTree::Deep_W_Ordered_P4() {
    Mj_a = -99; Mj_b = -99; Mj_c = -99;
    PTj_a = -99; PTj_b = -99; PTj_c = -99;
    Etaj_a = -99; Etaj_b = -99; Etaj_c = -99;
    Phij_a = -99; Phij_b = -99; Phij_c = -99;

    if( PTj_2 > 0 && PTj_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_deep_W_sort[2] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(2, jetAK8puppi_deep_W_sort, indexTag, 1);

        Double_t Mj_sort[2] = { Mj_max , Mj_min }; 
        Double_t PTj_sort[2] = { PTj_max , PTj_min }; 
        Double_t Etaj_sort[2] = { Etaj_max , Etaj_min }; 
        Double_t Phij_sort[2] = { Phij_max , Phij_min }; 

        Mj_a = Mj_sort[indexTag[0]] ; Mj_c = Mj_sort[indexTag[1]] ;
        PTj_a = PTj_sort[indexTag[0]] ; PTj_c = PTj_sort[indexTag[1]] ;
        Etaj_a = Etaj_sort[indexTag[0]] ; Etaj_c = Etaj_sort[indexTag[1]] ;
        Phij_a = Phij_sort[indexTag[0]] ; Phij_c = Phij_sort[indexTag[1]] ;
    }

    if( PTj_3 > 0 && PTj_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_deep_W_sort[3] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_mid, jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(3, jetAK8puppi_deep_W_sort, indexTag, 1);

        Double_t Mj_sort[3] = { Mj_max , Mj_mid , Mj_min }; 
        Double_t PTj_sort[3] = { PTj_max , PTj_mid , PTj_min }; 
        Double_t Etaj_sort[3] = { Etaj_max , Etaj_mid , Etaj_min }; 
        Double_t Phij_sort[3] = { Phij_max , Phij_mid , Phij_min }; 

        Mj_a = Mj_sort[indexTag[0]] ; Mj_b = Mj_sort[indexTag[1]] ; Mj_c = Mj_sort[indexTag[2]] ;
        PTj_a = PTj_sort[indexTag[0]] ; PTj_b = PTj_sort[indexTag[1]] ; PTj_c = PTj_sort[indexTag[2]] ;
        Etaj_a = Etaj_sort[indexTag[0]] ; Etaj_b = Etaj_sort[indexTag[1]] ; Etaj_c = Etaj_sort[indexTag[2]] ;
        Phij_a = Phij_sort[indexTag[0]] ; Phij_b = Phij_sort[indexTag[1]] ; Phij_c = Phij_sort[indexTag[2]] ;
    }
}



void EDBR2PKUTree::Deep_W_Ordered_CombineScore() {
    dnnTop_a = -99; dnnTop_b = -99; dnnTop_c = -99;
    dnnW_a = -99; dnnW_b = -99; dnnW_c = -99;
    dnnH4q_a = -99; dnnH4q_b = -99; dnnH4q_c = -99;
    dnnZ_a = -99; dnnZ_b = -99; dnnZ_c = -99;
    dnnZbb_a = -99; dnnZbb_b = -99; dnnZbb_c = -99;
    dnnHbb_a = -99; dnnHbb_b = -99; dnnHbb_c = -99;
    dnnDecorrTop_a = -99; dnnDecorrTop_b = -99; dnnDecorrTop_c = -99;
    dnnDecorrW_a = -99; dnnDecorrW_b = -99; dnnDecorrW_c = -99;
    dnnDecorrH4q_a = -99; dnnDecorrH4q_b = -99; dnnDecorrH4q_c = -99;
    dnnDecorrZ_a = -99; dnnDecorrZ_b = -99; dnnDecorrZ_c = -99;
    dnnDecorrZbb_a = -99; dnnDecorrZbb_b = -99; dnnDecorrZbb_c = -99;
    dnnDecorrHbb_a = -99; dnnDecorrHbb_b = -99; dnnDecorrHbb_c = -99;
    dnnDecorrbb_a = -99; dnnDecorrbb_b = -99; dnnDecorrbb_c = -99;
    dnnDecorrcc_a = -99; dnnDecorrcc_b = -99; dnnDecorrcc_c = -99;
    dnnDecorrbbnog_a = -99; dnnDecorrbbnog_b = -99; dnnDecorrbbnog_c = -99;
    dnnDecorrccnog_a = -99; dnnDecorrccnog_b = -99; dnnDecorrccnog_c = -99;
    dnnqcd_a = -99; dnnqcd_b = -99; dnnqcd_c = -99;
    dnntop_a = -99; dnntop_b = -99; dnntop_c = -99;
    dnnw_a = -99; dnnw_b = -99; dnnw_c = -99;
    dnnz_a = -99; dnnz_b = -99; dnnz_c = -99;
    dnnzbb_a = -99; dnnzbb_b = -99; dnnzbb_c = -99;
    dnnhbb_a = -99; dnnhbb_b = -99; dnnhbb_c = -99;
    dnnh4q_a = -99; dnnh4q_b = -99; dnnh4q_c = -99;
    dnnDecorrqcd_a = -99; dnnDecorrqcd_b = -99; dnnDecorrqcd_c = -99;
    dnnDecorrtop_a = -99; dnnDecorrtop_b = -99; dnnDecorrtop_c = -99;
    dnnDecorrw_a = -99; dnnDecorrw_b = -99; dnnDecorrw_c = -99;
    dnnDecorrz_a = -99; dnnDecorrz_b = -99; dnnDecorrz_c = -99;
    dnnDecorrzbb_a = -99; dnnDecorrzbb_b = -99; dnnDecorrzbb_c = -99;
    dnnDecorrhbb_a = -99; dnnDecorrhbb_b = -99; dnnDecorrhbb_c = -99;
    dnnDecorrh4q_a = -99; dnnDecorrh4q_b = -99; dnnDecorrh4q_c = -99;

    if( PTj_2 > 0 && PTj_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_deep_W_sort[2] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(2, jetAK8puppi_deep_W_sort, indexTag, 1);
        
        Double_t dnnTop_sort[2] = { jetAK8puppi_dnnTop_max , jetAK8puppi_dnnTop_min };
        Double_t dnnW_sort[2] = { jetAK8puppi_dnnW_max , jetAK8puppi_dnnW_min };
        Double_t dnnH4q_sort[2] = { jetAK8puppi_dnnH4q_max , jetAK8puppi_dnnH4q_min };
        Double_t dnnZ_sort[2] = { jetAK8puppi_dnnZ_max , jetAK8puppi_dnnZ_min };
        Double_t dnnZbb_sort[2] = { jetAK8puppi_dnnZbb_max , jetAK8puppi_dnnZbb_min };
        Double_t dnnHbb_sort[2] = { jetAK8puppi_dnnHbb_max , jetAK8puppi_dnnHbb_min };
        Double_t dnnDecorrTop_sort[2] = { jetAK8puppi_dnnDecorrTop_max , jetAK8puppi_dnnDecorrTop_min };
        Double_t dnnDecorrW_sort[2] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_min };
        Double_t dnnDecorrH4q_sort[2] = { jetAK8puppi_dnnDecorrH4q_max , jetAK8puppi_dnnDecorrH4q_min };
        Double_t dnnDecorrZ_sort[2] = { jetAK8puppi_dnnDecorrZ_max , jetAK8puppi_dnnDecorrZ_min };
        Double_t dnnDecorrZbb_sort[2] = { jetAK8puppi_dnnDecorrZbb_max , jetAK8puppi_dnnDecorrZbb_min };
        Double_t dnnDecorrHbb_sort[2] = { jetAK8puppi_dnnDecorrHbb_max , jetAK8puppi_dnnDecorrHbb_min };
        Double_t dnnDecorrbb_sort[2] = { jetAK8puppi_dnnDecorrbb_max , jetAK8puppi_dnnDecorrbb_min };
        Double_t dnnDecorrcc_sort[2] = { jetAK8puppi_dnnDecorrcc_max , jetAK8puppi_dnnDecorrcc_min };
        Double_t dnnDecorrbbnog_sort[2] = { jetAK8puppi_dnnDecorrbbnog_max , jetAK8puppi_dnnDecorrbbnog_min };
        Double_t dnnDecorrccnog_sort[2] = { jetAK8puppi_dnnDecorrccnog_max , jetAK8puppi_dnnDecorrccnog_min };
        Double_t dnnqcd_sort[2] = { jetAK8puppi_dnnqcd_max , jetAK8puppi_dnnqcd_min };
        Double_t dnntop_sort[2] = { jetAK8puppi_dnntop_max , jetAK8puppi_dnntop_min };
        Double_t dnnw_sort[2] = { jetAK8puppi_dnnw_max , jetAK8puppi_dnnw_min };
        Double_t dnnz_sort[2] = { jetAK8puppi_dnnz_max , jetAK8puppi_dnnz_min };
        Double_t dnnzbb_sort[2] = { jetAK8puppi_dnnzbb_max , jetAK8puppi_dnnzbb_min };
        Double_t dnnhbb_sort[2] = { jetAK8puppi_dnnhbb_max , jetAK8puppi_dnnhbb_min };
        Double_t dnnh4q_sort[2] = { jetAK8puppi_dnnh4q_max , jetAK8puppi_dnnh4q_min };
        Double_t dnnDecorrqcd_sort[2] = { jetAK8puppi_dnnDecorrqcd_max , jetAK8puppi_dnnDecorrqcd_min };
        Double_t dnnDecorrtop_sort[2] = { jetAK8puppi_dnnDecorrtop_max , jetAK8puppi_dnnDecorrtop_min };
        Double_t dnnDecorrw_sort[2] = { jetAK8puppi_dnnDecorrw_max , jetAK8puppi_dnnDecorrw_min };
        Double_t dnnDecorrz_sort[2] = { jetAK8puppi_dnnDecorrz_max , jetAK8puppi_dnnDecorrz_min };
        Double_t dnnDecorrzbb_sort[2] = { jetAK8puppi_dnnDecorrzbb_max , jetAK8puppi_dnnDecorrzbb_min };
        Double_t dnnDecorrhbb_sort[2] = { jetAK8puppi_dnnDecorrhbb_max , jetAK8puppi_dnnDecorrhbb_min };
        Double_t dnnDecorrh4q_sort[2] = { jetAK8puppi_dnnDecorrh4q_max , jetAK8puppi_dnnDecorrh4q_min };

        dnnTop_a = dnnTop_sort[indexTag[0]] ; dnnTop_c = dnnTop_sort[indexTag[1]] ;
        dnnW_a = dnnW_sort[indexTag[0]] ; dnnW_c = dnnW_sort[indexTag[1]] ;
        dnnH4q_a = dnnH4q_sort[indexTag[0]] ; dnnH4q_c = dnnH4q_sort[indexTag[1]] ;
        dnnZ_a = dnnZ_sort[indexTag[0]] ; dnnZ_c = dnnZ_sort[indexTag[1]] ;
        dnnZbb_a = dnnZbb_sort[indexTag[0]] ; dnnZbb_c = dnnZbb_sort[indexTag[1]] ;
        dnnHbb_a = dnnHbb_sort[indexTag[0]] ; dnnHbb_c = dnnHbb_sort[indexTag[1]] ;
        dnnDecorrTop_a = dnnDecorrTop_sort[indexTag[0]] ; dnnDecorrTop_c = dnnDecorrTop_sort[indexTag[1]] ;
        dnnDecorrW_a = dnnDecorrW_sort[indexTag[0]] ; dnnDecorrW_c = dnnDecorrW_sort[indexTag[1]] ;
        dnnDecorrH4q_a = dnnDecorrH4q_sort[indexTag[0]] ; dnnDecorrH4q_c = dnnDecorrH4q_sort[indexTag[1]] ;
        dnnDecorrZ_a = dnnDecorrZ_sort[indexTag[0]] ; dnnDecorrZ_c = dnnDecorrZ_sort[indexTag[1]] ;
        dnnDecorrZbb_a = dnnDecorrZbb_sort[indexTag[0]] ; dnnDecorrZbb_c = dnnDecorrZbb_sort[indexTag[1]] ;
        dnnDecorrHbb_a = dnnDecorrHbb_sort[indexTag[0]] ; dnnDecorrHbb_c = dnnDecorrHbb_sort[indexTag[1]] ;
        dnnDecorrbb_a = dnnDecorrbb_sort[indexTag[0]] ; dnnDecorrbb_c = dnnDecorrbb_sort[indexTag[1]] ;
        dnnDecorrcc_a = dnnDecorrcc_sort[indexTag[0]] ; dnnDecorrcc_c = dnnDecorrcc_sort[indexTag[1]] ;
        dnnDecorrbbnog_a = dnnDecorrbbnog_sort[indexTag[0]] ; dnnDecorrbbnog_c = dnnDecorrbbnog_sort[indexTag[1]] ;
        dnnDecorrccnog_a = dnnDecorrccnog_sort[indexTag[0]] ; dnnDecorrccnog_c = dnnDecorrccnog_sort[indexTag[1]] ;
        dnnqcd_a = dnnqcd_sort[indexTag[0]] ; dnnqcd_c = dnnqcd_sort[indexTag[1]] ;
        dnntop_a = dnntop_sort[indexTag[0]] ; dnntop_c = dnntop_sort[indexTag[1]] ;
        dnnw_a = dnnw_sort[indexTag[0]] ; dnnw_c = dnnw_sort[indexTag[1]] ;
        dnnz_a = dnnz_sort[indexTag[0]] ; dnnz_c = dnnz_sort[indexTag[1]] ;
        dnnzbb_a = dnnzbb_sort[indexTag[0]] ; dnnzbb_c = dnnzbb_sort[indexTag[1]] ;
        dnnhbb_a = dnnhbb_sort[indexTag[0]] ; dnnhbb_c = dnnhbb_sort[indexTag[1]] ;
        dnnh4q_a = dnnh4q_sort[indexTag[0]] ; dnnh4q_c = dnnh4q_sort[indexTag[1]] ;
        dnnDecorrqcd_a = dnnDecorrqcd_sort[indexTag[0]] ; dnnDecorrqcd_c = dnnDecorrqcd_sort[indexTag[1]] ;
        dnnDecorrtop_a = dnnDecorrtop_sort[indexTag[0]] ; dnnDecorrtop_c = dnnDecorrtop_sort[indexTag[1]] ;
        dnnDecorrw_a = dnnDecorrw_sort[indexTag[0]] ; dnnDecorrw_c = dnnDecorrw_sort[indexTag[1]] ;
        dnnDecorrz_a = dnnDecorrz_sort[indexTag[0]] ; dnnDecorrz_c = dnnDecorrz_sort[indexTag[1]] ;
        dnnDecorrzbb_a = dnnDecorrzbb_sort[indexTag[0]] ; dnnDecorrzbb_c = dnnDecorrzbb_sort[indexTag[1]] ;
        dnnDecorrhbb_a = dnnDecorrhbb_sort[indexTag[0]] ; dnnDecorrhbb_c = dnnDecorrhbb_sort[indexTag[1]] ;
        dnnDecorrh4q_a = dnnDecorrh4q_sort[indexTag[0]] ; dnnDecorrh4q_c = dnnDecorrh4q_sort[indexTag[1]] ;
    }


    if( PTj_3 > 0 && PTj_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_deep_W_sort[3] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_mid, jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(3, jetAK8puppi_deep_W_sort, indexTag, 1);

        Double_t dnnTop_sort[3] = { jetAK8puppi_dnnTop_max ,jetAK8puppi_dnnTop_mid , jetAK8puppi_dnnTop_min };
        Double_t dnnW_sort[3] = { jetAK8puppi_dnnW_max ,jetAK8puppi_dnnW_mid , jetAK8puppi_dnnW_min };
        Double_t dnnH4q_sort[3] = { jetAK8puppi_dnnH4q_max ,jetAK8puppi_dnnH4q_mid , jetAK8puppi_dnnH4q_min };
        Double_t dnnZ_sort[3] = { jetAK8puppi_dnnZ_max ,jetAK8puppi_dnnZ_mid , jetAK8puppi_dnnZ_min };
        Double_t dnnZbb_sort[3] = { jetAK8puppi_dnnZbb_max ,jetAK8puppi_dnnZbb_mid , jetAK8puppi_dnnZbb_min };
        Double_t dnnHbb_sort[3] = { jetAK8puppi_dnnHbb_max ,jetAK8puppi_dnnHbb_mid , jetAK8puppi_dnnHbb_min };
        Double_t dnnDecorrTop_sort[3] = { jetAK8puppi_dnnDecorrTop_max ,jetAK8puppi_dnnDecorrTop_mid , jetAK8puppi_dnnDecorrTop_min };
        Double_t dnnDecorrW_sort[3] = { jetAK8puppi_dnnDecorrW_max ,jetAK8puppi_dnnDecorrW_mid , jetAK8puppi_dnnDecorrW_min };
        Double_t dnnDecorrH4q_sort[3] = { jetAK8puppi_dnnDecorrH4q_max ,jetAK8puppi_dnnDecorrH4q_mid , jetAK8puppi_dnnDecorrH4q_min };
        Double_t dnnDecorrZ_sort[3] = { jetAK8puppi_dnnDecorrZ_max ,jetAK8puppi_dnnDecorrZ_mid , jetAK8puppi_dnnDecorrZ_min };
        Double_t dnnDecorrZbb_sort[3] = { jetAK8puppi_dnnDecorrZbb_max ,jetAK8puppi_dnnDecorrZbb_mid , jetAK8puppi_dnnDecorrZbb_min };
        Double_t dnnDecorrHbb_sort[3] = { jetAK8puppi_dnnDecorrHbb_max ,jetAK8puppi_dnnDecorrHbb_mid , jetAK8puppi_dnnDecorrHbb_min };
        Double_t dnnDecorrbb_sort[3] = { jetAK8puppi_dnnDecorrbb_max ,jetAK8puppi_dnnDecorrbb_mid , jetAK8puppi_dnnDecorrbb_min };
        Double_t dnnDecorrcc_sort[3] = { jetAK8puppi_dnnDecorrcc_max ,jetAK8puppi_dnnDecorrcc_mid , jetAK8puppi_dnnDecorrcc_min };
        Double_t dnnDecorrbbnog_sort[3] = { jetAK8puppi_dnnDecorrbbnog_max ,jetAK8puppi_dnnDecorrbbnog_mid , jetAK8puppi_dnnDecorrbbnog_min };
        Double_t dnnDecorrccnog_sort[3] = { jetAK8puppi_dnnDecorrccnog_max ,jetAK8puppi_dnnDecorrccnog_mid , jetAK8puppi_dnnDecorrccnog_min };
        Double_t dnnqcd_sort[3] = { jetAK8puppi_dnnqcd_max ,jetAK8puppi_dnnqcd_mid , jetAK8puppi_dnnqcd_min };
        Double_t dnntop_sort[3] = { jetAK8puppi_dnntop_max ,jetAK8puppi_dnntop_mid , jetAK8puppi_dnntop_min };
        Double_t dnnw_sort[3] = { jetAK8puppi_dnnw_max ,jetAK8puppi_dnnw_mid , jetAK8puppi_dnnw_min };
        Double_t dnnz_sort[3] = { jetAK8puppi_dnnz_max ,jetAK8puppi_dnnz_mid , jetAK8puppi_dnnz_min };
        Double_t dnnzbb_sort[3] = { jetAK8puppi_dnnzbb_max ,jetAK8puppi_dnnzbb_mid , jetAK8puppi_dnnzbb_min };
        Double_t dnnhbb_sort[3] = { jetAK8puppi_dnnhbb_max ,jetAK8puppi_dnnhbb_mid , jetAK8puppi_dnnhbb_min };
        Double_t dnnh4q_sort[3] = { jetAK8puppi_dnnh4q_max ,jetAK8puppi_dnnh4q_mid , jetAK8puppi_dnnh4q_min };
        Double_t dnnDecorrqcd_sort[3] = { jetAK8puppi_dnnDecorrqcd_max ,jetAK8puppi_dnnDecorrqcd_mid , jetAK8puppi_dnnDecorrqcd_min };
        Double_t dnnDecorrtop_sort[3] = { jetAK8puppi_dnnDecorrtop_max ,jetAK8puppi_dnnDecorrtop_mid , jetAK8puppi_dnnDecorrtop_min };
        Double_t dnnDecorrw_sort[3] = { jetAK8puppi_dnnDecorrw_max ,jetAK8puppi_dnnDecorrw_mid , jetAK8puppi_dnnDecorrw_min };
        Double_t dnnDecorrz_sort[3] = { jetAK8puppi_dnnDecorrz_max ,jetAK8puppi_dnnDecorrz_mid , jetAK8puppi_dnnDecorrz_min };
        Double_t dnnDecorrzbb_sort[3] = { jetAK8puppi_dnnDecorrzbb_max ,jetAK8puppi_dnnDecorrzbb_mid , jetAK8puppi_dnnDecorrzbb_min };
        Double_t dnnDecorrhbb_sort[3] = { jetAK8puppi_dnnDecorrhbb_max ,jetAK8puppi_dnnDecorrhbb_mid , jetAK8puppi_dnnDecorrhbb_min };
        Double_t dnnDecorrh4q_sort[3] = { jetAK8puppi_dnnDecorrh4q_max ,jetAK8puppi_dnnDecorrh4q_mid , jetAK8puppi_dnnDecorrh4q_min };

        dnnTop_a = dnnTop_sort[indexTag[0]] ; dnnTop_b = dnnTop_sort[indexTag[1]] ; dnnTop_c = dnnTop_sort[indexTag[2]] ;
        dnnW_a = dnnW_sort[indexTag[0]] ; dnnW_b = dnnW_sort[indexTag[1]] ; dnnW_c = dnnW_sort[indexTag[2]] ;
        dnnH4q_a = dnnH4q_sort[indexTag[0]] ; dnnH4q_b = dnnH4q_sort[indexTag[1]] ; dnnH4q_c = dnnH4q_sort[indexTag[2]] ;
        dnnZ_a = dnnZ_sort[indexTag[0]] ; dnnZ_b = dnnZ_sort[indexTag[1]] ; dnnZ_c = dnnZ_sort[indexTag[2]] ;
        dnnZbb_a = dnnZbb_sort[indexTag[0]] ; dnnZbb_b = dnnZbb_sort[indexTag[1]] ; dnnZbb_c = dnnZbb_sort[indexTag[2]] ;
        dnnHbb_a = dnnHbb_sort[indexTag[0]] ; dnnHbb_b = dnnHbb_sort[indexTag[1]] ; dnnHbb_c = dnnHbb_sort[indexTag[2]] ;
        dnnDecorrTop_a = dnnDecorrTop_sort[indexTag[0]] ; dnnDecorrTop_b = dnnDecorrTop_sort[indexTag[1]] ; dnnDecorrTop_c = dnnDecorrTop_sort[indexTag[2]] ;
        dnnDecorrW_a = dnnDecorrW_sort[indexTag[0]] ; dnnDecorrW_b = dnnDecorrW_sort[indexTag[1]] ; dnnDecorrW_c = dnnDecorrW_sort[indexTag[2]] ;
        dnnDecorrH4q_a = dnnDecorrH4q_sort[indexTag[0]] ; dnnDecorrH4q_b = dnnDecorrH4q_sort[indexTag[1]] ; dnnDecorrH4q_c = dnnDecorrH4q_sort[indexTag[2]] ;
        dnnDecorrZ_a = dnnDecorrZ_sort[indexTag[0]] ; dnnDecorrZ_b = dnnDecorrZ_sort[indexTag[1]] ; dnnDecorrZ_c = dnnDecorrZ_sort[indexTag[2]] ;
        dnnDecorrZbb_a = dnnDecorrZbb_sort[indexTag[0]] ; dnnDecorrZbb_b = dnnDecorrZbb_sort[indexTag[1]] ; dnnDecorrZbb_c = dnnDecorrZbb_sort[indexTag[2]] ;
        dnnDecorrHbb_a = dnnDecorrHbb_sort[indexTag[0]] ; dnnDecorrHbb_b = dnnDecorrHbb_sort[indexTag[1]] ; dnnDecorrHbb_c = dnnDecorrHbb_sort[indexTag[2]] ;
        dnnDecorrbb_a = dnnDecorrbb_sort[indexTag[0]] ; dnnDecorrbb_b = dnnDecorrbb_sort[indexTag[1]] ; dnnDecorrbb_c = dnnDecorrbb_sort[indexTag[2]] ;
        dnnDecorrcc_a = dnnDecorrcc_sort[indexTag[0]] ; dnnDecorrcc_b = dnnDecorrcc_sort[indexTag[1]] ; dnnDecorrcc_c = dnnDecorrcc_sort[indexTag[2]] ;
        dnnDecorrbbnog_a = dnnDecorrbbnog_sort[indexTag[0]] ; dnnDecorrbbnog_b = dnnDecorrbbnog_sort[indexTag[1]] ; dnnDecorrbbnog_c = dnnDecorrbbnog_sort[indexTag[2]] ;
        dnnDecorrccnog_a = dnnDecorrccnog_sort[indexTag[0]] ; dnnDecorrccnog_b = dnnDecorrccnog_sort[indexTag[1]] ; dnnDecorrccnog_c = dnnDecorrccnog_sort[indexTag[2]] ;
        dnnqcd_a = dnnqcd_sort[indexTag[0]] ; dnnqcd_b = dnnqcd_sort[indexTag[1]] ; dnnqcd_c = dnnqcd_sort[indexTag[2]] ;
        dnntop_a = dnntop_sort[indexTag[0]] ; dnntop_b = dnntop_sort[indexTag[1]] ; dnntop_c = dnntop_sort[indexTag[2]] ;
        dnnw_a = dnnw_sort[indexTag[0]] ; dnnw_b = dnnw_sort[indexTag[1]] ; dnnw_c = dnnw_sort[indexTag[2]] ;
        dnnz_a = dnnz_sort[indexTag[0]] ; dnnz_b = dnnz_sort[indexTag[1]] ; dnnz_c = dnnz_sort[indexTag[2]] ;
        dnnzbb_a = dnnzbb_sort[indexTag[0]] ; dnnzbb_b = dnnzbb_sort[indexTag[1]] ; dnnzbb_c = dnnzbb_sort[indexTag[2]] ;
        dnnhbb_a = dnnhbb_sort[indexTag[0]] ; dnnhbb_b = dnnhbb_sort[indexTag[1]] ; dnnhbb_c = dnnhbb_sort[indexTag[2]] ;
        dnnh4q_a = dnnh4q_sort[indexTag[0]] ; dnnh4q_b = dnnh4q_sort[indexTag[1]] ; dnnh4q_c = dnnh4q_sort[indexTag[2]] ;
        dnnDecorrqcd_a = dnnDecorrqcd_sort[indexTag[0]] ; dnnDecorrqcd_b = dnnDecorrqcd_sort[indexTag[1]] ; dnnDecorrqcd_c = dnnDecorrqcd_sort[indexTag[2]] ;
        dnnDecorrtop_a = dnnDecorrtop_sort[indexTag[0]] ; dnnDecorrtop_b = dnnDecorrtop_sort[indexTag[1]] ; dnnDecorrtop_c = dnnDecorrtop_sort[indexTag[2]] ;
        dnnDecorrw_a = dnnDecorrw_sort[indexTag[0]] ; dnnDecorrw_b = dnnDecorrw_sort[indexTag[1]] ; dnnDecorrw_c = dnnDecorrw_sort[indexTag[2]] ;
        dnnDecorrz_a = dnnDecorrz_sort[indexTag[0]] ; dnnDecorrz_b = dnnDecorrz_sort[indexTag[1]] ; dnnDecorrz_c = dnnDecorrz_sort[indexTag[2]] ;
        dnnDecorrzbb_a = dnnDecorrzbb_sort[indexTag[0]] ; dnnDecorrzbb_b = dnnDecorrzbb_sort[indexTag[1]] ; dnnDecorrzbb_c = dnnDecorrzbb_sort[indexTag[2]] ;
        dnnDecorrhbb_a = dnnDecorrhbb_sort[indexTag[0]] ; dnnDecorrhbb_b = dnnDecorrhbb_sort[indexTag[1]] ; dnnDecorrhbb_c = dnnDecorrhbb_sort[indexTag[2]] ;
        dnnDecorrh4q_a = dnnDecorrh4q_sort[indexTag[0]] ; dnnDecorrh4q_b = dnnDecorrh4q_sort[indexTag[1]] ; dnnDecorrh4q_c = dnnDecorrh4q_sort[indexTag[2]] ;
    }

}

void EDBR2PKUTree::Deep_W_Ordered_RawScore() {

    dnn_probTbcq_a = -99; dnn_probTbcq_b = -99; dnn_probTbcq_c = -99;
    dnn_probTbqq_a = -99; dnn_probTbqq_b = -99; dnn_probTbqq_c = -99;
    dnn_probTbc_a = -99; dnn_probTbc_b = -99; dnn_probTbc_c = -99;
    dnn_probTbq_a = -99; dnn_probTbq_b = -99; dnn_probTbq_c = -99;
    dnn_probWcq_a = -99; dnn_probWcq_b = -99; dnn_probWcq_c = -99;
    dnn_probWqq_a = -99; dnn_probWqq_b = -99; dnn_probWqq_c = -99;
    dnn_probZbb_a = -99; dnn_probZbb_b = -99; dnn_probZbb_c = -99;
    dnn_probZcc_a = -99; dnn_probZcc_b = -99; dnn_probZcc_c = -99;
    dnn_probZqq_a = -99; dnn_probZqq_b = -99; dnn_probZqq_c = -99;
    dnn_probHbb_a = -99; dnn_probHbb_b = -99; dnn_probHbb_c = -99;
    dnn_probHcc_a = -99; dnn_probHcc_b = -99; dnn_probHcc_c = -99;
    dnn_probHqqqq_a = -99; dnn_probHqqqq_b = -99; dnn_probHqqqq_c = -99;
    dnn_probQCDbb_a = -99; dnn_probQCDbb_b = -99; dnn_probQCDbb_c = -99;
    dnn_probQCDcc_a = -99; dnn_probQCDcc_b = -99; dnn_probQCDcc_c = -99;
    dnn_probQCDb_a = -99; dnn_probQCDb_b = -99; dnn_probQCDb_c = -99;
    dnn_probQCDc_a = -99; dnn_probQCDc_b = -99; dnn_probQCDc_c = -99;
    dnn_probQCDothers_a = -99; dnn_probQCDothers_b = -99; dnn_probQCDothers_c = -99;
    dnnDecorr_probTbcq_a = -99; dnnDecorr_probTbcq_b = -99; dnnDecorr_probTbcq_c = -99;
    dnnDecorr_probTbqq_a = -99; dnnDecorr_probTbqq_b = -99; dnnDecorr_probTbqq_c = -99;
    dnnDecorr_probTbc_a = -99; dnnDecorr_probTbc_b = -99; dnnDecorr_probTbc_c = -99;
    dnnDecorr_probTbq_a = -99; dnnDecorr_probTbq_b = -99; dnnDecorr_probTbq_c = -99;
    dnnDecorr_probWcq_a = -99; dnnDecorr_probWcq_b = -99; dnnDecorr_probWcq_c = -99;
    dnnDecorr_probWqq_a = -99; dnnDecorr_probWqq_b = -99; dnnDecorr_probWqq_c = -99;
    dnnDecorr_probZbb_a = -99; dnnDecorr_probZbb_b = -99; dnnDecorr_probZbb_c = -99;
    dnnDecorr_probZcc_a = -99; dnnDecorr_probZcc_b = -99; dnnDecorr_probZcc_c = -99;
    dnnDecorr_probZqq_a = -99; dnnDecorr_probZqq_b = -99; dnnDecorr_probZqq_c = -99;
    dnnDecorr_probHbb_a = -99; dnnDecorr_probHbb_b = -99; dnnDecorr_probHbb_c = -99;
    dnnDecorr_probHcc_a = -99; dnnDecorr_probHcc_b = -99; dnnDecorr_probHcc_c = -99;
    dnnDecorr_probHqqqq_a = -99; dnnDecorr_probHqqqq_b = -99; dnnDecorr_probHqqqq_c = -99;
    dnnDecorr_probQCDbb_a = -99; dnnDecorr_probQCDbb_b = -99; dnnDecorr_probQCDbb_c = -99;
    dnnDecorr_probQCDcc_a = -99; dnnDecorr_probQCDcc_b = -99; dnnDecorr_probQCDcc_c = -99;
    dnnDecorr_probQCDb_a = -99; dnnDecorr_probQCDb_b = -99; dnnDecorr_probQCDb_c = -99;
    dnnDecorr_probQCDc_a = -99; dnnDecorr_probQCDc_b = -99; dnnDecorr_probQCDc_c = -99;
    dnnDecorr_probQCDothers_a = -99; dnnDecorr_probQCDothers_b = -99; dnnDecorr_probQCDothers_c = -99;

        
    if( PTj_2 > 0 && PTj_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_deep_W_sort[2] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(2, jetAK8puppi_deep_W_sort, indexTag, 1);

        Double_t dnn_probTbcq_sort[2] = { jetAK8puppi_dnn_probTbcq_max , jetAK8puppi_dnn_probTbcq_min };
        Double_t dnn_probTbqq_sort[2] = { jetAK8puppi_dnn_probTbqq_max , jetAK8puppi_dnn_probTbqq_min };
        Double_t dnn_probTbc_sort[2] = { jetAK8puppi_dnn_probTbc_max , jetAK8puppi_dnn_probTbc_min };
        Double_t dnn_probTbq_sort[2] = { jetAK8puppi_dnn_probTbq_max , jetAK8puppi_dnn_probTbq_min };
        Double_t dnn_probWcq_sort[2] = { jetAK8puppi_dnn_probWcq_max , jetAK8puppi_dnn_probWcq_min };
        Double_t dnn_probWqq_sort[2] = { jetAK8puppi_dnn_probWqq_max , jetAK8puppi_dnn_probWqq_min };
        Double_t dnn_probZbb_sort[2] = { jetAK8puppi_dnn_probZbb_max , jetAK8puppi_dnn_probZbb_min };
        Double_t dnn_probZcc_sort[2] = { jetAK8puppi_dnn_probZcc_max , jetAK8puppi_dnn_probZcc_min };
        Double_t dnn_probZqq_sort[2] = { jetAK8puppi_dnn_probZqq_max , jetAK8puppi_dnn_probZqq_min };
        Double_t dnn_probHbb_sort[2] = { jetAK8puppi_dnn_probHbb_max , jetAK8puppi_dnn_probHbb_min };
        Double_t dnn_probHcc_sort[2] = { jetAK8puppi_dnn_probHcc_max , jetAK8puppi_dnn_probHcc_min };
        Double_t dnn_probHqqqq_sort[2] = { jetAK8puppi_dnn_probHqqqq_max , jetAK8puppi_dnn_probHqqqq_min };
        Double_t dnn_probQCDbb_sort[2] = { jetAK8puppi_dnn_probQCDbb_max , jetAK8puppi_dnn_probQCDbb_min };
        Double_t dnn_probQCDcc_sort[2] = { jetAK8puppi_dnn_probQCDcc_max , jetAK8puppi_dnn_probQCDcc_min };
        Double_t dnn_probQCDb_sort[2] = { jetAK8puppi_dnn_probQCDb_max , jetAK8puppi_dnn_probQCDb_min };
        Double_t dnn_probQCDc_sort[2] = { jetAK8puppi_dnn_probQCDc_max , jetAK8puppi_dnn_probQCDc_min };
        Double_t dnn_probQCDothers_sort[2] = { jetAK8puppi_dnn_probQCDothers_max , jetAK8puppi_dnn_probQCDothers_min };
        Double_t dnnDecorr_probTbcq_sort[2] = { jetAK8puppi_dnnDecorr_probTbcq_max , jetAK8puppi_dnnDecorr_probTbcq_min };
        Double_t dnnDecorr_probTbqq_sort[2] = { jetAK8puppi_dnnDecorr_probTbqq_max , jetAK8puppi_dnnDecorr_probTbqq_min };
        Double_t dnnDecorr_probTbc_sort[2] = { jetAK8puppi_dnnDecorr_probTbc_max , jetAK8puppi_dnnDecorr_probTbc_min };
        Double_t dnnDecorr_probTbq_sort[2] = { jetAK8puppi_dnnDecorr_probTbq_max , jetAK8puppi_dnnDecorr_probTbq_min };
        Double_t dnnDecorr_probWcq_sort[2] = { jetAK8puppi_dnnDecorr_probWcq_max , jetAK8puppi_dnnDecorr_probWcq_min };
        Double_t dnnDecorr_probWqq_sort[2] = { jetAK8puppi_dnnDecorr_probWqq_max , jetAK8puppi_dnnDecorr_probWqq_min };
        Double_t dnnDecorr_probZbb_sort[2] = { jetAK8puppi_dnnDecorr_probZbb_max , jetAK8puppi_dnnDecorr_probZbb_min };
        Double_t dnnDecorr_probZcc_sort[2] = { jetAK8puppi_dnnDecorr_probZcc_max , jetAK8puppi_dnnDecorr_probZcc_min };
        Double_t dnnDecorr_probZqq_sort[2] = { jetAK8puppi_dnnDecorr_probZqq_max , jetAK8puppi_dnnDecorr_probZqq_min };
        Double_t dnnDecorr_probHbb_sort[2] = { jetAK8puppi_dnnDecorr_probHbb_max , jetAK8puppi_dnnDecorr_probHbb_min };
        Double_t dnnDecorr_probHcc_sort[2] = { jetAK8puppi_dnnDecorr_probHcc_max , jetAK8puppi_dnnDecorr_probHcc_min };
        Double_t dnnDecorr_probHqqqq_sort[2] = { jetAK8puppi_dnnDecorr_probHqqqq_max , jetAK8puppi_dnnDecorr_probHqqqq_min };
        Double_t dnnDecorr_probQCDbb_sort[2] = { jetAK8puppi_dnnDecorr_probQCDbb_max , jetAK8puppi_dnnDecorr_probQCDbb_min };
        Double_t dnnDecorr_probQCDcc_sort[2] = { jetAK8puppi_dnnDecorr_probQCDcc_max , jetAK8puppi_dnnDecorr_probQCDcc_min };
        Double_t dnnDecorr_probQCDb_sort[2] = { jetAK8puppi_dnnDecorr_probQCDb_max , jetAK8puppi_dnnDecorr_probQCDb_min };
        Double_t dnnDecorr_probQCDc_sort[2] = { jetAK8puppi_dnnDecorr_probQCDc_max , jetAK8puppi_dnnDecorr_probQCDc_min };
        Double_t dnnDecorr_probQCDothers_sort[2] = { jetAK8puppi_dnnDecorr_probQCDothers_max , jetAK8puppi_dnnDecorr_probQCDothers_min };

        dnn_probTbcq_a = dnn_probTbcq_sort[indexTag[0]] ; dnn_probTbcq_c = dnn_probTbcq_sort[indexTag[1]] ;
        dnn_probTbqq_a = dnn_probTbqq_sort[indexTag[0]] ; dnn_probTbqq_c = dnn_probTbqq_sort[indexTag[1]] ;
        dnn_probTbc_a = dnn_probTbc_sort[indexTag[0]] ; dnn_probTbc_c = dnn_probTbc_sort[indexTag[1]] ;
        dnn_probTbq_a = dnn_probTbq_sort[indexTag[0]] ; dnn_probTbq_c = dnn_probTbq_sort[indexTag[1]] ;
        dnn_probWcq_a = dnn_probWcq_sort[indexTag[0]] ; dnn_probWcq_c = dnn_probWcq_sort[indexTag[1]] ;
        dnn_probWqq_a = dnn_probWqq_sort[indexTag[0]] ; dnn_probWqq_c = dnn_probWqq_sort[indexTag[1]] ;
        dnn_probZbb_a = dnn_probZbb_sort[indexTag[0]] ; dnn_probZbb_c = dnn_probZbb_sort[indexTag[1]] ;
        dnn_probZcc_a = dnn_probZcc_sort[indexTag[0]] ; dnn_probZcc_c = dnn_probZcc_sort[indexTag[1]] ;
        dnn_probZqq_a = dnn_probZqq_sort[indexTag[0]] ; dnn_probZqq_c = dnn_probZqq_sort[indexTag[1]] ;
        dnn_probHbb_a = dnn_probHbb_sort[indexTag[0]] ; dnn_probHbb_c = dnn_probHbb_sort[indexTag[1]] ;
        dnn_probHcc_a = dnn_probHcc_sort[indexTag[0]] ; dnn_probHcc_c = dnn_probHcc_sort[indexTag[1]] ;
        dnn_probHqqqq_a = dnn_probHqqqq_sort[indexTag[0]] ; dnn_probHqqqq_c = dnn_probHqqqq_sort[indexTag[1]] ;
        dnn_probQCDbb_a = dnn_probQCDbb_sort[indexTag[0]] ; dnn_probQCDbb_c = dnn_probQCDbb_sort[indexTag[1]] ;
        dnn_probQCDcc_a = dnn_probQCDcc_sort[indexTag[0]] ; dnn_probQCDcc_c = dnn_probQCDcc_sort[indexTag[1]] ;
        dnn_probQCDb_a = dnn_probQCDb_sort[indexTag[0]] ; dnn_probQCDb_c = dnn_probQCDb_sort[indexTag[1]] ;
        dnn_probQCDc_a = dnn_probQCDc_sort[indexTag[0]] ; dnn_probQCDc_c = dnn_probQCDc_sort[indexTag[1]] ;
        dnn_probQCDothers_a = dnn_probQCDothers_sort[indexTag[0]] ; dnn_probQCDothers_c = dnn_probQCDothers_sort[indexTag[1]] ;
        dnnDecorr_probTbcq_a = dnnDecorr_probTbcq_sort[indexTag[0]] ; dnnDecorr_probTbcq_c = dnnDecorr_probTbcq_sort[indexTag[1]] ;
        dnnDecorr_probTbqq_a = dnnDecorr_probTbqq_sort[indexTag[0]] ; dnnDecorr_probTbqq_c = dnnDecorr_probTbqq_sort[indexTag[1]] ;
        dnnDecorr_probTbc_a = dnnDecorr_probTbc_sort[indexTag[0]] ; dnnDecorr_probTbc_c = dnnDecorr_probTbc_sort[indexTag[1]] ;
        dnnDecorr_probTbq_a = dnnDecorr_probTbq_sort[indexTag[0]] ; dnnDecorr_probTbq_c = dnnDecorr_probTbq_sort[indexTag[1]] ;
        dnnDecorr_probWcq_a = dnnDecorr_probWcq_sort[indexTag[0]] ; dnnDecorr_probWcq_c = dnnDecorr_probWcq_sort[indexTag[1]] ;
        dnnDecorr_probWqq_a = dnnDecorr_probWqq_sort[indexTag[0]] ; dnnDecorr_probWqq_c = dnnDecorr_probWqq_sort[indexTag[1]] ;
        dnnDecorr_probZbb_a = dnnDecorr_probZbb_sort[indexTag[0]] ; dnnDecorr_probZbb_c = dnnDecorr_probZbb_sort[indexTag[1]] ;
        dnnDecorr_probZcc_a = dnnDecorr_probZcc_sort[indexTag[0]] ; dnnDecorr_probZcc_c = dnnDecorr_probZcc_sort[indexTag[1]] ;
        dnnDecorr_probZqq_a = dnnDecorr_probZqq_sort[indexTag[0]] ; dnnDecorr_probZqq_c = dnnDecorr_probZqq_sort[indexTag[1]] ;
        dnnDecorr_probHbb_a = dnnDecorr_probHbb_sort[indexTag[0]] ; dnnDecorr_probHbb_c = dnnDecorr_probHbb_sort[indexTag[1]] ;
        dnnDecorr_probHcc_a = dnnDecorr_probHcc_sort[indexTag[0]] ; dnnDecorr_probHcc_c = dnnDecorr_probHcc_sort[indexTag[1]] ;
        dnnDecorr_probHqqqq_a = dnnDecorr_probHqqqq_sort[indexTag[0]] ; dnnDecorr_probHqqqq_c = dnnDecorr_probHqqqq_sort[indexTag[1]] ;
        dnnDecorr_probQCDbb_a = dnnDecorr_probQCDbb_sort[indexTag[0]] ; dnnDecorr_probQCDbb_c = dnnDecorr_probQCDbb_sort[indexTag[1]] ;
        dnnDecorr_probQCDcc_a = dnnDecorr_probQCDcc_sort[indexTag[0]] ; dnnDecorr_probQCDcc_c = dnnDecorr_probQCDcc_sort[indexTag[1]] ;
        dnnDecorr_probQCDb_a = dnnDecorr_probQCDb_sort[indexTag[0]] ; dnnDecorr_probQCDb_c = dnnDecorr_probQCDb_sort[indexTag[1]] ;
        dnnDecorr_probQCDc_a = dnnDecorr_probQCDc_sort[indexTag[0]] ; dnnDecorr_probQCDc_c = dnnDecorr_probQCDc_sort[indexTag[1]] ;
        dnnDecorr_probQCDothers_a = dnnDecorr_probQCDothers_sort[indexTag[0]] ; dnnDecorr_probQCDothers_c = dnnDecorr_probQCDothers_sort[indexTag[1]] ;

    }
    
    if( PTj_3 > 0 && PTj_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_deep_W_sort[3] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_mid, jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(3, jetAK8puppi_deep_W_sort, indexTag, 1);

        Double_t Mj_sort[3] = { Mj_max , Mj_mid , Mj_min }; 
        Double_t PTj_sort[3] = { PTj_max , PTj_mid , PTj_min }; 
        Double_t Etaj_sort[3] = { Etaj_max , Etaj_mid , Etaj_min }; 
        Double_t Phij_sort[3] = { Phij_max , Phij_mid , Phij_min }; 

        Double_t dnn_probTbcq_sort[3] = { jetAK8puppi_dnn_probTbcq_max ,jetAK8puppi_dnn_probTbcq_mid , jetAK8puppi_dnn_probTbcq_min };
        Double_t dnn_probTbqq_sort[3] = { jetAK8puppi_dnn_probTbqq_max ,jetAK8puppi_dnn_probTbqq_mid , jetAK8puppi_dnn_probTbqq_min };
        Double_t dnn_probTbc_sort[3] = { jetAK8puppi_dnn_probTbc_max ,jetAK8puppi_dnn_probTbc_mid , jetAK8puppi_dnn_probTbc_min };
        Double_t dnn_probTbq_sort[3] = { jetAK8puppi_dnn_probTbq_max ,jetAK8puppi_dnn_probTbq_mid , jetAK8puppi_dnn_probTbq_min };
        Double_t dnn_probWcq_sort[3] = { jetAK8puppi_dnn_probWcq_max ,jetAK8puppi_dnn_probWcq_mid , jetAK8puppi_dnn_probWcq_min };
        Double_t dnn_probWqq_sort[3] = { jetAK8puppi_dnn_probWqq_max ,jetAK8puppi_dnn_probWqq_mid , jetAK8puppi_dnn_probWqq_min };
        Double_t dnn_probZbb_sort[3] = { jetAK8puppi_dnn_probZbb_max ,jetAK8puppi_dnn_probZbb_mid , jetAK8puppi_dnn_probZbb_min };
        Double_t dnn_probZcc_sort[3] = { jetAK8puppi_dnn_probZcc_max ,jetAK8puppi_dnn_probZcc_mid , jetAK8puppi_dnn_probZcc_min };
        Double_t dnn_probZqq_sort[3] = { jetAK8puppi_dnn_probZqq_max ,jetAK8puppi_dnn_probZqq_mid , jetAK8puppi_dnn_probZqq_min };
        Double_t dnn_probHbb_sort[3] = { jetAK8puppi_dnn_probHbb_max ,jetAK8puppi_dnn_probHbb_mid , jetAK8puppi_dnn_probHbb_min };
        Double_t dnn_probHcc_sort[3] = { jetAK8puppi_dnn_probHcc_max ,jetAK8puppi_dnn_probHcc_mid , jetAK8puppi_dnn_probHcc_min };
        Double_t dnn_probHqqqq_sort[3] = { jetAK8puppi_dnn_probHqqqq_max ,jetAK8puppi_dnn_probHqqqq_mid , jetAK8puppi_dnn_probHqqqq_min };
        Double_t dnn_probQCDbb_sort[3] = { jetAK8puppi_dnn_probQCDbb_max ,jetAK8puppi_dnn_probQCDbb_mid , jetAK8puppi_dnn_probQCDbb_min };
        Double_t dnn_probQCDcc_sort[3] = { jetAK8puppi_dnn_probQCDcc_max ,jetAK8puppi_dnn_probQCDcc_mid , jetAK8puppi_dnn_probQCDcc_min };
        Double_t dnn_probQCDb_sort[3] = { jetAK8puppi_dnn_probQCDb_max ,jetAK8puppi_dnn_probQCDb_mid , jetAK8puppi_dnn_probQCDb_min };
        Double_t dnn_probQCDc_sort[3] = { jetAK8puppi_dnn_probQCDc_max ,jetAK8puppi_dnn_probQCDc_mid , jetAK8puppi_dnn_probQCDc_min };
        Double_t dnn_probQCDothers_sort[3] = { jetAK8puppi_dnn_probQCDothers_max ,jetAK8puppi_dnn_probQCDothers_mid , jetAK8puppi_dnn_probQCDothers_min };
        Double_t dnnDecorr_probTbcq_sort[3] = { jetAK8puppi_dnnDecorr_probTbcq_max ,jetAK8puppi_dnnDecorr_probTbcq_mid , jetAK8puppi_dnnDecorr_probTbcq_min };
        Double_t dnnDecorr_probTbqq_sort[3] = { jetAK8puppi_dnnDecorr_probTbqq_max ,jetAK8puppi_dnnDecorr_probTbqq_mid , jetAK8puppi_dnnDecorr_probTbqq_min };
        Double_t dnnDecorr_probTbc_sort[3] = { jetAK8puppi_dnnDecorr_probTbc_max ,jetAK8puppi_dnnDecorr_probTbc_mid , jetAK8puppi_dnnDecorr_probTbc_min };
        Double_t dnnDecorr_probTbq_sort[3] = { jetAK8puppi_dnnDecorr_probTbq_max ,jetAK8puppi_dnnDecorr_probTbq_mid , jetAK8puppi_dnnDecorr_probTbq_min };
        Double_t dnnDecorr_probWcq_sort[3] = { jetAK8puppi_dnnDecorr_probWcq_max ,jetAK8puppi_dnnDecorr_probWcq_mid , jetAK8puppi_dnnDecorr_probWcq_min };
        Double_t dnnDecorr_probWqq_sort[3] = { jetAK8puppi_dnnDecorr_probWqq_max ,jetAK8puppi_dnnDecorr_probWqq_mid , jetAK8puppi_dnnDecorr_probWqq_min };
        Double_t dnnDecorr_probZbb_sort[3] = { jetAK8puppi_dnnDecorr_probZbb_max ,jetAK8puppi_dnnDecorr_probZbb_mid , jetAK8puppi_dnnDecorr_probZbb_min };
        Double_t dnnDecorr_probZcc_sort[3] = { jetAK8puppi_dnnDecorr_probZcc_max ,jetAK8puppi_dnnDecorr_probZcc_mid , jetAK8puppi_dnnDecorr_probZcc_min };
        Double_t dnnDecorr_probZqq_sort[3] = { jetAK8puppi_dnnDecorr_probZqq_max ,jetAK8puppi_dnnDecorr_probZqq_mid , jetAK8puppi_dnnDecorr_probZqq_min };
        Double_t dnnDecorr_probHbb_sort[3] = { jetAK8puppi_dnnDecorr_probHbb_max ,jetAK8puppi_dnnDecorr_probHbb_mid , jetAK8puppi_dnnDecorr_probHbb_min };
        Double_t dnnDecorr_probHcc_sort[3] = { jetAK8puppi_dnnDecorr_probHcc_max ,jetAK8puppi_dnnDecorr_probHcc_mid , jetAK8puppi_dnnDecorr_probHcc_min };
        Double_t dnnDecorr_probHqqqq_sort[3] = { jetAK8puppi_dnnDecorr_probHqqqq_max ,jetAK8puppi_dnnDecorr_probHqqqq_mid , jetAK8puppi_dnnDecorr_probHqqqq_min };
        Double_t dnnDecorr_probQCDbb_sort[3] = { jetAK8puppi_dnnDecorr_probQCDbb_max ,jetAK8puppi_dnnDecorr_probQCDbb_mid , jetAK8puppi_dnnDecorr_probQCDbb_min };
        Double_t dnnDecorr_probQCDcc_sort[3] = { jetAK8puppi_dnnDecorr_probQCDcc_max ,jetAK8puppi_dnnDecorr_probQCDcc_mid , jetAK8puppi_dnnDecorr_probQCDcc_min };
        Double_t dnnDecorr_probQCDb_sort[3] = { jetAK8puppi_dnnDecorr_probQCDb_max ,jetAK8puppi_dnnDecorr_probQCDb_mid , jetAK8puppi_dnnDecorr_probQCDb_min };
        Double_t dnnDecorr_probQCDc_sort[3] = { jetAK8puppi_dnnDecorr_probQCDc_max ,jetAK8puppi_dnnDecorr_probQCDc_mid , jetAK8puppi_dnnDecorr_probQCDc_min };
        Double_t dnnDecorr_probQCDothers_sort[3] = { jetAK8puppi_dnnDecorr_probQCDothers_max ,jetAK8puppi_dnnDecorr_probQCDothers_mid , jetAK8puppi_dnnDecorr_probQCDothers_min };
        
        dnn_probTbcq_a = dnn_probTbcq_sort[indexTag[0]] ; dnn_probTbcq_b = dnn_probTbcq_sort[indexTag[1]] ; dnn_probTbcq_c = dnn_probTbcq_sort[indexTag[2]] ;
        dnn_probTbqq_a = dnn_probTbqq_sort[indexTag[0]] ; dnn_probTbqq_b = dnn_probTbqq_sort[indexTag[1]] ; dnn_probTbqq_c = dnn_probTbqq_sort[indexTag[2]] ;
        dnn_probTbc_a = dnn_probTbc_sort[indexTag[0]] ; dnn_probTbc_b = dnn_probTbc_sort[indexTag[1]] ; dnn_probTbc_c = dnn_probTbc_sort[indexTag[2]] ;
        dnn_probTbq_a = dnn_probTbq_sort[indexTag[0]] ; dnn_probTbq_b = dnn_probTbq_sort[indexTag[1]] ; dnn_probTbq_c = dnn_probTbq_sort[indexTag[2]] ;
        dnn_probWcq_a = dnn_probWcq_sort[indexTag[0]] ; dnn_probWcq_b = dnn_probWcq_sort[indexTag[1]] ; dnn_probWcq_c = dnn_probWcq_sort[indexTag[2]] ;
        dnn_probWqq_a = dnn_probWqq_sort[indexTag[0]] ; dnn_probWqq_b = dnn_probWqq_sort[indexTag[1]] ; dnn_probWqq_c = dnn_probWqq_sort[indexTag[2]] ;
        dnn_probZbb_a = dnn_probZbb_sort[indexTag[0]] ; dnn_probZbb_b = dnn_probZbb_sort[indexTag[1]] ; dnn_probZbb_c = dnn_probZbb_sort[indexTag[2]] ;
        dnn_probZcc_a = dnn_probZcc_sort[indexTag[0]] ; dnn_probZcc_b = dnn_probZcc_sort[indexTag[1]] ; dnn_probZcc_c = dnn_probZcc_sort[indexTag[2]] ;
        dnn_probZqq_a = dnn_probZqq_sort[indexTag[0]] ; dnn_probZqq_b = dnn_probZqq_sort[indexTag[1]] ; dnn_probZqq_c = dnn_probZqq_sort[indexTag[2]] ;
        dnn_probHbb_a = dnn_probHbb_sort[indexTag[0]] ; dnn_probHbb_b = dnn_probHbb_sort[indexTag[1]] ; dnn_probHbb_c = dnn_probHbb_sort[indexTag[2]] ;
        dnn_probHcc_a = dnn_probHcc_sort[indexTag[0]] ; dnn_probHcc_b = dnn_probHcc_sort[indexTag[1]] ; dnn_probHcc_c = dnn_probHcc_sort[indexTag[2]] ;
        dnn_probHqqqq_a = dnn_probHqqqq_sort[indexTag[0]] ; dnn_probHqqqq_b = dnn_probHqqqq_sort[indexTag[1]] ; dnn_probHqqqq_c = dnn_probHqqqq_sort[indexTag[2]] ;
        dnn_probQCDbb_a = dnn_probQCDbb_sort[indexTag[0]] ; dnn_probQCDbb_b = dnn_probQCDbb_sort[indexTag[1]] ; dnn_probQCDbb_c = dnn_probQCDbb_sort[indexTag[2]] ;
        dnn_probQCDcc_a = dnn_probQCDcc_sort[indexTag[0]] ; dnn_probQCDcc_b = dnn_probQCDcc_sort[indexTag[1]] ; dnn_probQCDcc_c = dnn_probQCDcc_sort[indexTag[2]] ;
        dnn_probQCDb_a = dnn_probQCDb_sort[indexTag[0]] ; dnn_probQCDb_b = dnn_probQCDb_sort[indexTag[1]] ; dnn_probQCDb_c = dnn_probQCDb_sort[indexTag[2]] ;
        dnn_probQCDc_a = dnn_probQCDc_sort[indexTag[0]] ; dnn_probQCDc_b = dnn_probQCDc_sort[indexTag[1]] ; dnn_probQCDc_c = dnn_probQCDc_sort[indexTag[2]] ;
        dnn_probQCDothers_a = dnn_probQCDothers_sort[indexTag[0]] ; dnn_probQCDothers_b = dnn_probQCDothers_sort[indexTag[1]] ; dnn_probQCDothers_c = dnn_probQCDothers_sort[indexTag[2]] ;
        dnnDecorr_probTbcq_a = dnnDecorr_probTbcq_sort[indexTag[0]] ; dnnDecorr_probTbcq_b = dnnDecorr_probTbcq_sort[indexTag[1]] ; dnnDecorr_probTbcq_c = dnnDecorr_probTbcq_sort[indexTag[2]] ;
        dnnDecorr_probTbqq_a = dnnDecorr_probTbqq_sort[indexTag[0]] ; dnnDecorr_probTbqq_b = dnnDecorr_probTbqq_sort[indexTag[1]] ; dnnDecorr_probTbqq_c = dnnDecorr_probTbqq_sort[indexTag[2]] ;
        dnnDecorr_probTbc_a = dnnDecorr_probTbc_sort[indexTag[0]] ; dnnDecorr_probTbc_b = dnnDecorr_probTbc_sort[indexTag[1]] ; dnnDecorr_probTbc_c = dnnDecorr_probTbc_sort[indexTag[2]] ;
        dnnDecorr_probTbq_a = dnnDecorr_probTbq_sort[indexTag[0]] ; dnnDecorr_probTbq_b = dnnDecorr_probTbq_sort[indexTag[1]] ; dnnDecorr_probTbq_c = dnnDecorr_probTbq_sort[indexTag[2]] ;
        dnnDecorr_probWcq_a = dnnDecorr_probWcq_sort[indexTag[0]] ; dnnDecorr_probWcq_b = dnnDecorr_probWcq_sort[indexTag[1]] ; dnnDecorr_probWcq_c = dnnDecorr_probWcq_sort[indexTag[2]] ;
        dnnDecorr_probWqq_a = dnnDecorr_probWqq_sort[indexTag[0]] ; dnnDecorr_probWqq_b = dnnDecorr_probWqq_sort[indexTag[1]] ; dnnDecorr_probWqq_c = dnnDecorr_probWqq_sort[indexTag[2]] ;
        dnnDecorr_probZbb_a = dnnDecorr_probZbb_sort[indexTag[0]] ; dnnDecorr_probZbb_b = dnnDecorr_probZbb_sort[indexTag[1]] ; dnnDecorr_probZbb_c = dnnDecorr_probZbb_sort[indexTag[2]] ;
        dnnDecorr_probZcc_a = dnnDecorr_probZcc_sort[indexTag[0]] ; dnnDecorr_probZcc_b = dnnDecorr_probZcc_sort[indexTag[1]] ; dnnDecorr_probZcc_c = dnnDecorr_probZcc_sort[indexTag[2]] ;
        dnnDecorr_probZqq_a = dnnDecorr_probZqq_sort[indexTag[0]] ; dnnDecorr_probZqq_b = dnnDecorr_probZqq_sort[indexTag[1]] ; dnnDecorr_probZqq_c = dnnDecorr_probZqq_sort[indexTag[2]] ;
        dnnDecorr_probHbb_a = dnnDecorr_probHbb_sort[indexTag[0]] ; dnnDecorr_probHbb_b = dnnDecorr_probHbb_sort[indexTag[1]] ; dnnDecorr_probHbb_c = dnnDecorr_probHbb_sort[indexTag[2]] ;
        dnnDecorr_probHcc_a = dnnDecorr_probHcc_sort[indexTag[0]] ; dnnDecorr_probHcc_b = dnnDecorr_probHcc_sort[indexTag[1]] ; dnnDecorr_probHcc_c = dnnDecorr_probHcc_sort[indexTag[2]] ;
        dnnDecorr_probHqqqq_a = dnnDecorr_probHqqqq_sort[indexTag[0]] ; dnnDecorr_probHqqqq_b = dnnDecorr_probHqqqq_sort[indexTag[1]] ; dnnDecorr_probHqqqq_c = dnnDecorr_probHqqqq_sort[indexTag[2]] ;
        dnnDecorr_probQCDbb_a = dnnDecorr_probQCDbb_sort[indexTag[0]] ; dnnDecorr_probQCDbb_b = dnnDecorr_probQCDbb_sort[indexTag[1]] ; dnnDecorr_probQCDbb_c = dnnDecorr_probQCDbb_sort[indexTag[2]] ;
        dnnDecorr_probQCDcc_a = dnnDecorr_probQCDcc_sort[indexTag[0]] ; dnnDecorr_probQCDcc_b = dnnDecorr_probQCDcc_sort[indexTag[1]] ; dnnDecorr_probQCDcc_c = dnnDecorr_probQCDcc_sort[indexTag[2]] ;
        dnnDecorr_probQCDb_a = dnnDecorr_probQCDb_sort[indexTag[0]] ; dnnDecorr_probQCDb_b = dnnDecorr_probQCDb_sort[indexTag[1]] ; dnnDecorr_probQCDb_c = dnnDecorr_probQCDb_sort[indexTag[2]] ;
        dnnDecorr_probQCDc_a = dnnDecorr_probQCDc_sort[indexTag[0]] ; dnnDecorr_probQCDc_b = dnnDecorr_probQCDc_sort[indexTag[1]] ; dnnDecorr_probQCDc_c = dnnDecorr_probQCDc_sort[indexTag[2]] ;
        dnnDecorr_probQCDothers_a = dnnDecorr_probQCDothers_sort[indexTag[0]] ; dnnDecorr_probQCDothers_b = dnnDecorr_probQCDothers_sort[indexTag[1]] ; dnnDecorr_probQCDothers_c = dnnDecorr_probQCDothers_sort[indexTag[2]] ;

    }

}







#endif
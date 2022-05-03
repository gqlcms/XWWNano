#ifndef _VVVTree_AK8_H4q_Order_
#define _VVVTree_AK8_H4q_Order_


void EDBR2PKUTree::Deep_H4q_Ordered() {
  //  Deep_H4q_Ordered_Init(); 
    Deep_H4q_Ordered_P4();
  //  std::cout<<" H4q ordered P4 done"<<std::endl;
    // Deep_H4q_Ordered_RawScore();
    Deep_H4q_Ordered_CombineScore();
    //std::cout<<" H4q ordered CombineScore done"<<std::endl;

   // Deep_H4q_Ordered_ParticleNetH4qre();
  //  Deep_H4q_Ordered_Nsubjetness();

}

void EDBR2PKUTree::Deep_H4q_Ordered_Init() {
//Just use the  jetAK8puppi_V1_probHww4q tagger to order the 2/3 jet for now.
// jetAK8puppi_V1_probHww4q_max;
// jetAK8puppi_V1_probHww4q_mid;
// jetAK8puppi_V1_probHww4q_min;
}

void EDBR2PKUTree::Deep_H4q_Ordered_P4() {
    Mj_a = -99; Mj_b = -99; Mj_c = -99;
    PTj_a = -99; PTj_b = -99; PTj_c = -99;
    Etaj_a = -99; Etaj_b = -99; Etaj_c = -99;
    Phij_a = -99; Phij_b = -99; Phij_c = -99;

    if( PTj_2 > 0 && PTj_3 < 0){//Nj8 =2 ;
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_V1_sort[2] = {  jetAK8puppi_V1_probHww4q_max ,  jetAK8puppi_V1_probHww4q_min };
        TMath::Sort(2, jetAK8puppi_V1_sort, indexTag, 1);

        Double_t Mj_sort[2] = { Mj_max , Mj_min }; 
        Double_t PTj_sort[2] = { PTj_max , PTj_min }; 
        Double_t Etaj_sort[2] = { Etaj_max , Etaj_min }; 
        Double_t Phij_sort[2] = { Phij_max , Phij_min }; 

        Mj_a = Mj_sort[indexTag[0]] ; Mj_c = Mj_sort[indexTag[1]] ;
        PTj_a = PTj_sort[indexTag[0]] ; PTj_c = PTj_sort[indexTag[1]] ;
        Etaj_a = Etaj_sort[indexTag[0]] ; Etaj_c = Etaj_sort[indexTag[1]] ;
        Phij_a = Phij_sort[indexTag[0]] ; Phij_c = Phij_sort[indexTag[1]] ;


        if ( Mj_a < 30 ){     
            //Which means the Higgs candidate is more likely a gluon/quark candidate.
            //As well as the tagger performance will be bad at low jet mass.
            //We choose the other jet to be the Higgs candidate.
        Mj_a = Mj_sort[indexTag[1]] ; Mj_c = Mj_sort[indexTag[0]] ;
        PTj_a = PTj_sort[indexTag[1]] ; PTj_c = PTj_sort[indexTag[0]] ;
        Etaj_a = Etaj_sort[indexTag[1]] ; Etaj_c = Etaj_sort[indexTag[0]] ;
        Phij_a = Phij_sort[indexTag[1]] ; Phij_c = Phij_sort[indexTag[0]] ;
        }
    }

    if( PTj_3 > 0 && PTj_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_V1_sort[3] = {  jetAK8puppi_V1_probHww4q_max , jetAK8puppi_V1_probHww4q_mid,  jetAK8puppi_V1_probHww4q_min };
        TMath::Sort(3, jetAK8puppi_V1_sort, indexTag, 1);

        Double_t Mj_sort[3] = { Mj_max , Mj_mid , Mj_min }; 
        Double_t PTj_sort[3] = { PTj_max , PTj_mid , PTj_min }; 
        Double_t Etaj_sort[3] = { Etaj_max , Etaj_mid , Etaj_min }; 
        Double_t Phij_sort[3] = { Phij_max , Phij_mid , Phij_min }; 

        Mj_a = Mj_sort[indexTag[0]] ; Mj_b = Mj_sort[indexTag[1]] ; Mj_c = Mj_sort[indexTag[2]] ;
        PTj_a = PTj_sort[indexTag[0]] ; PTj_b = PTj_sort[indexTag[1]] ; PTj_c = PTj_sort[indexTag[2]] ;
        Etaj_a = Etaj_sort[indexTag[0]] ; Etaj_b = Etaj_sort[indexTag[1]] ; Etaj_c = Etaj_sort[indexTag[2]] ;
        Phij_a = Phij_sort[indexTag[0]] ; Phij_b = Phij_sort[indexTag[1]] ; Phij_c = Phij_sort[indexTag[2]] ;

        if ( Mj_a < 30 ){   

            //Which means the Higgs candidate is more likely a gluon/quark candidate.
            //As well as the tagger performance will be bad at low jet mass.
            //We choose another jet to be the Higgs candidate.


            Int_t *indexTag_2=new Int_t[2];
            Double_t jetAK8puppi_V1_sort_2[2] = { jetAK8puppi_V1_sort[indexTag[1]] , jetAK8puppi_V1_sort[indexTag[2]] };
        
        Double_t Mj_sort_2[2] = { Mj_b, Mj_c}; 
        Double_t PTj_sort_2[2] = { PTj_b , PTj_c}; 
        Double_t Etaj_sort_2[2] = { Etaj_b , Etaj_c}; 
        Double_t Phij_sort_2[2] = { Phij_b,Phij_c}; 


            TMath::Sort(2, jetAK8puppi_V1_sort_2, indexTag_2, 1);
        
        Mj_a = Mj_sort_2[indexTag_2[0]] ; Mj_b = Mj_sort_2[indexTag_2[1]] ; Mj_c = Mj_sort[indexTag[0]] ;
        PTj_a = PTj_sort_2[indexTag_2[0]] ; PTj_b = PTj_sort_2[indexTag_2[1]] ; PTj_c = PTj_sort[indexTag[0]] ;
        Etaj_a = Etaj_sort_2[indexTag_2[0]] ; Etaj_b = Etaj_sort_2[indexTag_2[1]] ; Etaj_c = Etaj_sort[indexTag[0]] ;
        Phij_a = Phij_sort_2[indexTag_2[0]] ; Phij_b = Phij_sort_2[indexTag_2[1]] ; Phij_c = Phij_sort[indexTag[0]] ;
        
        }


    }
}

void EDBR2PKUTree::Deep_H4q_Ordered_Nsubjetness() {
    FatJet_tau1_a = -99; FatJet_tau1_b = -99 ; FatJet_tau1_c = -99;
    FatJet_tau2_a = -99; FatJet_tau2_b = -99 ; FatJet_tau2_c = -99;
    FatJet_tau3_a = -99; FatJet_tau3_b = -99 ; FatJet_tau3_c = -99;
    FatJet_tau4_a = -99; FatJet_tau4_b = -99 ; FatJet_tau4_c = -99;

    float FatJet_tau1_max , FatJet_tau1_mid , FatJet_tau1_min;
    float FatJet_tau2_max , FatJet_tau2_mid , FatJet_tau2_min;
    float FatJet_tau3_max , FatJet_tau3_mid , FatJet_tau3_min;
    float FatJet_tau4_max , FatJet_tau4_mid , FatJet_tau4_min;
    if( PTj_2 > 0 && PTj_3 < 0 ){
        Int_t *index=new Int_t[2];
        Double_t M[2] = { Mj , Mj_2 };
        TMath::Sort(2, M, index, 1);
        Double_t tau1_[2] = { v_FatJet_tau1_[0] , v_FatJet_tau1_[1] }; 
        Double_t tau2_[2] = { v_FatJet_tau2_[0] , v_FatJet_tau2_[1] }; 
        Double_t tau3_[2] = { v_FatJet_tau3_[0] , v_FatJet_tau3_[1] }; 
        Double_t tau4_[2] = { v_FatJet_tau4_[0] , v_FatJet_tau4_[1] }; 
        FatJet_tau1_max = tau1_[0] ; FatJet_tau1_min = tau1_[1] ; 
        FatJet_tau2_max = tau2_[0] ; FatJet_tau2_min = tau2_[1] ; 
        FatJet_tau3_max = tau3_[0] ; FatJet_tau3_min = tau3_[1] ; 
        FatJet_tau4_max = tau4_[0] ; FatJet_tau4_min = tau4_[1] ; 
    }
    if( PTj_3 > 0 && PTj_4 < 0 ){
        Int_t *index=new Int_t[3];
        Double_t M[3] = { Mj , Mj_2, Mj_3 };
        TMath::Sort(3, M, index, 1);
        Double_t tau1_[3] = { v_FatJet_tau1_[0] , v_FatJet_tau1_[1] , v_FatJet_tau1_[2] }; 
        Double_t tau2_[3] = { v_FatJet_tau2_[0] , v_FatJet_tau2_[1] , v_FatJet_tau2_[2] }; 
        Double_t tau3_[3] = { v_FatJet_tau3_[0] , v_FatJet_tau3_[1] , v_FatJet_tau3_[2] }; 
        Double_t tau4_[3] = { v_FatJet_tau4_[0] , v_FatJet_tau4_[1] , v_FatJet_tau4_[2] }; 
        FatJet_tau1_max = tau1_[0] ; FatJet_tau1_mid = tau1_[1] ; FatJet_tau1_min = tau1_[2] ; 
        FatJet_tau2_max = tau2_[0] ; FatJet_tau2_mid = tau2_[1] ; FatJet_tau2_min = tau2_[2] ; 
        FatJet_tau3_max = tau3_[0] ; FatJet_tau3_mid = tau3_[1] ; FatJet_tau3_min = tau3_[2] ; 
        FatJet_tau4_max = tau4_[0] ; FatJet_tau4_mid = tau4_[1] ; FatJet_tau4_min = tau4_[2] ; 
    }

    if( PTj_2 > 0 && PTj_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_deep_W_sort[2] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(2, jetAK8puppi_deep_W_sort, indexTag, 1);

        Double_t tau1_sort[2] = { FatJet_tau1_max , FatJet_tau1_min }; 
        Double_t tau2_sort[2] = { FatJet_tau2_max , FatJet_tau2_min }; 
        Double_t tau3_sort[2] = { FatJet_tau3_max , FatJet_tau3_min }; 
        Double_t tau4_sort[2] = { FatJet_tau4_max , FatJet_tau4_min }; 

        FatJet_tau1_a = tau1_sort[indexTag[0]] ; FatJet_tau1_c = tau1_sort[indexTag[1]] ;
        FatJet_tau2_a = tau2_sort[indexTag[0]] ; FatJet_tau2_c = tau2_sort[indexTag[1]] ;
        FatJet_tau3_a = tau3_sort[indexTag[0]] ; FatJet_tau3_c = tau3_sort[indexTag[1]] ;
        FatJet_tau4_a = tau4_sort[indexTag[0]] ; FatJet_tau4_c = tau4_sort[indexTag[1]] ;
    }
    if( PTj_3 > 0 && PTj_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_deep_W_sort[3] = { jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_mid, jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(3, jetAK8puppi_deep_W_sort, indexTag, 1);

        Double_t tau1_sort[3] = { FatJet_tau1_max , FatJet_tau1_mid , FatJet_tau1_min }; 
        FatJet_tau1_a = tau1_sort[indexTag[0]] ; FatJet_tau1_b = tau1_sort[indexTag[1]] ; FatJet_tau1_c = tau1_sort[indexTag[2]] ;
        Double_t tau2_sort[3] = { FatJet_tau2_max , FatJet_tau2_mid , FatJet_tau2_min }; 
        FatJet_tau2_a = tau2_sort[indexTag[0]] ; FatJet_tau2_b = tau2_sort[indexTag[1]] ; FatJet_tau2_c = tau2_sort[indexTag[2]] ;
        Double_t tau3_sort[3] = { FatJet_tau3_max , FatJet_tau3_mid , FatJet_tau3_min }; 
        FatJet_tau3_a = tau3_sort[indexTag[0]] ; FatJet_tau3_b = tau3_sort[indexTag[1]] ; FatJet_tau3_c = tau3_sort[indexTag[2]] ;
        Double_t tau4_sort[3] = { FatJet_tau4_max , FatJet_tau4_mid , FatJet_tau4_min }; 
        FatJet_tau4_a = tau4_sort[indexTag[0]] ; FatJet_tau4_b = tau4_sort[indexTag[1]] ; FatJet_tau4_c = tau4_sort[indexTag[2]] ;
    }
}


void EDBR2PKUTree::Deep_H4q_Ordered_CombineScore() {
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

    //New tagger part.
  V1_evqqvsQCD_a=-99;
  V1_evqqvsQCD_b=-99;
  V1_evqqvsQCD_c=-99;

  V1_mvqqvsQCD_a=-99;
  V1_mvqqvsQCD_b=-99;
  V1_mvqqvsQCD_c=-99;

  V1_emvqqvsQCD_a=-99;
  V1_emvqqvsQCD_b=-99;
  V1_emvqqvsQCD_c=-99;

  V1_hadtauvqqvsQCD_a=-99;
  V1_hadtauvqqvsQCD_b=-99;
  V1_hadtauvqqvsQCD_c=-99;


  V1_leptauevqqvsQCD_a=-99;
  V1_leptauevqqvsQCD_b=-99;
  V1_leptauevqqvsQCD_c=-99;


  V1_leptaumvqqvsQCD_a=-99;
  V1_leptaumvqqvsQCD_b=-99;
  V1_leptaumvqqvsQCD_c=-99;

    jetAK8puppi_V1_probHww3q_a=-99;    
    jetAK8puppi_V1_probHww3q_b=-99;    
    jetAK8puppi_V1_probHww3q_c=-99;
    jetAK8puppi_V1_probHww4q_a=-99;
    jetAK8puppi_V1_probHww4q_b=-99;
    jetAK8puppi_V1_probHww4q_c=-99;
    jetAK8puppi_V1_probHww4qvsQCD_a=-99;
    jetAK8puppi_V1_probHww4qvsQCD_b=-99;
    jetAK8puppi_V1_probHww4qvsQCD_c=-99;
    jetAK8puppi_V1_probHww4q3qvsQCD_a=-99;
    jetAK8puppi_V1_probHww4q3qvsQCD_b=-99;
    jetAK8puppi_V1_probHww4q3qvsQCD_c=-99;
    jetAK8puppi_V1_probHwwevqq_a=-99;
    jetAK8puppi_V1_probHwwevqq_b=-99;
    jetAK8puppi_V1_probHwwevqq_c=-99;
    jetAK8puppi_V1_probHwwmvqq_a=-99;
    jetAK8puppi_V1_probHwwmvqq_b=-99;
    jetAK8puppi_V1_probHwwmvqq_c=-99;
    jetAK8puppi_V1_probHwwhadtauvqq_a=-99;
    jetAK8puppi_V1_probHwwhadtauvqq_b=-99;
    jetAK8puppi_V1_probHwwhadtauvqq_c=-99;
    jetAK8puppi_V1_probHwwleptauevqq_a=-99;
    jetAK8puppi_V1_probHwwleptauevqq_b=-99;
    jetAK8puppi_V1_probHwwleptauevqq_c=-99;
    jetAK8puppi_V1_probHwwleptaumvqq_a=-99;
    jetAK8puppi_V1_probHwwleptaumvqq_b=-99;
    jetAK8puppi_V1_probHwwleptaumvqq_c=-99;
    jetAK8puppi_V1_probQCDb_a=-99;
    jetAK8puppi_V1_probQCDb_b=-99;
    jetAK8puppi_V1_probQCDb_c=-99;
    jetAK8puppi_V1_probQCDbb_a=-99;
    jetAK8puppi_V1_probQCDbb_b=-99;
    jetAK8puppi_V1_probQCDbb_c=-99;
    jetAK8puppi_V1_probQCDc_a=-99;
    jetAK8puppi_V1_probQCDc_b=-99;
    jetAK8puppi_V1_probQCDc_c=-99;
    jetAK8puppi_V1_probQCDcc_a=-99;
    jetAK8puppi_V1_probQCDcc_b=-99;
    jetAK8puppi_V1_probQCDcc_c=-99;
    jetAK8puppi_V1_probQCDothers_a=-99;
    jetAK8puppi_V1_probQCDothers_b=-99;
    jetAK8puppi_V1_probQCDothers_c=-99;


    //New tagger part ends.







    if( PTj_2 > 0 && PTj_3 < 0){
 
        
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_V1_sort[2] = {  jetAK8puppi_V1_probHww4q ,  jetAK8puppi_V1_probHww4q_2 };

        TMath::Sort(2, jetAK8puppi_V1_sort, indexTag, 1);

        
        Double_t Mj_sort[2] = { Mj , Mj_2 }; 
        Double_t Mja_sort;

        Mja_sort = Mj_sort[indexTag[0]] ; 


        Double_t jetAK8puppi_V1_probHww3q_sort[2] = {jetAK8puppi_V1_probHww3q,jetAK8puppi_V1_probHww3q_2};
        Double_t jetAK8puppi_V1_probHww4q_sort[2] = {jetAK8puppi_V1_probHww4q,jetAK8puppi_V1_probHww4q_2};
        Double_t jetAK8puppi_V1_probHww4qvsQCD_sort[2] = {jetAK8puppi_V1_probHww4qvsQCD,jetAK8puppi_V1_probHww4qvsQCD_2};
        Double_t jetAK8puppi_V1_probHww4q3qvsQCD_sort[2] = {jetAK8puppi_V1_probHww4q3qvsQCD,jetAK8puppi_V1_probHww4q3qvsQCD_2};
        Double_t jetAK8puppi_V1_probHwwevqq_sort[2] = {jetAK8puppi_V1_probHwwevqq,jetAK8puppi_V1_probHwwevqq_2};
        Double_t jetAK8puppi_V1_probHwwmvqq_sort[2] = {jetAK8puppi_V1_probHwwmvqq,jetAK8puppi_V1_probHwwmvqq_2};
        Double_t jetAK8puppi_V1_probHwwhadtauvqq_sort[2] = {jetAK8puppi_V1_probHwwhadtauvqq,jetAK8puppi_V1_probHwwhadtauvqq_2};
        Double_t jetAK8puppi_V1_probHwwleptauevqq_sort[2] = {jetAK8puppi_V1_probHwwleptauevqq,jetAK8puppi_V1_probHwwleptauevqq_2};
        Double_t jetAK8puppi_V1_probHwwleptaumvqq_sort[2] = {jetAK8puppi_V1_probHwwleptaumvqq,jetAK8puppi_V1_probHwwleptaumvqq_2};
        Double_t jetAK8puppi_V1_probQCDb_sort[2] = {jetAK8puppi_V1_probQCDb,jetAK8puppi_V1_probQCDb_2};
        Double_t jetAK8puppi_V1_probQCDbb_sort[2] = {jetAK8puppi_V1_probQCDbb,jetAK8puppi_V1_probQCDbb_2};
        Double_t jetAK8puppi_V1_probQCDc_sort[2] = {jetAK8puppi_V1_probQCDc,jetAK8puppi_V1_probQCDc_2};
        Double_t jetAK8puppi_V1_probQCDcc_sort[2] = {jetAK8puppi_V1_probQCDcc,jetAK8puppi_V1_probQCDcc_2};
        Double_t jetAK8puppi_V1_probQCDothers_sort[2] = {jetAK8puppi_V1_probQCDothers,jetAK8puppi_V1_probQCDothers_2};


    jetAK8puppi_V1_probHww3q_a=jetAK8puppi_V1_probHww3q_sort[indexTag[0]];
    jetAK8puppi_V1_probHww3q_c=jetAK8puppi_V1_probHww3q_sort[indexTag[1]];
    jetAK8puppi_V1_probHww4q_a=jetAK8puppi_V1_probHww4q_sort[indexTag[0]];
    jetAK8puppi_V1_probHww4q_c=jetAK8puppi_V1_probHww4q_sort[indexTag[1]];
    jetAK8puppi_V1_probHww4qvsQCD_a=jetAK8puppi_V1_probHww4qvsQCD_sort[indexTag[0]];
    jetAK8puppi_V1_probHww4qvsQCD_c=jetAK8puppi_V1_probHww4qvsQCD_sort[indexTag[1]];
    jetAK8puppi_V1_probHww4q3qvsQCD_a=jetAK8puppi_V1_probHww4q3qvsQCD_sort[indexTag[0]];
    jetAK8puppi_V1_probHww4q3qvsQCD_c=jetAK8puppi_V1_probHww4q3qvsQCD_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwevqq_a=jetAK8puppi_V1_probHwwevqq_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwevqq_c=jetAK8puppi_V1_probHwwevqq_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwmvqq_a=jetAK8puppi_V1_probHwwmvqq_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwmvqq_c=jetAK8puppi_V1_probHwwmvqq_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwhadtauvqq_a=jetAK8puppi_V1_probHwwhadtauvqq_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwhadtauvqq_c=jetAK8puppi_V1_probHwwhadtauvqq_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwleptauevqq_a=jetAK8puppi_V1_probHwwleptauevqq_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwleptauevqq_c=jetAK8puppi_V1_probHwwleptauevqq_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwleptaumvqq_a=jetAK8puppi_V1_probHwwleptaumvqq_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwleptaumvqq_c=jetAK8puppi_V1_probHwwleptaumvqq_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDb_a=jetAK8puppi_V1_probQCDb_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDb_c=jetAK8puppi_V1_probQCDb_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDbb_a=jetAK8puppi_V1_probQCDbb_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDbb_c=jetAK8puppi_V1_probQCDbb_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDc_a=jetAK8puppi_V1_probQCDc_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDc_c=jetAK8puppi_V1_probQCDc_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDcc_a=jetAK8puppi_V1_probQCDcc_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDcc_c=jetAK8puppi_V1_probQCDcc_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDothers_a=jetAK8puppi_V1_probQCDothers_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDothers_c=jetAK8puppi_V1_probQCDothers_sort[indexTag[1]];



        if ( Mja_sort < 30 ){     


            //Which means the Higgs candidate is more likely a gluon/quark candidate.
            //As well as the tagger performance will be bad at low jet mass.
            //We choose the other jet to be the Higgs candidate.



    jetAK8puppi_V1_probHww3q_a=jetAK8puppi_V1_probHww3q_sort[indexTag[1]];
    jetAK8puppi_V1_probHww3q_c=jetAK8puppi_V1_probHww3q_sort[indexTag[0]];
    jetAK8puppi_V1_probHww4q_a=jetAK8puppi_V1_probHww4q_sort[indexTag[1]];
    jetAK8puppi_V1_probHww4q_c=jetAK8puppi_V1_probHww4q_sort[indexTag[0]];
    jetAK8puppi_V1_probHww4qvsQCD_a=jetAK8puppi_V1_probHww4qvsQCD_sort[indexTag[1]];
    jetAK8puppi_V1_probHww4qvsQCD_c=jetAK8puppi_V1_probHww4qvsQCD_sort[indexTag[0]];
    jetAK8puppi_V1_probHww4q3qvsQCD_a=jetAK8puppi_V1_probHww4q3qvsQCD_sort[indexTag[1]];
    jetAK8puppi_V1_probHww4q3qvsQCD_c=jetAK8puppi_V1_probHww4q3qvsQCD_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwevqq_a=jetAK8puppi_V1_probHwwevqq_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwevqq_c=jetAK8puppi_V1_probHwwevqq_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwmvqq_a=jetAK8puppi_V1_probHwwmvqq_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwmvqq_c=jetAK8puppi_V1_probHwwmvqq_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwhadtauvqq_a=jetAK8puppi_V1_probHwwhadtauvqq_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwhadtauvqq_c=jetAK8puppi_V1_probHwwhadtauvqq_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwleptauevqq_a=jetAK8puppi_V1_probHwwleptauevqq_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwleptauevqq_c=jetAK8puppi_V1_probHwwleptauevqq_sort[indexTag[0]];
    jetAK8puppi_V1_probHwwleptaumvqq_a=jetAK8puppi_V1_probHwwleptaumvqq_sort[indexTag[1]];
    jetAK8puppi_V1_probHwwleptaumvqq_c=jetAK8puppi_V1_probHwwleptaumvqq_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDb_a=jetAK8puppi_V1_probQCDb_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDb_c=jetAK8puppi_V1_probQCDb_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDbb_a=jetAK8puppi_V1_probQCDbb_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDbb_c=jetAK8puppi_V1_probQCDbb_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDc_a=jetAK8puppi_V1_probQCDc_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDc_c=jetAK8puppi_V1_probQCDc_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDcc_a=jetAK8puppi_V1_probQCDcc_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDcc_c=jetAK8puppi_V1_probQCDcc_sort[indexTag[0]];
    jetAK8puppi_V1_probQCDothers_a=jetAK8puppi_V1_probQCDothers_sort[indexTag[1]];
    jetAK8puppi_V1_probQCDothers_c=jetAK8puppi_V1_probQCDothers_sort[indexTag[0]];




        }
    

   


 Double_t probQCDAll_a = jetAK8puppi_V1_probQCDb_a + jetAK8puppi_V1_probQCDbb_a + jetAK8puppi_V1_probQCDc_a + jetAK8puppi_V1_probQCDcc_a + jetAK8puppi_V1_probQCDothers_a;
 Double_t probQCDAll_c = jetAK8puppi_V1_probQCDb_c + jetAK8puppi_V1_probQCDbb_c + jetAK8puppi_V1_probQCDc_c + jetAK8puppi_V1_probQCDcc_c + jetAK8puppi_V1_probQCDothers_c;
 
  V1_evqqvsQCD_a=(jetAK8puppi_V1_probHwwevqq_a)/(jetAK8puppi_V1_probHwwevqq_a + probQCDAll_a);
  V1_evqqvsQCD_c=(jetAK8puppi_V1_probHwwevqq_c)/(jetAK8puppi_V1_probHwwevqq_c + probQCDAll_c);

  V1_mvqqvsQCD_a=(jetAK8puppi_V1_probHwwmvqq_a)/(jetAK8puppi_V1_probHwwmvqq_a + probQCDAll_a);
  V1_mvqqvsQCD_c=(jetAK8puppi_V1_probHwwmvqq_c)/(jetAK8puppi_V1_probHwwmvqq_c + probQCDAll_c);

  V1_hadtauvqqvsQCD_a=(jetAK8puppi_V1_probHwwhadtauvqq_a)/(jetAK8puppi_V1_probHwwhadtauvqq_a + probQCDAll_a);
  V1_hadtauvqqvsQCD_c=(jetAK8puppi_V1_probHwwhadtauvqq_c)/(jetAK8puppi_V1_probHwwhadtauvqq_c + probQCDAll_c);

  V1_leptauevqqvsQCD_a=(jetAK8puppi_V1_probHwwleptauevqq_a)/(jetAK8puppi_V1_probHwwleptauevqq_a + probQCDAll_a);
  V1_leptauevqqvsQCD_c=(jetAK8puppi_V1_probHwwleptauevqq_c)/(jetAK8puppi_V1_probHwwleptauevqq_c + probQCDAll_c);

  V1_leptaumvqqvsQCD_a=(jetAK8puppi_V1_probHwwleptaumvqq_a)/(jetAK8puppi_V1_probHwwleptaumvqq_a + probQCDAll_a);
  V1_leptaumvqqvsQCD_c=(jetAK8puppi_V1_probHwwleptaumvqq_c)/(jetAK8puppi_V1_probHwwleptaumvqq_c + probQCDAll_c);

  V1_emvqqvsQCD_a=(jetAK8puppi_V1_probHwwevqq_a+jetAK8puppi_V1_probHwwmvqq_a)/(jetAK8puppi_V1_probHwwevqq_a + jetAK8puppi_V1_probHwwmvqq_a + probQCDAll_a);
  V1_emvqqvsQCD_c=(jetAK8puppi_V1_probHwwevqq_c+jetAK8puppi_V1_probHwwmvqq_c)/(jetAK8puppi_V1_probHwwevqq_c + jetAK8puppi_V1_probHwwmvqq_c + probQCDAll_c);



        
 
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
        Double_t jetAK8puppi_V1_sort[3] = {  jetAK8puppi_V1_probHww4q , jetAK8puppi_V1_probHww4q_2,  jetAK8puppi_V1_probHww4q_3 };
        TMath::Sort(3, jetAK8puppi_V1_sort, indexTag, 1);

        Double_t Mj_sort[3] = { Mj , Mj_2 , Mj_3 }; 
        Double_t Mj_a_sort = Mj_sort[indexTag[0]] ; 


       Double_t jetAK8puppi_V1_probHww3q_sort[3] = {jetAK8puppi_V1_probHww3q,jetAK8puppi_V1_probHww3q_2,jetAK8puppi_V1_probHww3q_3};
       Double_t jetAK8puppi_V1_probHww4q_sort[3] = {jetAK8puppi_V1_probHww4q,jetAK8puppi_V1_probHww4q_2,jetAK8puppi_V1_probHww4q_3};
       Double_t jetAK8puppi_V1_probHww4qvsQCD_sort[3] = {jetAK8puppi_V1_probHww4qvsQCD,jetAK8puppi_V1_probHww4qvsQCD_2,jetAK8puppi_V1_probHww4qvsQCD_3};
       Double_t jetAK8puppi_V1_probHww4q3qvsQCD_sort[3] = {jetAK8puppi_V1_probHww4q3qvsQCD,jetAK8puppi_V1_probHww4q3qvsQCD_2,jetAK8puppi_V1_probHww4q3qvsQCD_3};
       Double_t jetAK8puppi_V1_probHwwevqq_sort[3] = {jetAK8puppi_V1_probHwwevqq,jetAK8puppi_V1_probHwwevqq_2,jetAK8puppi_V1_probHwwevqq_3};
       Double_t jetAK8puppi_V1_probHwwmvqq_sort[3] = {jetAK8puppi_V1_probHwwmvqq,jetAK8puppi_V1_probHwwmvqq_2,jetAK8puppi_V1_probHwwmvqq_3};
       Double_t jetAK8puppi_V1_probHwwhadtauvqq_sort[3] = {jetAK8puppi_V1_probHwwhadtauvqq,jetAK8puppi_V1_probHwwhadtauvqq_2,jetAK8puppi_V1_probHwwhadtauvqq_3};
       Double_t jetAK8puppi_V1_probHwwleptauevqq_sort[3] = {jetAK8puppi_V1_probHwwleptauevqq,jetAK8puppi_V1_probHwwleptauevqq_2,jetAK8puppi_V1_probHwwleptauevqq_3};
       Double_t jetAK8puppi_V1_probHwwleptaumvqq_sort[3] = {jetAK8puppi_V1_probHwwleptaumvqq,jetAK8puppi_V1_probHwwleptaumvqq_2,jetAK8puppi_V1_probHwwleptaumvqq_3};
       Double_t jetAK8puppi_V1_probQCDb_sort[3] = {jetAK8puppi_V1_probQCDb,jetAK8puppi_V1_probQCDb_2,jetAK8puppi_V1_probQCDb_3};
       Double_t jetAK8puppi_V1_probQCDbb_sort[3] = {jetAK8puppi_V1_probQCDbb,jetAK8puppi_V1_probQCDbb_2,jetAK8puppi_V1_probQCDbb_3};
       Double_t jetAK8puppi_V1_probQCDcc_sort[3] = {jetAK8puppi_V1_probQCDcc,jetAK8puppi_V1_probQCDcc_2,jetAK8puppi_V1_probQCDcc_3};
       Double_t jetAK8puppi_V1_probQCDc_sort[3] = {jetAK8puppi_V1_probQCDc,jetAK8puppi_V1_probQCDc_2,jetAK8puppi_V1_probQCDc_3};
       Double_t jetAK8puppi_V1_probQCDothers_sort[3] = {jetAK8puppi_V1_probQCDothers,jetAK8puppi_V1_probQCDothers_2,jetAK8puppi_V1_probQCDothers_3};



        jetAK8puppi_V1_probHww3q_a=jetAK8puppi_V1_probHww3q_sort[indexTag[0]];
        jetAK8puppi_V1_probHww3q_b=jetAK8puppi_V1_probHww3q_sort[indexTag[1]];
        jetAK8puppi_V1_probHww3q_c=jetAK8puppi_V1_probHww3q_sort[indexTag[2]];

        jetAK8puppi_V1_probHww4q_a=jetAK8puppi_V1_probHww4q_sort[indexTag[0]];
        jetAK8puppi_V1_probHww4q_b=jetAK8puppi_V1_probHww4q_sort[indexTag[1]];
        jetAK8puppi_V1_probHww4q_c=jetAK8puppi_V1_probHww4q_sort[indexTag[2]];

        jetAK8puppi_V1_probHww4qvsQCD_a=jetAK8puppi_V1_probHww4qvsQCD_sort[indexTag[0]];
        jetAK8puppi_V1_probHww4qvsQCD_b=jetAK8puppi_V1_probHww4qvsQCD_sort[indexTag[1]];
        jetAK8puppi_V1_probHww4qvsQCD_c=jetAK8puppi_V1_probHww4qvsQCD_sort[indexTag[2]];

        jetAK8puppi_V1_probHww4q3qvsQCD_a=jetAK8puppi_V1_probHww4q3qvsQCD_sort[indexTag[0]];
        jetAK8puppi_V1_probHww4q3qvsQCD_b=jetAK8puppi_V1_probHww4q3qvsQCD_sort[indexTag[1]];
        jetAK8puppi_V1_probHww4q3qvsQCD_c=jetAK8puppi_V1_probHww4q3qvsQCD_sort[indexTag[2]];

        jetAK8puppi_V1_probHwwevqq_a=jetAK8puppi_V1_probHwwevqq_sort[indexTag[0]];
        jetAK8puppi_V1_probHwwevqq_b=jetAK8puppi_V1_probHwwevqq_sort[indexTag[1]];
        jetAK8puppi_V1_probHwwevqq_c=jetAK8puppi_V1_probHwwevqq_sort[indexTag[2]];

        jetAK8puppi_V1_probHwwmvqq_a=jetAK8puppi_V1_probHwwmvqq_sort[indexTag[0]];
        jetAK8puppi_V1_probHwwmvqq_b=jetAK8puppi_V1_probHwwmvqq_sort[indexTag[1]];
        jetAK8puppi_V1_probHwwmvqq_c=jetAK8puppi_V1_probHwwmvqq_sort[indexTag[2]];

        jetAK8puppi_V1_probHwwhadtauvqq_a=jetAK8puppi_V1_probHwwhadtauvqq_sort[indexTag[0]];
        jetAK8puppi_V1_probHwwhadtauvqq_b=jetAK8puppi_V1_probHwwhadtauvqq_sort[indexTag[1]];
        jetAK8puppi_V1_probHwwhadtauvqq_c=jetAK8puppi_V1_probHwwhadtauvqq_sort[indexTag[2]];

        jetAK8puppi_V1_probHwwleptauevqq_a=jetAK8puppi_V1_probHwwleptauevqq_sort[indexTag[0]];
        jetAK8puppi_V1_probHwwleptauevqq_b=jetAK8puppi_V1_probHwwleptauevqq_sort[indexTag[1]];
        jetAK8puppi_V1_probHwwleptauevqq_c=jetAK8puppi_V1_probHwwleptauevqq_sort[indexTag[2]];

        jetAK8puppi_V1_probHwwleptaumvqq_a=jetAK8puppi_V1_probHwwleptaumvqq_sort[indexTag[0]];
        jetAK8puppi_V1_probHwwleptaumvqq_b=jetAK8puppi_V1_probHwwleptaumvqq_sort[indexTag[1]];
        jetAK8puppi_V1_probHwwleptaumvqq_c=jetAK8puppi_V1_probHwwleptaumvqq_sort[indexTag[2]];

        jetAK8puppi_V1_probQCDc_a=jetAK8puppi_V1_probQCDc_sort[indexTag[0]];
        jetAK8puppi_V1_probQCDc_b=jetAK8puppi_V1_probQCDc_sort[indexTag[1]];
        jetAK8puppi_V1_probQCDc_c=jetAK8puppi_V1_probQCDc_sort[indexTag[2]];

        jetAK8puppi_V1_probQCDcc_a=jetAK8puppi_V1_probQCDcc_sort[indexTag[0]];
        jetAK8puppi_V1_probQCDcc_b=jetAK8puppi_V1_probQCDcc_sort[indexTag[1]];
        jetAK8puppi_V1_probQCDcc_c=jetAK8puppi_V1_probQCDcc_sort[indexTag[2]];

        jetAK8puppi_V1_probQCDb_a=jetAK8puppi_V1_probQCDb_sort[indexTag[0]];
        jetAK8puppi_V1_probQCDb_b=jetAK8puppi_V1_probQCDb_sort[indexTag[1]];
        jetAK8puppi_V1_probQCDb_c=jetAK8puppi_V1_probQCDb_sort[indexTag[2]];

        jetAK8puppi_V1_probQCDbb_a=jetAK8puppi_V1_probQCDbb_sort[indexTag[0]];
        jetAK8puppi_V1_probQCDbb_b=jetAK8puppi_V1_probQCDbb_sort[indexTag[1]];
        jetAK8puppi_V1_probQCDbb_c=jetAK8puppi_V1_probQCDbb_sort[indexTag[2]];

        jetAK8puppi_V1_probQCDothers_a=jetAK8puppi_V1_probQCDothers_sort[indexTag[0]];
        jetAK8puppi_V1_probQCDothers_b=jetAK8puppi_V1_probQCDothers_sort[indexTag[1]];
        jetAK8puppi_V1_probQCDothers_c=jetAK8puppi_V1_probQCDothers_sort[indexTag[2]];








        if ( Mj_a_sort < 30 ){   

            //Which means the Higgs candidate is more likely a gluon/quark candidate.
            //As well as the tagger performance will be bad at low jet mass.
            //We choose another jet to be the Higgs candidate.


            Int_t *indexTag_2=new Int_t[2];
            Double_t jetAK8puppi_V1_sort_2[2] = { jetAK8puppi_V1_sort[indexTag[1]] , jetAK8puppi_V1_sort[indexTag[2]] };

            //Sort the  other 2 jets, and select the larger tagger one to be the Higgs candidate.
            TMath::Sort(2, jetAK8puppi_V1_sort_2, indexTag_2, 1);


       Double_t jetAK8puppi_V1_probHww3q_sort_2[2] = {jetAK8puppi_V1_probHww3q_b,jetAK8puppi_V1_probHww3q_c};
       Double_t jetAK8puppi_V1_probHww4q_sort_2[2] = {jetAK8puppi_V1_probHww4q_b,jetAK8puppi_V1_probHww4q_c};
       Double_t jetAK8puppi_V1_probHww4qvsQCD_sort_2[2] = {jetAK8puppi_V1_probHww4qvsQCD_b,jetAK8puppi_V1_probHww4qvsQCD_c};
       Double_t jetAK8puppi_V1_probHww4q3qvsQCD_sort_2[2] = {jetAK8puppi_V1_probHww4q3qvsQCD_b,jetAK8puppi_V1_probHww4q3qvsQCD_c};
       Double_t jetAK8puppi_V1_probHwwevqq_sort_2[2] = {jetAK8puppi_V1_probHwwevqq_b,jetAK8puppi_V1_probHwwevqq_c};
       Double_t jetAK8puppi_V1_probHwwmvqq_sort_2[2] = {jetAK8puppi_V1_probHwwmvqq_b,jetAK8puppi_V1_probHwwmvqq_c};
       Double_t jetAK8puppi_V1_probHwwhadtauvqq_sort_2[2] = {jetAK8puppi_V1_probHwwhadtauvqq_b,jetAK8puppi_V1_probHwwhadtauvqq_c};
       Double_t jetAK8puppi_V1_probHwwleptauevqq_sort_2[2] = {jetAK8puppi_V1_probHwwleptauevqq_b,jetAK8puppi_V1_probHwwleptauevqq_c};
       Double_t jetAK8puppi_V1_probHwwleptaumvqq_sort_2[2] = {jetAK8puppi_V1_probHwwleptaumvqq_b,jetAK8puppi_V1_probHwwleptaumvqq_c};
       Double_t jetAK8puppi_V1_probQCDb_sort_2[2] = {jetAK8puppi_V1_probQCDb_b,jetAK8puppi_V1_probQCDb_c};
       Double_t jetAK8puppi_V1_probQCDbb_sort_2[2] = {jetAK8puppi_V1_probQCDbb_b,jetAK8puppi_V1_probQCDbb_c};
       Double_t jetAK8puppi_V1_probQCDcc_sort_2[2] = {jetAK8puppi_V1_probQCDcc_b,jetAK8puppi_V1_probQCDcc_c};
       Double_t jetAK8puppi_V1_probQCDc_sort_2[2] = {jetAK8puppi_V1_probQCDc_b,jetAK8puppi_V1_probQCDc_c};
       Double_t jetAK8puppi_V1_probQCDothers_sort_2[2] = {jetAK8puppi_V1_probQCDothers_b,jetAK8puppi_V1_probQCDothers_c};


        

        jetAK8puppi_V1_probHww3q_a=jetAK8puppi_V1_probHww3q_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probHww3q_b=jetAK8puppi_V1_probHww3q_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probHww3q_c=jetAK8puppi_V1_probHww3q_sort[indexTag[0]];

        jetAK8puppi_V1_probHww4q_a=jetAK8puppi_V1_probHww4q_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probHww4q_b=jetAK8puppi_V1_probHww4q_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probHww4q_c=jetAK8puppi_V1_probHww4q_sort[indexTag[0]];

        jetAK8puppi_V1_probHww4qvsQCD_a=jetAK8puppi_V1_probHww4qvsQCD_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probHww4qvsQCD_b=jetAK8puppi_V1_probHww4qvsQCD_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probHww4qvsQCD_c=jetAK8puppi_V1_probHww4qvsQCD_sort[indexTag[0]];

        jetAK8puppi_V1_probHww4q3qvsQCD_a=jetAK8puppi_V1_probHww4q3qvsQCD_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probHww4q3qvsQCD_b=jetAK8puppi_V1_probHww4q3qvsQCD_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probHww4q3qvsQCD_c=jetAK8puppi_V1_probHww4q3qvsQCD_sort[indexTag[0]];

        jetAK8puppi_V1_probHwwevqq_a=jetAK8puppi_V1_probHwwevqq_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probHwwevqq_b=jetAK8puppi_V1_probHwwevqq_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probHwwevqq_c=jetAK8puppi_V1_probHwwevqq_sort[indexTag[0]];

        jetAK8puppi_V1_probHwwmvqq_a=jetAK8puppi_V1_probHwwmvqq_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probHwwmvqq_b=jetAK8puppi_V1_probHwwmvqq_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probHwwmvqq_c=jetAK8puppi_V1_probHwwmvqq_sort[indexTag[0]];

        jetAK8puppi_V1_probHwwhadtauvqq_a=jetAK8puppi_V1_probHwwhadtauvqq_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probHwwhadtauvqq_b=jetAK8puppi_V1_probHwwhadtauvqq_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probHwwhadtauvqq_c=jetAK8puppi_V1_probHwwhadtauvqq_sort[indexTag[0]];

        jetAK8puppi_V1_probHwwleptauevqq_a=jetAK8puppi_V1_probHwwleptauevqq_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probHwwleptauevqq_b=jetAK8puppi_V1_probHwwleptauevqq_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probHwwleptauevqq_c=jetAK8puppi_V1_probHwwleptauevqq_sort[indexTag[0]];

        jetAK8puppi_V1_probHwwleptaumvqq_a=jetAK8puppi_V1_probHwwleptaumvqq_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probHwwleptaumvqq_b=jetAK8puppi_V1_probHwwleptaumvqq_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probHwwleptaumvqq_c=jetAK8puppi_V1_probHwwleptaumvqq_sort[indexTag[0]];

        jetAK8puppi_V1_probQCDc_a=jetAK8puppi_V1_probQCDc_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probQCDc_b=jetAK8puppi_V1_probQCDc_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probQCDc_c=jetAK8puppi_V1_probQCDc_sort[indexTag[0]];

        jetAK8puppi_V1_probQCDcc_a=jetAK8puppi_V1_probQCDcc_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probQCDcc_b=jetAK8puppi_V1_probQCDcc_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probQCDcc_c=jetAK8puppi_V1_probQCDcc_sort[indexTag[0]];

        jetAK8puppi_V1_probQCDb_a=jetAK8puppi_V1_probQCDb_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probQCDb_b=jetAK8puppi_V1_probQCDb_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probQCDb_c=jetAK8puppi_V1_probQCDb_sort[indexTag[0]];

        jetAK8puppi_V1_probQCDbb_a=jetAK8puppi_V1_probQCDbb_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probQCDbb_b=jetAK8puppi_V1_probQCDbb_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probQCDbb_c=jetAK8puppi_V1_probQCDbb_sort[indexTag[0]];

        jetAK8puppi_V1_probQCDothers_a=jetAK8puppi_V1_probQCDothers_sort_2[indexTag_2[0]];
        jetAK8puppi_V1_probQCDothers_b=jetAK8puppi_V1_probQCDothers_sort_2[indexTag_2[1]];
        jetAK8puppi_V1_probQCDothers_c=jetAK8puppi_V1_probQCDothers_sort[indexTag[0]];  

        }







        
   Double_t probQCDAll_a =jetAK8puppi_V1_probQCDb_a + jetAK8puppi_V1_probQCDbb_a + jetAK8puppi_V1_probQCDc_a + jetAK8puppi_V1_probQCDcc_a + jetAK8puppi_V1_probQCDothers_a;
   Double_t probQCDAll_b =jetAK8puppi_V1_probQCDb_b + jetAK8puppi_V1_probQCDbb_b + jetAK8puppi_V1_probQCDc_b + jetAK8puppi_V1_probQCDcc_b + jetAK8puppi_V1_probQCDothers_b;
   Double_t probQCDAll_c =jetAK8puppi_V1_probQCDb_c + jetAK8puppi_V1_probQCDbb_c + jetAK8puppi_V1_probQCDc_c + jetAK8puppi_V1_probQCDcc_c + jetAK8puppi_V1_probQCDothers_c;

  V1_evqqvsQCD_a=(jetAK8puppi_V1_probHwwevqq_a)/(jetAK8puppi_V1_probHwwevqq_a+probQCDAll_a);
  V1_evqqvsQCD_b=(jetAK8puppi_V1_probHwwevqq_b)/(jetAK8puppi_V1_probHwwevqq_b+probQCDAll_b);
  V1_evqqvsQCD_c=(jetAK8puppi_V1_probHwwevqq_c)/(jetAK8puppi_V1_probHwwevqq_c+probQCDAll_c);

  V1_mvqqvsQCD_a=(jetAK8puppi_V1_probHwwmvqq_a)/(jetAK8puppi_V1_probHwwmvqq_a+probQCDAll_a);
  V1_mvqqvsQCD_b=(jetAK8puppi_V1_probHwwmvqq_b)/(jetAK8puppi_V1_probHwwmvqq_b+probQCDAll_b);
  V1_mvqqvsQCD_c=(jetAK8puppi_V1_probHwwmvqq_c)/(jetAK8puppi_V1_probHwwmvqq_c+probQCDAll_c);

  V1_emvqqvsQCD_a=(jetAK8puppi_V1_probHwwevqq_a+jetAK8puppi_V1_probHwwmvqq_a)/(jetAK8puppi_V1_probHwwevqq_a+jetAK8puppi_V1_probHwwmvqq+probQCDAll_a);
  V1_emvqqvsQCD_b=(jetAK8puppi_V1_probHwwevqq_b+jetAK8puppi_V1_probHwwmvqq_b)/(jetAK8puppi_V1_probHwwevqq_b+jetAK8puppi_V1_probHwwmvqq_b+probQCDAll_b);
  V1_emvqqvsQCD_c=(jetAK8puppi_V1_probHwwevqq_c+jetAK8puppi_V1_probHwwmvqq_c)/(jetAK8puppi_V1_probHwwevqq_c+jetAK8puppi_V1_probHwwmvqq_c+probQCDAll_c);

  V1_hadtauvqqvsQCD_a=(jetAK8puppi_V1_probHwwhadtauvqq_a)/(jetAK8puppi_V1_probHwwhadtauvqq_a+probQCDAll_a);
  V1_hadtauvqqvsQCD_b=(jetAK8puppi_V1_probHwwhadtauvqq_b)/(jetAK8puppi_V1_probHwwhadtauvqq_b+probQCDAll_b);
  V1_hadtauvqqvsQCD_c=(jetAK8puppi_V1_probHwwhadtauvqq_c)/(jetAK8puppi_V1_probHwwhadtauvqq_c+probQCDAll_c);

  V1_leptauevqqvsQCD_a=(jetAK8puppi_V1_probHwwleptauevqq_a)/(jetAK8puppi_V1_probHwwleptauevqq_a+probQCDAll_a);
  V1_leptauevqqvsQCD_b=(jetAK8puppi_V1_probHwwleptauevqq_b)/(jetAK8puppi_V1_probHwwleptauevqq_b+probQCDAll_b);
  V1_leptauevqqvsQCD_c=(jetAK8puppi_V1_probHwwleptauevqq_c)/(jetAK8puppi_V1_probHwwleptauevqq_c+probQCDAll_c);

  V1_leptaumvqqvsQCD_a=(jetAK8puppi_V1_probHwwleptaumvqq_a)/(jetAK8puppi_V1_probHwwleptaumvqq_a+probQCDAll_a);
  V1_leptaumvqqvsQCD_b=(jetAK8puppi_V1_probHwwleptaumvqq_b)/(jetAK8puppi_V1_probHwwleptaumvqq_b+probQCDAll_b);
  V1_leptaumvqqvsQCD_c=(jetAK8puppi_V1_probHwwleptaumvqq_c)/(jetAK8puppi_V1_probHwwleptaumvqq_c+probQCDAll_c);



    }





}

void EDBR2PKUTree::Deep_H4q_Ordered_RawScore() {

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
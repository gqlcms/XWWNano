#ifndef _VVVTree_Rank_AK8_
#define _VVVTree_Rank_AK8_

void EDBR2PKUTree::Rank_AK8() {

    Max_ptO_AK8 = -99;
    Min_ptO_AK8 = -99;
    Mid_ptO_AK8 = -99;
    Wa_ptO_AK8 = -99;
    Wc_ptO_AK8 = -99;
    Wb_ptO_AK8 = -99;
    WHa_ptO_AK8 = -99;
    WHc_ptO_AK8 = -99;
    WHb_ptO_AK8 = -99;
    
    Wa_MO_AK8 = -99;
    Wc_MO_AK8 = -99;
    Wb_MO_AK8 = -99;
    WHa_MO_AK8 = -99;
    WHc_MO_AK8 = -99;
    WHb_MO_AK8 = -99;

    // Mass index as pt ordered

    if( jetAK8puppi_ptJEC_2 > 0 && jetAK8puppi_ptJEC_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_Mass_sort[2] = { Mj , Mj_2 };
        TMath::Sort(2, jetAK8puppi_Mass_sort, indexTag, 1);
        Max_ptO_AK8 = indexTag[0]+1;
        Min_ptO_AK8 = indexTag[1]+1;
        Mid_ptO_AK8 = -99;
    }

    if( jetAK8puppi_ptJEC_3 > 0 && jetAK8puppi_ptJEC_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_Mass_sort[3] = { Mj, Mj_2, Mj_3 };
        TMath::Sort(3, jetAK8puppi_Mass_sort, indexTag, 1);
        Max_ptO_AK8 = indexTag[0]+1;
        Mid_ptO_AK8 = indexTag[1]+1;
        Min_ptO_AK8 = indexTag[2]+1;
    }

    // Wtag index as pt ordered

    if( jetAK8puppi_ptJEC_2 > 0 && jetAK8puppi_ptJEC_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t WTag_sort[2]={ jetAK8puppi_dnnDecorrW , jetAK8puppi_dnnDecorrW_2 };
        TMath::Sort(2, WTag_sort, indexTag, 1);
        Wa_ptO_AK8 = indexTag[0]+1;
        Wc_ptO_AK8 = indexTag[1]+1;
        Wb_ptO_AK8 = -99;
    }

    if( jetAK8puppi_ptJEC_3 > 0 && jetAK8puppi_ptJEC_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t WTag_sort[3]={ jetAK8puppi_dnnDecorrW , jetAK8puppi_dnnDecorrW_2, jetAK8puppi_dnnDecorrW_3 };
        TMath::Sort(3, WTag_sort, indexTag, 1);
        Wa_ptO_AK8 = indexTag[0]+1;
        Wb_ptO_AK8 = indexTag[1]+1;
        Wc_ptO_AK8 = indexTag[2]+1;
    }

    // WHtag index as pt ordered
    double jetAK8puppi_dnnDecorrWH = (jetAK8puppi_dnnDecorrh4q+jetAK8puppi_dnnDecorrw)/(jetAK8puppi_dnnDecorrh4q+jetAK8puppi_dnnDecorrw+jetAK8puppi_dnnDecorrqcd);
    double jetAK8puppi_dnnDecorrWH_2 = (jetAK8puppi_dnnDecorrh4q_2+jetAK8puppi_dnnDecorrw_2)/(jetAK8puppi_dnnDecorrh4q_2+jetAK8puppi_dnnDecorrw_2+jetAK8puppi_dnnDecorrqcd_2);
    double jetAK8puppi_dnnDecorrWH_3 = (jetAK8puppi_dnnDecorrh4q_3+jetAK8puppi_dnnDecorrw_3)/(jetAK8puppi_dnnDecorrh4q_3+jetAK8puppi_dnnDecorrw_3+jetAK8puppi_dnnDecorrqcd_3);

    if( jetAK8puppi_ptJEC_2 > 0 && jetAK8puppi_ptJEC_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t WHTag_sort[2]={ jetAK8puppi_dnnDecorrWH , jetAK8puppi_dnnDecorrWH_2 };
        TMath::Sort(2, WHTag_sort, indexTag, 1);
        WHa_ptO_AK8 = indexTag[0]+1;
        WHc_ptO_AK8 = indexTag[1]+1;
        WHb_ptO_AK8 = -99;
    }

    if( jetAK8puppi_ptJEC_3 > 0 && jetAK8puppi_ptJEC_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t WHTag_sort[3]={ jetAK8puppi_dnnDecorrWH , jetAK8puppi_dnnDecorrWH_2, jetAK8puppi_dnnDecorrWH_3 };
        TMath::Sort(3, WHTag_sort, indexTag, 1);
        WHa_ptO_AK8 = indexTag[0]+1;
        WHb_ptO_AK8 = indexTag[1]+1;
        WHc_ptO_AK8 = indexTag[2]+1;
    }


    // Wtag index as Mass ordered
    if( jetAK8puppi_ptJEC_2 > 0 && jetAK8puppi_ptJEC_3 < 0){
        if (jetAK8puppi_dnnDecorrW_max > jetAK8puppi_dnnDecorrW_min){
            Wa_MO_AK8 = 1;
            Wc_MO_AK8 = 3;
            Wb_MO_AK8 = -99;
        }
        else{
            Wa_MO_AK8 = 3;
            Wc_MO_AK8 = 1;
            Wb_MO_AK8 = -99;
        }
        
    }

    if( jetAK8puppi_ptJEC_3 > 0 && jetAK8puppi_ptJEC_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t WTag_sort[3]={ jetAK8puppi_dnnDecorrW_max , jetAK8puppi_dnnDecorrW_mid, jetAK8puppi_dnnDecorrW_min };
        TMath::Sort(3, WTag_sort, indexTag, 1);
        Wa_MO_AK8 = indexTag[0]+1;
        Wb_MO_AK8 = indexTag[1]+1;
        Wc_MO_AK8 = indexTag[2]+1;
    }

    // WHtag index as pt ordered
    double jetAK8puppi_dnnDecorrWH_max = (jetAK8puppi_dnnDecorrh4q_max+jetAK8puppi_dnnDecorrw_max)/(jetAK8puppi_dnnDecorrh4q_max+jetAK8puppi_dnnDecorrw_max+jetAK8puppi_dnnDecorrqcd_max);
    double jetAK8puppi_dnnDecorrWH_mid = (jetAK8puppi_dnnDecorrh4q_mid+jetAK8puppi_dnnDecorrw_mid)/(jetAK8puppi_dnnDecorrh4q_mid+jetAK8puppi_dnnDecorrw_mid+jetAK8puppi_dnnDecorrqcd_mid);
    double jetAK8puppi_dnnDecorrWH_min = (jetAK8puppi_dnnDecorrh4q_min+jetAK8puppi_dnnDecorrw_min)/(jetAK8puppi_dnnDecorrh4q_min+jetAK8puppi_dnnDecorrw_min+jetAK8puppi_dnnDecorrqcd_min);

    if( jetAK8puppi_ptJEC_2 > 0 && jetAK8puppi_ptJEC_3 < 0){
        if (jetAK8puppi_dnnDecorrWH_max > jetAK8puppi_dnnDecorrWH_min){
            WHa_MO_AK8 = 1;
            WHc_MO_AK8 = 3;
            WHb_MO_AK8 = -99;
        }
        else{
            WHa_MO_AK8 = 3;
            WHc_MO_AK8 = 1;
            WHb_MO_AK8 = -99;
        }
        
    }

    if( jetAK8puppi_ptJEC_3 > 0 && jetAK8puppi_ptJEC_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t WHTag_sort[3]={ jetAK8puppi_dnnDecorrWH_max , jetAK8puppi_dnnDecorrWH_mid, jetAK8puppi_dnnDecorrWH_min };
        TMath::Sort(3, WHTag_sort, indexTag, 1);
        WHa_MO_AK8 = indexTag[0]+1;
        WHb_MO_AK8 = indexTag[1]+1;
        WHc_MO_AK8 = indexTag[2]+1;
    }

    
}


#endif
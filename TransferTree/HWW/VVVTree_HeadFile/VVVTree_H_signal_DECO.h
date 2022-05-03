#ifndef _VVVTree_signal_DECO_
#define _VVVTree_signal_DECO_

void EDBR2PKUTree::Higgs_Matching() {
    H4q_max=-99,H3q_max=-99,H2q_max=-99,Hlqq_max=-99,Hlq_max=-99,w_max=-99,u_max=-99;
    H4q_min=-99,H3q_min=-99,H2q_min=-99,Hlqq_min=-99,Hlq_min=-99,w_min=-99,u_min=-99;
    gKK_g_max = -99;
    gKK_g_min = -99;
    H3q_taudecay_max = -99;
    H2q_qq_taudecay_max = -99;
    H2q_qtau_taudecay_max = -99;
    H2q_tautau_taudecay_max = -99;
    Hlqq_emu_taudecay_max = -99;
    Hlqq_tau_taudecay_max = -99;
    Hlq_taudecay_max = -99;
    w_taudecay_max = -99;
    u_taudecay_max = -99;
    H3q_taudecay_min = -99;
    H2q_qq_taudecay_min = -99;
    H2q_qtau_taudecay_min = -99;
    H2q_tautau_taudecay_min = -99;
    Hlqq_emu_taudecay_min = -99;
    Hlqq_tau_taudecay_min = -99;
    Hlq_taudecay_min = -99;
    w_taudecay_min = -99;
    u_taudecay_min = -99;
    H3q_tauhad_max = -99;
    H2q_qtau_tauhad_max = -99;
    H2q_tautau_tauhad_max = -99;
    Hlqq_emu_tauhad_max = -99;
    Hlq_tauhad_max = -99;
    w_tauhad_max = -99;
    u_tauhad_max = -99;
    H3q_tauhad_min = -99;
    H2q_qtau_tauhad_min = -99;
    H2q_tautau_tauhad_min = -99;
    Hlqq_emu_tauhad_min = -99;
    Hlq_tauhad_min = -99;
    w_tauhad_min = -99;
    u_tauhad_min = -99;

    H3q_td_max = -99;
    rest_td_max = -99;
    H2q_Hlqq_td_max = -99;
    H3q_td_min = -99;
    rest_td_min = -99;
    H2q_Hlqq_td_min = -99;

    H4q_mid=-99,H3q_mid=-99,H2q_mid=-99,Hlqq_mid=-99,Hlq_mid=-99,w_mid=-99,u_mid=-99;
    gKK_g_mid = -99;
    H3q_taudecay_mid = -99;
    H2q_qq_taudecay_mid = -99;
    H2q_qtau_taudecay_mid = -99;
    H2q_tautau_taudecay_mid = -99;
    Hlqq_emu_taudecay_mid = -99;
    Hlqq_tau_taudecay_mid = -99;
    Hlq_taudecay_mid = -99;
    w_taudecay_mid = -99;
    u_taudecay_mid = -99;
    H3q_tauhad_mid = -99;
    H2q_qtau_tauhad_mid = -99;
    H2q_tautau_tauhad_mid = -99;
    Hlqq_emu_tauhad_mid = -99;
    Hlq_tauhad_mid = -99;
    w_tauhad_mid = -99;
    u_tauhad_mid = -99;
    H3q_td_mid = -99;
    rest_td_mid = -99;
    H2q_Hlqq_td_mid = -99;

    gKK_g_mid = -99;

    z_max = -99;
    z_mid = -99;
    z_min = -99;

    g_q_max = -99;
    g_q_mid = -99;
    g_q_min = -99;
    cout << "running radion matching 2" << endl;
    
    gKK_g_Matching(); // this has to run first
    H_Matching_taulep(); // this has to run second
    H_Matching_taudecay();
  //  H_Matching_deepW_Ordered();
    H_Matching_H4q_Ordered();

}

void EDBR2PKUTree::H_Matching_taulep() {

    double dr_WJ=1111110.6;
    double dr=0.6;
    double dR=0.8;
    double dRR=1.6;

    // cout << "detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr" << (detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr) << endl;
    // cout << "status_2" << (status_2) << endl;
    // cout << "status_3" << (status_3) << endl;
    // cout << "detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR" << (detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR) << endl;
    // cout << "detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR" << (detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR) << endl;
    // cout << "detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR" << (detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR) << endl;
    // cout << "detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR" << (detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR) << endl;

    if( detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR){
            H4q_max=1;
    }

    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==3&&H4q_max<1){
            H3q_max=1;
    }

    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr&&H4q_max<1&&H3q_max<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Hlqq_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Hlqq_max=1;
        }
    }

    if(((detlaR(etagenwl[0],Etaj_max,phigenwl[0],Phij_max)<dr&&detlaR(genw_q1_eta[0],Etaj_max,genw_q1_phi[0],Phij_max)<dR&&detlaR(genw_q2_eta[0],Etaj_max,genw_q2_phi[0],Phij_max)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_max,phigenwl[1],Phij_max)<dr&&detlaR(genw_q1_eta[1],Etaj_max,genw_q1_phi[1],Phij_max)<dR&&detlaR(genw_q2_eta[1],Etaj_max,genw_q2_phi[1],Phij_max)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_max,phigenwl[2],Phij_max)<dr&&detlaR(genw_q1_eta[2],Etaj_max,genw_q1_phi[2],Phij_max)<dR&&detlaR(genw_q2_eta[2],Etaj_max,genw_q2_phi[2],Phij_max)<dR&&taggenwl[2]==4))&&H4q_max<1&&H3q_max<1&&Hlqq_max<1){
        w_max=1;
    }

    if(((detlaR(etagenzl[0],Etaj_max,phigenzl[0],Phij_max)<dr&&detlaR(genz_q1_eta[0],Etaj_max,genz_q1_phi[0],Phij_max)<dR&&detlaR(genz_q2_eta[0],Etaj_max,genz_q2_phi[0],Phij_max)<dR&&taggenzl[0]==4)||(detlaR(etagenzl[1],Etaj_max,phigenzl[1],Phij_max)<dr&&detlaR(genz_q1_eta[1],Etaj_max,genz_q1_phi[1],Phij_max)<dR&&detlaR(genz_q2_eta[1],Etaj_max,genz_q2_phi[1],Phij_max)<dR&&taggenzl[1]==4)||(detlaR(etagenzl[2],Etaj_max,phigenzl[2],Phij_max)<dr&&detlaR(genz_q1_eta[2],Etaj_max,genz_q1_phi[2],Phij_max)<dR&&detlaR(genz_q2_eta[2],Etaj_max,genz_q2_phi[2],Phij_max)<dR&&taggenzl[2]==4))&&H4q_max<1&&H3q_max<1&&Hlqq_max<1&&w_max<1){
        z_max=1;
    }

    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr&&detlaR(etaGenV_2,Etaj_max,phiGenV_2,Phij_max)<dr_WJ&&detlaR(etaGenV_3,Etaj_max,phiGenV_3,Phij_max)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==2&&H4q_max<1&&H3q_max<1&&Hlqq_max<1&&w_max<1&&z_max<1){
        H2q_max=1;
    }


    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr&&H4q_max<1&&H3q_max<1&&H2q_max<1&&Hlqq_max<1&&w_max<1&&H2q_max<1&&z_max<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Hlq_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Hlq_max=1;
        }
    }

    if(H4q_max<1&&H3q_max<1&&H2q_max<1&&Hlqq_max<1&&Hlq_max<1&&w_max<1&&z_max<1){

        for (int i=0;i<10;i++){
           if( detlaR(etagengl[i],Etaj_max,phigengl[i],Phij_max)<dr){
               g_q_max=1;
           }
           if( detlaR(etagenq1f[i],Etaj_max,phigenq1f[i],Phij_max)<dr){
               g_q_max=1;
           }
           if( detlaR(etagenq2f[i],Etaj_max,phigenq2f[i],Phij_max)<dr){
               g_q_max=1;
           }
           if( detlaR(etagenq3f[i],Etaj_max,phigenq3f[i],Phij_max)<dr){
               g_q_max=1;
           }
           if( detlaR(etagenq4f[i],Etaj_max,phigenq4f[i],Phij_max)<dr){
               g_q_max=1;
           }
           if( detlaR(etagenq5f[i],Etaj_max,phigenq4f[i],Phij_max)<dr){
               g_q_max=1;
           }

        }




        if (H4q_max<1&&H3q_max<1&&H2q_max<1&&Hlqq_max<1&&Hlq_max<1&&w_max<1&&z_max<1&g_q_max<1)
        {
       u_max=1;
        }
       
    }

    
   


    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR){
            H4q_min=1;
    }

    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==3&&H4q_min<1){
            H3q_min=1;
    }

    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr&&H4q_min<1&&H3q_min<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Hlqq_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Hlqq_min=1;
        }
    }

    if(((detlaR(etagenwl[0],Etaj_min,phigenwl[0],Phij_min)<dr&&detlaR(genw_q1_eta[0],Etaj_min,genw_q1_phi[0],Phij_min)<dR&&detlaR(genw_q2_eta[0],Etaj_min,genw_q2_phi[0],Phij_min)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_min,phigenwl[1],Phij_min)<dr&&detlaR(genw_q1_eta[1],Etaj_min,genw_q1_phi[1],Phij_min)<dR&&detlaR(genw_q2_eta[1],Etaj_min,genw_q2_phi[1],Phij_min)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_min,phigenwl[2],Phij_min)<dr&&detlaR(genw_q1_eta[2],Etaj_min,genw_q1_phi[2],Phij_min)<dR&&detlaR(genw_q2_eta[2],Etaj_min,genw_q2_phi[2],Phij_min)<dR&&taggenwl[2]==4))&&H4q_min<1&&H3q_min<1&&Hlqq_min<1){
        w_min=1;
    }

    if(((detlaR(etagenzl[0],Etaj_min,phigenzl[0],Phij_min)<dr&&detlaR(genz_q1_eta[0],Etaj_min,genz_q1_phi[0],Phij_min)<dR&&detlaR(genz_q2_eta[0],Etaj_min,genz_q2_phi[0],Phij_min)<dR&&taggenzl[0]==4)||(detlaR(etagenzl[1],Etaj_min,phigenzl[1],Phij_min)<dr&&detlaR(genz_q1_eta[1],Etaj_min,genz_q1_phi[1],Phij_min)<dR&&detlaR(genz_q2_eta[1],Etaj_min,genz_q2_phi[1],Phij_min)<dR&&taggenzl[1]==4)||(detlaR(etagenzl[2],Etaj_min,phigenzl[2],Phij_min)<dr&&detlaR(genz_q1_eta[2],Etaj_min,genz_q1_phi[2],Phij_min)<dR&&detlaR(genz_q2_eta[2],Etaj_min,genz_q2_phi[2],Phij_min)<dR&&taggenzl[2]==4))&&H4q_min<1&&H3q_min<1&&Hlqq_min<1&&w_min<1){
        z_min=1;
    }

    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==2&&H4q_min<1&&H3q_min<1&&Hlqq_min<1&&w_min<1&&z_min<1){
        H2q_min=1;
    }


    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr&&H4q_min<1&&H3q_min<1&&H2q_min<1&&Hlqq_min<1&&w_min<1&&H2q_min<1&&z_min<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Hlq_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Hlq_min=1;
        }
    }

    if(H4q_min<1&&H3q_min<1&&H2q_min<1&&Hlqq_min<1&&Hlq_min<1&&w_min<1&&z_min<1){


        for (int i=0;i<10;i++){
           if( detlaR(etagengl[i],Etaj_min,phigengl[i],Phij_min)<dr){
               g_q_min=1;
           }
           if( detlaR(etagenq1f[i],Etaj_min,phigenq1f[i],Phij_min)<dr){
               g_q_min=1;
           }
           if( detlaR(etagenq2f[i],Etaj_min,phigenq2f[i],Phij_min)<dr){
               g_q_min=1;
           }
           if( detlaR(etagenq3f[i],Etaj_min,phigenq3f[i],Phij_min)<dr){
               g_q_min=1;
           }
           if( detlaR(etagenq4f[i],Etaj_min,phigenq4f[i],Phij_min)<dr){
               g_q_min=1;
           }
           if( detlaR(etagenq5f[i],Etaj_min,phigenq4f[i],Phij_min)<dr){
               g_q_min=1;
           }

        }

    if(H4q_min<1&&H3q_min<1&&H2q_min<1&&Hlqq_min<1&&Hlq_min<1&&w_min<1&&z_min<1&&g_q_min<1){
 
       u_min=1;
        }
    
    }


    g_max=0;
    g_min=0;
    q_max=0;
    q_min=0;

    if(H3q_max==1||H4q_max==1){
        t_max=1;
        t_max_tag=1;
    }
    
    if(H3q_min==1||H4q_min==1){
               t_min=1;
               t_min_tag=1; 
         }
                                  
    if(Nj8==3){
        H4q_mid=-99,H3q_mid=-99,H2q_mid=-99,Hlqq_mid=-99,Hlq_mid=-99,w_mid=-99,u_mid=-99;
        
        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR){
                H4q_mid=1;
        }

        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==3&&H4q_mid<1){
                H3q_mid=1;
        }

        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr&&H4q_mid<1&&H3q_mid<1){
            if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Hlqq_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Hlqq_mid=1;
            }
        }

        if(((detlaR(etagenwl[0],Etaj_mid,phigenwl[0],Phij_mid)<dr&&detlaR(genw_q1_eta[0],Etaj_mid,genw_q1_phi[0],Phij_mid)<dR&&detlaR(genw_q2_eta[0],Etaj_mid,genw_q2_phi[0],Phij_mid)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_mid,phigenwl[1],Phij_mid)<dr&&detlaR(genw_q1_eta[1],Etaj_mid,genw_q1_phi[1],Phij_mid)<dR&&detlaR(genw_q2_eta[1],Etaj_mid,genw_q2_phi[1],Phij_mid)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_mid,phigenwl[2],Phij_mid)<dr&&detlaR(genw_q1_eta[2],Etaj_mid,genw_q1_phi[2],Phij_mid)<dR&&detlaR(genw_q2_eta[2],Etaj_mid,genw_q2_phi[2],Phij_mid)<dR&&taggenwl[2]==4))&&H4q_mid<1&&H3q_mid<1&&Hlqq_mid<1){
            w_mid=1;
        }

        if(((detlaR(etagenzl[0],Etaj_mid,phigenzl[0],Phij_mid)<dr&&detlaR(genz_q1_eta[0],Etaj_mid,genz_q1_phi[0],Phij_mid)<dR&&detlaR(genz_q2_eta[0],Etaj_mid,genz_q2_phi[0],Phij_mid)<dR&&taggenzl[0]==4)||(detlaR(etagenzl[1],Etaj_mid,phigenzl[1],Phij_mid)<dr&&detlaR(genz_q1_eta[1],Etaj_mid,genz_q1_phi[1],Phij_mid)<dR&&detlaR(genz_q2_eta[1],Etaj_mid,genz_q2_phi[1],Phij_mid)<dR&&taggenzl[1]==4)||(detlaR(etagenzl[2],Etaj_mid,phigenzl[2],Phij_mid)<dr&&detlaR(genz_q1_eta[2],Etaj_mid,genz_q1_phi[2],Phij_mid)<dR&&detlaR(genz_q2_eta[2],Etaj_mid,genz_q2_phi[2],Phij_mid)<dR&&taggenzl[2]==4))&&H4q_mid<1&&H3q_mid<1&&Hlqq_mid<1&&w_mid<1){
            z_mid=1;
        }

        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==2&&H4q_mid<1&&H3q_mid<1&&Hlqq_mid<1&&w_mid<1&&z_mid<1){
            H2q_mid=1;
        }


        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr&&H4q_mid<1&&H3q_mid<1&&H2q_mid<1&&Hlqq_mid<1&&w_mid<1&&H2q_mid<1&&z_mid<1){
            if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Hlq_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Hlq_mid=1;
            }
        }

        if(H4q_mid<1&&H3q_mid<1&&H2q_mid<1&&Hlqq_mid<1&&Hlq_mid<1&&w_mid<1&&z_mid<1){
                for (int i=0;i<10;i++){
           if( detlaR(etagengl[i],Etaj_mid,phigengl[i],Phij_mid)<dr){
               g_q_mid=1;
           }
           if( detlaR(etagenq1f[i],Etaj_mid,phigenq1f[i],Phij_mid)<dr){
               g_q_mid=1;
           }
           if( detlaR(etagenq2f[i],Etaj_mid,phigenq2f[i],Phij_mid)<dr){
               g_q_mid=1;
           }
           if( detlaR(etagenq3f[i],Etaj_mid,phigenq3f[i],Phij_mid)<dr){
               g_q_mid=1;
           }
           if( detlaR(etagenq4f[i],Etaj_mid,phigenq4f[i],Phij_mid)<dr){
               g_q_mid=1;
           }
           if( detlaR(etagenq5f[i],Etaj_mid,phigenq4f[i],Phij_mid)<dr){
               g_q_mid=1;
           }

        }
        if(H4q_mid<1&&H3q_mid<1&&H2q_mid<1&&Hlqq_mid<1&&Hlq_mid<1&&w_mid<1&&z_mid<1&&g_q_mid<1){

       u_mid=1;
        }

        }

        
        g_mid=0;
        q_mid=0;
        if(H3q_mid==1||H4q_mid==1){
            t_mid=1;
            t_mid_tag=1;
        }
    }
}

void EDBR2PKUTree::gKK_g_Matching() {
    double dr_WJ=1111110.6;
    double dr=0.6;
    double dR=0.8;
    double dRR=1.6;

    

    if( detlaR(gen_gKK_g_eta_f,Etaj_max,gen_gKK_g_phi_f,Phij_max)<dr ){
        gKK_g_max=1;
    }

    if( detlaR(gen_gKK_g_eta_f,Etaj_min,gen_gKK_g_phi_f,Phij_min)<dr ){
        gKK_g_min=1;
    }

    if(Nj8 == 3){
        if( detlaR(gen_gKK_g_eta_f,Etaj_mid,gen_gKK_g_phi_f,Phij_mid)<dr ){
            gKK_g_mid=1;
        }
    }

}

void EDBR2PKUTree::H_Matching_taudecay() {
    // considering tau decay in this function
    double dr_WJ=1111110.6;
    double dr=0.6;
    double dR=0.8;
    double dRR=1.6;

    // use H4q_max for : had W + had W
    // use H3q_max for : had W + had W
    // had W + tau : 
    
    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr&&H4q_max<1&&H3q_max<1){
        if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 < 1 ){
                H3q_taudecay_max=1;
            }
        }
        if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 < 1 ){
                H3q_taudecay_max=1;
            }
        }
    }

    // if(status_3 == 3){
    //     cout << "debug :" << endl;
    //     cout << gen_tau_decay_3 << " gen_tau_decay_3" <<endl;
    //     cout << detlaR(etaq21,Etaj_max,phiq21,Phij_max) << " detlaR(etaq21,Etaj_max,phiq21,Phij_max)" <<endl;
    //     cout << detlaR(etaq22,Etaj_max,phiq22,Phij_max) << " detlaR(etaq22,Etaj_max,phiq22,Phij_max)" <<endl;
    //     cout << H3q_taudecay_max << " H3q_taudecay_max" <<endl;
    //     cout << detlaR(etaq31,Etaj_max,phiq31,Phij_max) << " detlaR(etaq31,Etaj_max,phiq31,Phij_max)" <<endl;
    //     cout << etaq31 << " etaq31" <<endl;
    //     cout << phiq31 << " phiq31" <<endl;
    // }
    
    // had W + e,mu
    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr &&H4q_max<1&&H3q_max<1&&H3q_taudecay_max<1){
        if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Hlqq_emu_taudecay_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Hlqq_emu_taudecay_max=1;
        }
    }

    // had W + leptonic tau
    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr &&H4q_max<1&&H3q_max<1&&H3q_taudecay_max<1&&Hlqq_emu_taudecay_max<1){
        if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 == 1  ){
                Hlqq_tau_taudecay_max=1;
            }
        }
        if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 == 1 ){
                Hlqq_tau_taudecay_max=1;
            }
        }
    }

    if(((detlaR(etagenwl[0],Etaj_max,phigenwl[0],Phij_max)<dr&&detlaR(genw_q1_eta[0],Etaj_max,genw_q1_phi[0],Phij_max)<dR&&detlaR(genw_q2_eta[0],Etaj_max,genw_q2_phi[0],Phij_max)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_max,phigenwl[1],Phij_max)<dr&&detlaR(genw_q1_eta[1],Etaj_max,genw_q1_phi[1],Phij_max)<dR&&detlaR(genw_q2_eta[1],Etaj_max,genw_q2_phi[1],Phij_max)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_max,phigenwl[2],Phij_max)<dr&&detlaR(genw_q1_eta[2],Etaj_max,genw_q1_phi[2],Phij_max)<dR&&detlaR(genw_q2_eta[2],Etaj_max,genw_q2_phi[2],Phij_max)<dR&&taggenwl[2]==4)) &&H4q_max<1&&H3q_max<1&&H3q_taudecay_max<1&&Hlqq_emu_taudecay_max<1&& Hlqq_tau_taudecay_max<1){
        w_taudecay_max=1;
    }



    // rewrite H2q_max because we need to exclude had W + had tau
    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==2 &&H4q_max<1&&H3q_max<1&&H3q_taudecay_max<1&&w_taudecay_max<1&&Hlqq_emu_taudecay_max<1&&Hlqq_tau_taudecay_max<1){
        H2q_qq_taudecay_max=1;
    }

    // had W 1q + tau
    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr &&H4q_max<1&&H3q_max<1&&H3q_taudecay_max<1&&H2q_qq_taudecay_max<1&&w_taudecay_max<1){
        if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)) == 1 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 < 1 ){
                H2q_qtau_taudecay_max=1;
            }
        }
        if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR)) == 1 && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 < 1 ){
                H2q_qtau_taudecay_max=1;
            }
        }
    }
    

    // tau + tau
    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr &&H4q_max<1&&H3q_max<1&&H3q_taudecay_max<1&&H2q_qq_taudecay_max<1&&H2q_qtau_taudecay_max<1&&w_taudecay_max<1&&Hlqq_emu_taudecay_max<1&&Hlqq_tau_taudecay_max<1){
        if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR ){
            if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                H2q_tautau_taudecay_max=1;
            }
        }
    }


    if(detlaR(gen_H_eta,Etaj_max,gen_H_phi,Phij_max)<dr &&H4q_max<1&&H3q_max<1&&H3q_taudecay_max<1&&H2q_qq_taudecay_max<1&&H2q_qtau_taudecay_max<1&&H2q_tautau_taudecay_max<1&&Hlqq_emu_taudecay_max<1&&Hlqq_tau_taudecay_max<1&&w_taudecay_max<1){
        // had ; e, mu
        if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Hlq_taudecay_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Hlq_taudecay_max=1;
        }
        // had tau ; e, mu
        if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_2 < 1){
                Hlq_taudecay_max=1;
            }
        }
        if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_3 < 1){
                Hlq_taudecay_max=1;
            }
        }
        // had ; lep tau
        if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_3 == 1){
                Hlq_taudecay_max=1;
            }
        }
        if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_2 == 1){
                Hlq_taudecay_max=1;
            }
        }
        // had tau ; lep tau
        if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                Hlq_taudecay_max=1;
            }
        }
        if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                Hlq_taudecay_max=1;
            }
        }
    }

    if(H4q_max<1&&H3q_max<1&&H3q_taudecay_max<1&&H2q_qq_taudecay_max<1&&H2q_qtau_taudecay_max<1&&H2q_tautau_taudecay_max<1&&Hlqq_emu_taudecay_max<1&&Hlqq_tau_taudecay_max<1&&Hlq_taudecay_max<1 && w_taudecay_max<1){
        u_taudecay_max=1;
    }



    // min

    // use H4q_min for : had W + had W

    // use H3q_min for : had W + had W

    // had W + tau : 
    
    
    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr&&H4q_min<1&&H3q_min<1){
        if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 < 1 ){
                H3q_taudecay_min=1;
            }
        }
        if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 < 1 ){
                H3q_taudecay_min=1;
            }
        }
    }
    
    // had W + e,mu
    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr &&H4q_min<1&&H3q_min<1&&H3q_taudecay_min<1){
        if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Hlqq_emu_taudecay_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Hlqq_emu_taudecay_min=1;
        }
    }

    // had W + leptonic tau
    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr &&H4q_min<1&&H3q_min<1&&H3q_taudecay_min<1&&Hlqq_emu_taudecay_min<1){
        if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 == 1  ){
                Hlqq_tau_taudecay_min=1;
            }
        }
        if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 == 1 ){
                Hlqq_tau_taudecay_min=1;
            }
        }
    }

    if(((detlaR(etagenwl[0],Etaj_min,phigenwl[0],Phij_min)<dr&&detlaR(genw_q1_eta[0],Etaj_min,genw_q1_phi[0],Phij_min)<dR&&detlaR(genw_q2_eta[0],Etaj_min,genw_q2_phi[0],Phij_min)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_min,phigenwl[1],Phij_min)<dr&&detlaR(genw_q1_eta[1],Etaj_min,genw_q1_phi[1],Phij_min)<dR&&detlaR(genw_q2_eta[1],Etaj_min,genw_q2_phi[1],Phij_min)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_min,phigenwl[2],Phij_min)<dr&&detlaR(genw_q1_eta[2],Etaj_min,genw_q1_phi[2],Phij_min)<dR&&detlaR(genw_q2_eta[2],Etaj_min,genw_q2_phi[2],Phij_min)<dR&&taggenwl[2]==4)) &&H4q_min<1&&H3q_min<1&&H3q_taudecay_min<1&&Hlqq_emu_taudecay_min<1&& Hlqq_tau_taudecay_min<1){
        w_taudecay_min=1;
    }



    // rewrite H2q_min because we need to exclude had W + had tau
    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==2 &&H4q_min<1&&H3q_min<1&&H3q_taudecay_min<1&&w_taudecay_min<1&&Hlqq_emu_taudecay_min<1&&Hlqq_tau_taudecay_min<1){
        H2q_qq_taudecay_min=1;
    }

    // had W 1q + tau
    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr &&H4q_min<1&&H3q_min<1&&H3q_taudecay_min<1&&H2q_qq_taudecay_min<1&&w_taudecay_min<1){
        if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)) == 1 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 < 1 ){
                H2q_qtau_taudecay_min=1;
            }
        }
        if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR)) == 1 && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 < 1 ){
                H2q_qtau_taudecay_min=1;
            }
        }
    }
    

    // tau + tau
    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr &&H4q_min<1&&H3q_min<1&&H3q_taudecay_min<1&&H2q_qq_taudecay_min<1&&H2q_qtau_taudecay_min<1&&w_taudecay_min<1&&Hlqq_emu_taudecay_min<1&&Hlqq_tau_taudecay_min<1){
        if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR ){
            if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                H2q_tautau_taudecay_min=1;
            }
        }
    }


    if(detlaR(gen_H_eta,Etaj_min,gen_H_phi,Phij_min)<dr &&H4q_min<1&&H3q_min<1&&H3q_taudecay_min<1&&H2q_qq_taudecay_min<1&&H2q_qtau_taudecay_min<1&&H2q_tautau_taudecay_min<1&&Hlqq_emu_taudecay_min<1&&Hlqq_tau_taudecay_min<1&&w_taudecay_min<1){
        // had ; e, mu
        if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Hlq_taudecay_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Hlq_taudecay_min=1;
        }
        // had tau ; e, mu
        if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_2 < 1){
                Hlq_taudecay_min=1;
            }
        }
        if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_3 < 1){
                Hlq_taudecay_min=1;
            }
        }
        // had ; lep tau
        if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_3 == 1){
                Hlq_taudecay_min=1;
            }
        }
        if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_2 == 1){
                Hlq_taudecay_min=1;
            }
        }
        // had tau ; lep tau
        if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                Hlq_taudecay_min=1;
            }
        }
        if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                Hlq_taudecay_min=1;
            }
        }
    }

    
    

    if(H4q_min<1&&H3q_min<1&&H3q_taudecay_min<1&&H2q_qq_taudecay_min<1&&H2q_qtau_taudecay_min<1&&H2q_tautau_taudecay_min<1&&Hlqq_emu_taudecay_min<1&&Hlqq_tau_taudecay_min<1&&Hlq_taudecay_min<1 && w_taudecay_min<1){
        u_taudecay_min=1;
    }

    
    if(H3q_max == 1||H3q_taudecay_max ==1){
        H3q_td_max = 1 ;
    }
    if(u_taudecay_max == 1 && gKK_g_max < 1){
        rest_td_max = 1;
    }
    if(Hlqq_emu_taudecay_max == 1 || Hlqq_tau_taudecay_max == 1 || H2q_max == 1 || H2q_qtau_taudecay_max == 1 || H2q_tautau_taudecay_max == 1){
        H2q_Hlqq_td_max= 1;
    }


    if(H3q_min == 1||H3q_taudecay_min ==1){
        H3q_td_min = 1 ;
    }
    if(u_taudecay_min == 1 && gKK_g_min < 1){
        rest_td_min = 1;
    }
    if(Hlqq_emu_taudecay_min == 1 || Hlqq_tau_taudecay_min == 1 || H2q_min == 1 || H2q_qtau_taudecay_min == 1 || H2q_tautau_taudecay_min == 1){
        H2q_Hlqq_td_min= 1;
    }

    H3q_max = H3q_td_max;
    H2q_max = (H2q_max == 1 || H2q_qtau_taudecay_max == 1 || H2q_tautau_taudecay_max == 1);
    Hlqq_max = (Hlqq_emu_taudecay_max == 1 || Hlqq_tau_taudecay_max == 1);
    Hlq_max = Hlq_taudecay_max;
    u_max = ( H4q_max < 1 && H3q_max < 1 && H2q_max < 1 && Hlqq_max < 1 && Hlq_max < 1 && gKK_g_max < 1 && w_max < 1 && z_max < 1 );

    H3q_min = H3q_td_min;
    H2q_min = (H2q_min == 1 || H2q_qtau_taudecay_min == 1 || H2q_tautau_taudecay_min == 1);
    Hlqq_min = (Hlqq_emu_taudecay_min == 1 || Hlqq_tau_taudecay_min == 1);
    Hlq_min = Hlq_taudecay_min;
    u_min = ( H4q_min < 1 && H3q_min < 1 && H2q_min < 1 && Hlqq_min < 1 && Hlq_min < 1 && gKK_g_min < 1 && w_min < 1 && z_min < 1 );


    // for the mid Jet
    if(Nj8 == 3){
        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr&&H4q_mid<1&&H3q_mid<1){
            if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 < 1 ){
                    H3q_taudecay_mid=1;
                }
            }
            if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 < 1 ){
                    H3q_taudecay_mid=1;
                }
            }
        }
        
        // had W + e,mu
        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr &&H4q_mid<1&&H3q_mid<1&&H3q_taudecay_mid<1){
            if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Hlqq_emu_taudecay_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Hlqq_emu_taudecay_mid=1;
            }
        }

        // had W + leptonic tau
        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr &&H4q_mid<1&&H3q_mid<1&&H3q_taudecay_mid<1&&Hlqq_emu_taudecay_mid<1){
            if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 == 1  ){
                    Hlqq_tau_taudecay_mid=1;
                }
            }
            if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 == 1 ){
                    Hlqq_tau_taudecay_mid=1;
                }
            }
        }

        if(((detlaR(etagenwl[0],Etaj_mid,phigenwl[0],Phij_mid)<dr&&detlaR(genw_q1_eta[0],Etaj_mid,genw_q1_phi[0],Phij_mid)<dR&&detlaR(genw_q2_eta[0],Etaj_mid,genw_q2_phi[0],Phij_mid)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_mid,phigenwl[1],Phij_mid)<dr&&detlaR(genw_q1_eta[1],Etaj_mid,genw_q1_phi[1],Phij_mid)<dR&&detlaR(genw_q2_eta[1],Etaj_mid,genw_q2_phi[1],Phij_mid)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_mid,phigenwl[2],Phij_mid)<dr&&detlaR(genw_q1_eta[2],Etaj_mid,genw_q1_phi[2],Phij_mid)<dR&&detlaR(genw_q2_eta[2],Etaj_mid,genw_q2_phi[2],Phij_mid)<dR&&taggenwl[2]==4)) &&H4q_mid<1&&H3q_mid<1&&H3q_taudecay_mid<1&&Hlqq_emu_taudecay_mid<1&& Hlqq_tau_taudecay_mid<1){
            w_taudecay_mid=1;
        }



        // rewrite H2q_mid because we need to exclude had W + had tau
        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==2 &&H4q_mid<1&&H3q_mid<1&&H3q_taudecay_mid<1&&w_taudecay_mid<1&&Hlqq_emu_taudecay_mid<1&&Hlqq_tau_taudecay_mid<1){
            H2q_qq_taudecay_mid=1;
        }

        // had W 1q + tau
        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr &&H4q_mid<1&&H3q_mid<1&&H3q_taudecay_mid<1&&H2q_qq_taudecay_mid<1&&w_taudecay_mid<1){
            if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)) == 1 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 < 1 ){
                    H2q_qtau_taudecay_mid=1;
                }
            }
            if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR)) == 1 && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 < 1 ){
                    H2q_qtau_taudecay_mid=1;
                }
            }
        }
        

        // tau + tau
        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr &&H4q_mid<1&&H3q_mid<1&&H3q_taudecay_mid<1&&H2q_qq_taudecay_mid<1&&H2q_qtau_taudecay_mid<1&&w_taudecay_mid<1&&Hlqq_emu_taudecay_mid<1&&Hlqq_tau_taudecay_mid<1){
            if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR ){
                if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                    H2q_tautau_taudecay_mid=1;
                }
            }
        }


        if(detlaR(gen_H_eta,Etaj_mid,gen_H_phi,Phij_mid)<dr &&H4q_mid<1&&H3q_mid<1&&H3q_taudecay_mid<1&&H2q_qq_taudecay_mid<1&&H2q_qtau_taudecay_mid<1&&H2q_tautau_taudecay_mid<1&&Hlqq_emu_taudecay_mid<1&&Hlqq_tau_taudecay_mid<1&&w_taudecay_mid<1){
            // had ; e, mu
            if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Hlq_taudecay_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Hlq_taudecay_mid=1;
            }
            // had tau ; e, mu
            if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_2 < 1){
                    Hlq_taudecay_mid=1;
                }
            }
            if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_3 < 1){
                    Hlq_taudecay_mid=1;
                }
            }
            // had ; lep tau
            if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_3 == 1){
                    Hlq_taudecay_mid=1;
                }
            }
            if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_2 == 1){
                    Hlq_taudecay_mid=1;
                }
            }
            // had tau ; lep tau
            if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                    Hlq_taudecay_mid=1;
                }
            }
            if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                    Hlq_taudecay_mid=1;
                }
            }
        }

        if(H4q_mid<1&&H3q_mid<1&&H3q_taudecay_mid<1&&H2q_qq_taudecay_mid<1&&H2q_qtau_taudecay_mid<1&&H2q_tautau_taudecay_mid<1&&Hlqq_emu_taudecay_mid<1&&Hlqq_tau_taudecay_mid<1&&Hlq_taudecay_mid<1 && w_taudecay_mid<1){
            u_taudecay_mid=1;
        }



        if(H3q_mid == 1||H3q_taudecay_mid ==1){
            H3q_td_mid = 1 ;
        }
        if(u_taudecay_mid == 1 && gKK_g_mid < 1){
            rest_td_mid = 1;
        }
        if(Hlqq_emu_taudecay_mid == 1 || Hlqq_tau_taudecay_mid == 1 || H2q_mid == 1 || H2q_qtau_taudecay_mid == 1 || H2q_tautau_taudecay_mid == 1){
            H2q_Hlqq_td_mid= 1;
        }

        H3q_mid = H3q_td_mid;
        H2q_mid = (H2q_mid == 1 || H2q_qtau_taudecay_mid == 1 || H2q_tautau_taudecay_mid == 1);
        Hlqq_mid = (Hlqq_emu_taudecay_mid == 1 || Hlqq_tau_taudecay_mid == 1);
        Hlq_mid = Hlq_taudecay_mid;
        u_mid = ( H4q_mid < 1 && H3q_mid < 1 && H2q_mid < 1 && Hlqq_mid < 1 && Hlq_mid < 1 && gKK_g_mid < 1 && w_mid < 1 && z_mid < 1  );
    }

    
}


void EDBR2PKUTree::H_Matching_H4q_Ordered(){


    H4q_a = -99; H4q_b = -99; H4q_c = -99;
    H3q_a = -99; H3q_b = -99; H3q_c = -99;
    H2q_a = -99; H2q_b = -99; H2q_c = -99;
    w_a = -99; w_b = -99; w_c = -99;
    z_a = -99; z_b = -99; z_c = -99;
    Hlqq_a = -99; Hlqq_b = -99; Hlqq_c = -99;
    Hlq_a = -99; Hlq_b = -99; Hlq_c = -99;
    g_q_a = -99; g_q_b = -99; g_q_c = -99;
    u_a = -99; u_b = -99; u_c = -99;
    H3q_taudecay_a = -99; H3q_taudecay_b = -99; H3q_taudecay_c = -99;

    if( PTj_2 > 0 && PTj_3 < 0){

        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_V1_sort[2] = {  jetAK8puppi_V1_probHww4q ,  jetAK8puppi_V1_probHww4q_2 };
        TMath::Sort(2, jetAK8puppi_V1_sort, indexTag, 1);

        
        Double_t Mj_sort[2] = { Mj , Mj_2 }; 
        Double_t Mja_sort;

        Mja_sort = Mj_sort[indexTag[0]] ; 


    
        Int_t H4q_sort[2] = { H4q_max , H4q_min }; 
        Int_t H3q_sort[2] = { H3q_max , H3q_min }; 
        Int_t H2q_sort[2] = { H2q_max , H2q_min }; 
        Int_t w_sort[2] = { w_max , w_min }; 
        Int_t z_sort[2] = { z_max , z_min }; 
        Int_t Hlqq_sort[2] = { Hlqq_max , Hlqq_min }; 
        Int_t Hlq_sort[2] = { Hlq_max , Hlq_min }; 
        Int_t u_sort[2] = { u_max , u_min }; 
        Int_t H3q_taudecay_sort[2] = { H3q_taudecay_max , H3q_taudecay_min }; 

        Int_t g_q_sort[2]={g_q_max,g_q_min};

        H4q_a = H4q_sort[indexTag[0]] ; H4q_c = H4q_sort[indexTag[1]] ;
        H3q_a = H3q_sort[indexTag[0]] ; H3q_c = H3q_sort[indexTag[1]] ;
        H2q_a = H2q_sort[indexTag[0]] ; H2q_c = H2q_sort[indexTag[1]] ;
        z_a = z_sort[indexTag[0]] ; z_c = z_sort[indexTag[1]] ;
        w_a = w_sort[indexTag[0]] ; w_c = w_sort[indexTag[1]] ;
        Hlqq_a = Hlqq_sort[indexTag[0]] ; Hlqq_c = Hlqq_sort[indexTag[1]] ;
        Hlq_a = Hlq_sort[indexTag[0]] ; Hlq_c = Hlq_sort[indexTag[1]] ;
        u_a = u_sort[indexTag[0]] ; u_c = u_sort[indexTag[1]] ;
        H3q_taudecay_a = H3q_taudecay_sort[indexTag[0]] ; H3q_taudecay_c = H3q_taudecay_sort[indexTag[1]] ;

        g_q_a = g_q_sort[indexTag[0]];
        g_q_c = g_q_sort[indexTag[1]];
         if ( Mja_sort < 30 ){  

        H4q_a = H4q_sort[indexTag[1]] ; H4q_c = H4q_sort[indexTag[0]] ;
        H3q_a = H3q_sort[indexTag[1]] ; H3q_c = H3q_sort[indexTag[0]] ;
        H2q_a = H2q_sort[indexTag[1]] ; H2q_c = H2q_sort[indexTag[0]] ;
        z_a = z_sort[indexTag[1]] ; z_c = z_sort[indexTag[0]] ;
        w_a = w_sort[indexTag[1]] ; w_c = w_sort[indexTag[0]] ;
        Hlqq_a = Hlqq_sort[indexTag[1]] ; Hlqq_c = Hlqq_sort[indexTag[0]] ;
        Hlq_a = Hlq_sort[indexTag[1]] ; Hlq_c = Hlq_sort[indexTag[0]] ;
        u_a = u_sort[indexTag[1]] ; u_c = u_sort[indexTag[0]] ;
        H3q_taudecay_a = H3q_taudecay_sort[indexTag[1]] ; H3q_taudecay_c = H3q_taudecay_sort[indexTag[0]] ;
        g_q_a = g_q_sort[indexTag[1]];
        g_q_c = g_q_sort[indexTag[0]];

         }





    }

    if( PTj_3 > 0 && PTj_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_V1_sort[3] = {  jetAK8puppi_V1_probHww4q , jetAK8puppi_V1_probHww4q_2,  jetAK8puppi_V1_probHww4q_3 };
        TMath::Sort(3, jetAK8puppi_V1_sort, indexTag, 1);

        Double_t Mj_sort[3] = { Mj , Mj_2 , Mj_3 }; 
        Double_t Mj_a_sort = Mj_sort[indexTag[0]] ; 

        Int_t H4q_sort[3] = { H4q_max , H4q_mid , H4q_min }; 
        Int_t H3q_sort[3] = { H3q_max , H3q_mid , H3q_min }; 
        Int_t H2q_sort[3] = { H2q_max , H2q_mid , H2q_min }; 
        Int_t w_sort[3] = { w_max , w_mid , w_min }; 
        Int_t z_sort[3] = { z_max , z_mid , z_min }; 
        Int_t Hlqq_sort[3] = { Hlqq_max , Hlqq_mid , Hlqq_min }; 
        Int_t Hlq_sort[3] = { Hlq_max , Hlq_mid , Hlq_min }; 
        Int_t u_sort[3] = { u_max , u_mid , u_min }; 
        Int_t H3q_taudecay_sort[3] = { H3q_taudecay_max , H3q_taudecay_mid , H3q_taudecay_min }; 

        Int_t g_q_sort[3] = {g_q_max,g_q_mid,g_q_min};

        H4q_a = H4q_sort[indexTag[0]] ; H4q_b = H4q_sort[indexTag[1]] ; H4q_c = H4q_sort[indexTag[2]] ;
        H3q_a = H3q_sort[indexTag[0]] ; H3q_b = H3q_sort[indexTag[1]] ; H3q_c = H3q_sort[indexTag[2]] ;
        H2q_a = H2q_sort[indexTag[0]] ; H2q_b = H2q_sort[indexTag[1]] ; H2q_c = H2q_sort[indexTag[2]] ;
        w_a = w_sort[indexTag[0]] ; w_b = w_sort[indexTag[1]] ; w_c = w_sort[indexTag[2]] ;
        z_a = w_sort[indexTag[0]] ; z_b = w_sort[indexTag[1]] ; z_c = w_sort[indexTag[2]] ;
        Hlqq_a = Hlqq_sort[indexTag[0]] ; Hlqq_b = Hlqq_sort[indexTag[1]] ; Hlqq_c = Hlqq_sort[indexTag[2]] ;
        Hlq_a = Hlq_sort[indexTag[0]] ; Hlq_b = Hlq_sort[indexTag[1]] ; Hlq_c = Hlq_sort[indexTag[2]] ;
        u_a = u_sort[indexTag[0]] ; u_b = u_sort[indexTag[1]] ; u_c = u_sort[indexTag[2]] ;
        H3q_taudecay_a = H3q_taudecay_sort[indexTag[0]] ; H3q_taudecay_b = H3q_taudecay_sort[indexTag[1]] ; H3q_taudecay_c = H3q_taudecay_sort[indexTag[2]] ;

        g_q_a = g_q_sort[indexTag[0]];
        g_q_b = g_q_sort[indexTag[1]];
        g_q_c = g_q_sort[indexTag[2]];

        if ( Mj_a_sort < 30 ){   

            //Which means the Higgs candidate is more likely a gluon/quark candidate.
            //As well as the tagger performance will be bad at low jet mass.
            //We choose another jet to be the Higgs candidate.


            Int_t *indexTag_2=new Int_t[2];
            Double_t jetAK8puppi_V1_sort_2[2] = { jetAK8puppi_V1_sort[indexTag[1]] , jetAK8puppi_V1_sort[indexTag[2]] };

            //Sort the  other 2 jets, and select the larger tagger one to be the Higgs candidate.
            TMath::Sort(2, jetAK8puppi_V1_sort_2, indexTag_2, 1);
        
        Int_t H4q_sort_2[2] = { H4q_b , H4q_c}; 
        Int_t H3q_sort_2[2] = { H3q_b, H3q_c}; 
        Int_t H2q_sort_2[2] = { H2q_b , H2q_c}; 
        Int_t w_sort_2[2] = { w_b , w_c}; 
        Int_t z_sort_2[2] = { z_b , z_c}; 
        Int_t Hlqq_sort_2[2] = { Hlqq_b , Hlqq_c}; 
        Int_t Hlq_sort_2[2] = { Hlq_b , Hlq_c}; 
        Int_t u_sort_2[2] = { u_c , u_c}; 
        Int_t H3q_taudecay_sort_2[2] = { H3q_taudecay_b , H3q_taudecay_c}; 

        Int_t g_q_sort_2[2] = {g_q_b,g_q_c};


        H4q_a = H4q_sort_2[indexTag_2[0]] ; H4q_b = H4q_sort_2[indexTag_2[1]] ; H4q_c = H4q_sort[indexTag[0]] ;
        H3q_a = H3q_sort_2[indexTag_2[0]] ; H3q_b = H3q_sort_2[indexTag_2[1]] ; H3q_c = H3q_sort[indexTag[0]] ;
        H2q_a = H2q_sort_2[indexTag_2[0]] ; H2q_b = H2q_sort_2[indexTag_2[1]] ; H2q_c = H2q_sort[indexTag[0]] ;
        w_a = w_sort_2[indexTag_2[0]] ; w_b = w_sort_2[indexTag_2[1]] ; w_c = w_sort[indexTag[0]] ;
        z_a = w_sort_2[indexTag_2[0]] ; z_b = w_sort_2[indexTag_2[1]] ; z_c = w_sort[indexTag[0]] ;
        Hlqq_a = Hlqq_sort_2[indexTag_2[0]] ; Hlqq_b = Hlqq_sort_2[indexTag_2[1]] ; Hlqq_c = Hlqq_sort[indexTag[0]] ;
        Hlq_a = Hlq_sort_2[indexTag_2[0]] ; Hlq_b = Hlq_sort_2[indexTag_2[1]] ; Hlq_c = Hlq_sort[indexTag[0]] ;
        u_a = u_sort_2[indexTag_2[0]] ; u_b = u_sort_2[indexTag_2[1]] ; u_c = u_sort[indexTag[0]] ;
        H3q_taudecay_a = H3q_taudecay_sort_2[indexTag_2[0]] ; H3q_taudecay_b = H3q_taudecay_sort_2[indexTag_2[1]] ; H3q_taudecay_c = H3q_taudecay_sort[indexTag[0]] ;
 
        g_q_a = g_q_sort_2[indexTag_2[0]];
        g_q_b = g_q_sort_2[indexTag_2[1]];
        g_q_c = g_q_sort[indexTag[0]] ;
        
        }





    }



}
#endif


    // $1_a = -99; $1_b = -99; $1_c = -99;
    // Int_t $1_a , $1_b , $1_c;
    // ExTree->Branch("$1_a",&$1_a,"$1_a/I");
    // ExTree->Branch("$1_b",&$1_b,"$1_b/I");
    // ExTree->Branch("$1_c",&$1_c,"$1_c/I");
        


    

// currently used
// H4q_max
// H3q_max
// H2q_max
// w_max
// Hlqq_max
// Hlq_max
// gKK_g_max
// u_max
// H3q_taudecay_max

// H4q_max
// H3q_max
// H2q_max
// Hlqq_max
// Hlq_max
// w_max
// u_max
// H4q_min
// H3q_min
// H2q_min
// Hlqq_min
// Hlq_min
// w_min
// u_min
// gKK_g_max
// gKK_g_min
// H3q_taudecay_max
// H2q_qq_taudecay_max
// H2q_qtau_taudecay_max
// H2q_tautau_taudecay_max
// Hlqq_emu_taudecay_max
// Hlqq_tau_taudecay_max
// Hlq_taudecay_max
// w_taudecay_max
// u_taudecay_max
// H3q_taudecay_min
// H2q_qq_taudecay_min
// H2q_qtau_taudecay_min
// H2q_tautau_taudecay_min
// Hlqq_emu_taudecay_min
// Hlqq_tau_taudecay_min
// Hlq_taudecay_min
// w_taudecay_min
// u_taudecay_min
// H3q_tauhad_max
// H2q_qtau_tauhad_max
// H2q_tautau_tauhad_max
// Hlqq_emu_tauhad_max
// Hlq_tauhad_max
// w_tauhad_max
// u_tauhad_max
// H3q_tauhad_min
// H2q_qtau_tauhad_min
// H2q_tautau_tauhad_min
// Hlqq_emu_tauhad_min
// Hlq_tauhad_min
// w_tauhad_min
// u_tauhad_min
// H3q_td_max
// rest_td_max
// H2q_Hlqq_td_max
// H3q_td_min
// rest_td_min
// H2q_Hlqq_td_min
// H4q_mid
// H3q_mid
// H2q_mid
// Hlqq_mid
// Hlq_mid
// w_mid
// u_mid
// gKK_g_mid
// H3q_taudecay_mid
// H2q_qq_taudecay_mid
// H2q_qtau_taudecay_mid
// H2q_tautau_taudecay_mid
// Hlqq_emu_taudecay_mid
// Hlqq_tau_taudecay_mid
// Hlq_taudecay_mid
// w_taudecay_mid
// u_taudecay_mid
// H3q_tauhad_mid
// H2q_qtau_tauhad_mid
// H2q_tautau_tauhad_mid
// Hlqq_emu_tauhad_mid
// Hlq_tauhad_mid
// w_tauhad_mid
// u_tauhad_mid
// H3q_td_mid
// rest_td_mid
// H2q_Hlqq_td_mid
// gKK_g_max
// gKK_g_min
// gKK_g_mid
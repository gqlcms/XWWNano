#ifndef _VVVTree_signal_DECO_
#define _VVVTree_signal_DECO_

void EDBR2PKUTree::Radion_Matching() {
    R4q_max=-99,R3q_max=-99,R2q_max=-99,Rlqq_max=-99,Rlq_max=-99,w_max=-99,u_max=-99;
    R4q_min=-99,R3q_min=-99,R2q_min=-99,Rlqq_min=-99,Rlq_min=-99,w_min=-99,u_min=-99;
    gKK_g_max = -99;
    gKK_g_min = -99;
    R3q_taudecay_max = -99;
    R2q_qq_taudecay_max = -99;
    R2q_qtau_taudecay_max = -99;
    R2q_tautau_taudecay_max = -99;
    Rlqq_emu_taudecay_max = -99;
    Rlqq_tau_taudecay_max = -99;
    Rlq_taudecay_max = -99;
    w_taudecay_max = -99;
    u_taudecay_max = -99;
    R3q_taudecay_min = -99;
    R2q_qq_taudecay_min = -99;
    R2q_qtau_taudecay_min = -99;
    R2q_tautau_taudecay_min = -99;
    Rlqq_emu_taudecay_min = -99;
    Rlqq_tau_taudecay_min = -99;
    Rlq_taudecay_min = -99;
    w_taudecay_min = -99;
    u_taudecay_min = -99;
    R3q_tauhad_max = -99;
    R2q_qtau_tauhad_max = -99;
    R2q_tautau_tauhad_max = -99;
    Rlqq_emu_tauhad_max = -99;
    Rlq_tauhad_max = -99;
    w_tauhad_max = -99;
    u_tauhad_max = -99;
    R3q_tauhad_min = -99;
    R2q_qtau_tauhad_min = -99;
    R2q_tautau_tauhad_min = -99;
    Rlqq_emu_tauhad_min = -99;
    Rlq_tauhad_min = -99;
    w_tauhad_min = -99;
    u_tauhad_min = -99;

    R3q_td_max = -99;
    rest_td_max = -99;
    R2q_Rlqq_td_max = -99;
    R3q_td_min = -99;
    rest_td_min = -99;
    R2q_Rlqq_td_min = -99;

    R4q_mid=-99,R3q_mid=-99,R2q_mid=-99,Rlqq_mid=-99,Rlq_mid=-99,w_mid=-99,u_mid=-99;
    gKK_g_mid = -99;
    R3q_taudecay_mid = -99;
    R2q_qq_taudecay_mid = -99;
    R2q_qtau_taudecay_mid = -99;
    R2q_tautau_taudecay_mid = -99;
    Rlqq_emu_taudecay_mid = -99;
    Rlqq_tau_taudecay_mid = -99;
    Rlq_taudecay_mid = -99;
    w_taudecay_mid = -99;
    u_taudecay_mid = -99;
    R3q_tauhad_mid = -99;
    R2q_qtau_tauhad_mid = -99;
    R2q_tautau_tauhad_mid = -99;
    Rlqq_emu_tauhad_mid = -99;
    Rlq_tauhad_mid = -99;
    w_tauhad_mid = -99;
    u_tauhad_mid = -99;
    R3q_td_mid = -99;
    rest_td_mid = -99;
    R2q_Rlqq_td_mid = -99;

    gKK_g_max = -99;
    gKK_g_min = -99;
    gKK_g_mid = -99;


    gKK_g_Matching(); // this has to run first
    Radion_Matching_taulep(); // this has to run second
    Radion_Matching_taudecay();


}

void EDBR2PKUTree::Radion_Matching_taulep() {

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

    if( detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR){
            R4q_max=1;
    }

    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==3&&R4q_max<1){
            R3q_max=1;
    }

    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&R4q_max<1&&R3q_max<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlqq_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlqq_max=1;
        }
    }

    if(((detlaR(etagenwl[0],Etaj_max,phigenwl[0],Phij_max)<dr&&detlaR(genw_q1_eta[0],Etaj_max,genw_q1_phi[0],Phij_max)<dR&&detlaR(genw_q2_eta[0],Etaj_max,genw_q2_phi[0],Phij_max)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_max,phigenwl[1],Phij_max)<dr&&detlaR(genw_q1_eta[1],Etaj_max,genw_q1_phi[1],Phij_max)<dR&&detlaR(genw_q2_eta[1],Etaj_max,genw_q2_phi[1],Phij_max)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_max,phigenwl[2],Phij_max)<dr&&detlaR(genw_q1_eta[2],Etaj_max,genw_q1_phi[2],Phij_max)<dR&&detlaR(genw_q2_eta[2],Etaj_max,genw_q2_phi[2],Phij_max)<dR&&taggenwl[2]==4))&&R4q_max<1&&R3q_max<1&&Rlqq_max<1){
        w_max=1;
    }

    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&detlaR(etaGenV_2,Etaj_max,phiGenV_2,Phij_max)<dr_WJ&&detlaR(etaGenV_3,Etaj_max,phiGenV_3,Phij_max)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==2&&R4q_max<1&&R3q_max<1&&Rlqq_max<1&&w_max<1){
        R2q_max=1;
    }


    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&R4q_max<1&&R3q_max<1&&R2q_max<1&&Rlqq_max<1&&w_max<1&&R2q_max<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlq_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlq_max=1;
        }
    }

    if(R4q_max<1&&R3q_max<1&&R2q_max<1&&Rlqq_max<1&&Rlq_max<1&&w_max<1){
        u_max=1;
    }

    
   


    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR){
            R4q_min=1;
    }

    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==3&&R4q_min<1){
            R3q_min=1;
    }

    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&R4q_min<1&&R3q_min<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlqq_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlqq_min=1;
        }
    }

    if(((detlaR(etagenwl[0],Etaj_min,phigenwl[0],Phij_min)<dr&&detlaR(genw_q1_eta[0],Etaj_min,genw_q1_phi[0],Phij_min)<dR&&detlaR(genw_q2_eta[0],Etaj_min,genw_q2_phi[0],Phij_min)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_min,phigenwl[1],Phij_min)<dr&&detlaR(genw_q1_eta[1],Etaj_min,genw_q1_phi[1],Phij_min)<dR&&detlaR(genw_q2_eta[1],Etaj_min,genw_q2_phi[1],Phij_min)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_min,phigenwl[2],Phij_min)<dr&&detlaR(genw_q1_eta[2],Etaj_min,genw_q1_phi[2],Phij_min)<dR&&detlaR(genw_q2_eta[2],Etaj_min,genw_q2_phi[2],Phij_min)<dR&&taggenwl[2]==4))&&R4q_min<1&&R3q_min<1&&Rlqq_min<1){
        w_min=1;
    }

    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&detlaR(etaGenV_2,Etaj_min,phiGenV_2,Phij_min)<dr_WJ&&detlaR(etaGenV_3,Etaj_min,phiGenV_3,Phij_min)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==2&&R4q_min<1&&R3q_min<1&&Rlqq_min<1&&w_min<1){
        R2q_min=1;
    }


    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&R4q_min<1&&R3q_min<1&&R2q_min<1&&Rlqq_min<1&&w_min<1&&R2q_min<1){
        if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlq_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlq_min=1;
        }
    }

    if(R4q_min<1&&R3q_min<1&&R2q_min<1&&Rlqq_min<1&&Rlq_min<1&&w_min<1){
        u_min=1;
    }

    g_max=0;
    g_min=0;
    q_max=0;
    q_min=0;

    if(R3q_max==1||R4q_max==1){
        t_max=1;
        t_max_tag=1;
    }
    
    if(R3q_min==1||R4q_min==1){
               t_min=1;
               t_min_tag=1; 
         }
                                  
    if(Nj8==3){
        R4q_mid=-99,R3q_mid=-99,R2q_mid=-99,Rlqq_mid=-99,Rlq_mid=-99,w_mid=-99,u_mid=-99;
        
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR){
                R4q_mid=1;
        }

        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==3&&R4q_mid<1){
                R3q_mid=1;
        }

        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&R4q_mid<1&&R3q_mid<1){
            if(status_2==4&&status_3>=1&&status_3<=3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlqq_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<=3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlqq_mid=1;
            }
        }

        if(((detlaR(etagenwl[0],Etaj_mid,phigenwl[0],Phij_mid)<dr&&detlaR(genw_q1_eta[0],Etaj_mid,genw_q1_phi[0],Phij_mid)<dR&&detlaR(genw_q2_eta[0],Etaj_mid,genw_q2_phi[0],Phij_mid)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_mid,phigenwl[1],Phij_mid)<dr&&detlaR(genw_q1_eta[1],Etaj_mid,genw_q1_phi[1],Phij_mid)<dR&&detlaR(genw_q2_eta[1],Etaj_mid,genw_q2_phi[1],Phij_mid)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_mid,phigenwl[2],Phij_mid)<dr&&detlaR(genw_q1_eta[2],Etaj_mid,genw_q1_phi[2],Phij_mid)<dR&&detlaR(genw_q2_eta[2],Etaj_mid,genw_q2_phi[2],Phij_mid)<dR&&taggenwl[2]==4))&&R4q_mid<1&&R3q_mid<1&&Rlqq_mid<1){
            w_mid=1;
        }

        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&detlaR(etaGenV_2,Etaj_mid,phiGenV_2,Phij_mid)<dr_WJ&&detlaR(etaGenV_3,Etaj_mid,phiGenV_3,Phij_mid)<dr_WJ&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==2&&R4q_mid<1&&R3q_mid<1&&Rlqq_mid<1&&w_mid<1){
            R2q_mid=1;
        }


        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&R4q_mid<1&&R3q_mid<1&&R2q_mid<1&&Rlqq_mid<1&&w_mid<1&&R2q_mid<1){
            if(status_2==4&&status_3>=1&&status_3<=3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlq_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<=3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlq_mid=1;
            }
        }

        if(R4q_mid<1&&R3q_mid<1&&R2q_mid<1&&Rlqq_mid<1&&Rlq_mid<1&&w_mid<1){
            u_mid=1;
        }
        
        g_mid=0;
        q_mid=0;
        if(R3q_mid==1||R4q_mid==1){
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

void EDBR2PKUTree::Radion_Matching_taudecay() {
    // considering tau decay in this function
    double dr_WJ=1111110.6;
    double dr=0.6;
    double dR=0.8;
    double dRR=1.6;

    // use R4q_max for : had W + had W
    // use R3q_max for : had W + had W
    // had W + tau : 
    
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&R4q_max<1&&R3q_max<1){
        if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R3q_taudecay_max=1;
            }
        }
        if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R3q_taudecay_max=1;
            }
        }
    }

    // if(status_3 == 3){
    //     cout << "debug :" << endl;
    //     cout << gen_tau_decay_3 << " gen_tau_decay_3" <<endl;
    //     cout << detlaR(etaq21,Etaj_max,phiq21,Phij_max) << " detlaR(etaq21,Etaj_max,phiq21,Phij_max)" <<endl;
    //     cout << detlaR(etaq22,Etaj_max,phiq22,Phij_max) << " detlaR(etaq22,Etaj_max,phiq22,Phij_max)" <<endl;
    //     cout << R3q_taudecay_max << " R3q_taudecay_max" <<endl;
    //     cout << detlaR(etaq31,Etaj_max,phiq31,Phij_max) << " detlaR(etaq31,Etaj_max,phiq31,Phij_max)" <<endl;
    //     cout << etaq31 << " etaq31" <<endl;
    //     cout << phiq31 << " phiq31" <<endl;
    // }
    
    // had W + e,mu
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1){
        if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlqq_emu_taudecay_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlqq_emu_taudecay_max=1;
        }
    }

    // had W + leptonic tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&Rlqq_emu_taudecay_max<1){
        if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR&&detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 == 1  ){
                Rlqq_tau_taudecay_max=1;
            }
        }
        if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR&&detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 == 1 ){
                Rlqq_tau_taudecay_max=1;
            }
        }
    }

    if(((detlaR(etagenwl[0],Etaj_max,phigenwl[0],Phij_max)<dr&&detlaR(genw_q1_eta[0],Etaj_max,genw_q1_phi[0],Phij_max)<dR&&detlaR(genw_q2_eta[0],Etaj_max,genw_q2_phi[0],Phij_max)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_max,phigenwl[1],Phij_max)<dr&&detlaR(genw_q1_eta[1],Etaj_max,genw_q1_phi[1],Phij_max)<dR&&detlaR(genw_q2_eta[1],Etaj_max,genw_q2_phi[1],Phij_max)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_max,phigenwl[2],Phij_max)<dr&&detlaR(genw_q1_eta[2],Etaj_max,genw_q1_phi[2],Phij_max)<dR&&detlaR(genw_q2_eta[2],Etaj_max,genw_q2_phi[2],Phij_max)<dR&&taggenwl[2]==4)) &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&Rlqq_emu_taudecay_max<1&& Rlqq_tau_taudecay_max<1){
        w_taudecay_max=1;
    }



    // rewrite R2q_max because we need to exclude had W + had tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)+(detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==2 &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&w_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1){
        R2q_qq_taudecay_max=1;
    }

    // had W 1q + tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&w_taudecay_max<1){
        if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR)) == 1 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R2q_qtau_taudecay_max=1;
            }
        }
        if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR)) == 1 && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R2q_qtau_taudecay_max=1;
            }
        }
    }
    

    // tau + tau
    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&R2q_qtau_taudecay_max<1&&w_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1){
        if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR && detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR ){
            if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                R2q_tautau_taudecay_max=1;
            }
        }
    }


    if(detlaR(gen_rad_eta,Etaj_max,gen_rad_phi,Phij_max)<dr &&R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&R2q_qtau_taudecay_max<1&&R2q_tautau_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1&&w_taudecay_max<1){
        // had ; e, mu
        if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            Rlq_taudecay_max=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            Rlq_taudecay_max=1;
        }
        // had tau ; e, mu
        if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_2 < 1){
                Rlq_taudecay_max=1;
            }
        }
        if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_3 < 1){
                Rlq_taudecay_max=1;
            }
        }
        // had ; lep tau
        if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR)+(detlaR(etaq22,Etaj_max,phiq22,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_3 == 1){
                Rlq_taudecay_max=1;
            }
        }
        if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR)+(detlaR(etaq32,Etaj_max,phiq32,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_2 == 1){
                Rlq_taudecay_max=1;
            }
        }
        // had tau ; lep tau
        if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR))==1&&detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR){
            if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                Rlq_taudecay_max=1;
            }
        }
        if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_max,phiq31,Phij_max)<dR))==1&&detlaR(etaq21,Etaj_max,phiq21,Phij_max)<dR){
            if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                Rlq_taudecay_max=1;
            }
        }
    }

    if(R4q_max<1&&R3q_max<1&&R3q_taudecay_max<1&&R2q_qq_taudecay_max<1&&R2q_qtau_taudecay_max<1&&R2q_tautau_taudecay_max<1&&Rlqq_emu_taudecay_max<1&&Rlqq_tau_taudecay_max<1&&Rlq_taudecay_max<1 && w_taudecay_max<1){
        u_taudecay_max=1;
    }



    // min

    // use R4q_min for : had W + had W

    // use R3q_min for : had W + had W

    // had W + tau : 
    
    
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&R4q_min<1&&R3q_min<1){
        if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R3q_taudecay_min=1;
            }
        }
        if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R3q_taudecay_min=1;
            }
        }
    }
    
    // had W + e,mu
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1){
        if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlqq_emu_taudecay_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlqq_emu_taudecay_min=1;
        }
    }

    // had W + leptonic tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&Rlqq_emu_taudecay_min<1){
        if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR&&detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 == 1  ){
                Rlqq_tau_taudecay_min=1;
            }
        }
        if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR&&detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 == 1 ){
                Rlqq_tau_taudecay_min=1;
            }
        }
    }

    if(((detlaR(etagenwl[0],Etaj_min,phigenwl[0],Phij_min)<dr&&detlaR(genw_q1_eta[0],Etaj_min,genw_q1_phi[0],Phij_min)<dR&&detlaR(genw_q2_eta[0],Etaj_min,genw_q2_phi[0],Phij_min)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_min,phigenwl[1],Phij_min)<dr&&detlaR(genw_q1_eta[1],Etaj_min,genw_q1_phi[1],Phij_min)<dR&&detlaR(genw_q2_eta[1],Etaj_min,genw_q2_phi[1],Phij_min)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_min,phigenwl[2],Phij_min)<dr&&detlaR(genw_q1_eta[2],Etaj_min,genw_q1_phi[2],Phij_min)<dR&&detlaR(genw_q2_eta[2],Etaj_min,genw_q2_phi[2],Phij_min)<dR&&taggenwl[2]==4)) &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&Rlqq_emu_taudecay_min<1&& Rlqq_tau_taudecay_min<1){
        w_taudecay_min=1;
    }



    // rewrite R2q_min because we need to exclude had W + had tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)+(detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==2 &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&w_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1){
        R2q_qq_taudecay_min=1;
    }

    // had W 1q + tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&w_taudecay_min<1){
        if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR)) == 1 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if ( gen_tau_decay_3 < 1 ){
                R2q_qtau_taudecay_min=1;
            }
        }
        if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR)) == 1 && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if ( gen_tau_decay_2 < 1 ){
                R2q_qtau_taudecay_min=1;
            }
        }
    }
    

    // tau + tau
    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&R2q_qtau_taudecay_min<1&&w_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1){
        if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR && detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR ){
            if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                R2q_tautau_taudecay_min=1;
            }
        }
    }


    if(detlaR(gen_rad_eta,Etaj_min,gen_rad_phi,Phij_min)<dr &&R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&R2q_qtau_taudecay_min<1&&R2q_tautau_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1&&w_taudecay_min<1){
        // had ; e, mu
        if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            Rlq_taudecay_min=1;
        }
        if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            Rlq_taudecay_min=1;
        }
        // had tau ; e, mu
        if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_2 < 1){
                Rlq_taudecay_min=1;
            }
        }
        if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_3 < 1){
                Rlq_taudecay_min=1;
            }
        }
        // had ; lep tau
        if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR)+(detlaR(etaq22,Etaj_min,phiq22,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_3 == 1){
                Rlq_taudecay_min=1;
            }
        }
        if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR)+(detlaR(etaq32,Etaj_min,phiq32,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_2 == 1){
                Rlq_taudecay_min=1;
            }
        }
        // had tau ; lep tau
        if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR))==1&&detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR){
            if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                Rlq_taudecay_min=1;
            }
        }
        if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_min,phiq31,Phij_min)<dR))==1&&detlaR(etaq21,Etaj_min,phiq21,Phij_min)<dR){
            if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                Rlq_taudecay_min=1;
            }
        }
    }

    
    

    if(R4q_min<1&&R3q_min<1&&R3q_taudecay_min<1&&R2q_qq_taudecay_min<1&&R2q_qtau_taudecay_min<1&&R2q_tautau_taudecay_min<1&&Rlqq_emu_taudecay_min<1&&Rlqq_tau_taudecay_min<1&&Rlq_taudecay_min<1 && w_taudecay_min<1){
        u_taudecay_min=1;
    }

    
    if(R3q_max == 1||R3q_taudecay_max ==1){
        R3q_td_max = 1 ;
    }
    if(u_taudecay_max == 1 && gKK_g_max < 1){
        rest_td_max = 1;
    }
    if(Rlqq_emu_taudecay_max == 1 || Rlqq_tau_taudecay_max == 1 || R2q_max == 1 || R2q_qtau_taudecay_max == 1 || R2q_tautau_taudecay_max == 1){
        R2q_Rlqq_td_max= 1;
    }


    if(R3q_min == 1||R3q_taudecay_min ==1){
        R3q_td_min = 1 ;
    }
    if(u_taudecay_min == 1 && gKK_g_min < 1){
        rest_td_min = 1;
    }
    if(Rlqq_emu_taudecay_min == 1 || Rlqq_tau_taudecay_min == 1 || R2q_min == 1 || R2q_qtau_taudecay_min == 1 || R2q_tautau_taudecay_min == 1){
        R2q_Rlqq_td_min= 1;
    }

    R3q_max = R3q_td_max;
    R2q_max = (R2q_max == 1 || R2q_qtau_taudecay_max == 1 || R2q_tautau_taudecay_max == 1);
    Rlqq_max = (Rlqq_emu_taudecay_max == 1 || Rlqq_tau_taudecay_max == 1);
    Rlq_max = Rlq_taudecay_max;
    u_max = ( R4q_max < 1 && R3q_max < 1 && R2q_max < 1 && Rlqq_max < 1 && Rlq_max < 1 && gKK_g_max < 1 && w_max < 1);

    R3q_min = R3q_td_min;
    R2q_min = (R2q_min == 1 || R2q_qtau_taudecay_min == 1 || R2q_tautau_taudecay_min == 1);
    Rlqq_min = (Rlqq_emu_taudecay_min == 1 || Rlqq_tau_taudecay_min == 1);
    Rlq_min = Rlq_taudecay_min;
    u_min = ( R4q_min < 1 && R3q_min < 1 && R2q_min < 1 && Rlqq_min < 1 && Rlq_min < 1 && gKK_g_min < 1 && w_min < 1 );


    // for the mid Jet
    if(Nj8 == 3){
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&R4q_mid<1&&R3q_mid<1){
            if(status_2==4 && status_3==3 && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 < 1 ){
                    R3q_taudecay_mid=1;
                }
            }
            if(status_3==4 && status_2==3 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 < 1 ){
                    R3q_taudecay_mid=1;
                }
            }
        }
        
        // had W + e,mu
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1){
            if(status_2==4&&status_3>=1&&status_3<3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlqq_emu_taudecay_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlqq_emu_taudecay_mid=1;
            }
        }

        // had W + leptonic tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1){
            if(status_2==4&&status_3==3&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR&&detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 == 1  ){
                    Rlqq_tau_taudecay_mid=1;
                }
            }
            if(status_3==4&&status_2==3&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR&&detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 == 1 ){
                    Rlqq_tau_taudecay_mid=1;
                }
            }
        }

        if(((detlaR(etagenwl[0],Etaj_mid,phigenwl[0],Phij_mid)<dr&&detlaR(genw_q1_eta[0],Etaj_mid,genw_q1_phi[0],Phij_mid)<dR&&detlaR(genw_q2_eta[0],Etaj_mid,genw_q2_phi[0],Phij_mid)<dR&&taggenwl[0]==4)||(detlaR(etagenwl[1],Etaj_mid,phigenwl[1],Phij_mid)<dr&&detlaR(genw_q1_eta[1],Etaj_mid,genw_q1_phi[1],Phij_mid)<dR&&detlaR(genw_q2_eta[1],Etaj_mid,genw_q2_phi[1],Phij_mid)<dR&&taggenwl[1]==4)||(detlaR(etagenwl[2],Etaj_mid,phigenwl[2],Phij_mid)<dr&&detlaR(genw_q1_eta[2],Etaj_mid,genw_q1_phi[2],Phij_mid)<dR&&detlaR(genw_q2_eta[2],Etaj_mid,genw_q2_phi[2],Phij_mid)<dR&&taggenwl[2]==4)) &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&& Rlqq_tau_taudecay_mid<1){
            w_taudecay_mid=1;
        }



        // rewrite R2q_mid because we need to exclude had W + had tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr&&status_2==4&&status_3==4&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)+(detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==2 &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&w_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1){
            R2q_qq_taudecay_mid=1;
        }

        // had W 1q + tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&w_taudecay_mid<1){
            if(status_2==4 && status_3==3 && ((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR)) == 1 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if ( gen_tau_decay_3 < 1 ){
                    R2q_qtau_taudecay_mid=1;
                }
            }
            if(status_2==3 && status_3==4 && ((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR)) == 1 && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if ( gen_tau_decay_2 < 1 ){
                    R2q_qtau_taudecay_mid=1;
                }
            }
        }
        

        // tau + tau
        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&R2q_qtau_taudecay_mid<1&&w_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1){
            if(status_2==3 && status_3==3 && detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR && detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR ){
                if ( gen_tau_decay_3 < 1 && gen_tau_decay_2 < 1 ){
                    R2q_tautau_taudecay_mid=1;
                }
            }
        }


        if(detlaR(gen_rad_eta,Etaj_mid,gen_rad_phi,Phij_mid)<dr &&R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&R2q_qtau_taudecay_mid<1&&R2q_tautau_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1&&w_taudecay_mid<1){
            // had ; e, mu
            if(status_2==4&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                Rlq_taudecay_mid=1;
            }
            if(status_3==4&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                Rlq_taudecay_mid=1;
            }
            // had tau ; e, mu
            if(status_2==3&&status_3>=1&&status_3<3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_2 < 1){
                    Rlq_taudecay_mid=1;
                }
            }
            if(status_3==3&&status_2>=1&&status_2<3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_3 < 1){
                    Rlq_taudecay_mid=1;
                }
            }
            // had ; lep tau
            if(status_2==4&&status_3>=1&&status_3==3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR)+(detlaR(etaq22,Etaj_mid,phiq22,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_3 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
            if(status_3==4&&status_2>=1&&status_2==3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR)+(detlaR(etaq32,Etaj_mid,phiq32,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_2 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
            // had tau ; lep tau
            if(status_2==3&&status_3==3&&((detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR))==1&&detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR){
                if (gen_tau_decay_2 < 1 && gen_tau_decay_3 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
            if(status_3==3&&status_2==3&&((detlaR(etaq31,Etaj_mid,phiq31,Phij_mid)<dR))==1&&detlaR(etaq21,Etaj_mid,phiq21,Phij_mid)<dR){
                if (gen_tau_decay_3 < 1 && gen_tau_decay_2 == 1){
                    Rlq_taudecay_mid=1;
                }
            }
        }

        if(R4q_mid<1&&R3q_mid<1&&R3q_taudecay_mid<1&&R2q_qq_taudecay_mid<1&&R2q_qtau_taudecay_mid<1&&R2q_tautau_taudecay_mid<1&&Rlqq_emu_taudecay_mid<1&&Rlqq_tau_taudecay_mid<1&&Rlq_taudecay_mid<1 && w_taudecay_mid<1){
            u_taudecay_mid=1;
        }



        if(R3q_mid == 1||R3q_taudecay_mid ==1){
            R3q_td_mid = 1 ;
        }
        if(u_taudecay_mid == 1 && gKK_g_mid < 1){
            rest_td_mid = 1;
        }
        if(Rlqq_emu_taudecay_mid == 1 || Rlqq_tau_taudecay_mid == 1 || R2q_mid == 1 || R2q_qtau_taudecay_mid == 1 || R2q_tautau_taudecay_mid == 1){
            R2q_Rlqq_td_mid= 1;
        }

        R3q_mid = R3q_td_mid;
        R2q_mid = (R2q_mid == 1 || R2q_qtau_taudecay_mid == 1 || R2q_tautau_taudecay_mid == 1);
        Rlqq_mid = (Rlqq_emu_taudecay_mid == 1 || Rlqq_tau_taudecay_mid == 1);
        Rlq_mid = Rlq_taudecay_mid;
        u_mid = ( R4q_mid < 1 && R3q_mid < 1 && R2q_mid < 1 && Rlqq_mid < 1 && Rlq_mid < 1 && gKK_g_mid < 1 && w_mid < 1 );
    }

    
}

#endif




// R4q_max
// R3q_max
// R2q_max
// Rlqq_max
// Rlq_max
// w_max
// u_max
// R4q_min
// R3q_min
// R2q_min
// Rlqq_min
// Rlq_min
// w_min
// u_min
// gKK_g_max
// gKK_g_min
// R3q_taudecay_max
// R2q_qq_taudecay_max
// R2q_qtau_taudecay_max
// R2q_tautau_taudecay_max
// Rlqq_emu_taudecay_max
// Rlqq_tau_taudecay_max
// Rlq_taudecay_max
// w_taudecay_max
// u_taudecay_max
// R3q_taudecay_min
// R2q_qq_taudecay_min
// R2q_qtau_taudecay_min
// R2q_tautau_taudecay_min
// Rlqq_emu_taudecay_min
// Rlqq_tau_taudecay_min
// Rlq_taudecay_min
// w_taudecay_min
// u_taudecay_min
// R3q_tauhad_max
// R2q_qtau_tauhad_max
// R2q_tautau_tauhad_max
// Rlqq_emu_tauhad_max
// Rlq_tauhad_max
// w_tauhad_max
// u_tauhad_max
// R3q_tauhad_min
// R2q_qtau_tauhad_min
// R2q_tautau_tauhad_min
// Rlqq_emu_tauhad_min
// Rlq_tauhad_min
// w_tauhad_min
// u_tauhad_min
// R3q_td_max
// rest_td_max
// R2q_Rlqq_td_max
// R3q_td_min
// rest_td_min
// R2q_Rlqq_td_min
// R4q_mid
// R3q_mid
// R2q_mid
// Rlqq_mid
// Rlq_mid
// w_mid
// u_mid
// gKK_g_mid
// R3q_taudecay_mid
// R2q_qq_taudecay_mid
// R2q_qtau_taudecay_mid
// R2q_tautau_taudecay_mid
// Rlqq_emu_taudecay_mid
// Rlqq_tau_taudecay_mid
// Rlq_taudecay_mid
// w_taudecay_mid
// u_taudecay_mid
// R3q_tauhad_mid
// R2q_qtau_tauhad_mid
// R2q_tautau_tauhad_mid
// Rlqq_emu_tauhad_mid
// Rlq_tauhad_mid
// w_tauhad_mid
// u_tauhad_mid
// R3q_td_mid
// rest_td_mid
// R2q_Rlqq_td_mid
// gKK_g_max
// gKK_g_min
// gKK_g_mid
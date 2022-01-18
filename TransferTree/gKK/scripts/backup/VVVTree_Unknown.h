#ifndef _VVVTree_Unknown_
#define _VVVTree_Unknown_

void EDBR2PKUTree::Unknown() {
    l_pt              = Float_t(ptlep1);
    l_eta             = Float_t(etalep1);
    l_phi             = Float_t(philep1);
    ptVhad            = Float_t(ptVhad);

    jet_eta           = Float_t(yVhad);
    jet_phi           = Float_t(phiVhad);
    jet_mass_pruned   = Float_t(massVhadJEC);
    Mj_un = Float_t(jetAK8puppi_sd);

    jet_tau1_puppi    = Float_t(jetAK8puppi_tau1);
    jet_tau2_puppi    = Float_t(jetAK8puppi_tau2);
    jet_tau3_puppi    = Float_t(jetAK8puppi_tau3);
    jet_tau4_puppi    = Float_t(jetAK8puppi_tau4);

    tau21    = Float_t(jetAK8puppi_tau21);
    tau31    = Float_t((jetAK8puppi_tau3>0)*(jetAK8puppi_tau1>0)*jetAK8puppi_tau3/jetAK8puppi_tau1-99*(jetAK8puppi_tau3<0||jetAK8puppi_tau1<0));
    tau41    = Float_t((jetAK8puppi_tau4>0)*(jetAK8puppi_tau1>0)*jetAK8puppi_tau4/jetAK8puppi_tau1-99*(jetAK8puppi_tau4<0||jetAK8puppi_tau1<0));
    tau32    = Float_t((jetAK8puppi_tau3>0)*(jetAK8puppi_tau2>0)*jetAK8puppi_tau3/jetAK8puppi_tau2-99*(jetAK8puppi_tau3<0||jetAK8puppi_tau2<0));
    tau43    = Float_t((jetAK8puppi_tau4>0)*(jetAK8puppi_tau3>0)*jetAK8puppi_tau4/jetAK8puppi_tau3-99*(jetAK8puppi_tau4<0||jetAK8puppi_tau3<0));

    W_pt              = Float_t(ptVlepJEC);
    W_eta             = Float_t(yVlep);
    W_phi             = Float_t(phiVlep);


    MJJJ_JEC_up              = Float_t(candMasspuppiJEC_JEC_up);
    MJJJ_JEC_down            = Float_t(candMasspuppiJEC_JEC_down);
    MJJJ_JER_up              = Float_t(candMasspuppiJEC_JER_up);
    MJJJ_JER_down            = Float_t(candMasspuppiJEC_JER_down);

    Mj_un_2 = Float_t(jetAK8puppi_sd_2);
    tau21_2    = Float_t(jetAK8puppi_tau21_2);

    tau42    = Float_t(jetAK8puppi_tau42);
                tau42_3    = Float_t(jetAK8puppi_tau42_3);

                tau31_2    = Float_t((jetAK8puppi_tau3_2>0)*(jetAK8puppi_tau1_2>0)*jetAK8puppi_tau3_2/jetAK8puppi_tau1_2-99*(jetAK8puppi_tau3_2<0||jetAK8puppi_tau1_2<0));
tau41_2    = Float_t((jetAK8puppi_tau4_2>0)*(jetAK8puppi_tau1_2>0)*jetAK8puppi_tau4_2/jetAK8puppi_tau1_2-99*(jetAK8puppi_tau4_2<0||jetAK8puppi_tau1_2<0));
tau32_2    = Float_t((jetAK8puppi_tau3_2>0)*(jetAK8puppi_tau2_2>0)*jetAK8puppi_tau3_2/jetAK8puppi_tau2_2-99*(jetAK8puppi_tau3_2<0||jetAK8puppi_tau2_2<0));
tau43_2    = Float_t((jetAK8puppi_tau4_2>0)*(jetAK8puppi_tau3_2>0)*jetAK8puppi_tau4_2/jetAK8puppi_tau3_2-99*(jetAK8puppi_tau4_2<0||jetAK8puppi_tau3_2<0));

jet_tau1_puppi_2    = Float_t(jetAK8puppi_tau1_2);
jet_tau2_puppi_2    = Float_t(jetAK8puppi_tau2_2);
jet_tau3_puppi_2    = Float_t(jetAK8puppi_tau3_2);
jet_tau4_puppi_2    = Float_t(jetAK8puppi_tau4_2);

tau42    = Float_t(jetAK8puppi_tau42);
                tau42_2    = Float_t(jetAK8puppi_tau42_2);

                tau21_max=-99;
tau31_max=-99;
tau41_max=-99;
tau32_max=-99;
tau42_max=-99;
tau43_max=-99;
tau21_mid=-99;
tau31_mid=-99;
tau41_mid=-99;
tau32_mid=-99;
tau42_mid=-99;
tau43_mid=-99;
tau21_min=-99; 
tau31_min=-99;
tau41_min=-99;
tau32_min=-99;
tau42_min=-99;
tau43_min=-99;

DPhi_max_mid=-99;
        DPhi_mid_min=-99;
        DPhi_min_max=-99;
        DPhi_max=-99;
        DPhi_min=-99;
        DEta_max_mid=-99;
        DEta_mid_min=-99;
        DEta_min_max=-99;
        DEta_max=-99;
        DEta_min=-99;
        DEta_12=-99;
        DEta_13=-99;
        DEta_23=-99;
        DR_max_mid=-99;
        DR_mid_min=-99;
        DR_min_max=-99;
        DR_max=-99;
        DR_min=-99;


tau21_max=Float_t(jetAK8puppi_tau2_2/jetAK8puppi_tau1_2);
tau31_max=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau1_2);
tau41_max=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau1_2);
tau32_max=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau2_2);
tau42_max=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau2_2);
tau43_max=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau3_2);
tau21_mid=-99;
tau31_mid=-99;
tau41_mid=-99;
tau32_mid=-99;
tau42_mid=-99;
tau43_mid=-99;
tau21_min=Float_t(jetAK8puppi_tau2/jetAK8puppi_tau1);
tau31_min=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau1);
tau41_min=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau1);
tau32_min=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau2);
tau42_min=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau2);
tau43_min=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau3);

DPhi_max_mid=-99;
DPhi_mid_min=-99;
DPhi_min_max=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_2)-3.14159));
DEta_min_max=fabs(jetAK8puppi_eta-jetAK8puppi_eta_2);
DR_max_mid=-99;
DR_mid_min=-99;
DR_min_max=Float_t(sqrt(DPhi_min_max*DPhi_min_max+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2)));


tau21_max=Float_t(jetAK8puppi_tau2/jetAK8puppi_tau1);
tau31_max=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau1);
tau41_max=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau1);
tau32_max=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau2);
tau42_max=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau2);
tau43_max=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau3);
tau21_mid=-99;
tau31_mid=-99;
tau41_mid=-99;
tau32_mid=-99;
tau42_mid=-99;
tau43_mid=-99;
tau21_min=Float_t(jetAK8puppi_tau2_2/jetAK8puppi_tau1_2);
tau31_min=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau1_2);
tau41_min=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau1_2);
tau32_min=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau2_2);
tau42_min=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau2_2);
tau43_min=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau3_2);

DPhi_max_mid=-99;
DPhi_mid_min=-99;
DPhi_min_max=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_2)-3.14159));
DEta_min_max=fabs(jetAK8puppi_eta-jetAK8puppi_eta_2);
DR_max_mid=-99;
DR_mid_min=-99;
DR_min_max=Float_t(sqrt(DPhi_min_max*DPhi_min_max+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2)));

tau21_max=Float_t(jetAK8puppi_tau2_3/jetAK8puppi_tau1_3);
tau31_max=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau1_3);
tau41_max=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau1_3);
tau32_max=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau2_3);
tau42_max=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau2_3);
tau43_max=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau3_3);
tau21_mid=Float_t(jetAK8puppi_tau2_2/jetAK8puppi_tau1_2);
tau31_mid=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau1_2);
tau41_mid=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau1_2);
tau32_mid=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau2_2);
tau42_mid=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau2_2);
tau43_mid=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau3_2);
tau21_min=Float_t(jetAK8puppi_tau2/jetAK8puppi_tau1);
tau31_min=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau1);
tau41_min=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau1);
tau32_min=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau2);
tau42_min=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau2);
tau43_min=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau3);

DPhi_max_mid=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi_3-jetAK8puppi_phi_2)-3.14159));
DPhi_mid_min=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_2)-3.14159));
DPhi_min_max=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_3)-3.14159));
DEta_max_mid=fabs(jetAK8puppi_eta_3-jetAK8puppi_eta_2);
DEta_mid_min=fabs(jetAK8puppi_eta-jetAK8puppi_eta_2);
DEta_min_max=fabs(jetAK8puppi_eta-jetAK8puppi_eta_3);
DR_max_mid=Float_t(sqrt(DPhi_max_mid*DPhi_max_mid+(jetAK8puppi_eta_3-jetAK8puppi_eta_2)*(jetAK8puppi_eta_3-jetAK8puppi_eta_2)));
DR_mid_min=Float_t(sqrt(DPhi_mid_min*DPhi_mid_min+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2)));
DR_min_max=Float_t(sqrt(DPhi_min_max*DPhi_min_max+(jetAK8puppi_eta-jetAK8puppi_eta_3)*(jetAK8puppi_eta-jetAK8puppi_eta_3)));

tau21_max=Float_t(jetAK8puppi_tau2_3/jetAK8puppi_tau1_3);
tau31_max=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau1_3);
tau41_max=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau1_3);
tau32_max=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau2_3);
tau42_max=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau2_3);
tau43_max=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau3_3);
tau21_mid=Float_t(jetAK8puppi_tau2/jetAK8puppi_tau1);
tau31_mid=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau1);
tau41_mid=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau1);
tau32_mid=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau2);
tau42_mid=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau2);
tau43_mid=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau3);
tau21_min=Float_t(jetAK8puppi_tau2_2/jetAK8puppi_tau1_2);
tau31_min=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau1_2);
tau41_min=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau1_2);
tau32_min=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau2_2);
tau42_min=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau2_2);
tau43_min=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau3_2);

DPhi_max_mid=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_3)-3.14159));
DPhi_mid_min=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_2)-3.14159));
DPhi_min_max=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi_3-jetAK8puppi_phi_2)-3.14159));
DEta_max_mid=fabs(jetAK8puppi_eta-jetAK8puppi_eta_3);
DEta_mid_min=fabs(jetAK8puppi_eta-jetAK8puppi_eta_2);
DEta_min_max=fabs(jetAK8puppi_eta_3-jetAK8puppi_eta_2);
DR_max_mid=Float_t(sqrt(DPhi_max_mid*DPhi_max_mid+(jetAK8puppi_eta_3-jetAK8puppi_eta)*(jetAK8puppi_eta_3-jetAK8puppi_eta)));
DR_mid_min=Float_t(sqrt(DPhi_mid_min*DPhi_mid_min+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2)));
DR_min_max=Float_t(sqrt(DPhi_min_max*DPhi_min_max+(jetAK8puppi_eta_2-jetAK8puppi_eta_3)*(jetAK8puppi_eta_2-jetAK8puppi_eta_3)));

tau21_max=Float_t(jetAK8puppi_tau2_2/jetAK8puppi_tau1_2);
tau31_max=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau1_2);
tau41_max=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau1_2);
tau32_max=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau2_2);
tau42_max=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau2_2);
tau43_max=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau3_2);
tau21_mid=Float_t(jetAK8puppi_tau2/jetAK8puppi_tau1);
tau31_mid=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau1);
tau41_mid=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau1);
tau32_mid=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau2);
tau42_mid=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau2);
tau43_mid=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau3);
tau21_min=Float_t(jetAK8puppi_tau2_3/jetAK8puppi_tau1_3);
tau31_min=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau1_3);
tau41_min=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau1_3);
tau32_min=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau2_3);
tau42_min=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau2_3);
tau43_min=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau3_3);

DPhi_max_mid=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_2)-3.14159));
DPhi_mid_min=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_3)-3.14159));
DPhi_min_max=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi_3-jetAK8puppi_phi_2)-3.14159));
DEta_max_mid=fabs(jetAK8puppi_eta-jetAK8puppi_eta_2);
DEta_mid_min=fabs(jetAK8puppi_eta-jetAK8puppi_eta_3);
DEta_min_max=fabs(jetAK8puppi_eta_3-jetAK8puppi_eta_2);
DR_max_mid=Float_t(sqrt(DPhi_max_mid*DPhi_max_mid+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2)));
DR_mid_min=Float_t(sqrt(DPhi_mid_min*DPhi_mid_min+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2)));
DR_min_max=Float_t(sqrt(DPhi_min_max*DPhi_min_max+(jetAK8puppi_eta_2-jetAK8puppi_eta_3)*(jetAK8puppi_eta_2-jetAK8puppi_eta_3)));

tau21_max=Float_t(jetAK8puppi_tau2_2/jetAK8puppi_tau1_2);
tau31_max=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau1_2);
tau41_max=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau1_2);
tau32_max=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau2_2);
tau42_max=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau2_2);
tau43_max=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau3_2);
tau21_mid=Float_t(jetAK8puppi_tau2_3/jetAK8puppi_tau1_3);
tau31_mid=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau1_3);
tau41_mid=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau1_3);
tau32_mid=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau2_3);
tau42_mid=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau2_3);
tau43_mid=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau3_3);
tau21_min=Float_t(jetAK8puppi_tau2/jetAK8puppi_tau1);
tau31_min=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau1);
tau41_min=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau1);
tau32_min=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau2);
tau42_min=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau2);
tau43_min=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau3);

DPhi_max_mid=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi_3-jetAK8puppi_phi_2)-3.14159));
DPhi_mid_min=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_3)-3.14159));
DPhi_min_max=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_2)-3.14159));
DEta_max_mid=fabs(jetAK8puppi_eta_3-jetAK8puppi_eta_2);
DEta_mid_min=fabs(jetAK8puppi_eta-jetAK8puppi_eta_3);
DEta_min_max=fabs(jetAK8puppi_eta-jetAK8puppi_eta_2);
DR_max_mid=Float_t(sqrt(DPhi_max_mid*DPhi_max_mid+(jetAK8puppi_eta_3-jetAK8puppi_eta_2)*(jetAK8puppi_eta_3-jetAK8puppi_eta_2)));
DR_mid_min=Float_t(sqrt(DPhi_mid_min*DPhi_mid_min+(jetAK8puppi_eta-jetAK8puppi_eta_3)*(jetAK8puppi_eta-jetAK8puppi_eta_3)));
DR_min_max=Float_t(sqrt(DPhi_min_max*DPhi_min_max+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2)));

tau21_max=Float_t(jetAK8puppi_tau2/jetAK8puppi_tau1);
tau31_max=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau1);
tau41_max=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau1);
tau32_max=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau2);
tau42_max=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau2);
tau43_max=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau3);
tau21_mid=Float_t(jetAK8puppi_tau2_2/jetAK8puppi_tau1_2);
tau31_mid=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau1_2);
tau41_mid=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau1_2);
tau32_mid=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau2_2);
tau42_mid=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau2_2);
tau43_mid=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau3_2);
tau21_min=Float_t(jetAK8puppi_tau2_3/jetAK8puppi_tau1_3);
tau31_min=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau1_3);
tau41_min=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau1_3);
tau32_min=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau2_3);
tau42_min=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau2_3);
tau43_min=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau3_3);

DPhi_max_mid=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_2)-3.14159));
DPhi_mid_min=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi_3-jetAK8puppi_phi_2)-3.14159));
DPhi_min_max=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_3)-3.14159));
DEta_max_mid=fabs(jetAK8puppi_eta-jetAK8puppi_eta_2);
DEta_mid_min=fabs(jetAK8puppi_eta_3-jetAK8puppi_eta_2);
DEta_min_max=fabs(jetAK8puppi_eta-jetAK8puppi_eta_3);
DR_max_mid=Float_t(sqrt(DPhi_max_mid*DPhi_max_mid+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2)));
DR_mid_min=Float_t(sqrt(DPhi_mid_min*DPhi_mid_min+(jetAK8puppi_eta_3-jetAK8puppi_eta_2)*(jetAK8puppi_eta_3-jetAK8puppi_eta_2)));
DR_min_max=Float_t(sqrt(DPhi_min_max*DPhi_min_max+(jetAK8puppi_eta-jetAK8puppi_eta_3)*(jetAK8puppi_eta-jetAK8puppi_eta_3)));

tau21_max=Float_t(jetAK8puppi_tau2/jetAK8puppi_tau1);
tau31_max=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau1);
tau41_max=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau1);
tau32_max=Float_t(jetAK8puppi_tau3/jetAK8puppi_tau2);
tau42_max=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau2);
tau43_max=Float_t(jetAK8puppi_tau4/jetAK8puppi_tau3);
tau21_mid=Float_t(jetAK8puppi_tau2_3/jetAK8puppi_tau1_3);
tau31_mid=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau1_3);
tau41_mid=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau1_3);
tau32_mid=Float_t(jetAK8puppi_tau3_3/jetAK8puppi_tau2_3);
tau42_mid=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau2_3);
tau43_mid=Float_t(jetAK8puppi_tau4_3/jetAK8puppi_tau3_3);
tau21_min=Float_t(jetAK8puppi_tau2_2/jetAK8puppi_tau1_2);
tau31_min=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau1_2);
tau41_min=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau1_2);
tau32_min=Float_t(jetAK8puppi_tau3_2/jetAK8puppi_tau2_2);
tau42_min=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau2_2);
tau43_min=Float_t(jetAK8puppi_tau4_2/jetAK8puppi_tau3_2);

DPhi_max_mid=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_3)-3.14159));
DPhi_mid_min=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi_3-jetAK8puppi_phi_2)-3.14159));
DPhi_min_max=Float_t(3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_2)-3.14159));
DEta_max_mid=fabs(jetAK8puppi_eta-jetAK8puppi_eta_3);
DEta_mid_min=fabs(jetAK8puppi_eta_3-jetAK8puppi_eta_2);
DEta_min_max=fabs(jetAK8puppi_eta-jetAK8puppi_eta_2);
DR_max_mid=Float_t(sqrt(DPhi_max_mid*DPhi_max_mid+(jetAK8puppi_eta_3-jetAK8puppi_eta)*(jetAK8puppi_eta_3-jetAK8puppi_eta)));
DR_mid_min=Float_t(sqrt(DPhi_mid_min*DPhi_mid_min+(jetAK8puppi_eta_3-jetAK8puppi_eta_2)*(jetAK8puppi_eta_3-jetAK8puppi_eta_2)));
DR_min_max=Float_t(sqrt(DPhi_min_max*DPhi_min_max+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2)));

t21t31t41_max  = Float_t(pow(tau21_max*tau31_max*tau41_max,1.0/3.0));
if(tau21_mid>0)
{
t21t31t41_mid  = Float_t(pow(tau21_mid*tau31_mid*tau41_mid,1.0/3.0));
}
else
{
t21t31t41_mid  = -99;
}
t21t31t41_min  = Float_t(pow(tau21_min*tau31_min*tau41_min,1.0/3.0));
S_t21t31t41_max  = Float_t((tau21_max+tau31_max+tau41_max)/3.0);
S_t21t31t41_mid  = Float_t((tau21_mid+tau31_mid+tau41_mid)/3.0);
S_t21t31t41_min  = Float_t((tau21_min+tau31_min+tau41_min)/3.0);

if(jetAK8puppi_ptJEC>0)
{
Mj_mean=Float_t((Mj*(Mj>0)+Mj_2*(Mj_2>0)+Mj_3*(Mj_3>0))/((Mj>0)+(Mj_2>0)+(Mj_3>0)));
}

if(jetAK8puppi_ptJEC<0)
{
Mj_mean=-99;
}

if(jetAK8puppi_ptJEC_2>0)
{
Pt2dPt1=Float_t(PTj_2/PTj);
}
if(jetAK8puppi_ptJEC_2<0)
{
Pt2dPt1=-99;
}

if(jetAK8puppi_ptJEC_3>0)
{
Pt3dPt1=Float_t(PTj_3/PTj);
}
if(jetAK8puppi_ptJEC_3<0)
{
Pt3dPt1=-99;
}

if(jetAK8puppi_ptJEC>0&&jetAK8puppi_ptJEC_2>0)
{
Phij_12=3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_2)-3.14159);
DEta_12=fabs(jetAK8puppi_eta-jetAK8puppi_eta_2);
DR_12=sqrt(Phij_12*Phij_12+(jetAK8puppi_eta-jetAK8puppi_eta_2)*(jetAK8puppi_eta-jetAK8puppi_eta_2));
}
if(jetAK8puppi_ptJEC<0||jetAK8puppi_ptJEC_2<0)
{
Phij_12=-99;
DR_12=-99;
}

if(jetAK8puppi_ptJEC>0&&jetAK8puppi_ptJEC_3>0)
{
Phij_13=3.14159-fabs(fabs(jetAK8puppi_phi-jetAK8puppi_phi_3)-3.14159);
DEta_13=fabs(jetAK8puppi_eta-jetAK8puppi_eta_3);
DR_13=sqrt(Phij_13*Phij_13+(jetAK8puppi_eta-jetAK8puppi_eta_3)*(jetAK8puppi_eta-jetAK8puppi_eta_3));
}
if(jetAK8puppi_ptJEC<0||jetAK8puppi_ptJEC_3<0)
{
Phij_13=-99;
DR_13=-99;
}

if(jetAK8puppi_ptJEC_3>0&&jetAK8puppi_ptJEC_2>0)
{
Phij_23=3.14159-fabs(fabs(jetAK8puppi_phi_3-jetAK8puppi_phi_2)-3.14159);
DEta_23=fabs(jetAK8puppi_eta_3-jetAK8puppi_eta_2);
DR_23=sqrt(Phij_23*Phij_23+(jetAK8puppi_eta_3-jetAK8puppi_eta_2)*(jetAK8puppi_eta_3-jetAK8puppi_eta_2));
}
if(jetAK8puppi_ptJEC_3<0||jetAK8puppi_ptJEC_2<0)
{
Phij_23=-99;
DR_23=-99;
}

if(jetAK8puppi_ptJEC_2<0)
{
DPhi_max=-99;
DPhi_min=-99;
DR_max=-99;
DR_min=-99;
}

if(jetAK8puppi_ptJEC_2>0&&jetAK8puppi_ptJEC_3<0)
{
DPhi_max=Phij_12;
DPhi_min=Phij_12;
DEta_max=DEta_12;
DEta_min=DEta_12;
DR_max=DR_12;
DR_min=DR_12;
}

if(jetAK8puppi_ptJEC_2>0&&jetAK8puppi_ptJEC_3>0)
{
   if(Phij_12>=Phij_13&&Phij_12>=Phij_23)
   {
     DPhi_max=Phij_12;
   }
   if(Phij_13>=Phij_12&&Phij_13>=Phij_23)
   {
     DPhi_max=Phij_13;
   }
   if(Phij_23>=Phij_12&&Phij_23>=Phij_13)
   {
     DPhi_max=Phij_23;
   }

   if(Phij_12<=Phij_13&&Phij_12<=Phij_23)
   {
     DPhi_min=Phij_12;
   }
   if(Phij_13<=Phij_12&&Phij_13<=Phij_23)
   {
     DPhi_min=Phij_13;
   }
   if(Phij_23<=Phij_12&&Phij_23<=Phij_13)
   {
     DPhi_min=Phij_23;
   }
   

   if(DEta_12>=DEta_13&&DEta_12>=DEta_23)
   {
     DEta_max=DEta_12;
   }
   if(DEta_13>=DEta_12&&DEta_13>=DEta_23)
   {
     DEta_max=DEta_13;
   }
   if(DEta_23>=DEta_12&&DEta_23>=DEta_13)
   {
     DEta_max=DEta_23;
   }

   if(DEta_12<=DEta_13&&DEta_12<=DEta_23)
   {
     DEta_min=DEta_12;
   }
   if(DEta_13<=DEta_12&&DEta_13<=DEta_23)
   {
     DEta_min=DEta_13;
   }
   if(DEta_23<=DEta_12&&DEta_23<=DEta_13)
   {
     DEta_min=DEta_23;
   }


   if(DR_12>=DR_13&&DR_12>=DR_23)
   {
     DR_max=DR_12;
   }
   if(DR_13>=DR_12&&DR_13>=DR_23)
   {
     DR_max=DR_13;
   }
   if(DR_23>=DR_12&&DR_23>=DR_13)
   {
     DR_max=DR_23;
   }

   if(DR_12<=DR_13&&DR_12<=DR_23)
   {
     DR_min=DR_12;
   }
   if(DR_13<=DR_12&&DR_13<=DR_23)
   {
     DR_min=DR_13;
   }
   if(DR_23<=DR_12&&DR_23<=DR_13)
   {
     DR_min=DR_23;
   }
}

DPhi_min2=DPhi_min;
DPhi_min3=DPhi_min;
DPhi_max2=DPhi_max;
DPhi_max3=DPhi_max;

if(jetAK8puppi_ptJEC_2>0&&jetAK8puppi_ptJEC_3>0)
{
PTj_23 =sqrt(PTj_2*PTj_2+PTj_3*PTj_3+2.0*PTj_2*PTj_3*cos(Phij_23));
}
if(jetAK8puppi_ptJEC_2<0||jetAK8puppi_ptJEC_3<0)
{
PTj_23 = -99;
}


Mj_un_3 = Float_t(jetAK8puppi_sd_3);
                tau21_3    = Float_t(jetAK8puppi_tau21_3);
                tau21_4    = Float_t(jetAK8puppi_tau21_4);
                tau42_4    = Float_t(jetAK8puppi_tau42_4);
                tau41_4    = Float_t(jetAK8puppi_tau41_4);
tau31_3    = Float_t((jetAK8puppi_tau3_3>0)*(jetAK8puppi_tau1_3>0)*jetAK8puppi_tau3_3/jetAK8puppi_tau1_3-99*(jetAK8puppi_tau3_3<0||jetAK8puppi_tau1_3<0));
tau41_3    = Float_t((jetAK8puppi_tau4_3>0)*(jetAK8puppi_tau1_3>0)*jetAK8puppi_tau4_3/jetAK8puppi_tau1_3-99*(jetAK8puppi_tau4_3<0||jetAK8puppi_tau1_3<0));
tau32_3    = Float_t((jetAK8puppi_tau3_3>0)*(jetAK8puppi_tau2_3>0)*jetAK8puppi_tau3_3/jetAK8puppi_tau2_3-99*(jetAK8puppi_tau3_3<0||jetAK8puppi_tau2_3<0));
tau43_3    = Float_t((jetAK8puppi_tau4_3>0)*(jetAK8puppi_tau3_3>0)*jetAK8puppi_tau4_3/jetAK8puppi_tau3_3-99*(jetAK8puppi_tau4_3<0||jetAK8puppi_tau3_3<0));
jet_tau1_puppi_3    = Float_t(jetAK8puppi_tau1_3);
jet_tau2_puppi_3    = Float_t(jetAK8puppi_tau2_3);
jet_tau3_puppi_3    = Float_t(jetAK8puppi_tau3_3);
jet_tau4_puppi_3    = Float_t(jetAK8puppi_tau4_3);
t21t31t41  = Float_t(pow(tau41*tau31*tau21,1.0/3.0));
t21t31t41_2  = Float_t(pow(tau41_2*tau31_2*tau21_2,1.0/3.0));
t21t31t41_3  = Float_t(pow(tau41_3*tau31_3*tau21_3,1.0/3.0));

if(jetAK8puppi_ptJEC>0&&jetAK8puppi_ptJEC_2>0&&jetAK8puppi_ptJEC_3>0)
{
pt1pt2pt3  = Float_t(pow(PTj*PTj_2*PTj_3,1.0/3.0));
}
if(jetAK8puppi_ptJEC<0||jetAK8puppi_ptJEC_2<0||jetAK8puppi_ptJEC_3<0)
{
pt1pt2pt3  = -99.;
}

PTj_4=Float_t(jetAK8puppi_ptJEC_4);
PTj_5=Float_t(jetAK8puppi_ptJEC_5);
PTj_6=Float_t(jetAK8puppi_ptJEC_6);
PTj_7=Float_t(jetAK8puppi_ptJEC_7);
PTj_8=Float_t(jetAK8puppi_ptJEC_8);

newgen_gra_m=Float_t(gen_gra_m);
newgen_gra_pt=Float_t(gen_gra_pt);
newgen_gra_eta=Float_t(gen_gra_eta);
newgen_gra_phi=Float_t(gen_gra_phi);
newgen_rad_m=Float_t(gen_rad_m);
newgen_rad_pt=Float_t(gen_rad_pt);
newgen_rad_eta=Float_t(gen_rad_eta);
newgen_rad_phi=Float_t(gen_rad_phi);
newgen_tau_e=Float_t(gen_tau_e);
newgen_tau_pt=Float_t(gen_tau_pt);
newgen_tau_eta=Float_t(gen_tau_eta);
newgen_tau_phi=Float_t(gen_tau_phi);
newgen_tau_e_2=Float_t(gen_tau_e_2);
newgen_tau_pt_2=Float_t(gen_tau_pt_2);
newgen_tau_eta_2=Float_t(gen_tau_eta_2);
newgen_tau_phi_2=Float_t(gen_tau_phi_2);
newgen_tau_e_3=Float_t(gen_tau_e_3);
newgen_tau_pt_3=Float_t(gen_tau_pt_3);
newgen_tau_eta_3=Float_t(gen_tau_eta_3);
newgen_tau_phi_3=Float_t(gen_tau_phi_3);
newptGenVhad=Float_t(ptGenVhad);
newetaGenVhad=Float_t(etaGenVhad);
newphiGenVhad=Float_t(phiGenVhad);
newmassGenVhad=Float_t(massGenVhad);
newptGenV_2=Float_t(ptGenV_2);
newetaGenV_2=Float_t(etaGenV_2);
newphiGenV_2=Float_t(phiGenV_2);
newmassGenV_2=Float_t(massGenV_2);
newptGenV_3=Float_t(ptGenV_3);
newetaGenV_3=Float_t(etaGenV_3);
newphiGenV_3=Float_t(phiGenV_3);
newmassGenV_3=Float_t(massGenV_3);
newptGenVlep=Float_t(ptGenVlep);
newetaGenVlep=Float_t(etaGenVlep);
newphiGenVlep=Float_t(phiGenVlep);
newmassGenVlep=Float_t(massGenVlep);
newptGenVlep_2=Float_t(ptGenVlep_2);
newetaGenVlep_2=Float_t(etaGenVlep_2);
newphiGenVlep_2=Float_t(phiGenVlep_2);
newmassGenVlep_2=Float_t(massGenVlep_2);
newptGenVlep_3=Float_t(ptGenVlep_3);
newetaGenVlep_3=Float_t(etaGenVlep_3);
newphiGenVlep_3=Float_t(phiGenVlep_3);
newmassGenVlep_3=Float_t(massGenVlep_3);
newptq11=Float_t(ptq11);
newetaq11=Float_t(etaq11);
newphiq11=Float_t(phiq11);
newmassq11=Float_t(massq11);
newptq21=Float_t(ptq21);
newetaq21=Float_t(etaq21);
newphiq21=Float_t(phiq21);
newmassq21=Float_t(massq21);
newptq31=Float_t(ptq31);
newetaq31=Float_t(etaq31);
newphiq31=Float_t(phiq31);
newmassq31=Float_t(massq31);
newptq12=Float_t(ptq12);
newetaq12=Float_t(etaq12);
newphiq12=Float_t(phiq12);
newmassq12=Float_t(massq12);
newptq22=Float_t(ptq22);
newetaq22=Float_t(etaq22);
newphiq22=Float_t(phiq22);
newmassq22=Float_t(massq22);
newptq32=Float_t(ptq32);
newetaq32=Float_t(etaq32);
newphiq32=Float_t(phiq32);
newmassq32=Float_t(massq32);

MJ_j_18=-99;
MJJ_j_18=-99;
MJ_j_10=-99;
MJJ_j_10=-99;
MJ_j_12=-99;
MJJ_j_12=-99;
MJ_j_14=-99;
MJJ_j_14=-99;
MJ_j_16=-99;
MJJ_j_16=-99;
MJJ_midmin=-99;

TLorentzVector Lmid,Lmin,LMJJ_midmin;
Lmid.SetPtEtaPhiM(0,-99,-99,-99);
Lmin.SetPtEtaPhiM(0,-99,-99,-99);
LMJJ_midmin.SetPtEtaPhiM(0,-99,-99,-99);
Lmid.SetPtEtaPhiM(PTj_mid,Etaj_mid,Phij_mid,Mj_mid);
Lmin.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
MJJ_midmin=(Lmid+Lmin).M();

LMJ_j.SetPtEtaPhiM(0,-99,-99,-99);
LMJJ_j.SetPtEtaPhiM(0,-99,-99,-99);

MJJj=-99;
MJJjj=-99;
MJJJj=-99;
MJJJJ=-99;

if(etaGenVhad>-90){
     if(sqrt(pow(fabs(etaGenVhad-Etaj_min),2)+pow(TMath::Min(fabs(phiGenVhad-Phij_min),2*Pi-fabs(phiGenVhad-Phij_min)),2))<sqrt(pow(fabs(etaGenVhad-Etaj_max),2)+pow(TMath::Min(fabs(phiGenVhad-Phij_max),2*Pi-fabs(phiGenVhad-Phij_max)),2))){
                                  catg=1;
                                      }
     else{
       catg=0;
         }
                  }

if(etaGenVhad<-90){
     if(fabs(gen_rad_eta-Etaj_min)>fabs(gen_rad_eta-Etaj_max)){
                                                          catg=1;
                                                              }
     else{
       catg=0;
         }        
                  }
TLorentzVector LRad,LW,LRad_re,LWR_j;
LRad.SetPtEtaPhiM(0,-99,-99,-99);
LW.SetPtEtaPhiM(0,-99,-99,-99);
LRad_re.SetPtEtaPhiM(0,-99,-99,-99);
if(catg==0)
{
LRad.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
LW.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
}
if(catg==1)
{
LW.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
LRad.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
}
Mrad=LRad.M();
Mw=LW.M();
W_n_phi=((LW.Phi()+Pi)>2*Pi)*(LW.Phi()-Pi)+((LW.Phi()+Pi)<2*Pi)*(LW.Phi()+Pi);
W_n_eta=-LW.Eta();

if(num_ak4jetsex==6){
DR1=sqrt(pow(fabs(AK41.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR2=sqrt(pow(fabs(AK42.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR3=sqrt(pow(fabs(AK43.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR4=sqrt(pow(fabs(AK44.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR5=sqrt(pow(fabs(AK45.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR6=sqrt(pow(fabs(AK46.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
                    }
if(num_ak4jetsex==5){
DR1=sqrt(pow(fabs(AK41.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR2=sqrt(pow(fabs(AK42.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR3=sqrt(pow(fabs(AK43.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR4=sqrt(pow(fabs(AK44.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR5=sqrt(pow(fabs(AK45.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
                    }
if(num_ak4jetsex==4){
DR1=sqrt(pow(fabs(AK41.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR2=sqrt(pow(fabs(AK42.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR3=sqrt(pow(fabs(AK43.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR4=sqrt(pow(fabs(AK44.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
                    }
if(num_ak4jetsex==3){
DR1=sqrt(pow(fabs(AK41.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR2=sqrt(pow(fabs(AK42.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR3=sqrt(pow(fabs(AK43.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
                    }
if(num_ak4jetsex==2){
DR1=sqrt(pow(fabs(AK41.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
DR2=sqrt(pow(fabs(AK42.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
                    }
if(num_ak4jetsex==1){
DR1=sqrt(pow(fabs(AK41.Eta()-W_n_eta),2)+pow(TMath::Min(fabs(AK41.Phi()-W_n_phi),2*Pi-fabs(AK41.Phi()-W_n_phi)),2));
                    }

LRad_re=LRad;
LWR_j=LRad+LW;
if(DR1<DR05){
LRad_re=LRad_re+AK41; 
LWR_j=LWR_j+AK41; 
           }
if(DR2<DR05){
LRad_re=LRad_re+AK42;
LWR_j=LWR_j+AK42;  
           }
if(DR3<DR05){
LRad_re=LRad_re+AK43;
LWR_j=LWR_j+AK43;  
           }
if(DR4<DR05){
LRad_re=LRad_re+AK44;
LWR_j=LWR_j+AK44;  
           }
if(DR5<DR05){
LRad_re=LRad_re+AK45;
LWR_j=LWR_j+AK45;  
           }
if(DR6<DR05){
LRad_re=LRad_re+AK46;
LWR_j=LWR_j+AK46;  
           }
Mrad_j=LRad_re.M();
Mww_j=LWR_j.M();

AK82.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
AK81.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
//order by mass                   
LMJ_j=AK81;
LMJJ_j=AK81+AK82;
if(DR1<DR01){
LMJ_j=LMJ_j+AK41;
LMJJ_j=LMJJ_j+AK41;
           }
if(DR2<DR01){
LMJ_j=LMJ_j+AK42;
LMJJ_j=LMJJ_j+AK42;
           }
if(DR3<DR01){
LMJ_j=LMJ_j+AK43;
LMJJ_j=LMJJ_j+AK43;
           }
if(DR4<DR01){
LMJ_j=LMJ_j+AK44;
LMJJ_j=LMJJ_j+AK44;
           }
if(DR5<DR01){
LMJ_j=LMJ_j+AK45;
LMJJ_j=LMJJ_j+AK45;
           }
if(DR6<DR01){
LMJ_j=LMJ_j+AK46;
LMJJ_j=LMJJ_j+AK46;
           }

MJ_j_18=LMJ_j.M();
MJJ_j_18=LMJJ_j.M();


LMJ_j=AK81;
LMJJ_j=AK81+AK82;
if(DR1<DR02){
LMJ_j=LMJ_j+AK41;
LMJJ_j=LMJJ_j+AK41;
           }
if(DR2<DR02){
LMJ_j=LMJ_j+AK42;
LMJJ_j=LMJJ_j+AK42;
           }
if(DR3<DR02){
LMJ_j=LMJ_j+AK43;
LMJJ_j=LMJJ_j+AK43;
           }
if(DR4<DR02){
LMJ_j=LMJ_j+AK44;
LMJJ_j=LMJJ_j+AK44;
           }
if(DR5<DR02){
LMJ_j=LMJ_j+AK45;
LMJJ_j=LMJJ_j+AK45;
           }
if(DR6<DR02){
LMJ_j=LMJ_j+AK46;
LMJJ_j=LMJJ_j+AK46;
           }
MJ_j_10=LMJ_j.M();
MJJ_j_10=LMJJ_j.M();


LMJ_j=AK81;
LMJJ_j=AK81+AK82;
if(DR1<DR03){
LMJ_j=LMJ_j+AK41;
LMJJ_j=LMJJ_j+AK41;
           }
if(DR2<DR03){
LMJ_j=LMJ_j+AK42;
LMJJ_j=LMJJ_j+AK42;
           }
if(DR3<DR03){
LMJ_j=LMJ_j+AK43;
LMJJ_j=LMJJ_j+AK43;
           }
if(DR4<DR03){
LMJ_j=LMJ_j+AK44;
LMJJ_j=LMJJ_j+AK44;
           }
if(DR5<DR03){
LMJ_j=LMJ_j+AK45;
LMJJ_j=LMJJ_j+AK45;
           }
if(DR6<DR03){
LMJ_j=LMJ_j+AK46;
LMJJ_j=LMJJ_j+AK46;
           }
MJ_j_12=LMJ_j.M();
MJJ_j_12=LMJJ_j.M();


LMJ_j=AK81;
LMJJ_j=AK81+AK82;
if(DR1<DR04){
LMJ_j=LMJ_j+AK41;
LMJJ_j=LMJJ_j+AK41;
           }
if(DR2<DR04){
LMJ_j=LMJ_j+AK42;
LMJJ_j=LMJJ_j+AK42;
           }
if(DR3<DR04){
LMJ_j=LMJ_j+AK43;
LMJJ_j=LMJJ_j+AK43;
           }
if(DR4<DR04){
LMJ_j=LMJ_j+AK44;
LMJJ_j=LMJJ_j+AK44;
           }
if(DR5<DR04){
LMJ_j=LMJ_j+AK45;
LMJJ_j=LMJJ_j+AK45;
           }
if(DR6<DR04){
LMJ_j=LMJ_j+AK46;
LMJJ_j=LMJJ_j+AK46;
           }
MJ_j_14=LMJ_j.M();
MJJ_j_14=LMJJ_j.M();


LMJ_j=AK81;
LMJJ_j=AK81+AK82;
if(DR1<DR05){
LMJ_j=LMJ_j+AK41;
LMJJ_j=LMJJ_j+AK41;
           }
if(DR2<DR05){
LMJ_j=LMJ_j+AK42;
LMJJ_j=LMJJ_j+AK42;
           }
if(DR3<DR05){
LMJ_j=LMJ_j+AK43;
LMJJ_j=LMJJ_j+AK43;
           }
if(DR4<DR05){
LMJ_j=LMJ_j+AK44;
LMJJ_j=LMJJ_j+AK44;
           }
if(DR5<DR05){
LMJ_j=LMJ_j+AK45;
LMJJ_j=LMJJ_j+AK45;
           }
if(DR6<DR05){
LMJ_j=LMJ_j+AK46;
LMJJ_j=LMJJ_j+AK46;
           }
MJ_j_16=LMJ_j.M();
MJJ_j_16=LMJJ_j.M();


if(Nj8==2)
{


AK81.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
AK82.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
//order by mass
      MJJJj=-99;
    if(AK41.Pt()>0)
          {
      MJJj=(AK81+AK82+AK41).M();
          }
    else
          {
      MJJj=(AK81+AK82).M();
          }
    
    if(AK41.Pt()>0&&AK42.Pt()>0)
          {
      MJJjj=(AK81+AK82+AK41+AK42).M();
          }
    else if(AK41.Pt()>0)
          {
      MJJjj=(AK81+AK82+AK41).M();
          }
    else
      MJJjj=(AK81+AK82).M();
}

if (IsData==0){MJJJ=Float_t(candMasspuppiJEC_new);}
    else {MJJJ              = Float_t(candMasspuppiJEC);}

        mtVlepnew         = Float_t(sqrt(2*ptlep1*met*(1.0-cos(philep1-metPhi))));
        MTVlep            = Float_t(sqrt(2*ptlep1*MET_et*(1.0-cos(philep1-MET_phi))));

Mass2j1j2 = Float_t(massww[0]*massww[0]);
Mass2j3j1 = Float_t(massww[1]*massww[1]);
Mass2j2j3 = Float_t(massww[2]*massww[2]);
Mw1w2=Float_t(massww[0]);
Mw1w3=Float_t(massww[1]);
Mw2w3=Float_t(massww[2]);

		Double_t deltaRWhadGen = sqrt(pow(etaGenVhad-jetAK8puppi_eta,2) + pow(phiGenVhad-jetAK8puppi_phi,2));


Mj_max2=-99;
Mj_mid2=-99;
Mj_min2=-99;
Mj_mostmin2=-99;
PTj_max2=-99;
PTj_mid2=-99;
PTj_min2=-99;
PTj_mostmin2=-99;
tau21_max2=-99;
tau21_mid2=-99;
tau21_min2=-99;
tau21_mostmin2=-99;
tau41_max2=-99;
tau41_mid2=-99;
tau41_min2=-99;
tau41_mostmin2=-99;
tau42_max2=-99;
tau42_mid2=-99;
tau42_min2=-99;
tau42_mostmin2=-99;
if(Nj8==4){
Double_t M[4],PT[4],Tau21[4],Tau41[4],Tau42[4];
M[0]=Mj;M[1]=Mj_2;M[2]=Mj_3;M[3]=Mj_4;
PT[0]=PTj;PT[1]=PTj_2;PT[2]=PTj_3;PT[3]=PTj_4;
Tau21[0]=tau21;Tau21[1]=tau21_2;Tau21[2]=tau21_3;Tau21[3]=tau21_4;
Tau41[0]=tau41;Tau41[1]=tau41_2;Tau41[2]=tau41_3;Tau41[3]=tau41_4;
Tau42[0]=tau42;Tau42[1]=tau42_2;Tau42[2]=tau42_3;Tau42[3]=tau42_4;
Int_t *indexx=new Int_t[4];
TMath::Sort(4,M,indexx,1);
Mj_max2=M[indexx[0]];
Mj_mid2=M[indexx[1]];
Mj_min2=M[indexx[2]];
Mj_mostmin2=M[indexx[3]];
PTj_max2=PT[indexx[0]];
PTj_mid2=PT[indexx[1]];
PTj_min2=PT[indexx[2]];
PTj_mostmin2=PT[indexx[3]];
tau21_max2=Tau21[indexx[0]];
tau21_mid2=Tau21[indexx[1]];
tau21_min2=Tau21[indexx[2]];
tau21_mostmin2=Tau21[indexx[3]];
tau41_max2=Tau41[indexx[0]];
tau41_mid2=Tau41[indexx[1]];
tau41_min2=Tau41[indexx[2]];
tau41_mostmin2=Tau41[indexx[3]];
tau42_max2=Tau42[indexx[0]];
tau42_mid2=Tau42[indexx[1]];
tau42_min2=Tau42[indexx[2]];
tau42_mostmin2=Tau42[indexx[3]];
          }

if(Nj8==3){
  if(Mj>Mj_2){
      Mj_max2=Mj;
      Mj_min2=Mj_2;
      PTj_max2=PTj;
      PTj_min2=PTj_2;
      tau21_max2=tau21;
      tau21_min2=tau21_2;
      tau41_max2=tau41;
      tau41_min2=tau41_2;
      tau42_max2=tau42;
      tau42_min2=tau42_2;
             }
  if(Mj<Mj_2){
      Mj_max2=Mj_2;
      Mj_min2=Mj;
      PTj_max2=PTj_2;
      PTj_min2=PTj;
      tau21_max2=tau21_2;
      tau21_min2=tau21;
      tau41_max2=tau41_2;
      tau41_min2=tau41;
      tau42_max2=tau42_2;
      tau42_min2=tau42;
             }
          }



}


#endif
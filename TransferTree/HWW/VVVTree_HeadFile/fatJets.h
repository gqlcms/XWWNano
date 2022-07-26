#ifndef _fatJets_
#define _fatJets_

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TLorentzVector.h"
//#include "DataFormats/Math/interface/deltaR.h"

#include <iostream>
#include <fstream>
#include <unordered_map>
#include <map>

#include <cstring>


#include <algorithm>
#include <numeric>
#include<vector>
#include <iostream>
 
#include "VVVUtils.h"

struct FatJet_P
{
    vector<float>* v_FatJet_pt_;
    vector<float>* v_FatJet_eta_;
    vector<float>* v_FatJet_phi_;
    vector<float>* v_FatJet_msoftdrop_;
    vector<int>* v_FatJet_jetId_;
    vector<float>* v_FatJet_particleNetMD_QCD_;
    vector<float>* v_FatJet_particleNetMD_Xbb_;
    vector<float>* v_FatJet_particleNetMD_Xcc_;
    vector<float>* v_FatJet_particleNetMD_Xqq_;
    vector<float>* v_FatJet_particleNet_H4qvsQCD_;
    vector<float>* v_FatJet_particleNet_HbbvsQCD_;
    vector<float>* v_FatJet_particleNet_HccvsQCD_;
    vector<float>* v_FatJet_particleNet_QCD_;
    vector<float>* v_FatJet_particleNet_TvsQCD_;
    vector<float>* v_FatJet_particleNet_WvsQCD_;
    vector<float>* v_FatJet_particleNet_ZvsQCD_;
    vector<float>* v_FatJet_deepTagMD_probHbb_;
    vector<float>* v_FatJet_deepTagMD_probHcc_;
    vector<float>* v_FatJet_deepTagMD_probHqqqq_;
    vector<float>* v_FatJet_deepTagMD_probQCDb_;
    vector<float>* v_FatJet_deepTagMD_probQCDbb_;
    vector<float>* v_FatJet_deepTagMD_probQCDc_;
    vector<float>* v_FatJet_deepTagMD_probQCDcc_;
    vector<float>* v_FatJet_deepTagMD_probQCDothers_;
    vector<float>* v_FatJet_deepTagMD_probTbc_;
    vector<float>* v_FatJet_deepTagMD_probTbcq_;
    vector<float>* v_FatJet_deepTagMD_probTbq_;
    vector<float>* v_FatJet_deepTagMD_probTbqq_;
    vector<float>* v_FatJet_deepTagMD_probWcq_;
    vector<float>* v_FatJet_deepTagMD_probWqq_;
    vector<float>* v_FatJet_deepTagMD_probZbb_;
    vector<float>* v_FatJet_deepTagMD_probZcc_;
    vector<float>* v_FatJet_deepTagMD_probZqq_;
    vector<float>* v_FatJet_deepTag_probHbb_;
    vector<float>* v_FatJet_deepTag_probHcc_;
    vector<float>* v_FatJet_deepTag_probHqqqq_;
    vector<float>* v_FatJet_deepTag_probQCDb_;
    vector<float>* v_FatJet_deepTag_probQCDbb_;
    vector<float>* v_FatJet_deepTag_probQCDc_;
    vector<float>* v_FatJet_deepTag_probQCDcc_;
    vector<float>* v_FatJet_deepTag_probQCDothers_;
    vector<float>* v_FatJet_deepTag_probTbc_;
    vector<float>* v_FatJet_deepTag_probTbcq_;
    vector<float>* v_FatJet_deepTag_probTbq_;
    vector<float>* v_FatJet_deepTag_probTbqq_;
    vector<float>* v_FatJet_deepTag_probWcq_;
    vector<float>* v_FatJet_deepTag_probWqq_;
    vector<float>* v_FatJet_deepTag_probZbb_;
    vector<float>* v_FatJet_deepTag_probZcc_;
    vector<float>* v_FatJet_tau1_;
    vector<float>* v_FatJet_tau2_;
    vector<float>* v_FatJet_tau3_;
    vector<float>* v_FatJet_tau4_;

    vector<float>* v_FatJet_msoftdrop_raw_;
    vector<float>* v_FatJet_msoftdrop_nom_;
    vector<float>* v_FatJet_msoftdrop_corr_JMR_;
    vector<float>* v_FatJet_msoftdrop_corr_JMS_;
    vector<float>* v_FatJet_msoftdrop_corr_PUPPI_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDb_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDbb_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDc_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDcc_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDothers_;
    vector<float>* v_FatJet_ParticleNetMDraw_probXbb_;
    vector<float>* v_FatJet_ParticleNetMDraw_probXcc_;
    vector<float>* v_FatJet_ParticleNetMDraw_probXqq_;
    vector<float>* v_FatJet_pt_nom_;
    
    //HWW newtagger part.
    vector<float>* v_FatJet_deepHWWMDV1_probHww3q_;
    vector<float>* v_FatJet_deepHWWMDV1_probHww4q_;
    vector<float>* v_FatJet_deepHWWMDV1_probHww4q3qvsQCD_;
    vector<float>* v_FatJet_deepHWWMDV1_probHww4qvsQCD_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwevqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwmvqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwhadtauvqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwleptauevqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwleptaumvqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDb_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDbb_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDc_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDcc_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDothers_;

} ;




class FatJet_Collection {
    public : 
    FatJet_Collection();
    FatJet_Collection(FatJet_P FatJet_, int NMAXFatJet, int filterMode);
    size_t size();
    float Get(string order, string variable, int index);

    private :
    // original branches
    vector<float>* v_FatJet_pt_;
    vector<float>* v_FatJet_eta_;
    vector<float>* v_FatJet_phi_;
    vector<float>* v_FatJet_msoftdrop_;
    vector<int>*   v_FatJet_jetId_;
    vector<float>* v_FatJet_particleNetMD_QCD_;
    vector<float>* v_FatJet_particleNetMD_Xbb_;
    vector<float>* v_FatJet_particleNetMD_Xcc_;
    vector<float>* v_FatJet_particleNetMD_Xqq_;
    vector<float>* v_FatJet_particleNet_H4qvsQCD_;
    vector<float>* v_FatJet_particleNet_HbbvsQCD_;
    vector<float>* v_FatJet_particleNet_HccvsQCD_;
    vector<float>* v_FatJet_particleNet_QCD_;
    vector<float>* v_FatJet_particleNet_TvsQCD_;
    vector<float>* v_FatJet_particleNet_WvsQCD_;
    vector<float>* v_FatJet_particleNet_ZvsQCD_;
    vector<float>* v_FatJet_deepTagMD_probHbb_;
    vector<float>* v_FatJet_deepTagMD_probHcc_;
    vector<float>* v_FatJet_deepTagMD_probHqqqq_;
    vector<float>* v_FatJet_deepTagMD_probQCDb_;
    vector<float>* v_FatJet_deepTagMD_probQCDbb_;
    vector<float>* v_FatJet_deepTagMD_probQCDc_;
    vector<float>* v_FatJet_deepTagMD_probQCDcc_;
    vector<float>* v_FatJet_deepTagMD_probQCDothers_;
    vector<float>* v_FatJet_deepTagMD_probTbc_;
    vector<float>* v_FatJet_deepTagMD_probTbcq_;
    vector<float>* v_FatJet_deepTagMD_probTbq_;
    vector<float>* v_FatJet_deepTagMD_probTbqq_;
    vector<float>* v_FatJet_deepTagMD_probWcq_;
    vector<float>* v_FatJet_deepTagMD_probWqq_;
    vector<float>* v_FatJet_deepTagMD_probZbb_;
    vector<float>* v_FatJet_deepTagMD_probZcc_;
    vector<float>* v_FatJet_deepTagMD_probZqq_;
    vector<float>* v_FatJet_deepTag_probHbb_;
    vector<float>* v_FatJet_deepTag_probHcc_;
    vector<float>* v_FatJet_deepTag_probHqqqq_;
    vector<float>* v_FatJet_deepTag_probQCDb_;
    vector<float>* v_FatJet_deepTag_probQCDbb_;
    vector<float>* v_FatJet_deepTag_probQCDc_;
    vector<float>* v_FatJet_deepTag_probQCDcc_;
    vector<float>* v_FatJet_deepTag_probQCDothers_;
    vector<float>* v_FatJet_deepTag_probTbc_;
    vector<float>* v_FatJet_deepTag_probTbcq_;
    vector<float>* v_FatJet_deepTag_probTbq_;
    vector<float>* v_FatJet_deepTag_probTbqq_;
    vector<float>* v_FatJet_deepTag_probWcq_;
    vector<float>* v_FatJet_deepTag_probWqq_;
    vector<float>* v_FatJet_deepTag_probZbb_;
    vector<float>* v_FatJet_deepTag_probZcc_;
    vector<float>* v_FatJet_tau1_;
    vector<float>* v_FatJet_tau2_;
    vector<float>* v_FatJet_tau3_;
    vector<float>* v_FatJet_tau4_;

    vector<float>* v_FatJet_msoftdrop_raw_;
    vector<float>* v_FatJet_msoftdrop_nom_;
    vector<float>* v_FatJet_msoftdrop_corr_JMR_;
    vector<float>* v_FatJet_msoftdrop_corr_JMS_;
    vector<float>* v_FatJet_msoftdrop_corr_PUPPI_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDb_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDbb_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDc_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDcc_;
    vector<float>* v_FatJet_ParticleNetMDraw_probQCDothers_;
    vector<float>* v_FatJet_ParticleNetMDraw_probXbb_;
    vector<float>* v_FatJet_ParticleNetMDraw_probXcc_;
    vector<float>* v_FatJet_ParticleNetMDraw_probXqq_;
    vector<float>* v_FatJet_pt_nom_;

     //HWW newtagger part.
    vector<float>* v_FatJet_deepHWWMDV1_probHww3q_;
    vector<float>* v_FatJet_deepHWWMDV1_probHww4q_;
    vector<float>* v_FatJet_deepHWWMDV1_probHww4q3qvsQCD_;
    vector<float>* v_FatJet_deepHWWMDV1_probHww4qvsQCD_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwevqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwmvqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwhadtauvqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwleptauevqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probHwwleptaumvqq_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDb_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDbb_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDc_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDcc_;
    vector<float>* v_FatJet_deepHWWMDV1_probQCDothers_;

    // filtered branches
    vector<float> FatJet_pt;
    vector<float> FatJet_eta;
    vector<float> FatJet_phi;
    vector<float> FatJet_msoftdrop;
    vector<int>   FatJet_jetId;
    vector<float> FatJet_particleNetMD_QCD;
    vector<float> FatJet_particleNetMD_Xbb;
    vector<float> FatJet_particleNetMD_Xcc;
    vector<float> FatJet_particleNetMD_Xqq;
    vector<float> FatJet_particleNet_H4qvsQCD;
    vector<float> FatJet_particleNet_HbbvsQCD;
    vector<float> FatJet_particleNet_HccvsQCD;
    vector<float> FatJet_particleNet_QCD;
    vector<float> FatJet_particleNet_TvsQCD;
    vector<float> FatJet_particleNet_WvsQCD;
    vector<float> FatJet_particleNet_ZvsQCD;
    vector<float> FatJet_deepTagMD_probHbb;
    vector<float> FatJet_deepTagMD_probHcc;
    vector<float> FatJet_deepTagMD_probHqqqq;
    vector<float> FatJet_deepTagMD_probQCDb;
    vector<float> FatJet_deepTagMD_probQCDbb;
    vector<float> FatJet_deepTagMD_probQCDc;
    vector<float> FatJet_deepTagMD_probQCDcc;
    vector<float> FatJet_deepTagMD_probQCDothers;
    vector<float> FatJet_deepTagMD_probTbc;
    vector<float> FatJet_deepTagMD_probTbcq;
    vector<float> FatJet_deepTagMD_probTbq;
    vector<float> FatJet_deepTagMD_probTbqq;
    vector<float> FatJet_deepTagMD_probWcq;
    vector<float> FatJet_deepTagMD_probWqq;
    vector<float> FatJet_deepTagMD_probZbb;
    vector<float> FatJet_deepTagMD_probZcc;
    vector<float> FatJet_deepTagMD_probZqq;
    vector<float> FatJet_deepTag_probHbb;
    vector<float> FatJet_deepTag_probHcc;
    vector<float> FatJet_deepTag_probHqqqq;
    vector<float> FatJet_deepTag_probQCDb;
    vector<float> FatJet_deepTag_probQCDbb;
    vector<float> FatJet_deepTag_probQCDc;
    vector<float> FatJet_deepTag_probQCDcc;
    vector<float> FatJet_deepTag_probQCDothers;
    vector<float> FatJet_deepTag_probTbc;
    vector<float> FatJet_deepTag_probTbcq;
    vector<float> FatJet_deepTag_probTbq;
    vector<float> FatJet_deepTag_probTbqq;
    vector<float> FatJet_deepTag_probWcq;
    vector<float> FatJet_deepTag_probWqq;
    vector<float> FatJet_deepTag_probZbb;
    vector<float> FatJet_deepTag_probZcc;
    vector<float> FatJet_tau1;
    vector<float> FatJet_tau2;
    vector<float> FatJet_tau3;
    vector<float> FatJet_tau4;
    vector<float> FatJet_msoftdrop_raw;
    vector<float> FatJet_msoftdrop_nom;
    vector<float> FatJet_msoftdrop_corr_JMR;
    vector<float> FatJet_msoftdrop_corr_JMS;
    vector<float> FatJet_msoftdrop_corr_PUPPI;
    vector<float> FatJet_ParticleNetMDraw_probQCDb;
    vector<float> FatJet_ParticleNetMDraw_probQCDbb;
    vector<float> FatJet_ParticleNetMDraw_probQCDc;
    vector<float> FatJet_ParticleNetMDraw_probQCDcc;
    vector<float> FatJet_ParticleNetMDraw_probQCDothers;
    vector<float> FatJet_ParticleNetMDraw_probXbb;
    vector<float> FatJet_ParticleNetMDraw_probXcc;
    vector<float> FatJet_ParticleNetMDraw_probXqq;
    vector<float> FatJet_pt_nom;

     //HWW newtagger part.
    vector<float> FatJet_deepHWWMDV1_probHww3q;
    vector<float> FatJet_deepHWWMDV1_probHww4q;
    vector<float> FatJet_deepHWWMDV1_probHww4q3qvsQCD;
    vector<float> FatJet_deepHWWMDV1_probHww4qvsQCD;
    vector<float> FatJet_deepHWWMDV1_probHwwevqq;
    vector<float> FatJet_deepHWWMDV1_probHwwmvqq;
    vector<float> FatJet_deepHWWMDV1_probHwwhadtauvqq;
    vector<float> FatJet_deepHWWMDV1_probHwwleptauevqq;
    vector<float> FatJet_deepHWWMDV1_probHwwleptaumvqq;
    vector<float> FatJet_deepHWWMDV1_probQCDb;
    vector<float> FatJet_deepHWWMDV1_probQCDbb;
    vector<float> FatJet_deepHWWMDV1_probQCDc;
    vector<float> FatJet_deepHWWMDV1_probQCDcc;
    vector<float> FatJet_deepHWWMDV1_probQCDothers;

    // branches map
    std::map<std::string, vector<int>>   FatJet_order;
    std::map<std::string, vector<float> > FatJet_Branches;

    int NMAXFatJet;
    int filterMode;

    void brances_map();

    void Filter();
    void Filter_1();
    void Filter_2();

    void Order(int);
    void Order_1();
    void Order_2();
    void Order_3();
    void Order_4();
    void Order_5();
    void Order_6();

    void brances_Added();

    template <typename T>
    void Out(vector<T>,vector<T> &);

    template <typename T>
    std::vector<int> sort_indexes(std::vector<T> v);

};

FatJet_Collection::FatJet_Collection(){
    NMAXFatJet = 0  ; 
    filterMode = -1 ;
}

FatJet_Collection::FatJet_Collection(FatJet_P FatJet_ , int NMAXFatJet_, int filterMode_){
    v_FatJet_pt_                             = FatJet_.v_FatJet_pt_;
    v_FatJet_eta_                            = FatJet_.v_FatJet_eta_;
    v_FatJet_phi_                            = FatJet_.v_FatJet_phi_;
    v_FatJet_msoftdrop_                      = FatJet_.v_FatJet_msoftdrop_;
    v_FatJet_jetId_                          = FatJet_.v_FatJet_jetId_;
    v_FatJet_particleNetMD_QCD_              = FatJet_.v_FatJet_particleNetMD_QCD_;
    v_FatJet_particleNetMD_Xbb_              = FatJet_.v_FatJet_particleNetMD_Xbb_;
    v_FatJet_particleNetMD_Xcc_              = FatJet_.v_FatJet_particleNetMD_Xcc_;
    v_FatJet_particleNetMD_Xqq_              = FatJet_.v_FatJet_particleNetMD_Xqq_;
    v_FatJet_particleNet_H4qvsQCD_           = FatJet_.v_FatJet_particleNet_H4qvsQCD_;
    v_FatJet_particleNet_HbbvsQCD_           = FatJet_.v_FatJet_particleNet_HbbvsQCD_;
    v_FatJet_particleNet_HccvsQCD_           = FatJet_.v_FatJet_particleNet_HccvsQCD_;
    v_FatJet_particleNet_QCD_                = FatJet_.v_FatJet_particleNet_QCD_;
    v_FatJet_particleNet_TvsQCD_             = FatJet_.v_FatJet_particleNet_TvsQCD_;
    v_FatJet_particleNet_WvsQCD_             = FatJet_.v_FatJet_particleNet_WvsQCD_;
    v_FatJet_particleNet_ZvsQCD_             = FatJet_.v_FatJet_particleNet_ZvsQCD_;
    v_FatJet_deepTagMD_probHbb_              = FatJet_.v_FatJet_deepTagMD_probHbb_;
    v_FatJet_deepTagMD_probHcc_              = FatJet_.v_FatJet_deepTagMD_probHcc_;
    v_FatJet_deepTagMD_probHqqqq_            = FatJet_.v_FatJet_deepTagMD_probHqqqq_;
    v_FatJet_deepTagMD_probQCDb_             = FatJet_.v_FatJet_deepTagMD_probQCDb_;
    v_FatJet_deepTagMD_probQCDbb_            = FatJet_.v_FatJet_deepTagMD_probQCDbb_;
    v_FatJet_deepTagMD_probQCDc_             = FatJet_.v_FatJet_deepTagMD_probQCDc_;
    v_FatJet_deepTagMD_probQCDcc_            = FatJet_.v_FatJet_deepTagMD_probQCDcc_;
    v_FatJet_deepTagMD_probQCDothers_        = FatJet_.v_FatJet_deepTagMD_probQCDothers_;
    v_FatJet_deepTagMD_probTbc_              = FatJet_.v_FatJet_deepTagMD_probTbc_;
    v_FatJet_deepTagMD_probTbcq_             = FatJet_.v_FatJet_deepTagMD_probTbcq_;
    v_FatJet_deepTagMD_probTbq_              = FatJet_.v_FatJet_deepTagMD_probTbq_;
    v_FatJet_deepTagMD_probTbqq_             = FatJet_.v_FatJet_deepTagMD_probTbqq_;
    v_FatJet_deepTagMD_probWcq_              = FatJet_.v_FatJet_deepTagMD_probWcq_;
    v_FatJet_deepTagMD_probWqq_              = FatJet_.v_FatJet_deepTagMD_probWqq_;
    v_FatJet_deepTagMD_probZbb_              = FatJet_.v_FatJet_deepTagMD_probZbb_;
    v_FatJet_deepTagMD_probZcc_              = FatJet_.v_FatJet_deepTagMD_probZcc_;
    v_FatJet_deepTagMD_probZqq_              = FatJet_.v_FatJet_deepTagMD_probZqq_;
    v_FatJet_deepTag_probHbb_                = FatJet_.v_FatJet_deepTag_probHbb_;
    v_FatJet_deepTag_probHcc_                = FatJet_.v_FatJet_deepTag_probHcc_;
    v_FatJet_deepTag_probHqqqq_              = FatJet_.v_FatJet_deepTag_probHqqqq_;
    v_FatJet_deepTag_probQCDb_               = FatJet_.v_FatJet_deepTag_probQCDb_;
    v_FatJet_deepTag_probQCDbb_              = FatJet_.v_FatJet_deepTag_probQCDbb_;
    v_FatJet_deepTag_probQCDc_               = FatJet_.v_FatJet_deepTag_probQCDc_;
    v_FatJet_deepTag_probQCDcc_              = FatJet_.v_FatJet_deepTag_probQCDcc_;
    v_FatJet_deepTag_probQCDothers_          = FatJet_.v_FatJet_deepTag_probQCDothers_;
    v_FatJet_deepTag_probTbc_                = FatJet_.v_FatJet_deepTag_probTbc_;
    v_FatJet_deepTag_probTbcq_               = FatJet_.v_FatJet_deepTag_probTbcq_;
    v_FatJet_deepTag_probTbq_                = FatJet_.v_FatJet_deepTag_probTbq_;
    v_FatJet_deepTag_probTbqq_               = FatJet_.v_FatJet_deepTag_probTbqq_;
    v_FatJet_deepTag_probWcq_                = FatJet_.v_FatJet_deepTag_probWcq_;
    v_FatJet_deepTag_probWqq_                = FatJet_.v_FatJet_deepTag_probWqq_;
    v_FatJet_deepTag_probZbb_                = FatJet_.v_FatJet_deepTag_probZbb_;
    v_FatJet_deepTag_probZcc_                = FatJet_.v_FatJet_deepTag_probZcc_;
    v_FatJet_tau1_                           = FatJet_.v_FatJet_tau1_;
    v_FatJet_tau2_                           = FatJet_.v_FatJet_tau2_;
    v_FatJet_tau3_                           = FatJet_.v_FatJet_tau3_;
    v_FatJet_tau4_                           = FatJet_.v_FatJet_tau4_;
    v_FatJet_msoftdrop_raw_                  = FatJet_.v_FatJet_msoftdrop_raw_;
    v_FatJet_msoftdrop_nom_                  = FatJet_.v_FatJet_msoftdrop_nom_;
    v_FatJet_msoftdrop_corr_JMR_             = FatJet_.v_FatJet_msoftdrop_corr_JMR_;
    v_FatJet_msoftdrop_corr_JMS_             = FatJet_.v_FatJet_msoftdrop_corr_JMS_;
    v_FatJet_msoftdrop_corr_PUPPI_           = FatJet_.v_FatJet_msoftdrop_corr_PUPPI_;
    v_FatJet_ParticleNetMDraw_probQCDb_      = FatJet_.v_FatJet_ParticleNetMDraw_probQCDb_;
    v_FatJet_ParticleNetMDraw_probQCDbb_     = FatJet_.v_FatJet_ParticleNetMDraw_probQCDbb_;
    v_FatJet_ParticleNetMDraw_probQCDc_      = FatJet_.v_FatJet_ParticleNetMDraw_probQCDc_;
    v_FatJet_ParticleNetMDraw_probQCDcc_     = FatJet_.v_FatJet_ParticleNetMDraw_probQCDcc_;
    v_FatJet_ParticleNetMDraw_probQCDothers_ = FatJet_.v_FatJet_ParticleNetMDraw_probQCDothers_;
    v_FatJet_ParticleNetMDraw_probXbb_       = FatJet_.v_FatJet_ParticleNetMDraw_probXbb_;
    v_FatJet_ParticleNetMDraw_probXcc_       = FatJet_.v_FatJet_ParticleNetMDraw_probXcc_;
    v_FatJet_ParticleNetMDraw_probXqq_       = FatJet_.v_FatJet_ParticleNetMDraw_probXqq_;
    v_FatJet_pt_nom_                         = FatJet_.v_FatJet_pt_nom_;

    //For new tagger part.
    v_FatJet_deepHWWMDV1_probHww3q_          = FatJet_.v_FatJet_deepHWWMDV1_probHww3q_;
    v_FatJet_deepHWWMDV1_probHww4q_          = FatJet_.v_FatJet_deepHWWMDV1_probHww4q_;
    v_FatJet_deepHWWMDV1_probHww4q3qvsQCD_   = FatJet_.v_FatJet_deepHWWMDV1_probHww4q3qvsQCD_;
    v_FatJet_deepHWWMDV1_probHww4qvsQCD_     = FatJet_.v_FatJet_deepHWWMDV1_probHww4qvsQCD_;
    v_FatJet_deepHWWMDV1_probHwwevqq_        = FatJet_.v_FatJet_deepHWWMDV1_probHwwevqq_;
    v_FatJet_deepHWWMDV1_probHwwmvqq_        = FatJet_.v_FatJet_deepHWWMDV1_probHwwmvqq_;
    v_FatJet_deepHWWMDV1_probHwwhadtauvqq_   = FatJet_.v_FatJet_deepHWWMDV1_probHwwhadtauvqq_;
    v_FatJet_deepHWWMDV1_probHwwleptauevqq_  = FatJet_.v_FatJet_deepHWWMDV1_probHwwleptauevqq_;
    v_FatJet_deepHWWMDV1_probHwwleptaumvqq_  = FatJet_.v_FatJet_deepHWWMDV1_probHwwleptaumvqq_;
    v_FatJet_deepHWWMDV1_probQCDb_           = FatJet_.v_FatJet_deepHWWMDV1_probQCDb_;
    v_FatJet_deepHWWMDV1_probQCDbb_          = FatJet_.v_FatJet_deepHWWMDV1_probQCDbb_;
    v_FatJet_deepHWWMDV1_probQCDc_          = FatJet_.v_FatJet_deepHWWMDV1_probQCDc_;
    v_FatJet_deepHWWMDV1_probQCDcc_          = FatJet_.v_FatJet_deepHWWMDV1_probQCDcc_;
    v_FatJet_deepHWWMDV1_probQCDothers_          = FatJet_.v_FatJet_deepHWWMDV1_probQCDothers_;

    NMAXFatJet = NMAXFatJet_;
    filterMode = filterMode_;

    Filter();
    brances_map();
    brances_Added();
    Order(1);
    Order(2);
    Order(3);
    Order(4);
    Order(5);
    Order(6);
}

template <typename T>
std::vector<int> FatJet_Collection::sort_indexes(std::vector<T> v) {
  std::vector<int> idx(v.size());
  std::iota(idx.begin(), idx.end(), 0);
  std::sort(idx.begin(), idx.end(), [v](int i1, int i2) { return v[i1] > v[i2]; });
  return idx;
}

void FatJet_Collection::brances_map(){
    FatJet_Branches["pt"]                             = FatJet_pt;
    FatJet_Branches["eta"]                            = FatJet_eta;
    FatJet_Branches["phi"]                            = FatJet_phi;
    FatJet_Branches["msoftdrop"]                      = FatJet_msoftdrop;
    FatJet_Branches["particleNetMD_QCD"]              = FatJet_particleNetMD_QCD;
    FatJet_Branches["particleNetMD_Xbb"]              = FatJet_particleNetMD_Xbb;
    FatJet_Branches["particleNetMD_Xcc"]              = FatJet_particleNetMD_Xcc;
    FatJet_Branches["particleNetMD_Xqq"]              = FatJet_particleNetMD_Xqq;
    FatJet_Branches["particleNet_H4qvsQCD"]           = FatJet_particleNet_H4qvsQCD;
    FatJet_Branches["particleNet_HbbvsQCD"]           = FatJet_particleNet_HbbvsQCD;
    FatJet_Branches["particleNet_HccvsQCD"]           = FatJet_particleNet_HccvsQCD;
    FatJet_Branches["particleNet_QCD"]                = FatJet_particleNet_QCD;
    FatJet_Branches["particleNet_TvsQCD"]             = FatJet_particleNet_TvsQCD;
    FatJet_Branches["particleNet_WvsQCD"]             = FatJet_particleNet_WvsQCD;
    FatJet_Branches["particleNet_ZvsQCD"]             = FatJet_particleNet_ZvsQCD;
    FatJet_Branches["deepTagMD_probHbb"]              = FatJet_deepTagMD_probHbb;
    FatJet_Branches["deepTagMD_probHcc"]              = FatJet_deepTagMD_probHcc;
    FatJet_Branches["deepTagMD_probHqqqq"]            = FatJet_deepTagMD_probHqqqq;
    FatJet_Branches["deepTagMD_probQCDb"]             = FatJet_deepTagMD_probQCDb;
    FatJet_Branches["deepTagMD_probQCDbb"]            = FatJet_deepTagMD_probQCDbb;
    FatJet_Branches["deepTagMD_probQCDc"]             = FatJet_deepTagMD_probQCDc;
    FatJet_Branches["deepTagMD_probQCDcc"]            = FatJet_deepTagMD_probQCDcc;
    FatJet_Branches["deepTagMD_probQCDothers"]        = FatJet_deepTagMD_probQCDothers;
    FatJet_Branches["deepTagMD_probTbc"]              = FatJet_deepTagMD_probTbc;
    FatJet_Branches["deepTagMD_probTbcq"]             = FatJet_deepTagMD_probTbcq;
    FatJet_Branches["deepTagMD_probTbq"]              = FatJet_deepTagMD_probTbq;
    FatJet_Branches["deepTagMD_probTbqq"]             = FatJet_deepTagMD_probTbqq;
    FatJet_Branches["deepTagMD_probWcq"]              = FatJet_deepTagMD_probWcq;
    FatJet_Branches["deepTagMD_probWqq"]              = FatJet_deepTagMD_probWqq;
    FatJet_Branches["deepTagMD_probZbb"]              = FatJet_deepTagMD_probZbb;
    FatJet_Branches["deepTagMD_probZcc"]              = FatJet_deepTagMD_probZcc;
    FatJet_Branches["deepTagMD_probZqq"]              = FatJet_deepTagMD_probZqq;
    FatJet_Branches["deepTag_probHbb"]                = FatJet_deepTag_probHbb;
    FatJet_Branches["deepTag_probHcc"]                = FatJet_deepTag_probHcc;
    FatJet_Branches["deepTag_probHqqqq"]              = FatJet_deepTag_probHqqqq;
    FatJet_Branches["deepTag_probQCDb"]               = FatJet_deepTag_probQCDb;
    FatJet_Branches["deepTag_probQCDbb"]              = FatJet_deepTag_probQCDbb;
    FatJet_Branches["deepTag_probQCDc"]               = FatJet_deepTag_probQCDc;
    FatJet_Branches["deepTag_probQCDcc"]              = FatJet_deepTag_probQCDcc;
    FatJet_Branches["deepTag_probQCDothers"]          = FatJet_deepTag_probQCDothers;
    FatJet_Branches["deepTag_probTbc"]                = FatJet_deepTag_probTbc;
    FatJet_Branches["deepTag_probTbcq"]               = FatJet_deepTag_probTbcq;
    FatJet_Branches["deepTag_probTbq"]                = FatJet_deepTag_probTbq;
    FatJet_Branches["deepTag_probTbqq"]               = FatJet_deepTag_probTbqq;
    FatJet_Branches["deepTag_probWcq"]                = FatJet_deepTag_probWcq;
    FatJet_Branches["deepTag_probWqq"]                = FatJet_deepTag_probWqq;
    FatJet_Branches["deepTag_probZbb"]                = FatJet_deepTag_probZbb;
    FatJet_Branches["deepTag_probZcc"]                = FatJet_deepTag_probZcc;
    FatJet_Branches["tau1"]                           = FatJet_tau1;
    FatJet_Branches["tau2"]                           = FatJet_tau2;
    FatJet_Branches["tau3"]                           = FatJet_tau3;
    FatJet_Branches["tau4"]                           = FatJet_tau4;
    FatJet_Branches["msoftdrop_raw"]                  = FatJet_msoftdrop_raw;
    FatJet_Branches["msoftdrop_nom"]                  = FatJet_msoftdrop_nom;
    FatJet_Branches["msoftdrop_corr_JMR"]             = FatJet_msoftdrop_corr_JMR;
    FatJet_Branches["msoftdrop_corr_JMS"]             = FatJet_msoftdrop_corr_JMS;
    FatJet_Branches["msoftdrop_corr_PUPPI"]           = FatJet_msoftdrop_corr_PUPPI;
    FatJet_Branches["ParticleNetMDraw_probQCDb"]      = FatJet_ParticleNetMDraw_probQCDb;
    FatJet_Branches["ParticleNetMDraw_probQCDbb"]     = FatJet_ParticleNetMDraw_probQCDbb;
    FatJet_Branches["ParticleNetMDraw_probQCDc"]      = FatJet_ParticleNetMDraw_probQCDc;
    FatJet_Branches["ParticleNetMDraw_probQCDcc"]     = FatJet_ParticleNetMDraw_probQCDcc;
    FatJet_Branches["ParticleNetMDraw_probQCDothers"] = FatJet_ParticleNetMDraw_probQCDothers;
    FatJet_Branches["ParticleNetMDraw_probXbb"]       = FatJet_ParticleNetMDraw_probXbb;
    FatJet_Branches["ParticleNetMDraw_probXcc"]       = FatJet_ParticleNetMDraw_probXcc;
    FatJet_Branches["ParticleNetMDraw_probXqq"]       = FatJet_ParticleNetMDraw_probXqq;
    FatJet_Branches["pt_nom"]                         = FatJet_pt_nom;

    //Add new tagger.
    FatJet_Branches["deepHWWMDV1_probHww3q"]          = FatJet_deepHWWMDV1_probHww3q;
    FatJet_Branches["deepHWWMDV1_probHww4q"]          = FatJet_deepHWWMDV1_probHww4q;
    FatJet_Branches["deepHWWMDV1_probHww4qvsQCD"]     = FatJet_deepHWWMDV1_probHww4qvsQCD;
    FatJet_Branches["deepHWWMDV1_probHww4q3qvsQCD"]   = FatJet_deepHWWMDV1_probHww4q3qvsQCD;
    FatJet_Branches["deepHWWMDV1_probHwwevqq"]        = FatJet_deepHWWMDV1_probHwwevqq;
    FatJet_Branches["deepHWWMDV1_probHwwmvqq"]        = FatJet_deepHWWMDV1_probHwwmvqq;
    FatJet_Branches["deepHWWMDV1_probHwwhadtauvqq"]   = FatJet_deepHWWMDV1_probHwwhadtauvqq;
    FatJet_Branches["deepHWWMDV1_probHwwleptauevqq"]  = FatJet_deepHWWMDV1_probHwwleptauevqq;
    FatJet_Branches["deepHWWMDV1_probHwwleptaumvqq"]  = FatJet_deepHWWMDV1_probHwwleptaumvqq;
    FatJet_Branches["deepHWWMDV1_probQCDb"]           = FatJet_deepHWWMDV1_probQCDb;
    FatJet_Branches["deepHWWMDV1_probQCDbb"]          = FatJet_deepHWWMDV1_probQCDbb;
    FatJet_Branches["deepHWWMDV1_probQCDc"]           = FatJet_deepHWWMDV1_probQCDc;
    FatJet_Branches["deepHWWMDV1_probQCDcc"]          = FatJet_deepHWWMDV1_probQCDcc;
    FatJet_Branches["deepHWWMDV1_probQCDothers"]      = FatJet_deepHWWMDV1_probQCDothers;
}

void FatJet_Collection::brances_Added(){
    vector<float> Branch;
    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float PNet_W_MD = (FatJet_particleNetMD_Xqq[iFJ]+FatJet_particleNetMD_Xcc[iFJ])/(FatJet_particleNetMD_Xqq[iFJ]+FatJet_particleNetMD_Xcc[iFJ]+FatJet_particleNetMD_QCD[iFJ]);
        Branch.push_back(PNet_W_MD);
    }
    FatJet_Branches["particleNetMD_WvsQCD"] = Branch;
    Branch.clear();

    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float deep_W = (FatJet_deepTagMD_probWcq[iFJ]+FatJet_deepTagMD_probWqq[iFJ])/(FatJet_deepTagMD_probWcq[iFJ]+FatJet_deepTagMD_probWqq[iFJ]+FatJet_deepTagMD_probQCDb[iFJ]+FatJet_deepTagMD_probQCDbb[iFJ]+FatJet_deepTagMD_probQCDc[iFJ]+FatJet_deepTagMD_probQCDcc[iFJ]+FatJet_deepTagMD_probQCDothers[iFJ]);
        Branch.push_back(deep_W);
    }
    FatJet_Branches["deepTagMD_WvsQCD"] = Branch;
    Branch.clear();

    //New tagger.
    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float HWWMD_H4q = (FatJet_deepHWWMDV1_probHww4q[iFJ])/(FatJet_deepHWWMDV1_probHww4q[iFJ]+FatJet_deepHWWMDV1_probQCDb[iFJ]+FatJet_deepHWWMDV1_probQCDbb[iFJ]+FatJet_deepHWWMDV1_probQCDc[iFJ]+FatJet_deepHWWMDV1_probQCDcc[iFJ]+FatJet_deepHWWMDV1_probQCDothers[iFJ]);
        Branch.push_back(HWWMD_H4q);
    }
    FatJet_Branches["deepHWWMDV1_H4qvsQCD"] = Branch;
    Branch.clear();

    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float HWWMD_H4q3q = (FatJet_deepHWWMDV1_probHww4q[iFJ]+FatJet_deepHWWMDV1_probHww3q[iFJ] )/(FatJet_deepHWWMDV1_probHww3q[iFJ]+FatJet_deepHWWMDV1_probHww4q[iFJ]+FatJet_deepHWWMDV1_probQCDb[iFJ]+FatJet_deepHWWMDV1_probQCDbb[iFJ]+FatJet_deepHWWMDV1_probQCDc[iFJ]+FatJet_deepHWWMDV1_probQCDcc[iFJ]+FatJet_deepHWWMDV1_probQCDothers[iFJ]);
        Branch.push_back(HWWMD_H4q3q);
    }
    FatJet_Branches["deepHWWMDV1_H4q3qvsQCD"] = Branch;
    Branch.clear(); 

    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float HWWMD_Hevqq = (FatJet_deepHWWMDV1_probHwwevqq[iFJ])/(FatJet_deepHWWMDV1_probHwwevqq[iFJ]+FatJet_deepHWWMDV1_probQCDb[iFJ]+FatJet_deepHWWMDV1_probQCDbb[iFJ]+FatJet_deepHWWMDV1_probQCDc[iFJ]+FatJet_deepHWWMDV1_probQCDcc[iFJ]+FatJet_deepHWWMDV1_probQCDothers[iFJ]);
        Branch.push_back(HWWMD_Hevqq);
    }
    FatJet_Branches["deepHWWMDV1_HevqqvsQCD"] = Branch;
    Branch.clear(); 

    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float HWWMD_Hmvqq = (FatJet_deepHWWMDV1_probHwwmvqq[iFJ])/(FatJet_deepHWWMDV1_probHwwmvqq[iFJ]+FatJet_deepHWWMDV1_probQCDb[iFJ]+FatJet_deepHWWMDV1_probQCDbb[iFJ]+FatJet_deepHWWMDV1_probQCDc[iFJ]+FatJet_deepHWWMDV1_probQCDcc[iFJ]+FatJet_deepHWWMDV1_probQCDothers[iFJ]);
        Branch.push_back(HWWMD_Hmvqq);
    }
    FatJet_Branches["deepHWWMDV1_HmvqqvsQCD"] = Branch;
    Branch.clear(); 

    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float HWWMD_Htauevqq = (FatJet_deepHWWMDV1_probHwwleptauevqq[iFJ])/(FatJet_deepHWWMDV1_probHwwleptauevqq[iFJ]+FatJet_deepHWWMDV1_probQCDb[iFJ]+FatJet_deepHWWMDV1_probQCDbb[iFJ]+FatJet_deepHWWMDV1_probQCDc[iFJ]+FatJet_deepHWWMDV1_probQCDcc[iFJ]+FatJet_deepHWWMDV1_probQCDothers[iFJ]);
        Branch.push_back(HWWMD_Htauevqq);
    }
    FatJet_Branches["deepHWWMDV1_HtauevqqvsQCD"] = Branch;
    Branch.clear(); 

    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float HWWMD_Htaumvqq = (FatJet_deepHWWMDV1_probHwwleptaumvqq[iFJ])/(FatJet_deepHWWMDV1_probHwwleptaumvqq[iFJ]+FatJet_deepHWWMDV1_probQCDb[iFJ]+FatJet_deepHWWMDV1_probQCDbb[iFJ]+FatJet_deepHWWMDV1_probQCDc[iFJ]+FatJet_deepHWWMDV1_probQCDcc[iFJ]+FatJet_deepHWWMDV1_probQCDothers[iFJ]);
        Branch.push_back(HWWMD_Htaumvqq);
    }
    FatJet_Branches["deepHWWMDV1_HtaumvqqvsQCD"] = Branch;
    Branch.clear(); 

    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float HWWMD_Hhadtau = (FatJet_deepHWWMDV1_probHwwhadtauvqq[iFJ])/(FatJet_deepHWWMDV1_probHwwhadtauvqq[iFJ]+FatJet_deepHWWMDV1_probQCDb[iFJ]+FatJet_deepHWWMDV1_probQCDbb[iFJ]+FatJet_deepHWWMDV1_probQCDc[iFJ]+FatJet_deepHWWMDV1_probQCDcc[iFJ]+FatJet_deepHWWMDV1_probQCDothers[iFJ]);
        Branch.push_back(HWWMD_Hhadtau);
    }
    FatJet_Branches["deepHWWMDV1_HhadtauvqqvsQCD"] = Branch;
    Branch.clear();



    for (int iFJ = 0; iFJ != int(FatJet_pt.size()); ++iFJ ){
        float HWWMD_Hall = (FatJet_deepHWWMDV1_probHww4q[iFJ]+FatJet_deepHWWMDV1_probHww3q[iFJ]+ FatJet_deepHWWMDV1_probHwwevqq[iFJ]+FatJet_deepHWWMDV1_probHwwmvqq[iFJ]+FatJet_deepHWWMDV1_probHwwleptauevqq[iFJ]+FatJet_deepHWWMDV1_probHwwleptaumvqq[iFJ]+FatJet_deepHWWMDV1_probHwwhadtauvqq[iFJ])/(FatJet_deepHWWMDV1_probHww4q[iFJ]+FatJet_deepHWWMDV1_probHww3q[iFJ]+ FatJet_deepHWWMDV1_probHwwevqq[iFJ]+FatJet_deepHWWMDV1_probHwwmvqq[iFJ]+FatJet_deepHWWMDV1_probHwwleptauevqq[iFJ]+FatJet_deepHWWMDV1_probHwwleptaumvqq[iFJ]+FatJet_deepHWWMDV1_probHwwhadtauvqq[iFJ]+FatJet_deepHWWMDV1_probQCDb[iFJ]+FatJet_deepHWWMDV1_probQCDbb[iFJ]+FatJet_deepHWWMDV1_probQCDc[iFJ]+FatJet_deepHWWMDV1_probQCDcc[iFJ]+FatJet_deepHWWMDV1_probQCDothers[iFJ]);
        Branch.push_back(HWWMD_Hall);
    }
    FatJet_Branches["deepHWWMDV1_HallvsQCD"] = Branch;
    Branch.clear();
 













    //New tagger.


    for (int iFJ = 0; iFJ != int(FatJet_pt_nom.size()); ++iFJ ){
        float out = -99 ; 
        if( FatJet_pt_nom[iFJ] > 200 ){
            out = FatJet_msoftdrop_nom[iFJ]/FatJet_msoftdrop_corr_PUPPI[iFJ];
        }
        Branch.push_back(out);
    }
    FatJet_Branches["msoftdrop_nom_noJWS"] = Branch;
    Branch.clear();


}

void FatJet_Collection::Filter(){
    if( filterMode == 1 ){
        Filter_1();
    }
    if( filterMode == 2 ){
        Filter_2();
    }
}

void FatJet_Collection::Filter_1(){
    // jetid , eta requirement
    // https://twiki.cern.ch/twiki/bin/view/CMS/JetID
    // https://twiki.cern.ch/twiki/bin/view/CMS/JetID13TeVUL
    // Please note: For AK8 jets, the corresponding (CHS or PUPPI) AK4 jet ID should be used.
    // For 2016 samples : jetId==3 means: pass loose and tight ID, fail tightLepVeto, jetId==7 means: pass loose, tight, tightLepVeto ID.
    // For 2017 and 2018 samples : jetId==2 means: pass tight ID, fail tightLepVeto, jetId==6 means: pass tight and tightLepVeto ID.
    for (size_t iFJ = 0; iFJ != v_FatJet_pt_->size(); ++iFJ ){

        int   iFatJet_jetId  = v_FatJet_jetId_->at(iFJ) ; if( iFatJet_jetId&2 != 2 ){ continue; }
        float iFatJet_jeteta = v_FatJet_eta_->at(iFJ)   ; if( fabs(iFatJet_jeteta) > 2.4 ){ continue; }
        float iFatJet_jetpt  = v_FatJet_pt_->at(iFJ)    ; if( iFatJet_jetpt < 200 ){ continue; }

        FatJet_pt.push_back(v_FatJet_pt_->at(iFJ));
        FatJet_eta.push_back(v_FatJet_eta_->at(iFJ));
        FatJet_phi.push_back(v_FatJet_phi_->at(iFJ));
        FatJet_msoftdrop.push_back(v_FatJet_msoftdrop_->at(iFJ));
        FatJet_jetId.push_back(v_FatJet_jetId_->at(iFJ));
        FatJet_particleNetMD_QCD.push_back(v_FatJet_particleNetMD_QCD_->at(iFJ));
        FatJet_particleNetMD_Xbb.push_back(v_FatJet_particleNetMD_Xbb_->at(iFJ));
        FatJet_particleNetMD_Xcc.push_back(v_FatJet_particleNetMD_Xcc_->at(iFJ));
        FatJet_particleNetMD_Xqq.push_back(v_FatJet_particleNetMD_Xqq_->at(iFJ));
        FatJet_particleNet_H4qvsQCD.push_back(v_FatJet_particleNet_H4qvsQCD_->at(iFJ));
        FatJet_particleNet_HbbvsQCD.push_back(v_FatJet_particleNet_HbbvsQCD_->at(iFJ));
        FatJet_particleNet_HccvsQCD.push_back(v_FatJet_particleNet_HccvsQCD_->at(iFJ));
        FatJet_particleNet_QCD.push_back(v_FatJet_particleNet_QCD_->at(iFJ));
        FatJet_particleNet_TvsQCD.push_back(v_FatJet_particleNet_TvsQCD_->at(iFJ));
        FatJet_particleNet_WvsQCD.push_back(v_FatJet_particleNet_WvsQCD_->at(iFJ));
        FatJet_particleNet_ZvsQCD.push_back(v_FatJet_particleNet_ZvsQCD_->at(iFJ));
        FatJet_deepTagMD_probHbb.push_back(v_FatJet_deepTagMD_probHbb_->at(iFJ));
        FatJet_deepTagMD_probHcc.push_back(v_FatJet_deepTagMD_probHcc_->at(iFJ));
        FatJet_deepTagMD_probHqqqq.push_back(v_FatJet_deepTagMD_probHqqqq_->at(iFJ));
        FatJet_deepTagMD_probQCDb.push_back(v_FatJet_deepTagMD_probQCDb_->at(iFJ));
        FatJet_deepTagMD_probQCDbb.push_back(v_FatJet_deepTagMD_probQCDbb_->at(iFJ));
        FatJet_deepTagMD_probQCDc.push_back(v_FatJet_deepTagMD_probQCDc_->at(iFJ));
        FatJet_deepTagMD_probQCDcc.push_back(v_FatJet_deepTagMD_probQCDcc_->at(iFJ));
        FatJet_deepTagMD_probQCDothers.push_back(v_FatJet_deepTagMD_probQCDothers_->at(iFJ));
        FatJet_deepTagMD_probTbc.push_back(v_FatJet_deepTagMD_probTbc_->at(iFJ));
        FatJet_deepTagMD_probTbcq.push_back(v_FatJet_deepTagMD_probTbcq_->at(iFJ));
        FatJet_deepTagMD_probTbq.push_back(v_FatJet_deepTagMD_probTbq_->at(iFJ));
        FatJet_deepTagMD_probTbqq.push_back(v_FatJet_deepTagMD_probTbqq_->at(iFJ));
        FatJet_deepTagMD_probWcq.push_back(v_FatJet_deepTagMD_probWcq_->at(iFJ));
        FatJet_deepTagMD_probWqq.push_back(v_FatJet_deepTagMD_probWqq_->at(iFJ));
        FatJet_deepTagMD_probZbb.push_back(v_FatJet_deepTagMD_probZbb_->at(iFJ));
        FatJet_deepTagMD_probZcc.push_back(v_FatJet_deepTagMD_probZcc_->at(iFJ));
        FatJet_deepTagMD_probZqq.push_back(v_FatJet_deepTagMD_probZqq_->at(iFJ));
        FatJet_deepTag_probHbb.push_back(v_FatJet_deepTag_probHbb_->at(iFJ));
        FatJet_deepTag_probHcc.push_back(v_FatJet_deepTag_probHcc_->at(iFJ));
        FatJet_deepTag_probHqqqq.push_back(v_FatJet_deepTag_probHqqqq_->at(iFJ));
        FatJet_deepTag_probQCDb.push_back(v_FatJet_deepTag_probQCDb_->at(iFJ));
        FatJet_deepTag_probQCDbb.push_back(v_FatJet_deepTag_probQCDbb_->at(iFJ));
        FatJet_deepTag_probQCDc.push_back(v_FatJet_deepTag_probQCDc_->at(iFJ));
        FatJet_deepTag_probQCDcc.push_back(v_FatJet_deepTag_probQCDcc_->at(iFJ));
        FatJet_deepTag_probQCDothers.push_back(v_FatJet_deepTag_probQCDothers_->at(iFJ));
        FatJet_deepTag_probTbc.push_back(v_FatJet_deepTag_probTbc_->at(iFJ));
        FatJet_deepTag_probTbcq.push_back(v_FatJet_deepTag_probTbcq_->at(iFJ));
        FatJet_deepTag_probTbq.push_back(v_FatJet_deepTag_probTbq_->at(iFJ));
        FatJet_deepTag_probTbqq.push_back(v_FatJet_deepTag_probTbqq_->at(iFJ));
        FatJet_deepTag_probWcq.push_back(v_FatJet_deepTag_probWcq_->at(iFJ));
        FatJet_deepTag_probWqq.push_back(v_FatJet_deepTag_probWqq_->at(iFJ));
        FatJet_deepTag_probZbb.push_back(v_FatJet_deepTag_probZbb_->at(iFJ));
        FatJet_deepTag_probZcc.push_back(v_FatJet_deepTag_probZcc_->at(iFJ));
        FatJet_tau1.push_back(v_FatJet_tau1_->at(iFJ));
        FatJet_tau2.push_back(v_FatJet_tau2_->at(iFJ));
        FatJet_tau3.push_back(v_FatJet_tau3_->at(iFJ));
        FatJet_tau4.push_back(v_FatJet_tau4_->at(iFJ));

        //New tagger.
        FatJet_deepHWWMDV1_probHww4q.push_back(v_FatJet_deepHWWMDV1_probHww4q_->at(iFJ));
        FatJet_deepHWWMDV1_probHww3q.push_back(v_FatJet_deepHWWMDV1_probHww3q_->at(iFJ));
        FatJet_deepHWWMDV1_probHww4qvsQCD.push_back(v_FatJet_deepHWWMDV1_probHww4qvsQCD_->at(iFJ));
        FatJet_deepHWWMDV1_probHww4q3qvsQCD.push_back(v_FatJet_deepHWWMDV1_probHww4q3qvsQCD_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwevqq.push_back(v_FatJet_deepHWWMDV1_probHwwevqq_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwmvqq.push_back(v_FatJet_deepHWWMDV1_probHwwmvqq_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwhadtauvqq.push_back(v_FatJet_deepHWWMDV1_probHwwhadtauvqq_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwleptauevqq.push_back(v_FatJet_deepHWWMDV1_probHwwleptauevqq_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwleptaumvqq.push_back(v_FatJet_deepHWWMDV1_probHwwleptaumvqq_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDb.push_back(v_FatJet_deepHWWMDV1_probQCDb_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDbb.push_back(v_FatJet_deepHWWMDV1_probQCDbb_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDc.push_back(v_FatJet_deepHWWMDV1_probQCDc_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDcc.push_back(v_FatJet_deepHWWMDV1_probQCDcc_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDothers.push_back(v_FatJet_deepHWWMDV1_probQCDothers_->at(iFJ));


        if( v_FatJet_msoftdrop_raw_->size() > iFJ ){
            FatJet_msoftdrop_raw.push_back(v_FatJet_msoftdrop_raw_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_raw.push_back(-99.);
        }

        if( v_FatJet_msoftdrop_nom_->size() > iFJ ){
            FatJet_msoftdrop_nom.push_back(v_FatJet_msoftdrop_nom_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_nom.push_back(-99.);
        }

        if( v_FatJet_msoftdrop_corr_JMR_->size() > iFJ ){
            FatJet_msoftdrop_corr_JMR.push_back(v_FatJet_msoftdrop_corr_JMR_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_corr_JMR.push_back(-99.);
        }

        if( v_FatJet_msoftdrop_corr_JMS_->size() > iFJ ){
            FatJet_msoftdrop_corr_JMS.push_back(v_FatJet_msoftdrop_corr_JMS_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_corr_JMS.push_back(-99.);
        }

        if( v_FatJet_msoftdrop_corr_PUPPI_->size() > iFJ ){
            FatJet_msoftdrop_corr_PUPPI.push_back(v_FatJet_msoftdrop_corr_PUPPI_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_corr_PUPPI.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDb_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDb.push_back(v_FatJet_ParticleNetMDraw_probQCDb_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDb.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDbb_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDbb.push_back(v_FatJet_ParticleNetMDraw_probQCDbb_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDbb.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDc_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDc.push_back(v_FatJet_ParticleNetMDraw_probQCDc_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDc.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDcc_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDcc.push_back(v_FatJet_ParticleNetMDraw_probQCDcc_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDcc.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDothers_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDothers.push_back(v_FatJet_ParticleNetMDraw_probQCDothers_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDothers.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probXbb_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probXbb.push_back(v_FatJet_ParticleNetMDraw_probXbb_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probXbb.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probXcc_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probXcc.push_back(v_FatJet_ParticleNetMDraw_probXcc_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probXcc.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probXqq_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probXqq.push_back(v_FatJet_ParticleNetMDraw_probXqq_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probXqq.push_back(-99.);
        }

        if( v_FatJet_pt_nom_->size() > iFJ ){
            FatJet_pt_nom.push_back(v_FatJet_pt_nom_->at(iFJ));
        }
        else{
            FatJet_pt_nom.push_back(-99.);
        }

    }
}

void FatJet_Collection::Filter_2(){
    // jetid , eta requirement
    // https://twiki.cern.ch/twiki/bin/view/CMS/JetID
    // https://twiki.cern.ch/twiki/bin/view/CMS/JetID13TeVUL
    // Please note: For AK8 jets, the corresponding (CHS or PUPPI) AK4 jet ID should be used.
    // For 2016 samples : jetId==3 means: pass loose and tight ID, fail tightLepVeto, jetId==7 means: pass loose, tight, tightLepVeto ID.
    // For 2017 and 2018 samples : jetId==2 means: pass tight ID, fail tightLepVeto, jetId==6 means: pass tight and tightLepVeto ID.
    for (size_t iFJ = 0; iFJ != v_FatJet_pt_->size(); ++iFJ ){

        int   iFatJet_jetId  = v_FatJet_jetId_->at(iFJ) ; if( iFatJet_jetId&2 != 2 ){ continue; }
        float iFatJet_jeteta = v_FatJet_eta_->at(iFJ)   ; if( fabs(iFatJet_jeteta) > 2.4 ){ continue; }
        float iFatJet_jetpt  = v_FatJet_pt_nom_->at(iFJ)    ; if( iFatJet_jetpt < 200 ){ continue; }

        FatJet_pt.push_back(v_FatJet_pt_->at(iFJ));
        FatJet_eta.push_back(v_FatJet_eta_->at(iFJ));
        FatJet_phi.push_back(v_FatJet_phi_->at(iFJ));
        FatJet_msoftdrop.push_back(v_FatJet_msoftdrop_->at(iFJ));
        FatJet_jetId.push_back(v_FatJet_jetId_->at(iFJ));
        FatJet_particleNetMD_QCD.push_back(v_FatJet_particleNetMD_QCD_->at(iFJ));
        FatJet_particleNetMD_Xbb.push_back(v_FatJet_particleNetMD_Xbb_->at(iFJ));
        FatJet_particleNetMD_Xcc.push_back(v_FatJet_particleNetMD_Xcc_->at(iFJ));
        FatJet_particleNetMD_Xqq.push_back(v_FatJet_particleNetMD_Xqq_->at(iFJ));
        FatJet_particleNet_H4qvsQCD.push_back(v_FatJet_particleNet_H4qvsQCD_->at(iFJ));
        FatJet_particleNet_HbbvsQCD.push_back(v_FatJet_particleNet_HbbvsQCD_->at(iFJ));
        FatJet_particleNet_HccvsQCD.push_back(v_FatJet_particleNet_HccvsQCD_->at(iFJ));
        FatJet_particleNet_QCD.push_back(v_FatJet_particleNet_QCD_->at(iFJ));
        FatJet_particleNet_TvsQCD.push_back(v_FatJet_particleNet_TvsQCD_->at(iFJ));
        FatJet_particleNet_WvsQCD.push_back(v_FatJet_particleNet_WvsQCD_->at(iFJ));
        FatJet_particleNet_ZvsQCD.push_back(v_FatJet_particleNet_ZvsQCD_->at(iFJ));
        FatJet_deepTagMD_probHbb.push_back(v_FatJet_deepTagMD_probHbb_->at(iFJ));
        FatJet_deepTagMD_probHcc.push_back(v_FatJet_deepTagMD_probHcc_->at(iFJ));
        FatJet_deepTagMD_probHqqqq.push_back(v_FatJet_deepTagMD_probHqqqq_->at(iFJ));
        FatJet_deepTagMD_probQCDb.push_back(v_FatJet_deepTagMD_probQCDb_->at(iFJ));
        FatJet_deepTagMD_probQCDbb.push_back(v_FatJet_deepTagMD_probQCDbb_->at(iFJ));
        FatJet_deepTagMD_probQCDc.push_back(v_FatJet_deepTagMD_probQCDc_->at(iFJ));
        FatJet_deepTagMD_probQCDcc.push_back(v_FatJet_deepTagMD_probQCDcc_->at(iFJ));
        FatJet_deepTagMD_probQCDothers.push_back(v_FatJet_deepTagMD_probQCDothers_->at(iFJ));
        FatJet_deepTagMD_probTbc.push_back(v_FatJet_deepTagMD_probTbc_->at(iFJ));
        FatJet_deepTagMD_probTbcq.push_back(v_FatJet_deepTagMD_probTbcq_->at(iFJ));
        FatJet_deepTagMD_probTbq.push_back(v_FatJet_deepTagMD_probTbq_->at(iFJ));
        FatJet_deepTagMD_probTbqq.push_back(v_FatJet_deepTagMD_probTbqq_->at(iFJ));
        FatJet_deepTagMD_probWcq.push_back(v_FatJet_deepTagMD_probWcq_->at(iFJ));
        FatJet_deepTagMD_probWqq.push_back(v_FatJet_deepTagMD_probWqq_->at(iFJ));
        FatJet_deepTagMD_probZbb.push_back(v_FatJet_deepTagMD_probZbb_->at(iFJ));
        FatJet_deepTagMD_probZcc.push_back(v_FatJet_deepTagMD_probZcc_->at(iFJ));
        FatJet_deepTagMD_probZqq.push_back(v_FatJet_deepTagMD_probZqq_->at(iFJ));
        FatJet_deepTag_probHbb.push_back(v_FatJet_deepTag_probHbb_->at(iFJ));
        FatJet_deepTag_probHcc.push_back(v_FatJet_deepTag_probHcc_->at(iFJ));
        FatJet_deepTag_probHqqqq.push_back(v_FatJet_deepTag_probHqqqq_->at(iFJ));
        FatJet_deepTag_probQCDb.push_back(v_FatJet_deepTag_probQCDb_->at(iFJ));
        FatJet_deepTag_probQCDbb.push_back(v_FatJet_deepTag_probQCDbb_->at(iFJ));
        FatJet_deepTag_probQCDc.push_back(v_FatJet_deepTag_probQCDc_->at(iFJ));
        FatJet_deepTag_probQCDcc.push_back(v_FatJet_deepTag_probQCDcc_->at(iFJ));
        FatJet_deepTag_probQCDothers.push_back(v_FatJet_deepTag_probQCDothers_->at(iFJ));
        FatJet_deepTag_probTbc.push_back(v_FatJet_deepTag_probTbc_->at(iFJ));
        FatJet_deepTag_probTbcq.push_back(v_FatJet_deepTag_probTbcq_->at(iFJ));
        FatJet_deepTag_probTbq.push_back(v_FatJet_deepTag_probTbq_->at(iFJ));
        FatJet_deepTag_probTbqq.push_back(v_FatJet_deepTag_probTbqq_->at(iFJ));
        FatJet_deepTag_probWcq.push_back(v_FatJet_deepTag_probWcq_->at(iFJ));
        FatJet_deepTag_probWqq.push_back(v_FatJet_deepTag_probWqq_->at(iFJ));
        FatJet_deepTag_probZbb.push_back(v_FatJet_deepTag_probZbb_->at(iFJ));
        FatJet_deepTag_probZcc.push_back(v_FatJet_deepTag_probZcc_->at(iFJ));
        FatJet_tau1.push_back(v_FatJet_tau1_->at(iFJ));
        FatJet_tau2.push_back(v_FatJet_tau2_->at(iFJ));
        FatJet_tau3.push_back(v_FatJet_tau3_->at(iFJ));
        FatJet_tau4.push_back(v_FatJet_tau4_->at(iFJ));

        //New tagger.
        FatJet_deepHWWMDV1_probHww4q.push_back(v_FatJet_deepHWWMDV1_probHww4q_->at(iFJ));
        FatJet_deepHWWMDV1_probHww3q.push_back(v_FatJet_deepHWWMDV1_probHww3q_->at(iFJ));
        FatJet_deepHWWMDV1_probHww4qvsQCD.push_back(v_FatJet_deepHWWMDV1_probHww4qvsQCD_->at(iFJ));
        FatJet_deepHWWMDV1_probHww4q3qvsQCD.push_back(v_FatJet_deepHWWMDV1_probHww4q3qvsQCD_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwevqq.push_back(v_FatJet_deepHWWMDV1_probHwwevqq_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwmvqq.push_back(v_FatJet_deepHWWMDV1_probHwwmvqq_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwhadtauvqq.push_back(v_FatJet_deepHWWMDV1_probHwwhadtauvqq_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwleptauevqq.push_back(v_FatJet_deepHWWMDV1_probHwwleptauevqq_->at(iFJ));
        FatJet_deepHWWMDV1_probHwwleptaumvqq.push_back(v_FatJet_deepHWWMDV1_probHwwleptaumvqq_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDb.push_back(v_FatJet_deepHWWMDV1_probQCDb_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDbb.push_back(v_FatJet_deepHWWMDV1_probQCDbb_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDc.push_back(v_FatJet_deepHWWMDV1_probQCDc_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDcc.push_back(v_FatJet_deepHWWMDV1_probQCDcc_->at(iFJ));
        FatJet_deepHWWMDV1_probQCDothers.push_back(v_FatJet_deepHWWMDV1_probQCDothers_->at(iFJ));



        if( v_FatJet_msoftdrop_raw_->size() > iFJ ){
            FatJet_msoftdrop_raw.push_back(v_FatJet_msoftdrop_raw_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_raw.push_back(-99.);
        }

        if( v_FatJet_msoftdrop_nom_->size() > iFJ ){
            FatJet_msoftdrop_nom.push_back(v_FatJet_msoftdrop_nom_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_nom.push_back(-99.);
        }

        if( v_FatJet_msoftdrop_corr_JMR_->size() > iFJ ){
            FatJet_msoftdrop_corr_JMR.push_back(v_FatJet_msoftdrop_corr_JMR_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_corr_JMR.push_back(-99.);
        }

        if( v_FatJet_msoftdrop_corr_JMS_->size() > iFJ ){
            FatJet_msoftdrop_corr_JMS.push_back(v_FatJet_msoftdrop_corr_JMS_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_corr_JMS.push_back(-99.);
        }

        if( v_FatJet_msoftdrop_corr_PUPPI_->size() > iFJ ){
            FatJet_msoftdrop_corr_PUPPI.push_back(v_FatJet_msoftdrop_corr_PUPPI_->at(iFJ));
        }
        else{
            FatJet_msoftdrop_corr_PUPPI.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDb_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDb.push_back(v_FatJet_ParticleNetMDraw_probQCDb_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDb.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDbb_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDbb.push_back(v_FatJet_ParticleNetMDraw_probQCDbb_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDbb.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDc_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDc.push_back(v_FatJet_ParticleNetMDraw_probQCDc_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDc.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDcc_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDcc.push_back(v_FatJet_ParticleNetMDraw_probQCDcc_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDcc.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probQCDothers_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probQCDothers.push_back(v_FatJet_ParticleNetMDraw_probQCDothers_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probQCDothers.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probXbb_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probXbb.push_back(v_FatJet_ParticleNetMDraw_probXbb_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probXbb.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probXcc_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probXcc.push_back(v_FatJet_ParticleNetMDraw_probXcc_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probXcc.push_back(-99.);
        }

        if( v_FatJet_ParticleNetMDraw_probXqq_->size() > iFJ ){
            FatJet_ParticleNetMDraw_probXqq.push_back(v_FatJet_ParticleNetMDraw_probXqq_->at(iFJ));
        }
        else{
            FatJet_ParticleNetMDraw_probXqq.push_back(-99.);
        }

        if( v_FatJet_pt_nom_->size() > iFJ ){
            FatJet_pt_nom.push_back(v_FatJet_pt_nom_->at(iFJ));
        }
        else{
            FatJet_pt_nom.push_back(-99.);
        }

    }
}

size_t FatJet_Collection::size(){
    return FatJet_pt.size();
}

void FatJet_Collection::Order(int mode){
    if((mode == 1) && (NMAXFatJet == 3)){ Order_1(); }
    if((mode == 2) && (NMAXFatJet == 3)){ Order_2(); }
    if((mode == 3) && (NMAXFatJet == 3)){ Order_3(); }
    if((mode == 4) && (NMAXFatJet == 3)){ Order_4(); }
    if((mode == 5) && (NMAXFatJet == 3)){ Order_5(); }

    if((mode == 6) && (NMAXFatJet == 3)){ Order_6(); } //HWWMD H4q tagger order.

}

void FatJet_Collection::Order_1(){
    vector<int> FJorder;
    if( FatJet_pt.size() == 2 ){
        FJorder.push_back(0);
        FJorder.push_back(1);
        FJorder.push_back(-99);
    }
    if( FatJet_pt.size() == 3 ){
        FJorder.push_back(0);
        FJorder.push_back(1);
        FJorder.push_back(2);
    }
    else{
        FJorder.push_back(-99);
        FJorder.push_back(-99);
        FJorder.push_back(-99);
    }
    FatJet_order["PT"] = FJorder;
}

void FatJet_Collection::Order_2(){
    vector<int> FJorder;
    vector<int> FJorder_tmp = sort_indexes(FatJet_msoftdrop);
    if( FatJet_pt.size() == 2 ){
        FJorder.push_back(FJorder_tmp[0]);
        FJorder.push_back(-99);
        FJorder.push_back(FJorder_tmp[1]);
    }
    if( FatJet_pt.size() == 3 ){
        FJorder = FJorder_tmp ;
    }
    else{
        FJorder.push_back(-99);
        FJorder.push_back(-99);
        FJorder.push_back(-99);
    }
    FatJet_order["Mass"] = FJorder;
}

void FatJet_Collection::Order_3(){
    // deep-W MD ordered
    vector<float> OrderBranch;
    OrderBranch = FatJet_Branches["deepTagMD_WvsQCD"];

    vector<int> FJorder;
    vector<int> FJorder_tmp = sort_indexes(OrderBranch);
    if( FatJet_pt.size() == 2 ){
        FJorder.push_back(FJorder_tmp[0]);
        FJorder.push_back(-99);
        FJorder.push_back(FJorder_tmp[1]);
    }
    if( FatJet_pt.size() == 3 ){
        FJorder = FJorder_tmp ;
    }
    else{
        FJorder.push_back(-99);
        FJorder.push_back(-99);
        FJorder.push_back(-99);
    }
    FatJet_order["deep-W-MD"] = FJorder;
}

void FatJet_Collection::Order_4(){
    // paricle-net W MD ordered
    vector<float> OrderBranch;
    OrderBranch = FatJet_Branches["particleNetMD_WvsQCD"];

    vector<int> FJorder;
    vector<int> FJorder_tmp = sort_indexes(OrderBranch);
    if( FatJet_pt.size() == 2 ){
        FJorder.push_back(FJorder_tmp[0]);
        FJorder.push_back(-99);
        FJorder.push_back(FJorder_tmp[1]);
    }
    if( FatJet_pt.size() == 3 ){
        FJorder = FJorder_tmp ;
    }
    else{
        FJorder.push_back(-99);
        FJorder.push_back(-99);
        FJorder.push_back(-99);
    }
    FatJet_order["PNet-W-MD"] = FJorder;
}

void FatJet_Collection::Order_5(){
    // paricle-net W MD ordered
    vector<float> OrderBranch;
    OrderBranch = FatJet_Branches["pt_nom"];

    vector<int> FJorder;
    vector<int> FJorder_tmp = sort_indexes(OrderBranch);
    if( FatJet_pt.size() == 2 ){
        FJorder.push_back(FJorder_tmp[0]);
        FJorder.push_back(FJorder_tmp[1]);
        FJorder.push_back(-99);
    }
    if( FatJet_pt.size() == 3 ){
        FJorder = FJorder_tmp ;
    }
    else{
        FJorder.push_back(-99);
        FJorder.push_back(-99);
        FJorder.push_back(-99);
    }
    FatJet_order["pt_nom"] = FJorder;
}

void FatJet_Collection::Order_6(){
    //General Higgs tagger ordered
    vector<float> OrderBranch;
    OrderBranch = FatJet_Branches["deepHWWMDV1_HallvsQCD"];

    vector<int> FJorder;
    vector<int> FJorder_tmp = sort_indexes(OrderBranch);
    if( FatJet_pt.size() == 2 ){
        FJorder.push_back(FJorder_tmp[0]);
        FJorder.push_back(-99);
        FJorder.push_back(FJorder_tmp[1]);
    }
    if( FatJet_pt.size() == 3 ){
        FJorder = FJorder_tmp ;
    }
    else{
        FJorder.push_back(-99);
        FJorder.push_back(-99);
        FJorder.push_back(-99);
    }
    FatJet_order["HWW-H4q-MD"] = FJorder;
}


float FatJet_Collection::Get(string order, string variable, int index){
    int id = FatJet_order[order][index];
    if( id == -99 ){
        return -99.;
    }
    else{
        return FatJet_Branches[variable].at(id);
    }
}

// template <typename T>
// void FatJet_Collection::Out(vector<T> In_branch, vector<T> & Out_branch){
    // for (size_t iFJ = 0; iFJ != FJorder.size(); ++iFJ ){ 
        // if(iFJ < In_branch.size()){ Out_branch.push_back( In_branch.at(FJorder.at(iFJ)) ); }
        // else{ Out_branch.push_back(-99); }
    // }
// }

#endif

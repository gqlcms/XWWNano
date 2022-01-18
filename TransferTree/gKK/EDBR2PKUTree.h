//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan  6 02:39:46 2016 by ROOT version 5.34/32
// from TTree EDBRCandidates/EDBR Candidates
// found on file: BulkGravWW750.root
//////////////////////////////////////////////////////////

#ifndef EDBR2PKUTree_h
#define EDBR2PKUTree_h

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
using namespace std;

#define NFATJET_MAX 10 // for FatJet collection
#define NJET_MAX 50 // for FatJet collection
#define NGENPART_MAX 402 // for FatJet collection

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxpassFilter_HBHE = 1;
   const Int_t kMaxpassFilter_HBHEIso = 1;
   const Int_t kMaxpassFilter_GlobalHalo = 1;
   const Int_t kMaxpassFilter_ECALDeadCell = 1;
   const Int_t kMaxpassFilter_GoodVtx = 1;
   const Int_t kMaxpassFilter_EEBadSc = 1;
   const Int_t kMaxpassFilter_badMuon = 1;
   const Int_t kMaxpassFilter_badChargedHadron = 1;

class EDBR2PKUTree {
   public :
      TTree          *fChain;   //!pointer to the analyzed TTree or TChain
      Int_t           fCurrent; //!current Tree number in a TChain

   // gkk
   void DeepW_Rank_Variable();
   void Added_Pt_ranked_Variables();
   void Added_Mass_ranked_Variables();
   void Added_Mass_ranked_score();
   void AK4_InsideAK8();
   void METAK8_DPhi();
   void METRecovery();
   void Rank_AK8();
   void MET_AK8_MT();
   void Unknown();
   void METf();
   void MJJ_MJJJf();
   void DR_DPhi_M2J();
   void AK8_Pt_Ordered(Long64_t jentry);
   void AK8_Pt_Ordered_PnScore_flatVector(Long64_t jentry);
   void AK8_Pt_Ordered_RawScore_flatVector(Long64_t jentry);
   void AK8_Pt_Ordered_p4_flatVector(Long64_t jentry);
   void AK8_Pt_Ordered_RawScore_swtich();
   void AK8_Pt_Ordered_p4();
   void DeepAK8_Mass_Ordered_init();
   void DeepAK8_Mass_Ordered_deepAK8RawScore();
   void DeepAK8_Mass_Ordered_deepAK8CombineScore();
   void DeepAK8_Mass_Ordered_P4();
   void DeepAK8_Mass_Ordered();
   void Deep_W_Ordered_Init();
   void Deep_W_Ordered_P4();
   void Deep_W_Ordered_RawScore();
   void Deep_W_Ordered_CombineScore();
   void Deep_W_Ordered();
   void EventLevel(Long64_t jentry);
   void AK4_init(Long64_t jentry);
   void HT_ST();
   void Nj4_Nj8();
   void NAK4();
   void Nbtagf();
   void Weightf(Double_t XS, Int_t Nevents, Double_t LUMI);

   vector<size_t> GenParticles_Daughterindex(size_t Genpart_index);
   int GenParticles_Lastcopy(size_t Genpart_index);
   int GenParticles_Firstcopy(size_t Genpart_index);
   void GenMatching(Long64_t jentry);
   void loadGenpart(Long64_t jentry);
   void GenParticles();
   void Radion_Matching();
   void Radion_Matching_taulep();
   void gKK_g_Matching();
   void Radion_Matching_taudecay();

   Int_t IsData;

   TLorentzVector LMJ_j,LMJJ_j;

   Double_t        deltaRAK4AK8_new_2[15];
   Double_t        deltaRAK4AK8_new_3[15];
   Double_t        deltaRAK4AK8_new_4[15];

   double deltaRak4sj[15]={0};
   double deltaRak4sj2[15]={0};
   double deltaRak4sj3[15]={0};
   double deltaRak4sj4[15]={0};

double DR1,DR2,DR3,DR4,DR5,DR6;
double W_n_phi,W_n_eta;
double DR01,DR02,DR03,DR04,DR05;

Float_t Mj;
Float_t Mj_2;


float jetAK8puppi_pt ;
float jetAK8puppi_pt_2 ;
float jetAK8puppi_pt_3 ;
float jetAK8puppi_eta;
float jetAK8puppi_eta_2;
float jetAK8puppi_eta_3;
float jetAK8puppi_phi;
float jetAK8puppi_phi_2;
float jetAK8puppi_phi_3;
float jetAK8puppi_sd;
float jetAK8puppi_sd_2;
float jetAK8puppi_sd_3;

Float_t MET_pt;
Float_t MET_et; // no use at all

float genWeight;

Int_t usenumber3;
Int_t usenumber2;
Int_t usenumber1;


Int_t R4q_max;
Int_t R3q_max;
Int_t R2q_max;
Int_t Rlqq_max;
Int_t Rlq_max;
Int_t w_max;
Int_t u_max;
Int_t R4q_min;
Int_t R3q_min;
Int_t R2q_min;
Int_t Rlqq_min;
Int_t Rlq_min;
Int_t w_min;
Int_t u_min;
Int_t gKK_g_max;
Int_t gKK_g_min;
Int_t R3q_taudecay_max;
Int_t R2q_qq_taudecay_max;
Int_t R2q_qtau_taudecay_max;
Int_t R2q_tautau_taudecay_max;
Int_t Rlqq_emu_taudecay_max;
Int_t Rlqq_tau_taudecay_max;
Int_t Rlq_taudecay_max;
Int_t w_taudecay_max;
Int_t u_taudecay_max;
Int_t R3q_taudecay_min;
Int_t R2q_qq_taudecay_min;
Int_t R2q_qtau_taudecay_min;
Int_t R2q_tautau_taudecay_min;
Int_t Rlqq_emu_taudecay_min;
Int_t Rlqq_tau_taudecay_min;
Int_t Rlq_taudecay_min;
Int_t w_taudecay_min;
Int_t u_taudecay_min;
Int_t R3q_tauhad_max;
Int_t R2q_qtau_tauhad_max;
Int_t R2q_tautau_tauhad_max;
Int_t Rlqq_emu_tauhad_max;
Int_t Rlq_tauhad_max;
Int_t w_tauhad_max;
Int_t u_tauhad_max;
Int_t R3q_tauhad_min;
Int_t R2q_qtau_tauhad_min;
Int_t R2q_tautau_tauhad_min;
Int_t Rlqq_emu_tauhad_min;
Int_t Rlq_tauhad_min;
Int_t w_tauhad_min;
Int_t u_tauhad_min;
Int_t R3q_td_max;
Int_t rest_td_max;
Int_t R2q_Rlqq_td_max;
Int_t R3q_td_min;
Int_t rest_td_min;
Int_t R2q_Rlqq_td_min;
Int_t R4q_mid;
Int_t R3q_mid;
Int_t R2q_mid;
Int_t Rlqq_mid;
Int_t Rlq_mid;
Int_t w_mid;
Int_t u_mid;
Int_t gKK_g_mid;
Int_t R3q_taudecay_mid;
Int_t R2q_qq_taudecay_mid;
Int_t R2q_qtau_taudecay_mid;
Int_t R2q_tautau_taudecay_mid;
Int_t Rlqq_emu_taudecay_mid;
Int_t Rlqq_tau_taudecay_mid;
Int_t Rlq_taudecay_mid;
Int_t w_taudecay_mid;
Int_t u_taudecay_mid;
Int_t R3q_tauhad_mid;
Int_t R2q_qtau_tauhad_mid;
Int_t R2q_tautau_tauhad_mid;
Int_t Rlqq_emu_tauhad_mid;
Int_t Rlq_tauhad_mid;
Int_t w_tauhad_mid;
Int_t u_tauhad_mid;
Int_t R3q_td_mid;
Int_t rest_td_mid;
Int_t R2q_Rlqq_td_mid;


   Int_t           z_max,t_max,t_max_tag,g_max,q_max,z_mid,t_mid,t_mid_tag,g_mid,q_mid,z_min,t_min,t_min_tag,g_min,q_min,z_4,t_4,t_4_tag,w_4,g_4,q_4,u_4;
   Int_t           t34_max_tag,t34_mid_tag,t34_min_tag,t34_4_tag;

float FatJet_pt_1;
float FatJet_pt_2;
float FatJet_pt_3;
float FatJet_pt_4;
    
float FatJet_eta_1;
float FatJet_eta_2;
float FatJet_eta_3;
float FatJet_eta_4;
    
float FatJet_phi_1;
float FatJet_phi_2;
float FatJet_phi_3;
float FatJet_phi_4;
    
float FatJet_msoftdrop_1;
float FatJet_msoftdrop_2;
float FatJet_msoftdrop_3;
float FatJet_msoftdrop_4;

float gen_gKK_g_pt_f;
float gen_gKK_g_eta_f;
float gen_gKK_g_phi_f;
float gen_gKK_g_mass_f;

int gen_tau_decay_2;
int gen_tau_decay_3;

float GenPart_eta_[NGENPART_MAX];
vector<float> v_GenPart_eta_;
TBranch *b_GenPart_eta_;
    
int GenPart_genPartIdxMother_[NGENPART_MAX];
vector<int> v_GenPart_genPartIdxMother_;
TBranch *b_GenPart_genPartIdxMother_;
    
float GenPart_mass_[NGENPART_MAX];
vector<float> v_GenPart_mass_;
TBranch *b_GenPart_mass_;
    
int GenPart_pdgId_[NGENPART_MAX];
vector<int> v_GenPart_pdgId_;
TBranch *b_GenPart_pdgId_;
    
float GenPart_phi_[NGENPART_MAX];
vector<float> v_GenPart_phi_;
TBranch *b_GenPart_phi_;
    
float GenPart_pt_[NGENPART_MAX];
vector<float> v_GenPart_pt_;
TBranch *b_GenPart_pt_;
    
int GenPart_status_[NGENPART_MAX];
vector<int> v_GenPart_status_;
TBranch *b_GenPart_status_;
    
int GenPart_statusFlags_[NGENPART_MAX];
vector<int> v_GenPart_statusFlags_;
TBranch *b_GenPart_statusFlags_;
    


float FatJet_pt_[NFATJET_MAX];
vector<float> v_FatJet_pt_;
TBranch *b_FatJet_pt_;
    
float FatJet_eta_[NFATJET_MAX];
vector<float> v_FatJet_eta_;
TBranch *b_FatJet_eta_;
    
float FatJet_phi_[NFATJET_MAX];
vector<float> v_FatJet_phi_;
TBranch *b_FatJet_phi_;
    
float FatJet_msoftdrop_[NFATJET_MAX];
vector<float> v_FatJet_msoftdrop_;
TBranch *b_FatJet_msoftdrop_;

float FatJet_deepTagMD_probHbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probHbb_;
TBranch *b_FatJet_deepTagMD_probHbb_;
    
float FatJet_deepTagMD_probHcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probHcc_;
TBranch *b_FatJet_deepTagMD_probHcc_;
    
float FatJet_deepTagMD_probHqqqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probHqqqq_;
TBranch *b_FatJet_deepTagMD_probHqqqq_;
    
float FatJet_deepTagMD_probQCDb_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDb_;
TBranch *b_FatJet_deepTagMD_probQCDb_;
    
float FatJet_deepTagMD_probQCDbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDbb_;
TBranch *b_FatJet_deepTagMD_probQCDbb_;
    
float FatJet_deepTagMD_probQCDc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDc_;
TBranch *b_FatJet_deepTagMD_probQCDc_;
    
float FatJet_deepTagMD_probQCDcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDcc_;
TBranch *b_FatJet_deepTagMD_probQCDcc_;
    
float FatJet_deepTagMD_probQCDothers_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probQCDothers_;
TBranch *b_FatJet_deepTagMD_probQCDothers_;
    
float FatJet_deepTagMD_probTbc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probTbc_;
TBranch *b_FatJet_deepTagMD_probTbc_;
    
float FatJet_deepTagMD_probTbcq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probTbcq_;
TBranch *b_FatJet_deepTagMD_probTbcq_;
    
float FatJet_deepTagMD_probTbq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probTbq_;
TBranch *b_FatJet_deepTagMD_probTbq_;
    
float FatJet_deepTagMD_probTbqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probTbqq_;
TBranch *b_FatJet_deepTagMD_probTbqq_;
    
float FatJet_deepTagMD_probWcq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probWcq_;
TBranch *b_FatJet_deepTagMD_probWcq_;
    
float FatJet_deepTagMD_probWqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probWqq_;
TBranch *b_FatJet_deepTagMD_probWqq_;
    
float FatJet_deepTagMD_probZbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probZbb_;
TBranch *b_FatJet_deepTagMD_probZbb_;
    
float FatJet_deepTagMD_probZcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probZcc_;
TBranch *b_FatJet_deepTagMD_probZcc_;
    
float FatJet_deepTagMD_probZqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTagMD_probZqq_;
TBranch *b_FatJet_deepTagMD_probZqq_;
    
float FatJet_deepTag_probHbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probHbb_;
TBranch *b_FatJet_deepTag_probHbb_;
    
float FatJet_deepTag_probHcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probHcc_;
TBranch *b_FatJet_deepTag_probHcc_;
    
float FatJet_deepTag_probHqqqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probHqqqq_;
TBranch *b_FatJet_deepTag_probHqqqq_;
    
float FatJet_deepTag_probQCDb_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDb_;
TBranch *b_FatJet_deepTag_probQCDb_;
    
float FatJet_deepTag_probQCDbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDbb_;
TBranch *b_FatJet_deepTag_probQCDbb_;
    
float FatJet_deepTag_probQCDc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDc_;
TBranch *b_FatJet_deepTag_probQCDc_;
    
float FatJet_deepTag_probQCDcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDcc_;
TBranch *b_FatJet_deepTag_probQCDcc_;
    
float FatJet_deepTag_probQCDothers_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probQCDothers_;
TBranch *b_FatJet_deepTag_probQCDothers_;
    
float FatJet_deepTag_probTbc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probTbc_;
TBranch *b_FatJet_deepTag_probTbc_;
    
float FatJet_deepTag_probTbcq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probTbcq_;
TBranch *b_FatJet_deepTag_probTbcq_;
    
float FatJet_deepTag_probTbq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probTbq_;
TBranch *b_FatJet_deepTag_probTbq_;
    
float FatJet_deepTag_probTbqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probTbqq_;
TBranch *b_FatJet_deepTag_probTbqq_;
    
float FatJet_deepTag_probWcq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probWcq_;
TBranch *b_FatJet_deepTag_probWcq_;
    
float FatJet_deepTag_probWqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probWqq_;
TBranch *b_FatJet_deepTag_probWqq_;
    
float FatJet_deepTag_probZbb_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probZbb_;
TBranch *b_FatJet_deepTag_probZbb_;
    
float FatJet_deepTag_probZcc_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probZcc_;
TBranch *b_FatJet_deepTag_probZcc_;
    
float FatJet_deepTag_probZqq_[NFATJET_MAX];
vector<float> v_FatJet_deepTag_probZqq_;
TBranch *b_FatJet_deepTag_probZqq_;


// particle-net 

float FatJet_particleNetMD_QCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNetMD_QCD_;
TBranch *b_FatJet_particleNetMD_QCD_;
    
float FatJet_particleNetMD_Xbb_[NFATJET_MAX];
vector<float> v_FatJet_particleNetMD_Xbb_;
TBranch *b_FatJet_particleNetMD_Xbb_;
    
float FatJet_particleNetMD_Xcc_[NFATJET_MAX];
vector<float> v_FatJet_particleNetMD_Xcc_;
TBranch *b_FatJet_particleNetMD_Xcc_;
    
float FatJet_particleNetMD_Xqq_[NFATJET_MAX];
vector<float> v_FatJet_particleNetMD_Xqq_;
TBranch *b_FatJet_particleNetMD_Xqq_;
    
float FatJet_particleNet_H4qvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_H4qvsQCD_;
TBranch *b_FatJet_particleNet_H4qvsQCD_;
    
float FatJet_particleNet_HbbvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_HbbvsQCD_;
TBranch *b_FatJet_particleNet_HbbvsQCD_;
    
float FatJet_particleNet_HccvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_HccvsQCD_;
TBranch *b_FatJet_particleNet_HccvsQCD_;
    
float FatJet_particleNet_QCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_QCD_;
TBranch *b_FatJet_particleNet_QCD_;
    
float FatJet_particleNet_TvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_TvsQCD_;
TBranch *b_FatJet_particleNet_TvsQCD_;
    
float FatJet_particleNet_WvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_WvsQCD_;
TBranch *b_FatJet_particleNet_WvsQCD_;
    
float FatJet_particleNet_ZvsQCD_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_ZvsQCD_;
TBranch *b_FatJet_particleNet_ZvsQCD_;
    
float FatJet_particleNet_mass_[NFATJET_MAX];
vector<float> v_FatJet_particleNet_mass_;
TBranch *b_FatJet_particleNet_mass_;
    



float Jet_btagDeepB_[NJET_MAX];
vector<float> v_Jet_btagDeepB_;
TBranch *b_Jet_btagDeepB_;
    
float Jet_btagDeepFlavB_[NJET_MAX];
vector<float> v_Jet_btagDeepFlavB_;
TBranch *b_Jet_btagDeepFlavB_;
    
float Jet_btagDeepFlavCvB_[NJET_MAX];
vector<float> v_Jet_btagDeepFlavCvB_;
TBranch *b_Jet_btagDeepFlavCvB_;
    
float Jet_btagDeepFlavCvL_[NJET_MAX];
vector<float> v_Jet_btagDeepFlavCvL_;
TBranch *b_Jet_btagDeepFlavCvL_;
    
float Jet_btagDeepFlavQG_[NJET_MAX];
vector<float> v_Jet_btagDeepFlavQG_;
TBranch *b_Jet_btagDeepFlavQG_;
    
float Jet_eta_[NJET_MAX];
vector<float> v_Jet_eta_;
TBranch *b_Jet_eta_;
    
float Jet_hadronFlavour_[NJET_MAX];
vector<float> v_Jet_hadronFlavour_;
TBranch *b_Jet_hadronFlavour_;
    
float Jet_jetId_[NJET_MAX];
vector<float> v_Jet_jetId_;
TBranch *b_Jet_jetId_;
    
float Jet_mass_[NJET_MAX];
vector<float> v_Jet_mass_;
TBranch *b_Jet_mass_;
    
float Jet_partonFlavour_[NJET_MAX];
vector<float> v_Jet_partonFlavour_;
TBranch *b_Jet_partonFlavour_;
    
float Jet_phi_[NJET_MAX];
vector<float> v_Jet_phi_;
TBranch *b_Jet_phi_;
    
float Jet_pt_[NJET_MAX];
vector<float> v_Jet_pt_;
TBranch *b_Jet_pt_;
    
float Jet_puId_[NJET_MAX];
vector<float> v_Jet_puId_;
TBranch *b_Jet_puId_;
    
float Jet_puIdDisc_[NJET_MAX];
vector<float> v_Jet_puIdDisc_;
TBranch *b_Jet_puIdDisc_;
    
float Jet_qgl_[NJET_MAX];
vector<float> v_Jet_qgl_;
TBranch *b_Jet_qgl_;
    
float Jet_rawFactor_[NJET_MAX];
vector<float> v_Jet_rawFactor_;
TBranch *b_Jet_rawFactor_;
    
    

float FatJet_particleNetMD_QCD_1;
float FatJet_particleNetMD_QCD_2;
float FatJet_particleNetMD_QCD_3;
    
float FatJet_particleNetMD_Xbb_1;
float FatJet_particleNetMD_Xbb_2;
float FatJet_particleNetMD_Xbb_3;
    
float FatJet_particleNetMD_Xcc_1;
float FatJet_particleNetMD_Xcc_2;
float FatJet_particleNetMD_Xcc_3;
    
float FatJet_particleNetMD_Xqq_1;
float FatJet_particleNetMD_Xqq_2;
float FatJet_particleNetMD_Xqq_3;
    
float FatJet_particleNet_H4qvsQCD_1;
float FatJet_particleNet_H4qvsQCD_2;
float FatJet_particleNet_H4qvsQCD_3;
    
float FatJet_particleNet_HbbvsQCD_1;
float FatJet_particleNet_HbbvsQCD_2;
float FatJet_particleNet_HbbvsQCD_3;
    
float FatJet_particleNet_HccvsQCD_1;
float FatJet_particleNet_HccvsQCD_2;
float FatJet_particleNet_HccvsQCD_3;
    
float FatJet_particleNet_QCD_1;
float FatJet_particleNet_QCD_2;
float FatJet_particleNet_QCD_3;
    
float FatJet_particleNet_TvsQCD_1;
float FatJet_particleNet_TvsQCD_2;
float FatJet_particleNet_TvsQCD_3;
    
float FatJet_particleNet_WvsQCD_1;
float FatJet_particleNet_WvsQCD_2;
float FatJet_particleNet_WvsQCD_3;
    
float FatJet_particleNet_ZvsQCD_1;
float FatJet_particleNet_ZvsQCD_2;
float FatJet_particleNet_ZvsQCD_3;
    
float FatJet_particleNet_mass_1;
float FatJet_particleNet_mass_2;
float FatJet_particleNet_mass_3;

float FatJet_deepTagMD_probHbb_1;
float FatJet_deepTagMD_probHbb_2;
float FatJet_deepTagMD_probHbb_3;
float FatJet_deepTagMD_probHcc_1;
float FatJet_deepTagMD_probHcc_2;
float FatJet_deepTagMD_probHcc_3;
float FatJet_deepTagMD_probHqqqq_1;
float FatJet_deepTagMD_probHqqqq_2;
float FatJet_deepTagMD_probHqqqq_3;
float FatJet_deepTagMD_probQCDb_1;
float FatJet_deepTagMD_probQCDb_2;
float FatJet_deepTagMD_probQCDb_3;
float FatJet_deepTagMD_probQCDbb_1;
float FatJet_deepTagMD_probQCDbb_2;
float FatJet_deepTagMD_probQCDbb_3;
float FatJet_deepTagMD_probQCDc_1;
float FatJet_deepTagMD_probQCDc_2;
float FatJet_deepTagMD_probQCDc_3;
float FatJet_deepTagMD_probQCDcc_1;
float FatJet_deepTagMD_probQCDcc_2;
float FatJet_deepTagMD_probQCDcc_3;
float FatJet_deepTagMD_probQCDothers_1;
float FatJet_deepTagMD_probQCDothers_2;
float FatJet_deepTagMD_probQCDothers_3;
float FatJet_deepTagMD_probTbc_1;
float FatJet_deepTagMD_probTbc_2;
float FatJet_deepTagMD_probTbc_3;
float FatJet_deepTagMD_probTbcq_1;
float FatJet_deepTagMD_probTbcq_2;
float FatJet_deepTagMD_probTbcq_3;
float FatJet_deepTagMD_probTbq_1;
float FatJet_deepTagMD_probTbq_2;
float FatJet_deepTagMD_probTbq_3;
float FatJet_deepTagMD_probTbqq_1;
float FatJet_deepTagMD_probTbqq_2;
float FatJet_deepTagMD_probTbqq_3;
float FatJet_deepTagMD_probWcq_1;
float FatJet_deepTagMD_probWcq_2;
float FatJet_deepTagMD_probWcq_3;
float FatJet_deepTagMD_probWqq_1;
float FatJet_deepTagMD_probWqq_2;
float FatJet_deepTagMD_probWqq_3;
float FatJet_deepTagMD_probZbb_1;
float FatJet_deepTagMD_probZbb_2;
float FatJet_deepTagMD_probZbb_3;
float FatJet_deepTagMD_probZcc_1;
float FatJet_deepTagMD_probZcc_2;
float FatJet_deepTagMD_probZcc_3;
float FatJet_deepTagMD_probZqq_1;
float FatJet_deepTagMD_probZqq_2;
float FatJet_deepTagMD_probZqq_3;
float FatJet_deepTag_probHbb_1;
float FatJet_deepTag_probHbb_2;
float FatJet_deepTag_probHbb_3;
float FatJet_deepTag_probHcc_1;
float FatJet_deepTag_probHcc_2;
float FatJet_deepTag_probHcc_3;
float FatJet_deepTag_probHqqqq_1;
float FatJet_deepTag_probHqqqq_2;
float FatJet_deepTag_probHqqqq_3;
float FatJet_deepTag_probQCDb_1;
float FatJet_deepTag_probQCDb_2;
float FatJet_deepTag_probQCDb_3;
float FatJet_deepTag_probQCDbb_1;
float FatJet_deepTag_probQCDbb_2;
float FatJet_deepTag_probQCDbb_3;
float FatJet_deepTag_probQCDc_1;
float FatJet_deepTag_probQCDc_2;
float FatJet_deepTag_probQCDc_3;
float FatJet_deepTag_probQCDcc_1;
float FatJet_deepTag_probQCDcc_2;
float FatJet_deepTag_probQCDcc_3;
float FatJet_deepTag_probQCDothers_1;
float FatJet_deepTag_probQCDothers_2;
float FatJet_deepTag_probQCDothers_3;
float FatJet_deepTag_probTbc_1;
float FatJet_deepTag_probTbc_2;
float FatJet_deepTag_probTbc_3;
float FatJet_deepTag_probTbcq_1;
float FatJet_deepTag_probTbcq_2;
float FatJet_deepTag_probTbcq_3;
float FatJet_deepTag_probTbq_1;
float FatJet_deepTag_probTbq_2;
float FatJet_deepTag_probTbq_3;
float FatJet_deepTag_probTbqq_1;
float FatJet_deepTag_probTbqq_2;
float FatJet_deepTag_probTbqq_3;
float FatJet_deepTag_probWcq_1;
float FatJet_deepTag_probWcq_2;
float FatJet_deepTag_probWcq_3;
float FatJet_deepTag_probWqq_1;
float FatJet_deepTag_probWqq_2;
float FatJet_deepTag_probWqq_3;
float FatJet_deepTag_probZbb_1;
float FatJet_deepTag_probZbb_2;
float FatJet_deepTag_probZbb_3;
float FatJet_deepTag_probZcc_1;
float FatJet_deepTag_probZcc_2;
float FatJet_deepTag_probZcc_3;
float FatJet_deepTag_probZqq_1;
float FatJet_deepTag_probZqq_2;
float FatJet_deepTag_probZqq_3;

TBranch *b_usenumber3;
TBranch *b_usenumber2;
TBranch *b_usenumber1;



   // Declaration of leaf types
   // gKK 21.9.25
   float DPhi_MET_j1;
   float DPhi_MET_j2;
   float DPhi_MET_j3;

   float Mc_j1;
   float Mc_j2;
   float Mc_j3;

   float Mc2_j1;
   float Mc2_j2;

   float MT1;
   float MT2;
   float MT3;
   float MTdPhi_1;
   float MTdPhi_2;

   float Max_ptO_AK8;
   float Min_ptO_AK8;
   float Mid_ptO_AK8;
   float Wa_ptO_AK8;
   float Wc_ptO_AK8;
   float Wb_ptO_AK8;
   float WHa_ptO_AK8;
   float WHc_ptO_AK8;
   float WHb_ptO_AK8;
   float Wa_MO_AK8;
   float Wc_MO_AK8;
   float Wb_MO_AK8;
   float WHa_MO_AK8;
   float WHc_MO_AK8;
   float WHb_MO_AK8;

   float DPhi_j12;
   float DPhi_j13;
   float DPhi_j23;
   float DEta_j12;
   float DEta_j13;
   float DEta_j23;
   float DR_j12;
   float DR_j13;
   float DR_j23;
   float M2J_j12;
   float M2J_j13;
   float M2J_j23;

   float DPhi_jmaxmin;
   float DPhi_jmaxmid;
   float DPhi_jmidmin;
   float DEta_jmaxmin;
   float DEta_jmaxmid;
   float DEta_jmidmin;
   float DR_jmaxmin;
   float DR_jmaxmid;
   float DR_jmidmin;
   float M2J_jmaxmin;
   float M2J_jmaxmid;
   float M2J_jmidmin;

   float Mj_a , Mj_b , Mj_c;
   float PTj_a, PTj_b, PTj_c;
   float Etaj_a, Etaj_b, Etaj_c;
   float Phij_a, Phij_b, Phij_c;

   float dnn_probTbcq_a, dnn_probTbcq_b, dnn_probTbcq_c;
   float dnn_probTbqq_a, dnn_probTbqq_b, dnn_probTbqq_c;
   float dnn_probTbc_a, dnn_probTbc_b, dnn_probTbc_c;
   float dnn_probTbq_a, dnn_probTbq_b, dnn_probTbq_c;
   float dnn_probWcq_a, dnn_probWcq_b, dnn_probWcq_c;
   float dnn_probWqq_a, dnn_probWqq_b, dnn_probWqq_c;
   float dnn_probZbb_a, dnn_probZbb_b, dnn_probZbb_c;
   float dnn_probZcc_a, dnn_probZcc_b, dnn_probZcc_c;
   float dnn_probZqq_a, dnn_probZqq_b, dnn_probZqq_c;
   float dnn_probHbb_a, dnn_probHbb_b, dnn_probHbb_c;
   float dnn_probHcc_a, dnn_probHcc_b, dnn_probHcc_c;
   float dnn_probHqqqq_a, dnn_probHqqqq_b, dnn_probHqqqq_c;
   float dnn_probQCDbb_a, dnn_probQCDbb_b, dnn_probQCDbb_c;
   float dnn_probQCDcc_a, dnn_probQCDcc_b, dnn_probQCDcc_c;
   float dnn_probQCDb_a, dnn_probQCDb_b, dnn_probQCDb_c;
   float dnn_probQCDc_a, dnn_probQCDc_b, dnn_probQCDc_c;
   float dnn_probQCDothers_a, dnn_probQCDothers_b, dnn_probQCDothers_c;
   float dnnDecorr_probTbcq_a, dnnDecorr_probTbcq_b, dnnDecorr_probTbcq_c;
   float dnnDecorr_probTbqq_a, dnnDecorr_probTbqq_b, dnnDecorr_probTbqq_c;
   float dnnDecorr_probTbc_a, dnnDecorr_probTbc_b, dnnDecorr_probTbc_c;
   float dnnDecorr_probTbq_a, dnnDecorr_probTbq_b, dnnDecorr_probTbq_c;
   float dnnDecorr_probWcq_a, dnnDecorr_probWcq_b, dnnDecorr_probWcq_c;
   float dnnDecorr_probWqq_a, dnnDecorr_probWqq_b, dnnDecorr_probWqq_c;
   float dnnDecorr_probZbb_a, dnnDecorr_probZbb_b, dnnDecorr_probZbb_c;
   float dnnDecorr_probZcc_a, dnnDecorr_probZcc_b, dnnDecorr_probZcc_c;
   float dnnDecorr_probZqq_a, dnnDecorr_probZqq_b, dnnDecorr_probZqq_c;
   float dnnDecorr_probHbb_a, dnnDecorr_probHbb_b, dnnDecorr_probHbb_c;
   float dnnDecorr_probHcc_a, dnnDecorr_probHcc_b, dnnDecorr_probHcc_c;
   float dnnDecorr_probHqqqq_a, dnnDecorr_probHqqqq_b, dnnDecorr_probHqqqq_c;
   float dnnDecorr_probQCDbb_a, dnnDecorr_probQCDbb_b, dnnDecorr_probQCDbb_c;
   float dnnDecorr_probQCDcc_a, dnnDecorr_probQCDcc_b, dnnDecorr_probQCDcc_c;
   float dnnDecorr_probQCDb_a, dnnDecorr_probQCDb_b, dnnDecorr_probQCDb_c;
   float dnnDecorr_probQCDc_a, dnnDecorr_probQCDc_b, dnnDecorr_probQCDc_c;
   float dnnDecorr_probQCDothers_a, dnnDecorr_probQCDothers_b, dnnDecorr_probQCDothers_c;


   float dnnTop_a, dnnTop_b, dnnTop_c;
   float dnnW_a, dnnW_b, dnnW_c;
   float dnnH4q_a, dnnH4q_b, dnnH4q_c;
   float dnnZ_a, dnnZ_b, dnnZ_c;
   float dnnZbb_a, dnnZbb_b, dnnZbb_c;
   float dnnHbb_a, dnnHbb_b, dnnHbb_c;
   float dnnDecorrTop_a, dnnDecorrTop_b, dnnDecorrTop_c;
   float dnnDecorrW_a, dnnDecorrW_b, dnnDecorrW_c;
   float dnnDecorrH4q_a, dnnDecorrH4q_b, dnnDecorrH4q_c;
   float dnnDecorrZ_a, dnnDecorrZ_b, dnnDecorrZ_c;
   float dnnDecorrZbb_a, dnnDecorrZbb_b, dnnDecorrZbb_c;
   float dnnDecorrHbb_a, dnnDecorrHbb_b, dnnDecorrHbb_c;
   float dnnDecorrbb_a, dnnDecorrbb_b, dnnDecorrbb_c;
   float dnnDecorrcc_a, dnnDecorrcc_b, dnnDecorrcc_c;
   float dnnDecorrbbnog_a, dnnDecorrbbnog_b, dnnDecorrbbnog_c;
   float dnnDecorrccnog_a, dnnDecorrccnog_b, dnnDecorrccnog_c;
   float dnnqcd_a, dnnqcd_b, dnnqcd_c;
   float dnntop_a, dnntop_b, dnntop_c;
   float dnnw_a, dnnw_b, dnnw_c;
   float dnnz_a, dnnz_b, dnnz_c;
   float dnnzbb_a, dnnzbb_b, dnnzbb_c;
   float dnnhbb_a, dnnhbb_b, dnnhbb_c;
   float dnnh4q_a, dnnh4q_b, dnnh4q_c;
   float dnnDecorrqcd_a, dnnDecorrqcd_b, dnnDecorrqcd_c;
   float dnnDecorrtop_a, dnnDecorrtop_b, dnnDecorrtop_c;
   float dnnDecorrw_a, dnnDecorrw_b, dnnDecorrw_c;
   float dnnDecorrz_a, dnnDecorrz_b, dnnDecorrz_c;
   float dnnDecorrzbb_a, dnnDecorrzbb_b, dnnDecorrzbb_c;
   float dnnDecorrhbb_a, dnnDecorrhbb_b, dnnDecorrhbb_c;
   float dnnDecorrh4q_a, dnnDecorrh4q_b, dnnDecorrh4q_c;




   // gKK deepW ordered
double Maxpt_AK4_deepflavor_probb;
double Maxpt_AK4_deepflavor_probc;
double Maxpt_AK4_deepflavor_probg;
double Maxpt_AK4_deepflavor_problepb;
double Maxpt_AK4_deepflavor_probbb;
double Maxpt_AK4_deepflavor_probuds;

Double_t        ak4jet_deepflavor_probb[15];
Double_t        ak4jet_deepflavor_probc[15];
Double_t        ak4jet_deepflavor_probg[15];
Double_t        ak4jet_deepflavor_problepb[15];
Double_t        ak4jet_deepflavor_probbb[15];
Double_t        ak4jet_deepflavor_probuds[15];


   double    Pt_tag1;
   double    Pt_tag2;
   double    Pt_tag3;
   double    Eta_tag1;
   double    Eta_tag2;
   double    Eta_tag3;
   double    Phi_tag1;
   double    Phi_tag2;
   double    Phi_tag3;
   double    Mass_tag1;
   double    Mass_tag2;
   double    Mass_tag3;
   double    deepW_tag1;
   double    deepW_tag2;
   double    deepW_tag3;

   double jetAK8puppi_dnn_probTbcq_tag1;
   double jetAK8puppi_dnn_probTbcq_tag2;
   double jetAK8puppi_dnn_probTbcq_tag3;
   double jetAK8puppi_dnn_probTbqq_tag1;
   double jetAK8puppi_dnn_probTbqq_tag2;
   double jetAK8puppi_dnn_probTbqq_tag3;
   double jetAK8puppi_dnn_probTbc_tag1;
   double jetAK8puppi_dnn_probTbc_tag2;
   double jetAK8puppi_dnn_probTbc_tag3;
   double jetAK8puppi_dnn_probTbq_tag1;
   double jetAK8puppi_dnn_probTbq_tag2;
   double jetAK8puppi_dnn_probTbq_tag3;
   double jetAK8puppi_dnn_probWcq_tag1;
   double jetAK8puppi_dnn_probWcq_tag2;
   double jetAK8puppi_dnn_probWcq_tag3;
   double jetAK8puppi_dnn_probWqq_tag1;
   double jetAK8puppi_dnn_probWqq_tag2;
   double jetAK8puppi_dnn_probWqq_tag3;
   double jetAK8puppi_dnn_probZbb_tag1;
   double jetAK8puppi_dnn_probZbb_tag2;
   double jetAK8puppi_dnn_probZbb_tag3;
   double jetAK8puppi_dnn_probZcc_tag1;
   double jetAK8puppi_dnn_probZcc_tag2;
   double jetAK8puppi_dnn_probZcc_tag3;
   double jetAK8puppi_dnn_probZqq_tag1;
   double jetAK8puppi_dnn_probZqq_tag2;
   double jetAK8puppi_dnn_probZqq_tag3;
   double jetAK8puppi_dnn_probHbb_tag1;
   double jetAK8puppi_dnn_probHbb_tag2;
   double jetAK8puppi_dnn_probHbb_tag3;
   double jetAK8puppi_dnn_probHcc_tag1;
   double jetAK8puppi_dnn_probHcc_tag2;
   double jetAK8puppi_dnn_probHcc_tag3;
   double jetAK8puppi_dnn_probHqqqq_tag1;
   double jetAK8puppi_dnn_probHqqqq_tag2;
   double jetAK8puppi_dnn_probHqqqq_tag3;
   double jetAK8puppi_dnn_probQCDbb_tag1;
   double jetAK8puppi_dnn_probQCDbb_tag2;
   double jetAK8puppi_dnn_probQCDbb_tag3;
   double jetAK8puppi_dnn_probQCDcc_tag1;
   double jetAK8puppi_dnn_probQCDcc_tag2;
   double jetAK8puppi_dnn_probQCDcc_tag3;
   double jetAK8puppi_dnn_probQCDb_tag1;
   double jetAK8puppi_dnn_probQCDb_tag2;
   double jetAK8puppi_dnn_probQCDb_tag3;
   double jetAK8puppi_dnn_probQCDc_tag1;
   double jetAK8puppi_dnn_probQCDc_tag2;
   double jetAK8puppi_dnn_probQCDc_tag3;
   double jetAK8puppi_dnn_probQCDothers_tag1;
   double jetAK8puppi_dnn_probQCDothers_tag2;
   double jetAK8puppi_dnn_probQCDothers_tag3;
   double jetAK8puppi_dnnDecorr_probTbcq_tag1;
   double jetAK8puppi_dnnDecorr_probTbcq_tag2;
   double jetAK8puppi_dnnDecorr_probTbcq_tag3;
   double jetAK8puppi_dnnDecorr_probTbqq_tag1;
   double jetAK8puppi_dnnDecorr_probTbqq_tag2;
   double jetAK8puppi_dnnDecorr_probTbqq_tag3;
   double jetAK8puppi_dnnDecorr_probTbc_tag1;
   double jetAK8puppi_dnnDecorr_probTbc_tag2;
   double jetAK8puppi_dnnDecorr_probTbc_tag3;
   double jetAK8puppi_dnnDecorr_probTbq_tag1;
   double jetAK8puppi_dnnDecorr_probTbq_tag2;
   double jetAK8puppi_dnnDecorr_probTbq_tag3;
   double jetAK8puppi_dnnDecorr_probWcq_tag1;
   double jetAK8puppi_dnnDecorr_probWcq_tag2;
   double jetAK8puppi_dnnDecorr_probWcq_tag3;
   double jetAK8puppi_dnnDecorr_probWqq_tag1;
   double jetAK8puppi_dnnDecorr_probWqq_tag2;
   double jetAK8puppi_dnnDecorr_probWqq_tag3;
   double jetAK8puppi_dnnDecorr_probZbb_tag1;
   double jetAK8puppi_dnnDecorr_probZbb_tag2;
   double jetAK8puppi_dnnDecorr_probZbb_tag3;
   double jetAK8puppi_dnnDecorr_probZcc_tag1;
   double jetAK8puppi_dnnDecorr_probZcc_tag2;
   double jetAK8puppi_dnnDecorr_probZcc_tag3;
   double jetAK8puppi_dnnDecorr_probZqq_tag1;
   double jetAK8puppi_dnnDecorr_probZqq_tag2;
   double jetAK8puppi_dnnDecorr_probZqq_tag3;
   double jetAK8puppi_dnnDecorr_probHbb_tag1;
   double jetAK8puppi_dnnDecorr_probHbb_tag2;
   double jetAK8puppi_dnnDecorr_probHbb_tag3;
   double jetAK8puppi_dnnDecorr_probHcc_tag1;
   double jetAK8puppi_dnnDecorr_probHcc_tag2;
   double jetAK8puppi_dnnDecorr_probHcc_tag3;
   double jetAK8puppi_dnnDecorr_probHqqqq_tag1;
   double jetAK8puppi_dnnDecorr_probHqqqq_tag2;
   double jetAK8puppi_dnnDecorr_probHqqqq_tag3;
   double jetAK8puppi_dnnDecorr_probQCDbb_tag1;
   double jetAK8puppi_dnnDecorr_probQCDbb_tag2;
   double jetAK8puppi_dnnDecorr_probQCDbb_tag3;
   double jetAK8puppi_dnnDecorr_probQCDcc_tag1;
   double jetAK8puppi_dnnDecorr_probQCDcc_tag2;
   double jetAK8puppi_dnnDecorr_probQCDcc_tag3;
   double jetAK8puppi_dnnDecorr_probQCDb_tag1;
   double jetAK8puppi_dnnDecorr_probQCDb_tag2;
   double jetAK8puppi_dnnDecorr_probQCDb_tag3;
   double jetAK8puppi_dnnDecorr_probQCDc_tag1;
   double jetAK8puppi_dnnDecorr_probQCDc_tag2;
   double jetAK8puppi_dnnDecorr_probQCDc_tag3;
   double jetAK8puppi_dnnDecorr_probQCDothers_tag1;
   double jetAK8puppi_dnnDecorr_probQCDothers_tag2;
   double jetAK8puppi_dnnDecorr_probQCDothers_tag3;

   // gKK Mass ordered
   double jetAK8puppi_dnn_probTbcq_max;
double jetAK8puppi_dnn_probTbcq_mid;
double jetAK8puppi_dnn_probTbcq_min;
double jetAK8puppi_dnn_probTbqq_max;
double jetAK8puppi_dnn_probTbqq_mid;
double jetAK8puppi_dnn_probTbqq_min;
double jetAK8puppi_dnn_probTbc_max;
double jetAK8puppi_dnn_probTbc_mid;
double jetAK8puppi_dnn_probTbc_min;
double jetAK8puppi_dnn_probTbq_max;
double jetAK8puppi_dnn_probTbq_mid;
double jetAK8puppi_dnn_probTbq_min;
double jetAK8puppi_dnn_probWcq_max;
double jetAK8puppi_dnn_probWcq_mid;
double jetAK8puppi_dnn_probWcq_min;
double jetAK8puppi_dnn_probWqq_max;
double jetAK8puppi_dnn_probWqq_mid;
double jetAK8puppi_dnn_probWqq_min;
double jetAK8puppi_dnn_probZbb_max;
double jetAK8puppi_dnn_probZbb_mid;
double jetAK8puppi_dnn_probZbb_min;
double jetAK8puppi_dnn_probZcc_max;
double jetAK8puppi_dnn_probZcc_mid;
double jetAK8puppi_dnn_probZcc_min;
double jetAK8puppi_dnn_probZqq_max;
double jetAK8puppi_dnn_probZqq_mid;
double jetAK8puppi_dnn_probZqq_min;
double jetAK8puppi_dnn_probHbb_max;
double jetAK8puppi_dnn_probHbb_mid;
double jetAK8puppi_dnn_probHbb_min;
double jetAK8puppi_dnn_probHcc_max;
double jetAK8puppi_dnn_probHcc_mid;
double jetAK8puppi_dnn_probHcc_min;
double jetAK8puppi_dnn_probHqqqq_max;
double jetAK8puppi_dnn_probHqqqq_mid;
double jetAK8puppi_dnn_probHqqqq_min;
double jetAK8puppi_dnn_probQCDbb_max;
double jetAK8puppi_dnn_probQCDbb_mid;
double jetAK8puppi_dnn_probQCDbb_min;
double jetAK8puppi_dnn_probQCDcc_max;
double jetAK8puppi_dnn_probQCDcc_mid;
double jetAK8puppi_dnn_probQCDcc_min;
double jetAK8puppi_dnn_probQCDb_max;
double jetAK8puppi_dnn_probQCDb_mid;
double jetAK8puppi_dnn_probQCDb_min;
double jetAK8puppi_dnn_probQCDc_max;
double jetAK8puppi_dnn_probQCDc_mid;
double jetAK8puppi_dnn_probQCDc_min;
double jetAK8puppi_dnn_probQCDothers_max;
double jetAK8puppi_dnn_probQCDothers_mid;
double jetAK8puppi_dnn_probQCDothers_min;
double jetAK8puppi_dnnDecorr_probTbcq_max;
double jetAK8puppi_dnnDecorr_probTbcq_mid;
double jetAK8puppi_dnnDecorr_probTbcq_min;
double jetAK8puppi_dnnDecorr_probTbqq_max;
double jetAK8puppi_dnnDecorr_probTbqq_mid;
double jetAK8puppi_dnnDecorr_probTbqq_min;
double jetAK8puppi_dnnDecorr_probTbc_max;
double jetAK8puppi_dnnDecorr_probTbc_mid;
double jetAK8puppi_dnnDecorr_probTbc_min;
double jetAK8puppi_dnnDecorr_probTbq_max;
double jetAK8puppi_dnnDecorr_probTbq_mid;
double jetAK8puppi_dnnDecorr_probTbq_min;
double jetAK8puppi_dnnDecorr_probWcq_max;
double jetAK8puppi_dnnDecorr_probWcq_mid;
double jetAK8puppi_dnnDecorr_probWcq_min;
double jetAK8puppi_dnnDecorr_probWqq_max;
double jetAK8puppi_dnnDecorr_probWqq_mid;
double jetAK8puppi_dnnDecorr_probWqq_min;
double jetAK8puppi_dnnDecorr_probZbb_max;
double jetAK8puppi_dnnDecorr_probZbb_mid;
double jetAK8puppi_dnnDecorr_probZbb_min;
double jetAK8puppi_dnnDecorr_probZcc_max;
double jetAK8puppi_dnnDecorr_probZcc_mid;
double jetAK8puppi_dnnDecorr_probZcc_min;
double jetAK8puppi_dnnDecorr_probZqq_max;
double jetAK8puppi_dnnDecorr_probZqq_mid;
double jetAK8puppi_dnnDecorr_probZqq_min;
double jetAK8puppi_dnnDecorr_probHbb_max;
double jetAK8puppi_dnnDecorr_probHbb_mid;
double jetAK8puppi_dnnDecorr_probHbb_min;
double jetAK8puppi_dnnDecorr_probHcc_max;
double jetAK8puppi_dnnDecorr_probHcc_mid;
double jetAK8puppi_dnnDecorr_probHcc_min;
double jetAK8puppi_dnnDecorr_probHqqqq_max;
double jetAK8puppi_dnnDecorr_probHqqqq_mid;
double jetAK8puppi_dnnDecorr_probHqqqq_min;
double jetAK8puppi_dnnDecorr_probQCDbb_max;
double jetAK8puppi_dnnDecorr_probQCDbb_mid;
double jetAK8puppi_dnnDecorr_probQCDbb_min;
double jetAK8puppi_dnnDecorr_probQCDcc_max;
double jetAK8puppi_dnnDecorr_probQCDcc_mid;
double jetAK8puppi_dnnDecorr_probQCDcc_min;
double jetAK8puppi_dnnDecorr_probQCDb_max;
double jetAK8puppi_dnnDecorr_probQCDb_mid;
double jetAK8puppi_dnnDecorr_probQCDb_min;
double jetAK8puppi_dnnDecorr_probQCDc_max;
double jetAK8puppi_dnnDecorr_probQCDc_mid;
double jetAK8puppi_dnnDecorr_probQCDc_min;
double jetAK8puppi_dnnDecorr_probQCDothers_max;
double jetAK8puppi_dnnDecorr_probQCDothers_mid;
double jetAK8puppi_dnnDecorr_probQCDothers_min;


   // gKK 21.7.19
   // deep H
   double jetAK8puppi_dnnDecorrhbb_tag1;
   double jetAK8puppi_dnnDecorrhbb_tag2;
   double jetAK8puppi_dnnDecorrhbb_tag3;
   double jetAK8puppi_dnnDecorrh4q_tag1;
   double jetAK8puppi_dnnDecorrh4q_tag2;
   double jetAK8puppi_dnnDecorrh4q_tag3;
   
   // DR
   double DR_j1j2 ;
   double DR_j1j3 ;
   double DR_j2j3 ;

   double DR_j1j2_MassOrdered;
   double DR_j1j3_MassOrdered;
   double DR_j2j3_MassOrdered;

   double DR_j1j2_deepwOrdered;
   double DR_j1j3_deepwOrdered;
   double DR_j2j3_deepwOrdered;

   // DPhi
   double     DPhi_j1j2;
   double     DPhi_j1j3;
   double     DPhi_j2j3;

   double DPhi_j1j2_Massordered;
   double DPhi_j1j3_Massordered;
   double DPhi_j2j3_Massordered;

   double DPhi_j1j2_deepwordered;
   double DPhi_j1j3_deepwordered;
   double DPhi_j2j3_deepwordered;

   // MJJ
   double Mass_j1j2_deepwordered;
   double Mass_j1j3_deepwordered;
   double Mass_j2j3_deepwordered;
   double Mass_j1j2;
   double Mass_j1j3;
   double Mass_j2j3;
   double Mass_j1j2_Massordered;
   double Mass_j1j3_Massordered;
   double Mass_j2j3_Massordered;

   double PT_j1j2_deepwordered;
   double Eta_j1j2_deepwordered;
   double Phi_j1j2_deepwordered;
   double PT_j1j3_deepwordered;
   double Eta_j1j3_deepwordered;
   double Phi_j1j3_deepwordered;
   double PT_j2j3_deepwordered;
   double Eta_j2j3_deepwordered;
   double Phi_j2j3_deepwordered;
   double PT_j1j2_Massordered;
   double Eta_j1j2_Massordered;
   double Phi_j1j2_Massordered;
   double PT_j1j3_Massordered;
   double Eta_j1j3_Massordered;
   double Phi_j1j3_Massordered;
   double PT_j2j3_Massordered;
   double Eta_j2j3_Massordered;
   double Phi_j2j3_Massordered;
   double PT_j1j2;
   double Eta_j1j2;
   double Phi_j1j2;
   double PT_j1j3;
   double Eta_j1j3;
   double Phi_j1j3;
   double PT_j2j3;
   double Eta_j2j3;
   double Phi_j2j3;
   double DR_jj12_j3;
   double DR_jj13_j2;
   double DR_jj23_j1;
   double DPhi_jj12_j3;
   double DPhi_jj13_j2;
   double DPhi_jj23_j1;
   double DR_jj12_j3_Massordered;
   double DR_jj13_j2_Massordered;
   double DR_jj23_j1_Massordered;
   double DPhi_jj12_j3_Massordered;
   double DPhi_jj13_j2_Massordered;
   double DPhi_jj23_j1_Massordered;
   double DR_jj12_j3_deepwordered;
   double DR_jj13_j2_deepwordered;
   double DR_jj23_j1_deepwordered;
   double DPhi_jj12_j3_deepwordered;
   double DPhi_jj13_j2_deepwordered;
   double DPhi_jj23_j1_deepwordered;

   // gKK raw scores
   double jetAK8puppi_dnn_probTbcq;
   double jetAK8puppi_dnn_probTbqq;
   double jetAK8puppi_dnn_probTbc;
   double jetAK8puppi_dnn_probTbq;
   double jetAK8puppi_dnn_probWcq;
   double jetAK8puppi_dnn_probWqq;
   double jetAK8puppi_dnn_probZbb;
   double jetAK8puppi_dnn_probZcc;
   double jetAK8puppi_dnn_probZqq;
   double jetAK8puppi_dnn_probHbb;
   double jetAK8puppi_dnn_probHcc;
   double jetAK8puppi_dnn_probHqqqq;
   double jetAK8puppi_dnn_probQCDbb;
   double jetAK8puppi_dnn_probQCDcc;
   double jetAK8puppi_dnn_probQCDb;
   double jetAK8puppi_dnn_probQCDc;
   double jetAK8puppi_dnn_probQCDothers;
   double jetAK8puppi_dnnDecorr_probTbcq;
   double jetAK8puppi_dnnDecorr_probTbqq;
   double jetAK8puppi_dnnDecorr_probTbc;
   double jetAK8puppi_dnnDecorr_probTbq;
   double jetAK8puppi_dnnDecorr_probWcq;
   double jetAK8puppi_dnnDecorr_probWqq;
   double jetAK8puppi_dnnDecorr_probZbb;
   double jetAK8puppi_dnnDecorr_probZcc;
   double jetAK8puppi_dnnDecorr_probZqq;
   double jetAK8puppi_dnnDecorr_probHbb;
   double jetAK8puppi_dnnDecorr_probHcc;
   double jetAK8puppi_dnnDecorr_probHqqqq;
   double jetAK8puppi_dnnDecorr_probQCDbb;
   double jetAK8puppi_dnnDecorr_probQCDcc;
   double jetAK8puppi_dnnDecorr_probQCDb;
   double jetAK8puppi_dnnDecorr_probQCDc;
   double jetAK8puppi_dnnDecorr_probQCDothers;
   double jetAK8puppi_dnn_probTbcq_2;
   double jetAK8puppi_dnn_probTbqq_2;
   double jetAK8puppi_dnn_probTbc_2;
   double jetAK8puppi_dnn_probTbq_2;
   double jetAK8puppi_dnn_probWcq_2;
   double jetAK8puppi_dnn_probWqq_2;
   double jetAK8puppi_dnn_probZbb_2;
   double jetAK8puppi_dnn_probZcc_2;
   double jetAK8puppi_dnn_probZqq_2;
   double jetAK8puppi_dnn_probHbb_2;
   double jetAK8puppi_dnn_probHcc_2;
   double jetAK8puppi_dnn_probHqqqq_2;
   double jetAK8puppi_dnn_probQCDbb_2;
   double jetAK8puppi_dnn_probQCDcc_2;
   double jetAK8puppi_dnn_probQCDb_2;
   double jetAK8puppi_dnn_probQCDc_2;
   double jetAK8puppi_dnn_probQCDothers_2;
   double jetAK8puppi_dnnDecorr_probTbcq_2;
   double jetAK8puppi_dnnDecorr_probTbqq_2;
   double jetAK8puppi_dnnDecorr_probTbc_2;
   double jetAK8puppi_dnnDecorr_probTbq_2;
   double jetAK8puppi_dnnDecorr_probWcq_2;
   double jetAK8puppi_dnnDecorr_probWqq_2;
   double jetAK8puppi_dnnDecorr_probZbb_2;
   double jetAK8puppi_dnnDecorr_probZcc_2;
   double jetAK8puppi_dnnDecorr_probZqq_2;
   double jetAK8puppi_dnnDecorr_probHbb_2;
   double jetAK8puppi_dnnDecorr_probHcc_2;
   double jetAK8puppi_dnnDecorr_probHqqqq_2;
   double jetAK8puppi_dnnDecorr_probQCDbb_2;
   double jetAK8puppi_dnnDecorr_probQCDcc_2;
   double jetAK8puppi_dnnDecorr_probQCDb_2;
   double jetAK8puppi_dnnDecorr_probQCDc_2;
   double jetAK8puppi_dnnDecorr_probQCDothers_2;
   double jetAK8puppi_dnn_probTbcq_3;
   double jetAK8puppi_dnn_probTbqq_3;
   double jetAK8puppi_dnn_probTbc_3;
   double jetAK8puppi_dnn_probTbq_3;
   double jetAK8puppi_dnn_probWcq_3;
   double jetAK8puppi_dnn_probWqq_3;
   double jetAK8puppi_dnn_probZbb_3;
   double jetAK8puppi_dnn_probZcc_3;
   double jetAK8puppi_dnn_probZqq_3;
   double jetAK8puppi_dnn_probHbb_3;
   double jetAK8puppi_dnn_probHcc_3;
   double jetAK8puppi_dnn_probHqqqq_3;
   double jetAK8puppi_dnn_probQCDbb_3;
   double jetAK8puppi_dnn_probQCDcc_3;
   double jetAK8puppi_dnn_probQCDb_3;
   double jetAK8puppi_dnn_probQCDc_3;
   double jetAK8puppi_dnn_probQCDothers_3;
   double jetAK8puppi_dnnDecorr_probTbcq_3;
   double jetAK8puppi_dnnDecorr_probTbqq_3;
   double jetAK8puppi_dnnDecorr_probTbc_3;
   double jetAK8puppi_dnnDecorr_probTbq_3;
   double jetAK8puppi_dnnDecorr_probWcq_3;
   double jetAK8puppi_dnnDecorr_probWqq_3;
   double jetAK8puppi_dnnDecorr_probZbb_3;
   double jetAK8puppi_dnnDecorr_probZcc_3;
   double jetAK8puppi_dnnDecorr_probZqq_3;
   double jetAK8puppi_dnnDecorr_probHbb_3;
   double jetAK8puppi_dnnDecorr_probHcc_3;
   double jetAK8puppi_dnnDecorr_probHqqqq_3;
   double jetAK8puppi_dnnDecorr_probQCDbb_3;
   double jetAK8puppi_dnnDecorr_probQCDcc_3;
   double jetAK8puppi_dnnDecorr_probQCDb_3;
   double jetAK8puppi_dnnDecorr_probQCDc_3;
   double jetAK8puppi_dnnDecorr_probQCDothers_3;
   double jetAK8puppi_dnn_probTbcq_4;
   double jetAK8puppi_dnn_probTbqq_4;
   double jetAK8puppi_dnn_probTbc_4;
   double jetAK8puppi_dnn_probTbq_4;
   double jetAK8puppi_dnn_probWcq_4;
   double jetAK8puppi_dnn_probWqq_4;
   double jetAK8puppi_dnn_probZbb_4;
   double jetAK8puppi_dnn_probZcc_4;
   double jetAK8puppi_dnn_probZqq_4;
   double jetAK8puppi_dnn_probHbb_4;
   double jetAK8puppi_dnn_probHcc_4;
   double jetAK8puppi_dnn_probHqqqq_4;
   double jetAK8puppi_dnn_probQCDbb_4;
   double jetAK8puppi_dnn_probQCDcc_4;
   double jetAK8puppi_dnn_probQCDb_4;
   double jetAK8puppi_dnn_probQCDc_4;
   double jetAK8puppi_dnn_probQCDothers_4;
   double jetAK8puppi_dnnDecorr_probTbcq_4;
   double jetAK8puppi_dnnDecorr_probTbqq_4;
   double jetAK8puppi_dnnDecorr_probTbc_4;
   double jetAK8puppi_dnnDecorr_probTbq_4;
   double jetAK8puppi_dnnDecorr_probWcq_4;
   double jetAK8puppi_dnnDecorr_probWqq_4;
   double jetAK8puppi_dnnDecorr_probZbb_4;
   double jetAK8puppi_dnnDecorr_probZcc_4;
   double jetAK8puppi_dnnDecorr_probZqq_4;
   double jetAK8puppi_dnnDecorr_probHbb_4;
   double jetAK8puppi_dnnDecorr_probHcc_4;
   double jetAK8puppi_dnnDecorr_probHqqqq_4;
   double jetAK8puppi_dnnDecorr_probQCDbb_4;
   double jetAK8puppi_dnnDecorr_probQCDcc_4;
   double jetAK8puppi_dnnDecorr_probQCDb_4;
   double jetAK8puppi_dnnDecorr_probQCDc_4;
   double jetAK8puppi_dnnDecorr_probQCDothers_4;


TLorentzVector AK41,AK42,AK43,AK44,AK45,AK46;
TLorentzVector AK81,AK82,AK83,AK84;
   
   Int_t           ls;
   Int_t           run;
   Int_t           nLooseEle;
   Int_t           nLooseMu;
//   Int_t           njets;
   Int_t           nbtag;
   Int_t           nbtag_deep;
   Int_t           nbtag_deep_loose;
   Int_t           nbtag_deep_tight;

// gKK 21.9.7 adding inclusive b jets

   Int_t num_bJet_in;
   Int_t num_bJet_loose_in;
   Int_t num_bJet_tight_in;
   Int_t num_bJet_deep_in;
   Int_t num_bJet_loose_deep_in;
   Int_t num_bJet_tight_deep_in;

   Int_t           num_bJet;
   Int_t           num_bJet_deep;

   Int_t           num_bJet_loose;
   Int_t           num_bJet_tight;
   Int_t           num_bJet_loose_deep;
   Int_t           num_bJet_tight_deep;
//   Float_t         jet2_pt;
//   Float_t         jet2_btag;
//   Float_t         jet3_pt;
//   Float_t         jet3_btag;
   Double_t        weight_top_up;
    Double_t        weight_top_down;
    Double_t        weight_center_top_up;
   Double_t        weight_center_top_down;

   Float_t pfMET;
   Float_t pfMETPhi;
   Float_t l_pt;
   Float_t mtVlepnew;
   Float_t MTVlep;
   Float_t l_eta;
   Float_t l_phi;
   Float_t jet_pt;
   Float_t PTj;
   Float_t jet_eta;
   Float_t jet_phi;
   Float_t jet_mass_pruned;
   Float_t Mj_un;
   Float_t Mj_corr;
//   Float_t jet_mass_softdrop;
   Float_t jet_tau2tau1;
   Float_t tau21;
   Float_t jet_tau1_puppi;
   Float_t jet_tau2_puppi;
   Float_t jet_tau3_puppi;
   Float_t jet_tau4_puppi;
   Float_t tau31;
   Float_t tau41;
   Float_t tau32;
   Float_t tau43;
   Float_t W_pt;
   Float_t W_eta;
   Float_t W_phi;
   Float_t MJJJ;
   Float_t MJJJ_JEC_up ;
   Float_t MJJJ_JEC_down ;
   Float_t MJJJ_JER_up ;
   Float_t MJJJ_JER_down ;

//   Float_t M_ww;
   Float_t fjet2_pt;
   Float_t fjet2_btag;
   Float_t fjet3_pt;
   Float_t fjet3_btag; 
   Double_t MJ_j_18;
   Double_t MJJ_j_18;
   Double_t MJ_j_10;
   Double_t MJJ_j_10;
   Double_t MJ_j_12;
   Double_t MJJ_j_12;
   Double_t MJ_j_14;
   Double_t MJJ_j_14;
   Double_t MJ_j_16;
   Double_t MJJ_j_16;
   //JEC
//   Double_t corr_AK8;
   Double_t jetAK8_pt;
   Double_t jetAK8_mass;
   Double_t jetAK8_jec;
//   Double_t jetAK8_e;
//   Double_t corr;
   Double_t METraw_et;
   Double_t METraw_phi;
   Double_t METraw_sumEt;
   Float_t MET_phi;
   Float_t RawMET_phi;
   Double_t MET_sumEt;
   Double_t MET_eta;
   Double_t Mj_maxc;
   Double_t Mj_minc;
   Double_t MJJc;

Double_t Mj_max2;
Double_t Mj_mid2;
Double_t Mj_min2;
Double_t Mj_mostmin2;
Double_t PTj_max2;
Double_t PTj_mid2;
Double_t PTj_min2;
Double_t PTj_mostmin2;
Double_t tau21_max2;
Double_t tau21_mid2;
Double_t tau21_min2;
Double_t tau21_mostmin2;
Double_t tau41_max2;
Double_t tau41_mid2;
Double_t tau41_min2;
Double_t tau41_mostmin2;
Double_t tau42_max2;
Double_t tau42_mid2;
Double_t tau42_min2;
Double_t tau42_mostmin2;
    Double_t jetAK8puppi_dnnTop, jetAK8puppi_dnnW,jetAK8puppi_dnnH4q,jetAK8puppi_dnnTop_2, jetAK8puppi_dnnW_2,jetAK8puppi_dnnH4q_2,jetAK8puppi_dnnTop_3, jetAK8puppi_dnnW_3,jetAK8puppi_dnnH4q_3, jetAK8puppi_dnnTop_4, jetAK8puppi_dnnW_4,jetAK8puppi_dnnH4q_4; //DeepAK8
    Double_t jetAK8puppi_dnnZ,jetAK8puppi_dnnZbb,jetAK8puppi_dnnHbb,jetAK8puppi_dnnZ_2,jetAK8puppi_dnnZbb_2,jetAK8puppi_dnnHbb_2,jetAK8puppi_dnnZ_3,jetAK8puppi_dnnZbb_3,jetAK8puppi_dnnHbb_3,jetAK8puppi_dnnZ_4,jetAK8puppi_dnnZbb_4,jetAK8puppi_dnnHbb_4;
    Double_t jetAK8puppi_dnnDecorrTop, jetAK8puppi_dnnDecorrW,jetAK8puppi_dnnDecorrH4q,jetAK8puppi_dnnDecorrTop_2, jetAK8puppi_dnnDecorrW_2, jetAK8puppi_dnnDecorrH4q_2,jetAK8puppi_dnnDecorrTop_3, jetAK8puppi_dnnDecorrW_3, jetAK8puppi_dnnDecorrH4q_3,jetAK8puppi_dnnDecorrTop_4, jetAK8puppi_dnnDecorrW_4,jetAK8puppi_dnnDecorrH4q_4; //Decorrelated DeepAK8
    Double_t jetAK8puppi_dnnDecorrZ,jetAK8puppi_dnnDecorrZbb,jetAK8puppi_dnnDecorrHbb,jetAK8puppi_dnnDecorrZ_2,jetAK8puppi_dnnDecorrZbb_2,jetAK8puppi_dnnDecorrHbb_2,jetAK8puppi_dnnDecorrZ_3,jetAK8puppi_dnnDecorrZbb_3,jetAK8puppi_dnnDecorrHbb_3,jetAK8puppi_dnnDecorrZ_4,jetAK8puppi_dnnDecorrZbb_4,jetAK8puppi_dnnDecorrHbb_4;
    Double_t jetAK8puppi_dnnDecorrbb,jetAK8puppi_dnnDecorrcc,jetAK8puppi_dnnDecorrbbnog,jetAK8puppi_dnnDecorrccnog,jetAK8puppi_dnnDecorrbb_2,jetAK8puppi_dnnDecorrcc_2,jetAK8puppi_dnnDecorrbbnog_2,jetAK8puppi_dnnDecorrccnog_2,jetAK8puppi_dnnDecorrbb_3,jetAK8puppi_dnnDecorrcc_3,jetAK8puppi_dnnDecorrbbnog_3,jetAK8puppi_dnnDecorrccnog_3,jetAK8puppi_dnnDecorrbb_4,jetAK8puppi_dnnDecorrcc_4,jetAK8puppi_dnnDecorrbbnog_4,jetAK8puppi_dnnDecorrccnog_4;
    Double_t jetAK8puppi_dnnqcd,jetAK8puppi_dnntop,jetAK8puppi_dnnw,jetAK8puppi_dnnz,jetAK8puppi_dnnzbb,jetAK8puppi_dnnhbb,jetAK8puppi_dnnh4q,jetAK8puppi_dnnqcd_2,jetAK8puppi_dnntop_2,jetAK8puppi_dnnw_2,jetAK8puppi_dnnz_2,jetAK8puppi_dnnzbb_2,jetAK8puppi_dnnhbb_2,jetAK8puppi_dnnh4q_2,jetAK8puppi_dnnqcd_3,jetAK8puppi_dnntop_3,jetAK8puppi_dnnw_3,jetAK8puppi_dnnz_3,jetAK8puppi_dnnzbb_3,jetAK8puppi_dnnhbb_3,jetAK8puppi_dnnh4q_3,jetAK8puppi_dnnqcd_4,jetAK8puppi_dnntop_4,jetAK8puppi_dnnw_4,jetAK8puppi_dnnz_4,jetAK8puppi_dnnzbb_4,jetAK8puppi_dnnhbb_4,jetAK8puppi_dnnh4q_4;
    Double_t jetAK8puppi_dnnDecorrqcd,jetAK8puppi_dnnDecorrtop,jetAK8puppi_dnnDecorrw,jetAK8puppi_dnnDecorrz,jetAK8puppi_dnnDecorrzbb,jetAK8puppi_dnnDecorrhbb,jetAK8puppi_dnnDecorrh4q,jetAK8puppi_dnnDecorrqcd_2,jetAK8puppi_dnnDecorrtop_2,jetAK8puppi_dnnDecorrw_2,jetAK8puppi_dnnDecorrz_2,jetAK8puppi_dnnDecorrzbb_2,jetAK8puppi_dnnDecorrhbb_2,jetAK8puppi_dnnDecorrh4q_2,jetAK8puppi_dnnDecorrqcd_3,jetAK8puppi_dnnDecorrtop_3,jetAK8puppi_dnnDecorrw_3,jetAK8puppi_dnnDecorrz_3,jetAK8puppi_dnnDecorrzbb_3,jetAK8puppi_dnnDecorrhbb_3,jetAK8puppi_dnnDecorrh4q_3,jetAK8puppi_dnnDecorrqcd_4,jetAK8puppi_dnnDecorrtop_4,jetAK8puppi_dnnDecorrw_4,jetAK8puppi_dnnDecorrz_4,jetAK8puppi_dnnDecorrzbb_4,jetAK8puppi_dnnDecorrhbb_4,jetAK8puppi_dnnDecorrh4q_4;
    Double_t jetAK8puppi_dnnTop_max, jetAK8puppi_dnnW_max, jetAK8puppi_dnnH4q_max, jetAK8puppi_dnnTop_mid, jetAK8puppi_dnnW_mid, jetAK8puppi_dnnH4q_mid, jetAK8puppi_dnnTop_min, jetAK8puppi_dnnW_min, jetAK8puppi_dnnH4q_min, jetAK8puppi_dnnZ_max, jetAK8puppi_dnnZbb_max, jetAK8puppi_dnnHbb_max, jetAK8puppi_dnnZ_mid, jetAK8puppi_dnnZbb_mid, jetAK8puppi_dnnHbb_mid, jetAK8puppi_dnnZ_min, jetAK8puppi_dnnZbb_min, jetAK8puppi_dnnHbb_min, jetAK8puppi_dnnDecorrTop_max, jetAK8puppi_dnnDecorrW_max, jetAK8puppi_dnnDecorrH4q_max, jetAK8puppi_dnnDecorrTop_mid, jetAK8puppi_dnnDecorrW_mid, jetAK8puppi_dnnDecorrH4q_mid, jetAK8puppi_dnnDecorrTop_min, jetAK8puppi_dnnDecorrW_min, jetAK8puppi_dnnDecorrH4q_min, jetAK8puppi_dnnDecorrZ_max, jetAK8puppi_dnnDecorrZbb_max, jetAK8puppi_dnnDecorrHbb_max, jetAK8puppi_dnnDecorrZ_mid, jetAK8puppi_dnnDecorrZbb_mid, jetAK8puppi_dnnDecorrHbb_mid, jetAK8puppi_dnnDecorrZ_min, jetAK8puppi_dnnDecorrZbb_min, jetAK8puppi_dnnDecorrHbb_min, jetAK8puppi_dnnDecorrbb_max, jetAK8puppi_dnnDecorrcc_max, jetAK8puppi_dnnDecorrbbnog_max, jetAK8puppi_dnnDecorrccnog_max, jetAK8puppi_dnnDecorrbb_mid, jetAK8puppi_dnnDecorrcc_mid, jetAK8puppi_dnnDecorrbbnog_mid, jetAK8puppi_dnnDecorrccnog_mid, jetAK8puppi_dnnDecorrbb_min, jetAK8puppi_dnnDecorrcc_min, jetAK8puppi_dnnDecorrbbnog_min, jetAK8puppi_dnnDecorrccnog_min, jetAK8puppi_dnnqcd_max, jetAK8puppi_dnntop_max, jetAK8puppi_dnnw_max, jetAK8puppi_dnnz_max, jetAK8puppi_dnnzbb_max, jetAK8puppi_dnnhbb_max, jetAK8puppi_dnnh4q_max, jetAK8puppi_dnnqcd_mid, jetAK8puppi_dnntop_mid, jetAK8puppi_dnnw_mid, jetAK8puppi_dnnz_mid, jetAK8puppi_dnnzbb_mid, jetAK8puppi_dnnhbb_mid, jetAK8puppi_dnnh4q_mid, jetAK8puppi_dnnqcd_min, jetAK8puppi_dnntop_min, jetAK8puppi_dnnw_min, jetAK8puppi_dnnz_min, jetAK8puppi_dnnzbb_min, jetAK8puppi_dnnhbb_min, jetAK8puppi_dnnh4q_min, jetAK8puppi_dnnDecorrqcd_max, jetAK8puppi_dnnDecorrtop_max, jetAK8puppi_dnnDecorrw_max, jetAK8puppi_dnnDecorrz_max, jetAK8puppi_dnnDecorrzbb_max, jetAK8puppi_dnnDecorrhbb_max, jetAK8puppi_dnnDecorrh4q_max, jetAK8puppi_dnnDecorrqcd_mid, jetAK8puppi_dnnDecorrtop_mid, jetAK8puppi_dnnDecorrw_mid, jetAK8puppi_dnnDecorrz_mid, jetAK8puppi_dnnDecorrzbb_mid, jetAK8puppi_dnnDecorrhbb_mid, jetAK8puppi_dnnDecorrh4q_mid, jetAK8puppi_dnnDecorrqcd_min, jetAK8puppi_dnnDecorrtop_min, jetAK8puppi_dnnDecorrw_min, jetAK8puppi_dnnDecorrz_min, jetAK8puppi_dnnDecorrzbb_min, jetAK8puppi_dnnDecorrhbb_min, jetAK8puppi_dnnDecorrh4q_min;

   Int_t CategoryID;
   Int_t vTagID;//1: tau21<0.45; 0: tau21>0.45 <0.75; -1: tau21 >0.75
   Double_t isMatch;
   Double_t        weight;
   Double_t        weight_center;
   Double_t        weight_bias_up;
   Double_t        weight_ps_up;

   Double_t        weight_deep;
   Double_t        weight_nobtag;
   Double_t        IDweight;
   Double_t        IDweightISO;
   Double_t        IDweighttrk;
   Double_t        ToppTweight;
   Double_t        trigger_eff;
   Double_t        btagweight_center;
   Double_t        btagweight_up;
   Double_t        btagweight_down;
   Double_t        btagweight_center_deep;
   Double_t        btagweight_up_deep;
   Double_t        btagweight_down_deep;

   Long64_t           event;
   Int_t           nVtx;
   Int_t           numCands;
   Double_t        ptVlep;
   Double_t        ptVhad;
   Double_t        yVlep;
   Double_t        yVhad;
   Double_t        yVhadJEC;
   Double_t        phiVlep;
   Double_t        phiVhad;
   Double_t        massVlep;
   Double_t        mtVlep;
   Double_t        massVhad;
//   Double_t        massVhad_gen;
   Double_t        tau1;
   Double_t        tau2;
   Double_t        tau3;
 //  Double_t        tau21;
//   Double_t        sdrop;
   Int_t           lep;
   Int_t           channel;
   Double_t        candMass;
   Double_t        ptlep1;
   Double_t        ptlep2;
   Double_t        etalep1;
   Double_t        etalep2;
   Double_t        philep1;
   Double_t        philep2;
   Double_t        met;
   Double_t        metPhi;
   Double_t        theWeight;
   Double_t        nump;
   Double_t        numm;
   Double_t        npT;
   Double_t        npIT;
   Int_t           nBX;
   Double_t        triggerWeight;
   Double_t        lumiWeight;
   Double_t        pileupWeight;
   Double_t        delPhilepmet;
   Double_t        deltaRlepjet;
   Double_t        delPhijetmet;
   Double_t        delPhijetlep;
   Int_t           vbftag;
   Bool_t          IDLoose;
   Bool_t          IDTight;
   //Bool_t          isHighPt;
   //Bool_t          isHEEP;
   Double_t        trackIso;
   Double_t        muchaiso;
   Double_t        muneuiso;
   Double_t        muphoiso;
   Double_t        muPU;
   Double_t        muisolation;
   //Double_t        METraw_et;
   //Double_t        METraw_phi;
   //Double_t        METraw_sumEt;
   //Double_t        MET_et;
   //Double_t        MET_phi;
   //Double_t        MET_sumEt;
   //Double_t        jetAK8_pt;
   //Double_t        jetAK8_mass;
   //Double_t        jetAK8_jec;
   Double_t      pweight[254];

   Double_t        jetAK8_pt1[3];
   Double_t        jetAK8_eta1[3];
   Double_t        jetAK8_mass1[3];
   Double_t        jetAK8_SF_mass1[3];
   Double_t        jetAK8_SF_mass2[3];
   Double_t        jetAK8_jec1[3];
   Double_t        jetAK8_eta;
   Double_t        jetAK8_phi;
   Double_t        candMassJEC;
   Double_t        ptVlepJEC;
   Double_t        yVlepJEC;
   Double_t        phiVlepJEC;
   Double_t        massVlepJEC;
   Double_t        massVhadJEC;
   Double_t        jetAK8puppi_sdJEC;
   Double_t        jetAK8puppi_tau21;
   Double_t        jetAK8puppi_tau1;
Double_t        jetAK8puppi_tau2;
Double_t        jetAK8puppi_tau3;
Double_t        jetAK8puppi_tau4;
   Double_t        jetAK8puppi_ptJEC;
   Float_t         Etaj;
   Float_t         Phij;
   Double_t        jetAK8puppi_sdcorr;
   Double_t        candMasspuppiJEC;
   Double_t        candMasspuppiJEC_new;
   Double_t        candMasspuppiJEC_JEC_up;
   Double_t        candMasspuppiJEC_JEC_down;
   Double_t        candMasspuppiJEC_JER_up;
   Double_t        candMasspuppiJEC_JER_down;

Double_t        jetAK8puppi_sdJEC_2;
   Double_t        jetAK8puppi_tau21_2;
   Double_t        jetAK8puppi_tau42_2;
 Double_t        jetAK8puppi_tau1_2;
Double_t        jetAK8puppi_tau2_2;
Double_t        jetAK8puppi_tau3_2;
Double_t        jetAK8puppi_tau4_2;
Double_t        jetAK8puppi_tau42;
   Double_t        jetAK8puppi_ptJEC_2;
   Float_t         Etaj_2;
   Float_t         Phij_2;
   Double_t        jetAK8puppi_sdcorr_2;
//Double_t MassVV[3];
Double_t        MJJ_midmin;
Double_t        Mj_un_2;
Double_t        Mj_corr_2;
Double_t        PTj_2;
Float_t         PTj_23;
Float_t         ST;
Float_t         HT;
Float_t         Nj4;
Float_t         Nj8;
Double_t        tau21_2;
Float_t        ak4Ptex1;
Float_t        ak4Etaex1;
Float_t        ak4Phiex1;
Float_t        ak4Eex1;
Float_t        ak4Ptex2;
Float_t        ak4Etaex2;
Float_t        ak4Phiex2;
Float_t        ak4Eex2;
Float_t        Mj_max;
Float_t        Mj_mid; 
Float_t        Mj_min;
Float_t        PTj_max;
Float_t        PTj_mid;
Float_t        PTj_min;
Float_t        Etaj_max;
Float_t        Etaj_mid;
Float_t        Etaj_min;
Float_t        Phij_max;
Float_t        Phij_mid;
Float_t        Phij_min;
Float_t        DPhi_max_mid;
Float_t        DPhi_mid_min;
Float_t        DPhi_min_max;

Float_t        DEta_max_mid;
Float_t        DEta_mid_min;
Float_t        DEta_min_max;
Float_t        DEta_12;
Float_t        DEta_13;
Float_t        DEta_23;
Float_t        DEta_max;
Float_t        DEta_min;

Float_t        DR_max_mid;
Float_t        DR_mid_min;
Float_t        DR_min_max;
Float_t        DR_max;
Float_t        DR_min;
Float_t        MJJj;
Float_t        MJJjj;
Float_t        MJJJj;
Float_t        MJJJJ;
Float_t        t21t31t41_max;
Float_t        t21t31t41_mid;
Float_t        t21t31t41_min;
Float_t        S_t21t31t41_max;
Float_t        S_t21t31t41_mid;
Float_t        S_t21t31t41_min;
Float_t jet_tau1_puppi_2;
Float_t jet_tau2_puppi_2;
Float_t jet_tau3_puppi_2;
Float_t jet_tau4_puppi_2;
Float_t tau31_2;
Float_t tau41_2;
Float_t tau32_2;
Float_t tau43_2;
Double_t       tau42;
Double_t        tau42_2;
Float_t      t21t31t41;
Float_t      t21t31t41_2;
Float_t      t21t31t41_3;

Float_t      tau21_max;
Float_t      tau31_max;
Float_t      tau41_max;
Float_t      tau32_max;
Float_t      tau42_max;
Float_t      tau43_max;
Float_t      tau21_mid;
Float_t      tau31_mid;
Float_t      tau41_mid;
Float_t      tau32_mid;
Float_t      tau42_mid;
Float_t      tau43_mid;
Float_t      tau21_min;
Float_t      tau31_min;
Float_t      tau41_min;
Float_t      tau32_min;
Float_t      tau42_min;
Float_t      tau43_min;

Float_t      pt1pt2pt3;


Double_t Mrad_j; 
Double_t Mrad;
Double_t Mw; 
Double_t Mww_j;
Double_t massww[3];
Double_t        jetAK8puppi_sdJEC_3;
Double_t        jetAK8puppi_sdJC_3;
   Double_t        jetAK8puppi_tau21_3;
 Double_t        jetAK8puppi_tau1_3;
Double_t        jetAK8puppi_tau2_3;
Double_t        jetAK8puppi_tau3_3;
Double_t        jetAK8puppi_tau4_3;
   Double_t        jetAK8puppi_tau42_3;
   Double_t        jetAK8puppi_tau42_4;
   Double_t        jetAK8puppi_tau41_4;
   Double_t        jetAK8puppi_tau21_4;

   Double_t        jetAK8puppi_ptJEC_3;
   Float_t         Etaj_3;
   Float_t         Etaj_4;
   Float_t         Phij_3;
   Float_t         Phij_4;
   Double_t        jetAK8puppi_sdcorr_3;
Double_t        Mj_3;
Double_t        Mj_4;
Double_t        Mj_un_3;
Double_t        Mj_corr_3;
Double_t        PTj_3;
Double_t        tau21_3;
Double_t        tau42_3;
Double_t        tau21_4;
Double_t        tau42_4;
Double_t        tau41_4;

Double_t        jetAK8puppi_sd_4;
Double_t        jetAK8puppi_phi_4;
Double_t        jetAK8puppi_ptJEC_4;
Double_t        jetAK8puppi_ptJEC_5;
Double_t        jetAK8puppi_ptJEC_6;
Double_t        jetAK8puppi_ptJEC_7;
Double_t        jetAK8puppi_ptJEC_8;
Double_t        jetAK8puppi_sdJEC_4;
Double_t        jetAK8puppi_sdJEC_5;
Double_t        jetAK8puppi_sdJEC_6;
Double_t        jetAK8puppi_sdJEC_7;
Double_t        jetAK8puppi_sdJEC_8;
Double_t        gen_gra_m;
Double_t        gen_gra_pt;
Double_t        gen_gra_eta;
Double_t        gen_gra_phi;
Double_t        gen_rad_m;
Double_t        gen_rad_pt;
Double_t        gen_rad_eta;
Double_t        gen_rad_phi;
//Double_t MJR,MJW,MJR_j,MJJRW_j;
Double_t        gen_tau_e;
Double_t        gen_tau_pt;
Double_t        gen_tau_eta;
Double_t        gen_tau_phi;
Double_t        gen_tau_e_2;
Double_t        gen_tau_pt_2;
Double_t        gen_tau_eta_2;
Double_t        gen_tau_phi_2;
Double_t        gen_tau_e_3;
Double_t        gen_tau_pt_3;
Double_t        gen_tau_eta_3;
Double_t        gen_tau_phi_3;
Double_t        ptGenVhad;
Double_t        etaGenVhad;
Double_t        phiGenVhad;
Double_t        massGenVhad;
Double_t        etaGenVhad_2;
Double_t        phiGenVhad_2;
Double_t        etaGenVhad_3;
Double_t        phiGenVhad_3;
Double_t        ptGenV_2;
Double_t        etaGenV_2;
Double_t        phiGenV_2;
Double_t        massGenV_2;
Double_t        ptGenV_3;
Double_t        etaGenV_3;
Double_t        phiGenV_3;
Double_t        massGenV_3;
Double_t        ptGenVlep;
Double_t        etaGenVlep;
Double_t        phiGenVlep;
Double_t        massGenVlep;
Double_t        ptGenVlep_2;
Double_t        etaGenVlep_2;
Double_t        phiGenVlep_2;
Double_t        massGenVlep_2;
Double_t        ptGenVlep_3;
Double_t        etaGenVlep_3;
Double_t        phiGenVlep_3;
Double_t        massGenVlep_3;
Double_t        ptq11;
Double_t        etaq11;
Double_t        phiq11;
Double_t        massq11;
Double_t        ptq21;
Double_t        etaq21;
Double_t        phiq21;
Double_t        massq21;
Double_t        ptq31;
Double_t        etaq31;
Double_t        phiq31;
Double_t        massq31;
Double_t        ptq12;
Double_t        etaq12;
Double_t        phiq12;
Double_t        massq12;
Double_t        ptq22;
Double_t        etaq22;
Double_t        phiq22;
Double_t        massq22;
Double_t        ptq32;
Double_t        etaq32;
Double_t        phiq32;
Double_t        massq32;
Int_t        status_1;
Int_t        status_2;
Int_t        status_3;
Float_t      PTj_4;
Float_t      PTj_5;
Float_t      PTj_6;
Float_t      PTj_7;
Float_t      PTj_8;
Float_t      newgen_gra_m;
Float_t      newgen_gra_pt;
Float_t      newgen_gra_eta;
Float_t      newgen_gra_phi;
Float_t      newgen_rad_m;
Float_t      newgen_rad_pt;
Float_t      newgen_rad_eta;
Float_t      newgen_rad_phi;
Float_t      newgen_tau_e;
Float_t      newgen_tau_pt;
Float_t      newgen_tau_eta;
Float_t      newgen_tau_phi;
Float_t      newgen_tau_e_2;
Float_t      newgen_tau_pt_2;
Float_t      newgen_tau_eta_2;
Float_t      newgen_tau_phi_2;
Float_t      newgen_tau_e_3;
Float_t      newgen_tau_pt_3;
Float_t      newgen_tau_eta_3;
Float_t      newgen_tau_phi_3;
Float_t      newptGenVhad;
Float_t      newetaGenVhad;
Float_t      newphiGenVhad;
Float_t      newmassGenVhad;
Float_t      newptGenV_2;
Float_t      newetaGenV_2;
Float_t      newphiGenV_2;
Float_t      newmassGenV_2;
Float_t      newptGenV_3;
Float_t      newetaGenV_3;
Float_t      newphiGenV_3;
Float_t      newmassGenV_3;
Float_t      newptGenVlep;
Float_t      newetaGenVlep;
Float_t      newphiGenVlep;
Float_t      newmassGenVlep;
Float_t      newptGenVlep_2;
Float_t      newetaGenVlep_2;
Float_t      newphiGenVlep_2;
Float_t      newmassGenVlep_2;
Float_t      newptGenVlep_3;
Float_t      newetaGenVlep_3;
Float_t      newphiGenVlep_3;
Float_t      newmassGenVlep_3;
Float_t      newptq11;
Float_t      newetaq11;
Float_t      newphiq11;
Float_t      newmassq11;
Float_t      newptq21;
Float_t      newetaq21;
Float_t      newphiq21;
Float_t      newmassq21; 
Float_t      newptq31;
Float_t      newetaq31;
Float_t      newphiq31;
Float_t      newmassq31;
Float_t      newptq12;
Float_t      newetaq12;
Float_t      newphiq12; 
Float_t      newmassq12;
Float_t      newptq22;
Float_t      newetaq22; 
Float_t      newphiq22;
Float_t      newmassq22;
Float_t      newptq32;
Float_t      newetaq32;
Float_t      newphiq32;
Float_t      newmassq32;
Float_t      Mass2j1j2;
Float_t      Mass2j3j1;
Float_t      Mass2j2j3;
Double_t      MJJ;
Double_t      MJJ_JEC_up;
Double_t      MJJ_JEC_down;
Double_t      MJJ_JER_up;
Double_t      MJJ_JER_down;

Double_t weight_center_pdf_up;
Double_t weight_center_pdf_down;

Double_t weight_pdf_up;
Double_t weight_pdf_down;

Float_t      Mw1w2;
Float_t      Mw1w3;
Float_t      Mw2w3;
Float_t      Pt2dPt1;
Float_t      Pt3dPt1;

 Float_t Phij_12;
 Float_t Phij_13;
 Float_t Phij_23;
Float_t DR_12;
Float_t DR_13;
Float_t DR_23;
Float_t DPhi_max;
Float_t DPhi_min;
Float_t DPhi_max2;
Float_t DPhi_min2;
Float_t DPhi_max3;
Float_t DPhi_min3;
 Float_t jet_tau1_puppi_3;
   Float_t jet_tau2_puppi_3;
   Float_t jet_tau3_puppi_3;
   Float_t jet_tau4_puppi_3;
   Float_t tau31_3;
   Float_t tau41_3;
   Float_t tau32_3;
   Float_t tau43_3;
Float_t Mj_mean;
//   Double_t        candMasspuppicorr;
//   Double_t        sdropJEC;
   Double_t        mtVlepJEC;
//   Double_t        delPhilepmetJEC;
//   Double_t        delPhijetmetJEC;
//   Double_t        delPhijetlepJEC;
   Int_t           HLT_Ele1;
   Int_t           HLT_Ele2;
   Int_t           HLT_Ele3;
   Int_t           HLT_Ele4;
   Int_t           HLT_Ele5;
   Int_t           HLT_Ele6;
   Int_t           HLT_Ele7;
   Int_t           HLT_Ele8;
   Int_t           HLT_Mu1;
   Int_t           HLT_Mu2;
   Int_t           HLT_Mu3;
   Int_t           HLT_Mu4;
   Int_t           HLT_Mu5;
   Int_t           HLT_Mu6;
   Int_t           HLT_Mu7;
   Int_t           HLT_Mu8;
   Int_t           HLT_Mu9;
   Int_t           HLT_Mu10;
   Int_t           HLT_Mu11;
   Int_t           HLT_Mu12;
   Int_t           HLT_Mu13;
   Int_t           HLT_Mu14;
   Int_t           HLT_Mu15;
   Int_t           HLT_Mu16;
   Int_t           HLT_Mu17;
   Int_t num_ak4jetsex;
   Int_t num_ak4jetsin;
 /*  Bool_t          passFilter_HBHE;
   Bool_t          passFilter_HBHEIso;
   Bool_t          passFilter_GlobalHalo;
   Bool_t          passFilter_ECALDeadCell;
   Bool_t          passFilter_GoodVtx;
   Bool_t          passFilter_EEBadSc;
   Bool_t          passFilter_badMuon;
   Bool_t          passFilter_badChargedHadron;
*/
   Double_t        ex_ak4jet_pt[15];
   Double_t        ex_ak4jet_eta[15];

   Int_t           ak4jet_hf[15];
   Int_t           ak4jet_pf[15];
   Double_t        ak4jet_pt[15];
   Double_t        ak4jet_pt_uncorr[15];
   Double_t        ak4jet_eta[15];
   Double_t        ak4jet_phi[15];
   Double_t        ak4jet_e[15];
   Double_t        ak4jet_dr[15];
   Double_t        ak4jet_csv[15];
   Double_t        ak4jet_icsv[15];
   Double_t        ak4jet_deepcsvb[15];  
   Double_t        ak4jet_deepcsvbb[15];

   Double_t        deltaRAK4AK8_new[15];

   Double_t        deltaRAK4AK8[15];
   Double_t        ak4jet_IDLoose[15];
   Double_t        ak4jet_IDTight[15];

   Double_t        genw_q1_eta[5];
   Double_t        genw_q1_phi[5];
   Double_t        genw_q2_eta[5];
   Double_t        genw_q2_phi[5];

   Double_t        gent_b_eta;
   Double_t        gent_b_phi;
   Double_t        gent_b_pt;
   Double_t        gent_b_mass;

   Double_t        genantit_b_eta;
   Double_t        genantit_b_phi;
   Double_t        genantit_b_pt;
   Double_t        genantit_b_mass;

   Double_t        gent_w_eta;
   Double_t        gent_w_phi;
   Double_t        gent_w_pt;

   Double_t        genantit_w_eta;
   Double_t        genantit_w_phi;
   Double_t        genantit_w_pt;

   Double_t        gent_w_q1_eta;
   Double_t        gent_w_q1_phi;
   Double_t        gent_w_q1_pt;

   Double_t        genantit_w_q1_eta;
   Double_t        genantit_w_q1_phi;
   Double_t        genantit_w_q1_pt;

   Double_t        gent_w_q2_eta;
   Double_t        gent_w_q2_phi;
   Double_t        gent_w_q2_pt;

   Double_t        genantit_w_q2_eta;
   Double_t        genantit_w_q2_phi;
   Double_t        genantit_w_q2_pt;

   Double_t        etagengl[15];
   Double_t        phigengl[15];
   Double_t        ptgengl[15];
   Double_t        egengl[15];

   Double_t        etagenwl[5];
   Double_t        phigenwl[5];
   Double_t        ptgenwl[5];
   Double_t        ptgenwf[5];

   Double_t        gent_w_tag;
   Double_t        genantit_w_tag;
   Double_t        gent_w_q1_pdg;
   Double_t        gent_w_q2_pdg;
   Double_t        genantit_w_q1_pdg;
   Double_t        genantit_w_q2_pdg;
   Double_t        taggenwl[5];
   Double_t        genw_q1_pdg[5];
   Double_t        genw_q2_pdg[5];

   Double_t        etagenzl[5];
   Double_t        phigenzl[5];
   Double_t        ptgenzl[5];
   Double_t        etagenq1l[5];
   Double_t        phigenq1l[5];
   Double_t        ptgenq1l[5];
   Double_t        egenq1l[5];

   Double_t        etagenq2l[5];
   Double_t        phigenq2l[5];
   Double_t        ptgenq2l[5];
   Double_t        egenq2l[5];

   Double_t        etagenq3l[5];
   Double_t        phigenq3l[5];
   Double_t        ptgenq3l[5];
   Double_t        egenq3l[5];

   Double_t        etagenq4l[5];
   Double_t        phigenq4l[5];
   Double_t        ptgenq4l[5];
   Double_t        egenq4l[5];

   Double_t        etagenq5l[5];
   Double_t        phigenq5l[5];
   Double_t        ptgenq5l[5];
   Double_t        egenq5l[5];

/*   Double_t        gen_gra_m;
   Double_t        gen_gra_pt;
   Double_t        gen_ele_pt;
   Double_t        gen_ele_eta;
   Double_t        gen_ele_phi;
   Double_t        gen_ele_e;
   Double_t        gen_mu_pt;
   Double_t        gen_mu_eta;
   Double_t        gen_mu_phi;
   Double_t        gen_mu_e;
   Double_t        genmatch_ele_pt;
   Double_t        genmatch_ele_eta;
   Double_t        genmatch_ele_phi;
   Double_t        genmatch_ele_e;
   Double_t        genmatch_ele_dr;
 */
   Double_t        gentop_pt;
   Double_t        gentop_eta;
   Double_t        gentop_phi;
   Double_t        gentop_mass;
   Double_t        genantitop_pt;
   Double_t        genantitop_eta;
   Double_t        genantitop_phi;
   Double_t        genantitop_mass;
/*   Double_t        genmatch_mu_pt;
   Double_t        genmatch_mu_eta;
   Double_t        genmatch_mu_phi;
   Double_t        genmatch_mu_e;
   Double_t        genmatch_mu_dr;
   Double_t        ptGenVlep;
   Double_t        etaGenVlep;
   Double_t        phiGenVlep;
   Double_t        massGenVlep;
   Double_t        ptGenVhad;
   Double_t        etaGenVhad;
   Double_t        phiGenVhad;
   Double_t        massGenVhad;
*/
   Double_t        L1prefiring;
   Double_t        L1prefiringup;
   Double_t        L1prefiringdown;

   TBranch        *b_jetAK8puppi_pt;
   TBranch        *b_jetAK8puppi_pt_2;
   TBranch        *b_jetAK8puppi_pt_3;
   TBranch        *b_jetAK8puppi_eta;
   TBranch        *b_jetAK8puppi_eta_2;
   TBranch        *b_jetAK8puppi_eta_3;
   TBranch        *b_jetAK8puppi_phi;
   TBranch        *b_jetAK8puppi_phi_2;
   TBranch        *b_jetAK8puppi_phi_3;
   TBranch        *b_jetAK8puppi_sd;
   TBranch        *b_jetAK8puppi_sd_2;
   TBranch        *b_jetAK8puppi_sd_3;

   TBranch        *b_MET_pt;   //!


   TBranch        *b_genWeight;


//Subjet
   TLorentzVector  *ak8sj11;
   TLorentzVector  *ak8sj21;
   TLorentzVector  *ak8sj31;
   TLorentzVector  *ak8sj12;
   TLorentzVector  *ak8sj22;
   TLorentzVector  *ak8sj32;
   TLorentzVector  *ak8sj13;
   TLorentzVector  *ak8sj23;
   TLorentzVector  *ak8sj33;
   TLorentzVector  *ak8sj14;
   TLorentzVector  *ak8sj24;
   TLorentzVector  *ak8sj34;
   TLorentzVector  *ak8sj15;
   TLorentzVector  *ak8sj25;
   TLorentzVector  *ak8sj35;
   // List of branches
   TBranch        *b_L1prefiring;
   TBranch        *b_L1prefiringup;
   TBranch        *b_L1prefiringdown;  
   TBranch        *b_ak8sj11;   //!
   TBranch        *b_ak8sj21;   //!
   TBranch        *b_ak8sj31;   //!
   TBranch        *b_ak8sj12;   //!
   TBranch        *b_ak8sj22;   //!
   TBranch        *b_ak8sj32;   //!
   TBranch        *b_ak8sj13;   //!
   TBranch        *b_ak8sj23;   //!
   TBranch        *b_ak8sj33;   //!
   TBranch        *b_ak8sj14;   //!
   TBranch        *b_ak8sj24;   //!
   TBranch        *b_ak8sj34;   //!
   TBranch        *b_ak8sj15;   //!
   TBranch        *b_ak8sj25;   //!
   TBranch        *b_ak8sj35;   //!
   TBranch        *b_run;   //!
   TBranch        *b_ls;   //!
   TBranch        *b_event;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_theWeight;   //!
   TBranch        *b_nump;   //!
   TBranch        *b_numm;   //!
   TBranch        *b_npT;   //!
   TBranch        *b_pweight;   //!

   TBranch        *b_nLooseEle;   //!
   TBranch        *b_nLooseMu;   //!
   TBranch        *b_lep;   //!
   TBranch        *b_ptlep1;   //!
   TBranch        *b_etalep1;   //!
   TBranch        *b_philep1;   //!
   TBranch        *b_trackIso;   //!
   TBranch        *b_muisolation;   //add
   TBranch        *b_muchaiso;   //add
   TBranch        *b_muneuiso;   //add
   TBranch        *b_MET_phi;   //!
   TBranch        *b_RawMET_phi;   //!
   
   TBranch        *b_ptVlepJEC;   //!
   TBranch        *b_yVlepJEC;   //!
   TBranch        *b_phiVlepJEC;   //!
   TBranch        *b_mtVlepJEC;   //!
   TBranch        *b_massVlepJEC;   //!
   TBranch        *b_jetAK8puppi_sdJEC;   //!
   TBranch        *b_jetAK8puppi_tau21;   //!
   TBranch        *b_jetAK8puppi_tau1;   //!
   TBranch        *b_jetAK8puppi_tau2;   //!
   TBranch        *b_jetAK8puppi_tau3;   //!
   TBranch        *b_jetAK8puppi_tau4;   //!   
   TBranch        *b_jetAK8puppi_ptJEC;   //!
   TBranch        *b_jetAK8puppi_eta_4;   //!
   TBranch        *b_jetAK8puppi_phi_4;   //!
   TBranch        *b_jetAK8puppi_sdcorr;   //!
   TBranch        *b_IDLoose;   //!
   TBranch        *b_delPhilepmet;   //!
   TBranch        *b_deltaRlepjet;   //!
   TBranch        *b_delPhijetmet;   //!
   TBranch        *b_delPhijetlep;   //!
   TBranch        *b_vbftag;   //add
   TBranch        *b_candMasspuppiJEC;   //!
   TBranch        *b_candMasspuppiJEC_new;   //!
   TBranch        *b_candMasspuppiJEC_JEC_up;   //!
   TBranch        *b_candMasspuppiJEC_JEC_down;   //!
   TBranch        *b_candMasspuppiJEC_JER_up;   //!
   TBranch        *b_candMasspuppiJEC_JER_down;   //!

   TBranch        *b_MJJ_JEC_up;   //!
   TBranch        *b_MJJ_JEC_down;   //!
   TBranch        *b_MJJ_JER_up;   //!
   TBranch        *b_MJJ_JER_down;   //!

   TBranch        *b_gentop_pt; //add old
   TBranch        *b_gentop_eta; //add old
   TBranch        *b_genantitop_pt; //add old
   TBranch        *b_genantitop_eta; //add old
   TBranch        *b_HLT_Ele1;
   TBranch        *b_HLT_Ele2;
   TBranch        *b_HLT_Ele3;   //!
   TBranch        *b_HLT_Ele4;
   TBranch        *b_HLT_Ele5;
   TBranch        *b_HLT_Ele6;   //!
   TBranch        *b_HLT_Ele7;
   TBranch        *b_HLT_Ele8;
   TBranch        *b_HLT_Mu1;
   TBranch        *b_HLT_Mu2;   //!
   TBranch        *b_HLT_Mu3;
   TBranch        *b_HLT_Mu4;   //!
   TBranch        *b_HLT_Mu5;
   TBranch        *b_HLT_Mu6;   //!
   TBranch        *b_HLT_Mu7;
   TBranch        *b_HLT_Mu8;   //!
   TBranch        *b_HLT_Mu9;
   TBranch        *b_HLT_Mu10;   //!
   TBranch        *b_HLT_Mu11;
   TBranch        *b_HLT_Mu12;   //!
   TBranch        *b_HLT_Mu13;
   TBranch        *b_HLT_Mu14;   //!
   TBranch        *b_HLT_Mu15;
   TBranch        *b_HLT_Mu16;   //!
   TBranch        *b_HLT_Mu17;   //!
   TBranch        *b_ak4jet_hf;
   TBranch        *b_ak4jet_pf;
   TBranch        *b_ak4jet_pt;   //!
   TBranch        *b_ak4jet_pt_uncorr;   //!
   TBranch        *b_ak4jet_eta;   //!
   TBranch        *b_ak4jet_phi;   //!
   TBranch        *b_ak4jet_e;   //!
   TBranch        *b_ak4jet_dr;   //!
   TBranch        *b_ak4jet_csv;   //!
   TBranch        *b_ak4jet_icsv;   //!
   TBranch        *b_ak4jet_deepcsvb;   //!
   TBranch        *b_ak4jet_deepcsvbb;   //!
   TBranch        *b_deltaRAK4AK8;   //!
   TBranch        *b_ak4jet_IDLoose;   //!
   TBranch        *b_ak4jet_IDTight;   //!
/*   TBranch        *b_passFilter_HBHE_;   //!
   TBranch        *b_passFilter_HBHEIso_;   //!
   TBranch        *b_passFilter_GlobalHalo_;   //!
   TBranch        *b_passFilter_ECALDeadCell_;   //!
   TBranch        *b_passFilter_GoodVtx_;   //!
   TBranch        *b_passFilter_EEBadSc_;   //!
   TBranch        *b_passFilter_badMuon_;   //!
   TBranch        *b_passFilter_badChargedHadron_;   //!
*/
   TBranch        *b_muphoiso;  //add
   TBranch        *b_muPU;  //add
   TBranch        *b_IDTight;   //!
   TBranch        *b_vbfeta;   //add
   TBranch        *b_vbfmjj;   //add
   TBranch        *b_nj1;   //add
   TBranch        *b_nj2;   //add
   //TBranch        *b_isHighPt;   //!
   //TBranch        *b_isHEEP;   //!
   TBranch        *b_ptVlep;   //!
   TBranch        *b_yVlep;   //!
   TBranch        *b_phiVlep;   //!
   TBranch        *b_massVlep;   //!
   TBranch        *b_mtVlep;   //! 
   TBranch        *b_ptVhad;   //!
   TBranch        *b_jetAK8_pt;   //!
   TBranch        *b_yVhad;   //!
   TBranch        *b_yVhadJEC;   //!
   TBranch        *b_phiVhad;   //!
   TBranch        *b_massVhad;   //!
   TBranch        *b_massVhadJEC;   //!
   TBranch        *b_tau1;   //!
   TBranch        *b_tau2;   //!
   TBranch        *b_tau3;   //!
 //  TBranch        *b_tau21;   //!
//   TBranch        *b_sdrop;   //!
//   TBranch        *b_sdropJEC;   //!
   TBranch        *b_candMass;   //!
   TBranch        *b_numCands;   //!
   TBranch        *b_channel;   //!
   TBranch        *b_ptlep2;   //!
   TBranch        *b_etalep2;   //!
   TBranch        *b_philep2;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metPhi;   //!
   TBranch        *b_npIT;   //!
   TBranch        *b_nBX;   //!
   TBranch        *b_triggerWeight;   //!
   TBranch        *b_lumiWeight;   //!
   TBranch        *b_pileupWeight;   //!
   TBranch        *b_METraw_et;   //!
   TBranch        *b_METraw_phi;   //!
   TBranch        *b_METraw_sumEt;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_jetAK8_mass;   //!
   TBranch        *b_jetAK8_jec;   //!
   TBranch        *b_jetAK8_pt1;   //!
   TBranch        *b_jetAK8_eta1;   //!
   TBranch        *b_jetAK8_mass1;   //!
   TBranch        *b_jetAK8_SF_mass1;   //!
   TBranch        *b_jetAK8_SF_mass2;   //!
   TBranch        *b_jetAK8_jec1;   //!
   TBranch        *b_jetAK8_eta;   //!
   TBranch        *b_jetAK8_phi;   //!
   TBranch        *b_candMassJEC;   //!
   TBranch        *b_etagengl;
   TBranch        *b_phigengl;
   TBranch        *b_ptgengl;
   TBranch        *b_egengl;

   TBranch        *b_etagenwl;
   TBranch        *b_phigenwl;
   TBranch        *b_ptgenwl;
   TBranch        *b_ptgenwf;

   TBranch        *b_etagenzl;
   TBranch        *b_phigenzl;
   TBranch        *b_ptgenzl;
   TBranch        *b_etagenq1l;
   TBranch        *b_phigenq1l;
   TBranch        *b_ptgenq1l;
   TBranch        *b_egenq1l;

   TBranch        *b_etagenq2l;
   TBranch        *b_phigenq2l;
   TBranch        *b_ptgenq2l;
   TBranch        *b_egenq2l;

   TBranch        *b_etagenq3l;
   TBranch        *b_phigenq3l;
   TBranch        *b_ptgenq3l;
   TBranch        *b_egenq3l;

   TBranch        *b_etagenq4l;
   TBranch        *b_phigenq4l;
   TBranch        *b_ptgenq4l;
   TBranch        *b_egenq4l;

   TBranch        *b_etagenq5l;
   TBranch        *b_phigenq5l;
   TBranch        *b_ptgenq5l;
   TBranch        *b_egenq5l;

   TBranch        *b_gent_w_tag;
   TBranch        *b_genantit_w_tag;
   TBranch        *b_gent_w_q1_pdg;
   TBranch        *b_gent_w_q2_pdg;
   TBranch        *b_genantit_w_q1_pdg;
   TBranch        *b_genantit_w_q2_pdg;
   TBranch        *b_taggenwl;
   TBranch        *b_genw_q1_pdg;
   TBranch        *b_genw_q2_pdg;
   TBranch        *b_jetAK8puppi_dnnTop, *b_jetAK8puppi_dnnW,*b_jetAK8puppi_dnnH4q,*b_jetAK8puppi_dnnTop_2, *b_jetAK8puppi_dnnW_2,*b_jetAK8puppi_dnnH4q_2,*b_jetAK8puppi_dnnTop_3, *b_jetAK8puppi_dnnW_3,*b_jetAK8puppi_dnnH4q_3,*b_jetAK8puppi_dnnTop_4, *b_jetAK8puppi_dnnW_4,*b_jetAK8puppi_dnnH4q_4; //DeepAK8
   TBranch        *b_jetAK8puppi_dnnZ,*b_jetAK8puppi_dnnZbb,*b_jetAK8puppi_dnnHbb,*b_jetAK8puppi_dnnZ_2,*b_jetAK8puppi_dnnZbb_2,*b_jetAK8puppi_dnnHbb_2,*b_jetAK8puppi_dnnZ_3,*b_jetAK8puppi_dnnZbb_3,*b_jetAK8puppi_dnnHbb_3,*b_jetAK8puppi_dnnZ_4,*b_jetAK8puppi_dnnZbb_4,*b_jetAK8puppi_dnnHbb_4;
   TBranch        *b_jetAK8puppi_dnnDecorrTop, *b_jetAK8puppi_dnnDecorrW,*b_jetAK8puppi_dnnDecorrH4q,*b_jetAK8puppi_dnnDecorrTop_2, *b_jetAK8puppi_dnnDecorrW_2, *b_jetAK8puppi_dnnDecorrH4q_2,*b_jetAK8puppi_dnnDecorrTop_3, *b_jetAK8puppi_dnnDecorrW_3, *b_jetAK8puppi_dnnDecorrH4q_3,*b_jetAK8puppi_dnnDecorrTop_4, *b_jetAK8puppi_dnnDecorrW_4,*b_jetAK8puppi_dnnDecorrH4q_4; //Decorrelated DeepAK8
   TBranch        *b_jetAK8puppi_dnnDecorrZ,*b_jetAK8puppi_dnnDecorrZbb,*b_jetAK8puppi_dnnDecorrHbb,*b_jetAK8puppi_dnnDecorrZ_2,*b_jetAK8puppi_dnnDecorrZbb_2,*b_jetAK8puppi_dnnDecorrHbb_2,*b_jetAK8puppi_dnnDecorrZ_3,*b_jetAK8puppi_dnnDecorrZbb_3,*b_jetAK8puppi_dnnDecorrHbb_3,*b_jetAK8puppi_dnnDecorrZ_4,*b_jetAK8puppi_dnnDecorrZbb_4,*b_jetAK8puppi_dnnDecorrHbb_4;
   TBranch        *b_jetAK8puppi_dnnDecorrbb,*b_jetAK8puppi_dnnDecorrcc,*b_jetAK8puppi_dnnDecorrbbnog,*b_jetAK8puppi_dnnDecorrccnog,*b_jetAK8puppi_dnnDecorrbb_2,*b_jetAK8puppi_dnnDecorrcc_2,*b_jetAK8puppi_dnnDecorrbbnog_2,*b_jetAK8puppi_dnnDecorrccnog_2,*b_jetAK8puppi_dnnDecorrbb_3,*b_jetAK8puppi_dnnDecorrcc_3,*b_jetAK8puppi_dnnDecorrbbnog_3,*b_jetAK8puppi_dnnDecorrccnog_3,*b_jetAK8puppi_dnnDecorrbb_4,*b_jetAK8puppi_dnnDecorrcc_4,*b_jetAK8puppi_dnnDecorrbbnog_4,*b_jetAK8puppi_dnnDecorrccnog_4;
   TBranch        *b_jetAK8puppi_dnnqcd,*b_jetAK8puppi_dnntop,*b_jetAK8puppi_dnnw,*b_jetAK8puppi_dnnz,*b_jetAK8puppi_dnnzbb,*b_jetAK8puppi_dnnhbb,*b_jetAK8puppi_dnnh4q,*b_jetAK8puppi_dnnqcd_2,*b_jetAK8puppi_dnntop_2,*b_jetAK8puppi_dnnw_2,*b_jetAK8puppi_dnnz_2,*b_jetAK8puppi_dnnzbb_2,*b_jetAK8puppi_dnnhbb_2,*b_jetAK8puppi_dnnh4q_2,*b_jetAK8puppi_dnnqcd_3,*b_jetAK8puppi_dnntop_3,*b_jetAK8puppi_dnnw_3,*b_jetAK8puppi_dnnz_3,*b_jetAK8puppi_dnnzbb_3,*b_jetAK8puppi_dnnhbb_3,*b_jetAK8puppi_dnnh4q_3,*b_jetAK8puppi_dnnqcd_4,*b_jetAK8puppi_dnntop_4,*b_jetAK8puppi_dnnw_4,*b_jetAK8puppi_dnnz_4,*b_jetAK8puppi_dnnzbb_4,*b_jetAK8puppi_dnnhbb_4,*b_jetAK8puppi_dnnh4q_4;
   TBranch        *b_jetAK8puppi_dnnDecorrqcd,*b_jetAK8puppi_dnnDecorrtop,*b_jetAK8puppi_dnnDecorrw,*b_jetAK8puppi_dnnDecorrz,*b_jetAK8puppi_dnnDecorrzbb,*b_jetAK8puppi_dnnDecorrhbb,*b_jetAK8puppi_dnnDecorrh4q,*b_jetAK8puppi_dnnDecorrqcd_2,*b_jetAK8puppi_dnnDecorrtop_2,*b_jetAK8puppi_dnnDecorrw_2,*b_jetAK8puppi_dnnDecorrz_2,*b_jetAK8puppi_dnnDecorrzbb_2,*b_jetAK8puppi_dnnDecorrhbb_2,*b_jetAK8puppi_dnnDecorrh4q_2,*b_jetAK8puppi_dnnDecorrqcd_3,*b_jetAK8puppi_dnnDecorrtop_3,*b_jetAK8puppi_dnnDecorrw_3,*b_jetAK8puppi_dnnDecorrz_3,*b_jetAK8puppi_dnnDecorrzbb_3,*b_jetAK8puppi_dnnDecorrhbb_3,*b_jetAK8puppi_dnnDecorrh4q_3,*b_jetAK8puppi_dnnDecorrqcd_4,*b_jetAK8puppi_dnnDecorrtop_4,*b_jetAK8puppi_dnnDecorrw_4,*b_jetAK8puppi_dnnDecorrz_4,*b_jetAK8puppi_dnnDecorrzbb_4,*b_jetAK8puppi_dnnDecorrhbb_4,*b_jetAK8puppi_dnnDecorrh4q_4;

// gKK raw score
TBranch        *b_ak4jet_deepflavor_probb;
TBranch        *b_ak4jet_deepflavor_probc;
TBranch        *b_ak4jet_deepflavor_probg;
TBranch        *b_ak4jet_deepflavor_problepb;
TBranch        *b_ak4jet_deepflavor_probbb;
TBranch        *b_ak4jet_deepflavor_probuds;

TBranch        *b_jetAK8puppi_dnn_probTbcq;
TBranch        *b_jetAK8puppi_dnn_probTbqq;
TBranch        *b_jetAK8puppi_dnn_probTbc;
TBranch        *b_jetAK8puppi_dnn_probTbq;
TBranch        *b_jetAK8puppi_dnn_probWcq;
TBranch        *b_jetAK8puppi_dnn_probWqq;
TBranch        *b_jetAK8puppi_dnn_probZbb;
TBranch        *b_jetAK8puppi_dnn_probZcc;
TBranch        *b_jetAK8puppi_dnn_probZqq;
TBranch        *b_jetAK8puppi_dnn_probHbb;
TBranch        *b_jetAK8puppi_dnn_probHcc;
TBranch        *b_jetAK8puppi_dnn_probHqqqq;
TBranch        *b_jetAK8puppi_dnn_probQCDbb;
TBranch        *b_jetAK8puppi_dnn_probQCDcc;
TBranch        *b_jetAK8puppi_dnn_probQCDb;
TBranch        *b_jetAK8puppi_dnn_probQCDc;
TBranch        *b_jetAK8puppi_dnn_probQCDothers;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbcq;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbqq;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbc;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbq;
TBranch        *b_jetAK8puppi_dnnDecorr_probWcq;
TBranch        *b_jetAK8puppi_dnnDecorr_probWqq;
TBranch        *b_jetAK8puppi_dnnDecorr_probZbb;
TBranch        *b_jetAK8puppi_dnnDecorr_probZcc;
TBranch        *b_jetAK8puppi_dnnDecorr_probZqq;
TBranch        *b_jetAK8puppi_dnnDecorr_probHbb;
TBranch        *b_jetAK8puppi_dnnDecorr_probHcc;
TBranch        *b_jetAK8puppi_dnnDecorr_probHqqqq;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDbb;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDcc;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDb;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDc;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDothers;
TBranch        *b_jetAK8puppi_dnn_probTbcq_2;
TBranch        *b_jetAK8puppi_dnn_probTbqq_2;
TBranch        *b_jetAK8puppi_dnn_probTbc_2;
TBranch        *b_jetAK8puppi_dnn_probTbq_2;
TBranch        *b_jetAK8puppi_dnn_probWcq_2;
TBranch        *b_jetAK8puppi_dnn_probWqq_2;
TBranch        *b_jetAK8puppi_dnn_probZbb_2;
TBranch        *b_jetAK8puppi_dnn_probZcc_2;
TBranch        *b_jetAK8puppi_dnn_probZqq_2;
TBranch        *b_jetAK8puppi_dnn_probHbb_2;
TBranch        *b_jetAK8puppi_dnn_probHcc_2;
TBranch        *b_jetAK8puppi_dnn_probHqqqq_2;
TBranch        *b_jetAK8puppi_dnn_probQCDbb_2;
TBranch        *b_jetAK8puppi_dnn_probQCDcc_2;
TBranch        *b_jetAK8puppi_dnn_probQCDb_2;
TBranch        *b_jetAK8puppi_dnn_probQCDc_2;
TBranch        *b_jetAK8puppi_dnn_probQCDothers_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbcq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbqq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probWcq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probWqq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probZbb_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probZcc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probZqq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probHbb_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probHcc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probHqqqq_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDbb_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDcc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDb_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDc_2;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDothers_2;
TBranch        *b_jetAK8puppi_dnn_probTbcq_3;
TBranch        *b_jetAK8puppi_dnn_probTbqq_3;
TBranch        *b_jetAK8puppi_dnn_probTbc_3;
TBranch        *b_jetAK8puppi_dnn_probTbq_3;
TBranch        *b_jetAK8puppi_dnn_probWcq_3;
TBranch        *b_jetAK8puppi_dnn_probWqq_3;
TBranch        *b_jetAK8puppi_dnn_probZbb_3;
TBranch        *b_jetAK8puppi_dnn_probZcc_3;
TBranch        *b_jetAK8puppi_dnn_probZqq_3;
TBranch        *b_jetAK8puppi_dnn_probHbb_3;
TBranch        *b_jetAK8puppi_dnn_probHcc_3;
TBranch        *b_jetAK8puppi_dnn_probHqqqq_3;
TBranch        *b_jetAK8puppi_dnn_probQCDbb_3;
TBranch        *b_jetAK8puppi_dnn_probQCDcc_3;
TBranch        *b_jetAK8puppi_dnn_probQCDb_3;
TBranch        *b_jetAK8puppi_dnn_probQCDc_3;
TBranch        *b_jetAK8puppi_dnn_probQCDothers_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbcq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbqq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probWcq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probWqq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probZbb_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probZcc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probZqq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probHbb_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probHcc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probHqqqq_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDbb_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDcc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDb_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDc_3;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDothers_3;
TBranch        *b_jetAK8puppi_dnn_probTbcq_4;
TBranch        *b_jetAK8puppi_dnn_probTbqq_4;
TBranch        *b_jetAK8puppi_dnn_probTbc_4;
TBranch        *b_jetAK8puppi_dnn_probTbq_4;
TBranch        *b_jetAK8puppi_dnn_probWcq_4;
TBranch        *b_jetAK8puppi_dnn_probWqq_4;
TBranch        *b_jetAK8puppi_dnn_probZbb_4;
TBranch        *b_jetAK8puppi_dnn_probZcc_4;
TBranch        *b_jetAK8puppi_dnn_probZqq_4;
TBranch        *b_jetAK8puppi_dnn_probHbb_4;
TBranch        *b_jetAK8puppi_dnn_probHcc_4;
TBranch        *b_jetAK8puppi_dnn_probHqqqq_4;
TBranch        *b_jetAK8puppi_dnn_probQCDbb_4;
TBranch        *b_jetAK8puppi_dnn_probQCDcc_4;
TBranch        *b_jetAK8puppi_dnn_probQCDb_4;
TBranch        *b_jetAK8puppi_dnn_probQCDc_4;
TBranch        *b_jetAK8puppi_dnn_probQCDothers_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbcq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbqq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probTbq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probWcq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probWqq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probZbb_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probZcc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probZqq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probHbb_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probHcc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probHqqqq_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDbb_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDcc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDb_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDc_4;
TBranch        *b_jetAK8puppi_dnnDecorr_probQCDothers_4;


TBranch        *b_jetAK8puppi_tau42;   //!
TBranch        *b_jetAK8puppi_sdJEC_2;   //!
   TBranch        *b_jetAK8puppi_tau21_2;   //!
TBranch        *b_jetAK8puppi_tau1_2;   //!
TBranch        *b_jetAK8puppi_tau2_2;   //!
TBranch        *b_jetAK8puppi_tau3_2;   //!
TBranch        *b_jetAK8puppi_tau4_2;   //!  
   TBranch        *b_jetAK8puppi_tau42_2;   //!
   TBranch        *b_jetAK8puppi_ptJEC_2;   //!
   TBranch        *b_jetAK8puppi_sdcorr_2;   //!
TBranch        *b_jetAK8puppi_sdJEC_3;   //!
TBranch         *b_status_1;
TBranch         *b_status_2;
TBranch         *b_status_3;
   TBranch        *b_jetAK8puppi_tau21_3;   //!
TBranch        *b_jetAK8puppi_tau1_3;   //!
TBranch        *b_jetAK8puppi_tau2_3;   //!
TBranch        *b_jetAK8puppi_tau3_3;   //!
TBranch        *b_jetAK8puppi_tau4_3;   //!  
   TBranch        *b_jetAK8puppi_tau42_3;   //!
   TBranch        *b_jetAK8puppi_tau42_4;   //!
   TBranch        *b_jetAK8puppi_tau41_4;   //!
   TBranch        *b_jetAK8puppi_tau21_4;   //!
   TBranch        *b_jetAK8puppi_ptJEC_3;   //!
   TBranch        *b_jetAK8puppi_sdcorr_3;   //!
   TBranch        *b_massww;   //!

   TBranch        *b_gentop_phi;   //add old
   TBranch        *b_gentop_mass;   //add old
   TBranch        *b_genantitop_phi;   //add old
   TBranch        *b_genantitop_mass;   //add old

TBranch        *b_jetAK8puppi_sd_4;   //!
TBranch  *b_jetAK8puppi_ptJEC_4;
TBranch  *b_jetAK8puppi_ptJEC_5;
TBranch  *b_jetAK8puppi_ptJEC_6;
TBranch  *b_jetAK8puppi_ptJEC_7;
TBranch  *b_jetAK8puppi_ptJEC_8;
TBranch  *b_jetAK8puppi_sdJEC_4;
TBranch  *b_jetAK8puppi_sdJEC_5;
TBranch  *b_jetAK8puppi_sdJEC_6;
TBranch  *b_jetAK8puppi_sdJEC_7;
TBranch  *b_jetAK8puppi_sdJEC_8;
TBranch  *b_gen_gra_m;
TBranch  *b_gen_gra_pt;
TBranch  *b_gen_gra_eta;
TBranch  *b_gen_gra_phi;
TBranch  *b_gen_rad_m;
TBranch  *b_gen_rad_pt;
TBranch  *b_gen_rad_eta;
TBranch  *b_gen_rad_phi;
TBranch  *b_gen_tau_e;
TBranch  *b_gen_tau_pt;
TBranch  *b_gen_tau_eta;
TBranch  *b_gen_tau_phi;
TBranch  *b_gen_tau_e_2;
TBranch  *b_gen_tau_pt_2;
TBranch  *b_gen_tau_eta_2;
TBranch  *b_gen_tau_phi_2;
TBranch  *b_gen_tau_e_3;
TBranch  *b_gen_tau_pt_3;
TBranch  *b_gen_tau_eta_3;
TBranch  *b_gen_tau_phi_3;
TBranch  *b_ptGenVhad;
TBranch  *b_etaGenVhad;
TBranch  *b_phiGenVhad;
TBranch  *b_etaGenVhad_2;
TBranch  *b_phiGenVhad_2;
TBranch  *b_etaGenVhad_3;
TBranch  *b_phiGenVhad_3;
TBranch  *b_massGenVhad;
TBranch  *b_ptGenV_2;
TBranch  *b_etaGenV_2;
TBranch  *b_phiGenV_2;
TBranch  *b_massGenV_2;
TBranch  *b_ptGenV_3;
TBranch  *b_etaGenV_3;
TBranch  *b_phiGenV_3;
TBranch  *b_massGenV_3;
TBranch  *b_ptGenVlep;
TBranch  *b_etaGenVlep;
TBranch  *b_phiGenVlep;
TBranch  *b_massGenVlep;
TBranch  *b_ptGenVlep_2;
TBranch  *b_etaGenVlep_2;
TBranch  *b_phiGenVlep_2;
TBranch  *b_massGenVlep_2;
TBranch  *b_ptGenVlep_3;
TBranch  *b_etaGenVlep_3;
TBranch  *b_phiGenVlep_3;
TBranch  *b_massGenVlep_3;
TBranch  *b_ptq11;
TBranch  *b_etaq11;
TBranch  *b_phiq11;
TBranch  *b_massq11;
TBranch  *b_ptq21;
TBranch  *b_etaq21;
TBranch  *b_phiq21;
TBranch  *b_massq21;
TBranch  *b_ptq31;
TBranch  *b_etaq31;
TBranch  *b_phiq31;
TBranch  *b_massq31;
TBranch  *b_ptq12;
TBranch  *b_etaq12;
TBranch  *b_phiq12;
TBranch  *b_massq12;
TBranch  *b_ptq22;
TBranch  *b_etaq22;
TBranch  *b_phiq22;
TBranch  *b_massq22;
TBranch  *b_ptq32;
TBranch  *b_etaq32;
TBranch  *b_phiq32;
TBranch  *b_massq32; 

TBranch  *b_genw_q1_eta;
TBranch  *b_genw_q1_phi;
TBranch  *b_genw_q2_eta;
TBranch  *b_genw_q2_phi;

TBranch  *b_gent_b_eta;
TBranch  *b_gent_b_phi;
TBranch  *b_gent_b_pt;
TBranch  *b_gent_b_mass;

TBranch  *b_genantit_b_eta;
TBranch  *b_genantit_b_phi;
TBranch  *b_genantit_b_pt;
TBranch  *b_genantit_b_mass;

TBranch  *b_gent_w_eta;
TBranch  *b_gent_w_phi;
TBranch  *b_gent_w_pt;

TBranch  *b_genantit_w_eta;
TBranch  *b_genantit_w_phi;
TBranch  *b_genantit_w_pt;

TBranch  *b_gent_w_q1_eta;
TBranch  *b_gent_w_q1_phi;
TBranch  *b_gent_w_q1_pt;

TBranch  *b_genantit_w_q1_eta;
TBranch  *b_genantit_w_q1_phi;
TBranch  *b_genantit_w_q1_pt;

TBranch  *b_gent_w_q2_eta;
TBranch  *b_gent_w_q2_phi;
TBranch  *b_gent_w_q2_pt;

TBranch  *b_genantit_w_q2_eta;
TBranch  *b_genantit_w_q2_phi;
TBranch  *b_genantit_w_q2_pt;

/*
   TBranch        *b_njets;   //!
   TBranch        *b_nbtag;   //!
   TBranch        *b_jet2_pt;   //!
   TBranch        *b_jet2_btag;   //!
   TBranch        *b_jet3_pt;   //!
   TBranch        *b_jet3_btag;   //!
   TBranch        *b_massVhad_gen;   //!
   TBranch        *b_candMasspuppicorr;   //!
   TBranch        *b_delPhilepmetJEC;   //!
   TBranch        *b_delPhijetmetJEC;   //!
   TBranch        *b_delPhijetlepJEC;   //!
*/

   TString m_dataset;
   EDBR2PKUTree(TTree *tree=0, TString dataset="", Int_t IsData = 1);

   virtual ~EDBR2PKUTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree, Int_t IsData);
   virtual void     Loop(TString channelname, Double_t XS, Int_t IsData, Int_t Nevents, Double_t LUMI);// channelname= "mu" or "el"
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     endJob() ;

   private:
   TTree *ExTree;
   TFile *fout; 
   ofstream *file_cutflow;

};

#endif

#ifdef EDBR2PKUTree_cxx
EDBR2PKUTree::EDBR2PKUTree(TTree *tree, TString dataset, Int_t IsData) : fChain(0) 
{
   m_dataset = dataset;
   Init(tree, IsData);
}

EDBR2PKUTree::~EDBR2PKUTree()
{
   if (!fChain) return;
   //delete fChain->GetCurrentFile();
}

Int_t EDBR2PKUTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t EDBR2PKUTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void EDBR2PKUTree::Init(TTree *tree, Int_t IsData)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).
   ak8sj11 = 0;
   ak8sj21 = 0;
   ak8sj31 = 0;
   ak8sj12 = 0;
   ak8sj22 = 0;
   ak8sj32 = 0;
   ak8sj13 = 0;
   ak8sj23 = 0;
   ak8sj33 = 0;
   ak8sj14 = 0;
   ak8sj24 = 0;
   ak8sj34 = 0;
   ak8sj15 = 0;
   ak8sj25 = 0;
   ak8sj35 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fout = new TFile(m_dataset, "RECREATE");
   ExTree = new TTree("PKUTree","PKUTree");
   // ExTree->SetAutoSave(0);
   file_cutflow =new ofstream(m_dataset+"_eventnum.txt");

if (IsData > 0){
   ExTree->Branch("R4q_max", &R4q_max, "R4q_max/I");
   ExTree->Branch("R3q_max", &R3q_max, "R3q_max/I");
   ExTree->Branch("R2q_max", &R2q_max, "R2q_max/I");
   ExTree->Branch("Rlqq_max", &Rlqq_max, "Rlqq_max/I");
   ExTree->Branch("Rlq_max", &Rlq_max, "Rlq_max/I");
   ExTree->Branch("w_max", &w_max, "w_max/I");
   ExTree->Branch("u_max", &u_max, "u_max/I");
   ExTree->Branch("R4q_min", &R4q_min, "R4q_min/I");
   ExTree->Branch("R3q_min", &R3q_min, "R3q_min/I");
   ExTree->Branch("R2q_min", &R2q_min, "R2q_min/I");
   ExTree->Branch("Rlqq_min", &Rlqq_min, "Rlqq_min/I");
   ExTree->Branch("Rlq_min", &Rlq_min, "Rlq_min/I");
   ExTree->Branch("w_min", &w_min, "w_min/I");
   ExTree->Branch("u_min", &u_min, "u_min/I");
   ExTree->Branch("gKK_g_max", &gKK_g_max, "gKK_g_max/I");
   ExTree->Branch("gKK_g_min", &gKK_g_min, "gKK_g_min/I");
   ExTree->Branch("R3q_taudecay_max", &R3q_taudecay_max, "R3q_taudecay_max/I");
   ExTree->Branch("R2q_qq_taudecay_max", &R2q_qq_taudecay_max, "R2q_qq_taudecay_max/I");
   ExTree->Branch("R2q_qtau_taudecay_max", &R2q_qtau_taudecay_max, "R2q_qtau_taudecay_max/I");
   ExTree->Branch("R2q_tautau_taudecay_max", &R2q_tautau_taudecay_max, "R2q_tautau_taudecay_max/I");
   ExTree->Branch("Rlqq_emu_taudecay_max", &Rlqq_emu_taudecay_max, "Rlqq_emu_taudecay_max/I");
   ExTree->Branch("Rlqq_tau_taudecay_max", &Rlqq_tau_taudecay_max, "Rlqq_tau_taudecay_max/I");
   ExTree->Branch("Rlq_taudecay_max", &Rlq_taudecay_max, "Rlq_taudecay_max/I");
   ExTree->Branch("w_taudecay_max", &w_taudecay_max, "w_taudecay_max/I");
   ExTree->Branch("u_taudecay_max", &u_taudecay_max, "u_taudecay_max/I");
   ExTree->Branch("R3q_taudecay_min", &R3q_taudecay_min, "R3q_taudecay_min/I");
   ExTree->Branch("R2q_qq_taudecay_min", &R2q_qq_taudecay_min, "R2q_qq_taudecay_min/I");
   ExTree->Branch("R2q_qtau_taudecay_min", &R2q_qtau_taudecay_min, "R2q_qtau_taudecay_min/I");
   ExTree->Branch("R2q_tautau_taudecay_min", &R2q_tautau_taudecay_min, "R2q_tautau_taudecay_min/I");
   ExTree->Branch("Rlqq_emu_taudecay_min", &Rlqq_emu_taudecay_min, "Rlqq_emu_taudecay_min/I");
   ExTree->Branch("Rlqq_tau_taudecay_min", &Rlqq_tau_taudecay_min, "Rlqq_tau_taudecay_min/I");
   ExTree->Branch("Rlq_taudecay_min", &Rlq_taudecay_min, "Rlq_taudecay_min/I");
   ExTree->Branch("w_taudecay_min", &w_taudecay_min, "w_taudecay_min/I");
   ExTree->Branch("u_taudecay_min", &u_taudecay_min, "u_taudecay_min/I");
   ExTree->Branch("R3q_tauhad_max", &R3q_tauhad_max, "R3q_tauhad_max/I");
   ExTree->Branch("R2q_qtau_tauhad_max", &R2q_qtau_tauhad_max, "R2q_qtau_tauhad_max/I");
   ExTree->Branch("R2q_tautau_tauhad_max", &R2q_tautau_tauhad_max, "R2q_tautau_tauhad_max/I");
   ExTree->Branch("Rlqq_emu_tauhad_max", &Rlqq_emu_tauhad_max, "Rlqq_emu_tauhad_max/I");
   ExTree->Branch("Rlq_tauhad_max", &Rlq_tauhad_max, "Rlq_tauhad_max/I");
   ExTree->Branch("w_tauhad_max", &w_tauhad_max, "w_tauhad_max/I");
   ExTree->Branch("u_tauhad_max", &u_tauhad_max, "u_tauhad_max/I");
   ExTree->Branch("R3q_tauhad_min", &R3q_tauhad_min, "R3q_tauhad_min/I");
   ExTree->Branch("R2q_qtau_tauhad_min", &R2q_qtau_tauhad_min, "R2q_qtau_tauhad_min/I");
   ExTree->Branch("R2q_tautau_tauhad_min", &R2q_tautau_tauhad_min, "R2q_tautau_tauhad_min/I");
   ExTree->Branch("Rlqq_emu_tauhad_min", &Rlqq_emu_tauhad_min, "Rlqq_emu_tauhad_min/I");
   ExTree->Branch("Rlq_tauhad_min", &Rlq_tauhad_min, "Rlq_tauhad_min/I");
   ExTree->Branch("w_tauhad_min", &w_tauhad_min, "w_tauhad_min/I");
   ExTree->Branch("u_tauhad_min", &u_tauhad_min, "u_tauhad_min/I");
   ExTree->Branch("R3q_td_max", &R3q_td_max, "R3q_td_max/I");
   ExTree->Branch("rest_td_max", &rest_td_max, "rest_td_max/I");
   ExTree->Branch("R2q_Rlqq_td_max", &R2q_Rlqq_td_max, "R2q_Rlqq_td_max/I");
   ExTree->Branch("R3q_td_min", &R3q_td_min, "R3q_td_min/I");
   ExTree->Branch("rest_td_min", &rest_td_min, "rest_td_min/I");
   ExTree->Branch("R2q_Rlqq_td_min", &R2q_Rlqq_td_min, "R2q_Rlqq_td_min/I");
   ExTree->Branch("R4q_mid", &R4q_mid, "R4q_mid/I");
   ExTree->Branch("R3q_mid", &R3q_mid, "R3q_mid/I");
   ExTree->Branch("R2q_mid", &R2q_mid, "R2q_mid/I");
   ExTree->Branch("Rlqq_mid", &Rlqq_mid, "Rlqq_mid/I");
   ExTree->Branch("Rlq_mid", &Rlq_mid, "Rlq_mid/I");
   ExTree->Branch("w_mid", &w_mid, "w_mid/I");
   ExTree->Branch("u_mid", &u_mid, "u_mid/I");
   ExTree->Branch("gKK_g_mid", &gKK_g_mid, "gKK_g_mid/I");
   ExTree->Branch("R3q_taudecay_mid", &R3q_taudecay_mid, "R3q_taudecay_mid/I");
   ExTree->Branch("R2q_qq_taudecay_mid", &R2q_qq_taudecay_mid, "R2q_qq_taudecay_mid/I");
   ExTree->Branch("R2q_qtau_taudecay_mid", &R2q_qtau_taudecay_mid, "R2q_qtau_taudecay_mid/I");
   ExTree->Branch("R2q_tautau_taudecay_mid", &R2q_tautau_taudecay_mid, "R2q_tautau_taudecay_mid/I");
   ExTree->Branch("Rlqq_emu_taudecay_mid", &Rlqq_emu_taudecay_mid, "Rlqq_emu_taudecay_mid/I");
   ExTree->Branch("Rlqq_tau_taudecay_mid", &Rlqq_tau_taudecay_mid, "Rlqq_tau_taudecay_mid/I");
   ExTree->Branch("Rlq_taudecay_mid", &Rlq_taudecay_mid, "Rlq_taudecay_mid/I");
   ExTree->Branch("w_taudecay_mid", &w_taudecay_mid, "w_taudecay_mid/I");
   ExTree->Branch("u_taudecay_mid", &u_taudecay_mid, "u_taudecay_mid/I");
   ExTree->Branch("R3q_tauhad_mid", &R3q_tauhad_mid, "R3q_tauhad_mid/I");
   ExTree->Branch("R2q_qtau_tauhad_mid", &R2q_qtau_tauhad_mid, "R2q_qtau_tauhad_mid/I");
   ExTree->Branch("R2q_tautau_tauhad_mid", &R2q_tautau_tauhad_mid, "R2q_tautau_tauhad_mid/I");
   ExTree->Branch("Rlqq_emu_tauhad_mid", &Rlqq_emu_tauhad_mid, "Rlqq_emu_tauhad_mid/I");
   ExTree->Branch("Rlq_tauhad_mid", &Rlq_tauhad_mid, "Rlq_tauhad_mid/I");
   ExTree->Branch("w_tauhad_mid", &w_tauhad_mid, "w_tauhad_mid/I");
   ExTree->Branch("u_tauhad_mid", &u_tauhad_mid, "u_tauhad_mid/I");
   ExTree->Branch("R3q_td_mid", &R3q_td_mid, "R3q_td_mid/I");
   ExTree->Branch("rest_td_mid", &rest_td_mid, "rest_td_mid/I");
   ExTree->Branch("R2q_Rlqq_td_mid", &R2q_Rlqq_td_mid, "R2q_Rlqq_td_mid/I");


   ExTree->Branch("gen_gKK_g_pt_f",&gen_gKK_g_pt_f,"gen_gKK_g_pt_f/F");
   ExTree->Branch("gen_gKK_g_eta_f",&gen_gKK_g_eta_f,"gen_gKK_g_eta_f/F");
   ExTree->Branch("gen_gKK_g_phi_f",&gen_gKK_g_phi_f,"gen_gKK_g_phi_f/F");
   ExTree->Branch("gen_gKK_g_mass_f",&gen_gKK_g_mass_f,"gen_gKK_g_mass_f/F");

   ExTree->Branch("gen_tau_decay_2",&gen_tau_decay_2,"gen_tau_decay_2/I");
   ExTree->Branch("gen_tau_decay_3",&gen_tau_decay_3,"gen_tau_decay_3/I");

   ExTree->Branch("z_max",&z_max,"z_max/I");
   ExTree->Branch("t_max",&t_max,"t_max/I");
   ExTree->Branch("t_max_tag",&t_max_tag,"t_max_tag/I");
   ExTree->Branch("w_max",&w_max,"w_max/I");
   ExTree->Branch("g_max",&g_max,"g_max/I");
   ExTree->Branch("q_max",&q_max,"q_max/I");
   ExTree->Branch("u_max",&u_max,"u_max/I");
   ExTree->Branch("z_mid",&z_mid,"z_mid/I");
   ExTree->Branch("t_mid",&t_mid,"t_mid/I");
   ExTree->Branch("t_mid_tag",&t_mid_tag,"t_mid_tag/I");
   ExTree->Branch("w_mid",&w_mid,"w_mid/I");
   ExTree->Branch("g_mid",&g_mid,"g_mid/I");
   ExTree->Branch("q_mid",&q_mid,"q_mid/I");
   ExTree->Branch("u_mid",&u_mid,"u_mid/I");
   ExTree->Branch("z_min",&z_min,"z_min/I");
   ExTree->Branch("t_min",&t_min,"t_min/I");
   ExTree->Branch("t_min_tag",&t_min_tag,"t_min_tag/I");
   ExTree->Branch("w_min",&w_min,"w_min/I");
   ExTree->Branch("g_min",&g_min,"g_min/I");
   ExTree->Branch("q_min",&q_min,"q_min/I");
   ExTree->Branch("u_min",&u_min,"u_min/I");
   ExTree->Branch("z_4",&z_4,"z_4/I");
   ExTree->Branch("t_4",&t_4,"t_4/I");
   ExTree->Branch("t_4_tag",&t_4_tag,"t_4_tag/I");
   ExTree->Branch("w_4",&w_4,"w_4/I");
   ExTree->Branch("g_4",&g_4,"g_4/I");
   ExTree->Branch("q_4",&q_4,"q_4/I");
   ExTree->Branch("u_4",&u_4,"u_4/I");

   ExTree->Branch("t34_max_tag",&t34_max_tag,"t34_max_tag/I");
   ExTree->Branch("t34_mid_tag",&t34_mid_tag,"t34_mid_tag/I");
   ExTree->Branch("t34_min_tag",&t34_min_tag,"t34_min_tag/I");
   ExTree->Branch("t34_4_tag",&t34_4_tag,"t34_4_tag/I");
}

ExTree->Branch("MET_eta", &MET_eta, "MET_eta/F");
ExTree->Branch("MET_et", &MET_et, "MET_et/F");

ExTree->Branch("Mj",&Mj,"Mj/F");
ExTree->Branch("Mj_2",&Mj_2,"Mj_2/F");
ExTree->Branch("Mj_3",&Mj_3,"Mj_3/F");
ExTree->Branch("Mj_4",&Mj_4,"Mj_4/F");



// ExTree->Branch("FatJet_pt_1",&FatJet_pt_1,"FatJet_pt_1/F");
// ExTree->Branch("FatJet_pt_2",&FatJet_pt_2,"FatJet_pt_2/F");
// ExTree->Branch("FatJet_pt_3",&FatJet_pt_3,"FatJet_pt_3/F");
// ExTree->Branch("FatJet_pt_4",&FatJet_pt_4,"FatJet_pt_4/F");
    
// ExTree->Branch("FatJet_eta_1",&FatJet_eta_1,"FatJet_eta_1/F");
// ExTree->Branch("FatJet_eta_2",&FatJet_eta_2,"FatJet_eta_2/F");
// ExTree->Branch("FatJet_eta_3",&FatJet_eta_3,"FatJet_eta_3/F");
// ExTree->Branch("FatJet_eta_4",&FatJet_eta_4,"FatJet_eta_4/F");
    
// ExTree->Branch("FatJet_phi_1",&FatJet_phi_1,"FatJet_phi_1/F");
// ExTree->Branch("FatJet_phi_2",&FatJet_phi_2,"FatJet_phi_2/F");
// ExTree->Branch("FatJet_phi_3",&FatJet_phi_3,"FatJet_phi_3/F");
// ExTree->Branch("FatJet_phi_4",&FatJet_phi_4,"FatJet_phi_4/F");
    
// ExTree->Branch("FatJet_msoftdrop_1",&FatJet_msoftdrop_1,"FatJet_msoftdrop_1/F");
// ExTree->Branch("FatJet_msoftdrop_2",&FatJet_msoftdrop_2,"FatJet_msoftdrop_2/F");
// ExTree->Branch("FatJet_msoftdrop_3",&FatJet_msoftdrop_3,"FatJet_msoftdrop_3/F");
// ExTree->Branch("FatJet_msoftdrop_4",&FatJet_msoftdrop_4,"FatJet_msoftdrop_4/F");

ExTree->Branch("FatJet_particleNetMD_QCD_1",&FatJet_particleNetMD_QCD_1,"FatJet_particleNetMD_QCD_1/F");
ExTree->Branch("FatJet_particleNetMD_QCD_2",&FatJet_particleNetMD_QCD_2,"FatJet_particleNetMD_QCD_2/F");
ExTree->Branch("FatJet_particleNetMD_QCD_3",&FatJet_particleNetMD_QCD_3,"FatJet_particleNetMD_QCD_3/F");
    
ExTree->Branch("FatJet_particleNetMD_Xbb_1",&FatJet_particleNetMD_Xbb_1,"FatJet_particleNetMD_Xbb_1/F");
ExTree->Branch("FatJet_particleNetMD_Xbb_2",&FatJet_particleNetMD_Xbb_2,"FatJet_particleNetMD_Xbb_2/F");
ExTree->Branch("FatJet_particleNetMD_Xbb_3",&FatJet_particleNetMD_Xbb_3,"FatJet_particleNetMD_Xbb_3/F");
    
ExTree->Branch("FatJet_particleNetMD_Xcc_1",&FatJet_particleNetMD_Xcc_1,"FatJet_particleNetMD_Xcc_1/F");
ExTree->Branch("FatJet_particleNetMD_Xcc_2",&FatJet_particleNetMD_Xcc_2,"FatJet_particleNetMD_Xcc_2/F");
ExTree->Branch("FatJet_particleNetMD_Xcc_3",&FatJet_particleNetMD_Xcc_3,"FatJet_particleNetMD_Xcc_3/F");
    
ExTree->Branch("FatJet_particleNetMD_Xqq_1",&FatJet_particleNetMD_Xqq_1,"FatJet_particleNetMD_Xqq_1/F");
ExTree->Branch("FatJet_particleNetMD_Xqq_2",&FatJet_particleNetMD_Xqq_2,"FatJet_particleNetMD_Xqq_2/F");
ExTree->Branch("FatJet_particleNetMD_Xqq_3",&FatJet_particleNetMD_Xqq_3,"FatJet_particleNetMD_Xqq_3/F");
    
ExTree->Branch("FatJet_particleNet_H4qvsQCD_1",&FatJet_particleNet_H4qvsQCD_1,"FatJet_particleNet_H4qvsQCD_1/F");
ExTree->Branch("FatJet_particleNet_H4qvsQCD_2",&FatJet_particleNet_H4qvsQCD_2,"FatJet_particleNet_H4qvsQCD_2/F");
ExTree->Branch("FatJet_particleNet_H4qvsQCD_3",&FatJet_particleNet_H4qvsQCD_3,"FatJet_particleNet_H4qvsQCD_3/F");
    
ExTree->Branch("FatJet_particleNet_HbbvsQCD_1",&FatJet_particleNet_HbbvsQCD_1,"FatJet_particleNet_HbbvsQCD_1/F");
ExTree->Branch("FatJet_particleNet_HbbvsQCD_2",&FatJet_particleNet_HbbvsQCD_2,"FatJet_particleNet_HbbvsQCD_2/F");
ExTree->Branch("FatJet_particleNet_HbbvsQCD_3",&FatJet_particleNet_HbbvsQCD_3,"FatJet_particleNet_HbbvsQCD_3/F");
    
ExTree->Branch("FatJet_particleNet_HccvsQCD_1",&FatJet_particleNet_HccvsQCD_1,"FatJet_particleNet_HccvsQCD_1/F");
ExTree->Branch("FatJet_particleNet_HccvsQCD_2",&FatJet_particleNet_HccvsQCD_2,"FatJet_particleNet_HccvsQCD_2/F");
ExTree->Branch("FatJet_particleNet_HccvsQCD_3",&FatJet_particleNet_HccvsQCD_3,"FatJet_particleNet_HccvsQCD_3/F");
    
ExTree->Branch("FatJet_particleNet_QCD_1",&FatJet_particleNet_QCD_1,"FatJet_particleNet_QCD_1/F");
ExTree->Branch("FatJet_particleNet_QCD_2",&FatJet_particleNet_QCD_2,"FatJet_particleNet_QCD_2/F");
ExTree->Branch("FatJet_particleNet_QCD_3",&FatJet_particleNet_QCD_3,"FatJet_particleNet_QCD_3/F");
    
ExTree->Branch("FatJet_particleNet_TvsQCD_1",&FatJet_particleNet_TvsQCD_1,"FatJet_particleNet_TvsQCD_1/F");
ExTree->Branch("FatJet_particleNet_TvsQCD_2",&FatJet_particleNet_TvsQCD_2,"FatJet_particleNet_TvsQCD_2/F");
ExTree->Branch("FatJet_particleNet_TvsQCD_3",&FatJet_particleNet_TvsQCD_3,"FatJet_particleNet_TvsQCD_3/F");
    
ExTree->Branch("FatJet_particleNet_WvsQCD_1",&FatJet_particleNet_WvsQCD_1,"FatJet_particleNet_WvsQCD_1/F");
ExTree->Branch("FatJet_particleNet_WvsQCD_2",&FatJet_particleNet_WvsQCD_2,"FatJet_particleNet_WvsQCD_2/F");
ExTree->Branch("FatJet_particleNet_WvsQCD_3",&FatJet_particleNet_WvsQCD_3,"FatJet_particleNet_WvsQCD_3/F");
    
ExTree->Branch("FatJet_particleNet_ZvsQCD_1",&FatJet_particleNet_ZvsQCD_1,"FatJet_particleNet_ZvsQCD_1/F");
ExTree->Branch("FatJet_particleNet_ZvsQCD_2",&FatJet_particleNet_ZvsQCD_2,"FatJet_particleNet_ZvsQCD_2/F");
ExTree->Branch("FatJet_particleNet_ZvsQCD_3",&FatJet_particleNet_ZvsQCD_3,"FatJet_particleNet_ZvsQCD_3/F");
    
ExTree->Branch("FatJet_particleNet_mass_1",&FatJet_particleNet_mass_1,"FatJet_particleNet_mass_1/F");
ExTree->Branch("FatJet_particleNet_mass_2",&FatJet_particleNet_mass_2,"FatJet_particleNet_mass_2/F");
ExTree->Branch("FatJet_particleNet_mass_3",&FatJet_particleNet_mass_3,"FatJet_particleNet_mass_3/F");
    


// ExTree->Branch("jetAK8puppi_dnn_probTbcq_max", &jetAK8puppi_dnn_probTbcq_max, "jetAK8puppi_dnn_probTbcq_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbcq_mid", &jetAK8puppi_dnn_probTbcq_mid, "jetAK8puppi_dnn_probTbcq_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbcq_min", &jetAK8puppi_dnn_probTbcq_min, "jetAK8puppi_dnn_probTbcq_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbqq_max", &jetAK8puppi_dnn_probTbqq_max, "jetAK8puppi_dnn_probTbqq_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbqq_mid", &jetAK8puppi_dnn_probTbqq_mid, "jetAK8puppi_dnn_probTbqq_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbqq_min", &jetAK8puppi_dnn_probTbqq_min, "jetAK8puppi_dnn_probTbqq_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbc_max", &jetAK8puppi_dnn_probTbc_max, "jetAK8puppi_dnn_probTbc_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbc_mid", &jetAK8puppi_dnn_probTbc_mid, "jetAK8puppi_dnn_probTbc_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbc_min", &jetAK8puppi_dnn_probTbc_min, "jetAK8puppi_dnn_probTbc_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbq_max", &jetAK8puppi_dnn_probTbq_max, "jetAK8puppi_dnn_probTbq_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbq_mid", &jetAK8puppi_dnn_probTbq_mid, "jetAK8puppi_dnn_probTbq_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbq_min", &jetAK8puppi_dnn_probTbq_min, "jetAK8puppi_dnn_probTbq_min/D");

// ExTree->Branch("jetAK8puppi_dnn_probWcq_max", &jetAK8puppi_dnn_probWcq_max, "jetAK8puppi_dnn_probWcq_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probWcq_mid", &jetAK8puppi_dnn_probWcq_mid, "jetAK8puppi_dnn_probWcq_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probWcq_min", &jetAK8puppi_dnn_probWcq_min, "jetAK8puppi_dnn_probWcq_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probWqq_max", &jetAK8puppi_dnn_probWqq_max, "jetAK8puppi_dnn_probWqq_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probWqq_mid", &jetAK8puppi_dnn_probWqq_mid, "jetAK8puppi_dnn_probWqq_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probWqq_min", &jetAK8puppi_dnn_probWqq_min, "jetAK8puppi_dnn_probWqq_min/D");

// ExTree->Branch("jetAK8puppi_dnn_probZbb_max", &jetAK8puppi_dnn_probZbb_max, "jetAK8puppi_dnn_probZbb_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probZbb_mid", &jetAK8puppi_dnn_probZbb_mid, "jetAK8puppi_dnn_probZbb_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probZbb_min", &jetAK8puppi_dnn_probZbb_min, "jetAK8puppi_dnn_probZbb_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probZcc_max", &jetAK8puppi_dnn_probZcc_max, "jetAK8puppi_dnn_probZcc_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probZcc_mid", &jetAK8puppi_dnn_probZcc_mid, "jetAK8puppi_dnn_probZcc_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probZcc_min", &jetAK8puppi_dnn_probZcc_min, "jetAK8puppi_dnn_probZcc_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probZqq_max", &jetAK8puppi_dnn_probZqq_max, "jetAK8puppi_dnn_probZqq_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probZqq_mid", &jetAK8puppi_dnn_probZqq_mid, "jetAK8puppi_dnn_probZqq_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probZqq_min", &jetAK8puppi_dnn_probZqq_min, "jetAK8puppi_dnn_probZqq_min/D");

// ExTree->Branch("jetAK8puppi_dnn_probHbb_max", &jetAK8puppi_dnn_probHbb_max, "jetAK8puppi_dnn_probHbb_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probHbb_mid", &jetAK8puppi_dnn_probHbb_mid, "jetAK8puppi_dnn_probHbb_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probHbb_min", &jetAK8puppi_dnn_probHbb_min, "jetAK8puppi_dnn_probHbb_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probHcc_max", &jetAK8puppi_dnn_probHcc_max, "jetAK8puppi_dnn_probHcc_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probHcc_mid", &jetAK8puppi_dnn_probHcc_mid, "jetAK8puppi_dnn_probHcc_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probHcc_min", &jetAK8puppi_dnn_probHcc_min, "jetAK8puppi_dnn_probHcc_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probHqqqq_max", &jetAK8puppi_dnn_probHqqqq_max, "jetAK8puppi_dnn_probHqqqq_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probHqqqq_mid", &jetAK8puppi_dnn_probHqqqq_mid, "jetAK8puppi_dnn_probHqqqq_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probHqqqq_min", &jetAK8puppi_dnn_probHqqqq_min, "jetAK8puppi_dnn_probHqqqq_min/D");


// ExTree->Branch("jetAK8puppi_dnn_probQCDbb_max", &jetAK8puppi_dnn_probQCDbb_max, "jetAK8puppi_dnn_probQCDbb_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDbb_mid", &jetAK8puppi_dnn_probQCDbb_mid, "jetAK8puppi_dnn_probQCDbb_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDbb_min", &jetAK8puppi_dnn_probQCDbb_min, "jetAK8puppi_dnn_probQCDbb_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDcc_max", &jetAK8puppi_dnn_probQCDcc_max, "jetAK8puppi_dnn_probQCDcc_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDcc_mid", &jetAK8puppi_dnn_probQCDcc_mid, "jetAK8puppi_dnn_probQCDcc_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDcc_min", &jetAK8puppi_dnn_probQCDcc_min, "jetAK8puppi_dnn_probQCDcc_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDb_max", &jetAK8puppi_dnn_probQCDb_max, "jetAK8puppi_dnn_probQCDb_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDb_mid", &jetAK8puppi_dnn_probQCDb_mid, "jetAK8puppi_dnn_probQCDb_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDb_min", &jetAK8puppi_dnn_probQCDb_min, "jetAK8puppi_dnn_probQCDb_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDc_max", &jetAK8puppi_dnn_probQCDc_max, "jetAK8puppi_dnn_probQCDc_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDc_mid", &jetAK8puppi_dnn_probQCDc_mid, "jetAK8puppi_dnn_probQCDc_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDc_min", &jetAK8puppi_dnn_probQCDc_min, "jetAK8puppi_dnn_probQCDc_min/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDothers_max", &jetAK8puppi_dnn_probQCDothers_max, "jetAK8puppi_dnn_probQCDothers_max/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDothers_mid", &jetAK8puppi_dnn_probQCDothers_mid, "jetAK8puppi_dnn_probQCDothers_mid/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDothers_min", &jetAK8puppi_dnn_probQCDothers_min, "jetAK8puppi_dnn_probQCDothers_min/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbcq_max", &jetAK8puppi_dnnDecorr_probTbcq_max, "jetAK8puppi_dnnDecorr_probTbcq_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbcq_mid", &jetAK8puppi_dnnDecorr_probTbcq_mid, "jetAK8puppi_dnnDecorr_probTbcq_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbcq_min", &jetAK8puppi_dnnDecorr_probTbcq_min, "jetAK8puppi_dnnDecorr_probTbcq_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbqq_max", &jetAK8puppi_dnnDecorr_probTbqq_max, "jetAK8puppi_dnnDecorr_probTbqq_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbqq_mid", &jetAK8puppi_dnnDecorr_probTbqq_mid, "jetAK8puppi_dnnDecorr_probTbqq_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbqq_min", &jetAK8puppi_dnnDecorr_probTbqq_min, "jetAK8puppi_dnnDecorr_probTbqq_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbc_max", &jetAK8puppi_dnnDecorr_probTbc_max, "jetAK8puppi_dnnDecorr_probTbc_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbc_mid", &jetAK8puppi_dnnDecorr_probTbc_mid, "jetAK8puppi_dnnDecorr_probTbc_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbc_min", &jetAK8puppi_dnnDecorr_probTbc_min, "jetAK8puppi_dnnDecorr_probTbc_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbq_max", &jetAK8puppi_dnnDecorr_probTbq_max, "jetAK8puppi_dnnDecorr_probTbq_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbq_mid", &jetAK8puppi_dnnDecorr_probTbq_mid, "jetAK8puppi_dnnDecorr_probTbq_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbq_min", &jetAK8puppi_dnnDecorr_probTbq_min, "jetAK8puppi_dnnDecorr_probTbq_min/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probWcq_max", &jetAK8puppi_dnnDecorr_probWcq_max, "jetAK8puppi_dnnDecorr_probWcq_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probWcq_mid", &jetAK8puppi_dnnDecorr_probWcq_mid, "jetAK8puppi_dnnDecorr_probWcq_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probWcq_min", &jetAK8puppi_dnnDecorr_probWcq_min, "jetAK8puppi_dnnDecorr_probWcq_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probWqq_max", &jetAK8puppi_dnnDecorr_probWqq_max, "jetAK8puppi_dnnDecorr_probWqq_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probWqq_mid", &jetAK8puppi_dnnDecorr_probWqq_mid, "jetAK8puppi_dnnDecorr_probWqq_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probWqq_min", &jetAK8puppi_dnnDecorr_probWqq_min, "jetAK8puppi_dnnDecorr_probWqq_min/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probZbb_max", &jetAK8puppi_dnnDecorr_probZbb_max, "jetAK8puppi_dnnDecorr_probZbb_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZbb_mid", &jetAK8puppi_dnnDecorr_probZbb_mid, "jetAK8puppi_dnnDecorr_probZbb_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZbb_min", &jetAK8puppi_dnnDecorr_probZbb_min, "jetAK8puppi_dnnDecorr_probZbb_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZcc_max", &jetAK8puppi_dnnDecorr_probZcc_max, "jetAK8puppi_dnnDecorr_probZcc_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZcc_mid", &jetAK8puppi_dnnDecorr_probZcc_mid, "jetAK8puppi_dnnDecorr_probZcc_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZcc_min", &jetAK8puppi_dnnDecorr_probZcc_min, "jetAK8puppi_dnnDecorr_probZcc_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZqq_max", &jetAK8puppi_dnnDecorr_probZqq_max, "jetAK8puppi_dnnDecorr_probZqq_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZqq_mid", &jetAK8puppi_dnnDecorr_probZqq_mid, "jetAK8puppi_dnnDecorr_probZqq_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZqq_min", &jetAK8puppi_dnnDecorr_probZqq_min, "jetAK8puppi_dnnDecorr_probZqq_min/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probHbb_max", &jetAK8puppi_dnnDecorr_probHbb_max, "jetAK8puppi_dnnDecorr_probHbb_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHbb_mid", &jetAK8puppi_dnnDecorr_probHbb_mid, "jetAK8puppi_dnnDecorr_probHbb_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHbb_min", &jetAK8puppi_dnnDecorr_probHbb_min, "jetAK8puppi_dnnDecorr_probHbb_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHcc_max", &jetAK8puppi_dnnDecorr_probHcc_max, "jetAK8puppi_dnnDecorr_probHcc_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHcc_mid", &jetAK8puppi_dnnDecorr_probHcc_mid, "jetAK8puppi_dnnDecorr_probHcc_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHcc_min", &jetAK8puppi_dnnDecorr_probHcc_min, "jetAK8puppi_dnnDecorr_probHcc_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHqqqq_max", &jetAK8puppi_dnnDecorr_probHqqqq_max, "jetAK8puppi_dnnDecorr_probHqqqq_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHqqqq_mid", &jetAK8puppi_dnnDecorr_probHqqqq_mid, "jetAK8puppi_dnnDecorr_probHqqqq_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHqqqq_min", &jetAK8puppi_dnnDecorr_probHqqqq_min, "jetAK8puppi_dnnDecorr_probHqqqq_min/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDbb_max", &jetAK8puppi_dnnDecorr_probQCDbb_max, "jetAK8puppi_dnnDecorr_probQCDbb_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDbb_mid", &jetAK8puppi_dnnDecorr_probQCDbb_mid, "jetAK8puppi_dnnDecorr_probQCDbb_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDbb_min", &jetAK8puppi_dnnDecorr_probQCDbb_min, "jetAK8puppi_dnnDecorr_probQCDbb_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDcc_max", &jetAK8puppi_dnnDecorr_probQCDcc_max, "jetAK8puppi_dnnDecorr_probQCDcc_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDcc_mid", &jetAK8puppi_dnnDecorr_probQCDcc_mid, "jetAK8puppi_dnnDecorr_probQCDcc_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDcc_min", &jetAK8puppi_dnnDecorr_probQCDcc_min, "jetAK8puppi_dnnDecorr_probQCDcc_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDb_max", &jetAK8puppi_dnnDecorr_probQCDb_max, "jetAK8puppi_dnnDecorr_probQCDb_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDb_mid", &jetAK8puppi_dnnDecorr_probQCDb_mid, "jetAK8puppi_dnnDecorr_probQCDb_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDb_min", &jetAK8puppi_dnnDecorr_probQCDb_min, "jetAK8puppi_dnnDecorr_probQCDb_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDc_max", &jetAK8puppi_dnnDecorr_probQCDc_max, "jetAK8puppi_dnnDecorr_probQCDc_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDc_mid", &jetAK8puppi_dnnDecorr_probQCDc_mid, "jetAK8puppi_dnnDecorr_probQCDc_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDc_min", &jetAK8puppi_dnnDecorr_probQCDc_min, "jetAK8puppi_dnnDecorr_probQCDc_min/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDothers_max", &jetAK8puppi_dnnDecorr_probQCDothers_max, "jetAK8puppi_dnnDecorr_probQCDothers_max/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDothers_mid", &jetAK8puppi_dnnDecorr_probQCDothers_mid, "jetAK8puppi_dnnDecorr_probQCDothers_mid/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDothers_min", &jetAK8puppi_dnnDecorr_probQCDothers_min, "jetAK8puppi_dnnDecorr_probQCDothers_min/D");


// gKK adding pt ordered variables --21.7.19
// ExTree->Branch("jetAK8puppi_dnn_probTbcq",&jetAK8puppi_dnn_probTbcq,"jetAK8puppi_dnn_probTbcq/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbqq",&jetAK8puppi_dnn_probTbqq,"jetAK8puppi_dnn_probTbqq/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbc",&jetAK8puppi_dnn_probTbc,"jetAK8puppi_dnn_probTbc/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbq",&jetAK8puppi_dnn_probTbq,"jetAK8puppi_dnn_probTbq/D");

// ExTree->Branch("jetAK8puppi_dnn_probWcq",&jetAK8puppi_dnn_probWcq,"jetAK8puppi_dnn_probWcq/D");
// ExTree->Branch("jetAK8puppi_dnn_probWqq",&jetAK8puppi_dnn_probWqq,"jetAK8puppi_dnn_probWqq/D");

// ExTree->Branch("jetAK8puppi_dnn_probZbb",&jetAK8puppi_dnn_probZbb,"jetAK8puppi_dnn_probZbb/D");
// ExTree->Branch("jetAK8puppi_dnn_probZcc",&jetAK8puppi_dnn_probZcc,"jetAK8puppi_dnn_probZcc/D");
// ExTree->Branch("jetAK8puppi_dnn_probZqq",&jetAK8puppi_dnn_probZqq,"jetAK8puppi_dnn_probZqq/D");

// ExTree->Branch("jetAK8puppi_dnn_probHbb",&jetAK8puppi_dnn_probHbb,"jetAK8puppi_dnn_probHbb/D");
// ExTree->Branch("jetAK8puppi_dnn_probHcc",&jetAK8puppi_dnn_probHcc,"jetAK8puppi_dnn_probHcc/D");
// ExTree->Branch("jetAK8puppi_dnn_probHqqqq",&jetAK8puppi_dnn_probHqqqq,"jetAK8puppi_dnn_probHqqqq/D");

// ExTree->Branch("jetAK8puppi_dnn_probQCDbb",&jetAK8puppi_dnn_probQCDbb,"jetAK8puppi_dnn_probQCDbb/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDcc",&jetAK8puppi_dnn_probQCDcc,"jetAK8puppi_dnn_probQCDcc/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDb",&jetAK8puppi_dnn_probQCDb,"jetAK8puppi_dnn_probQCDb/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDc",&jetAK8puppi_dnn_probQCDc,"jetAK8puppi_dnn_probQCDc/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDothers",&jetAK8puppi_dnn_probQCDothers,"jetAK8puppi_dnn_probQCDothers/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbcq",&jetAK8puppi_dnnDecorr_probTbcq,"jetAK8puppi_dnnDecorr_probTbcq/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbqq",&jetAK8puppi_dnnDecorr_probTbqq,"jetAK8puppi_dnnDecorr_probTbqq/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbc",&jetAK8puppi_dnnDecorr_probTbc,"jetAK8puppi_dnnDecorr_probTbc/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbq",&jetAK8puppi_dnnDecorr_probTbq,"jetAK8puppi_dnnDecorr_probTbq/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probWcq",&jetAK8puppi_dnnDecorr_probWcq,"jetAK8puppi_dnnDecorr_probWcq/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probWqq",&jetAK8puppi_dnnDecorr_probWqq,"jetAK8puppi_dnnDecorr_probWqq/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probZbb",&jetAK8puppi_dnnDecorr_probZbb,"jetAK8puppi_dnnDecorr_probZbb/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZcc",&jetAK8puppi_dnnDecorr_probZcc,"jetAK8puppi_dnnDecorr_probZcc/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZqq",&jetAK8puppi_dnnDecorr_probZqq,"jetAK8puppi_dnnDecorr_probZqq/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probHbb",&jetAK8puppi_dnnDecorr_probHbb,"jetAK8puppi_dnnDecorr_probHbb/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHcc",&jetAK8puppi_dnnDecorr_probHcc,"jetAK8puppi_dnnDecorr_probHcc/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHqqqq",&jetAK8puppi_dnnDecorr_probHqqqq,"jetAK8puppi_dnnDecorr_probHqqqq/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDbb",&jetAK8puppi_dnnDecorr_probQCDbb,"jetAK8puppi_dnnDecorr_probQCDbb/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDcc",&jetAK8puppi_dnnDecorr_probQCDcc,"jetAK8puppi_dnnDecorr_probQCDcc/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDb",&jetAK8puppi_dnnDecorr_probQCDb,"jetAK8puppi_dnnDecorr_probQCDb/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDc",&jetAK8puppi_dnnDecorr_probQCDc,"jetAK8puppi_dnnDecorr_probQCDc/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDothers",&jetAK8puppi_dnnDecorr_probQCDothers,"jetAK8puppi_dnnDecorr_probQCDothers/D");

// ExTree->Branch("jetAK8puppi_dnn_probTbcq_2",&jetAK8puppi_dnn_probTbcq_2,"jetAK8puppi_dnn_probTbcq_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbqq_2",&jetAK8puppi_dnn_probTbqq_2,"jetAK8puppi_dnn_probTbqq_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbc_2",&jetAK8puppi_dnn_probTbc_2,"jetAK8puppi_dnn_probTbc_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbq_2",&jetAK8puppi_dnn_probTbq_2,"jetAK8puppi_dnn_probTbq_2/D");

// ExTree->Branch("jetAK8puppi_dnn_probWcq_2",&jetAK8puppi_dnn_probWcq_2,"jetAK8puppi_dnn_probWcq_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probWqq_2",&jetAK8puppi_dnn_probWqq_2,"jetAK8puppi_dnn_probWqq_2/D");

// ExTree->Branch("jetAK8puppi_dnn_probZbb_2",&jetAK8puppi_dnn_probZbb_2,"jetAK8puppi_dnn_probZbb_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probZcc_2",&jetAK8puppi_dnn_probZcc_2,"jetAK8puppi_dnn_probZcc_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probZqq_2",&jetAK8puppi_dnn_probZqq_2,"jetAK8puppi_dnn_probZqq_2/D");

// ExTree->Branch("jetAK8puppi_dnn_probHbb_2",&jetAK8puppi_dnn_probHbb_2,"jetAK8puppi_dnn_probHbb_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probHcc_2",&jetAK8puppi_dnn_probHcc_2,"jetAK8puppi_dnn_probHcc_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probHqqqq_2",&jetAK8puppi_dnn_probHqqqq_2,"jetAK8puppi_dnn_probHqqqq_2/D");

// ExTree->Branch("jetAK8puppi_dnn_probQCDbb_2",&jetAK8puppi_dnn_probQCDbb_2,"jetAK8puppi_dnn_probQCDbb_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDcc_2",&jetAK8puppi_dnn_probQCDcc_2,"jetAK8puppi_dnn_probQCDcc_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDb_2",&jetAK8puppi_dnn_probQCDb_2,"jetAK8puppi_dnn_probQCDb_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDc_2",&jetAK8puppi_dnn_probQCDc_2,"jetAK8puppi_dnn_probQCDc_2/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDothers_2",&jetAK8puppi_dnn_probQCDothers_2,"jetAK8puppi_dnn_probQCDothers_2/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbcq_2",&jetAK8puppi_dnnDecorr_probTbcq_2,"jetAK8puppi_dnnDecorr_probTbcq_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbqq_2",&jetAK8puppi_dnnDecorr_probTbqq_2,"jetAK8puppi_dnnDecorr_probTbqq_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbc_2",&jetAK8puppi_dnnDecorr_probTbc_2,"jetAK8puppi_dnnDecorr_probTbc_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbq_2",&jetAK8puppi_dnnDecorr_probTbq_2,"jetAK8puppi_dnnDecorr_probTbq_2/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probWcq_2",&jetAK8puppi_dnnDecorr_probWcq_2,"jetAK8puppi_dnnDecorr_probWcq_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probWqq_2",&jetAK8puppi_dnnDecorr_probWqq_2,"jetAK8puppi_dnnDecorr_probWqq_2/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probZbb_2",&jetAK8puppi_dnnDecorr_probZbb_2,"jetAK8puppi_dnnDecorr_probZbb_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZcc_2",&jetAK8puppi_dnnDecorr_probZcc_2,"jetAK8puppi_dnnDecorr_probZcc_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZqq_2",&jetAK8puppi_dnnDecorr_probZqq_2,"jetAK8puppi_dnnDecorr_probZqq_2/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probHbb_2",&jetAK8puppi_dnnDecorr_probHbb_2,"jetAK8puppi_dnnDecorr_probHbb_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHcc_2",&jetAK8puppi_dnnDecorr_probHcc_2,"jetAK8puppi_dnnDecorr_probHcc_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHqqqq_2",&jetAK8puppi_dnnDecorr_probHqqqq_2,"jetAK8puppi_dnnDecorr_probHqqqq_2/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDbb_2",&jetAK8puppi_dnnDecorr_probQCDbb_2,"jetAK8puppi_dnnDecorr_probQCDbb_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDcc_2",&jetAK8puppi_dnnDecorr_probQCDcc_2,"jetAK8puppi_dnnDecorr_probQCDcc_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDb_2",&jetAK8puppi_dnnDecorr_probQCDb_2,"jetAK8puppi_dnnDecorr_probQCDb_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDc_2",&jetAK8puppi_dnnDecorr_probQCDc_2,"jetAK8puppi_dnnDecorr_probQCDc_2/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDothers_2",&jetAK8puppi_dnnDecorr_probQCDothers_2,"jetAK8puppi_dnnDecorr_probQCDothers_2/D");

// ExTree->Branch("jetAK8puppi_dnn_probTbcq_3",&jetAK8puppi_dnn_probTbcq_3,"jetAK8puppi_dnn_probTbcq_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbqq_3",&jetAK8puppi_dnn_probTbqq_3,"jetAK8puppi_dnn_probTbqq_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbc_3",&jetAK8puppi_dnn_probTbc_3,"jetAK8puppi_dnn_probTbc_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probTbq_3",&jetAK8puppi_dnn_probTbq_3,"jetAK8puppi_dnn_probTbq_3/D");

// ExTree->Branch("jetAK8puppi_dnn_probWcq_3",&jetAK8puppi_dnn_probWcq_3,"jetAK8puppi_dnn_probWcq_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probWqq_3",&jetAK8puppi_dnn_probWqq_3,"jetAK8puppi_dnn_probWqq_3/D");

// ExTree->Branch("jetAK8puppi_dnn_probZbb_3",&jetAK8puppi_dnn_probZbb_3,"jetAK8puppi_dnn_probZbb_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probZcc_3",&jetAK8puppi_dnn_probZcc_3,"jetAK8puppi_dnn_probZcc_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probZqq_3",&jetAK8puppi_dnn_probZqq_3,"jetAK8puppi_dnn_probZqq_3/D");

// ExTree->Branch("jetAK8puppi_dnn_probHbb_3",&jetAK8puppi_dnn_probHbb_3,"jetAK8puppi_dnn_probHbb_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probHcc_3",&jetAK8puppi_dnn_probHcc_3,"jetAK8puppi_dnn_probHcc_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probHqqqq_3",&jetAK8puppi_dnn_probHqqqq_3,"jetAK8puppi_dnn_probHqqqq_3/D");

// ExTree->Branch("jetAK8puppi_dnn_probQCDbb_3",&jetAK8puppi_dnn_probQCDbb_3,"jetAK8puppi_dnn_probQCDbb_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDcc_3",&jetAK8puppi_dnn_probQCDcc_3,"jetAK8puppi_dnn_probQCDcc_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDb_3",&jetAK8puppi_dnn_probQCDb_3,"jetAK8puppi_dnn_probQCDb_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDc_3",&jetAK8puppi_dnn_probQCDc_3,"jetAK8puppi_dnn_probQCDc_3/D");
// ExTree->Branch("jetAK8puppi_dnn_probQCDothers_3",&jetAK8puppi_dnn_probQCDothers_3,"jetAK8puppi_dnn_probQCDothers_3/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbcq_3",&jetAK8puppi_dnnDecorr_probTbcq_3,"jetAK8puppi_dnnDecorr_probTbcq_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbqq_3",&jetAK8puppi_dnnDecorr_probTbqq_3,"jetAK8puppi_dnnDecorr_probTbqq_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbc_3",&jetAK8puppi_dnnDecorr_probTbc_3,"jetAK8puppi_dnnDecorr_probTbc_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probTbq_3",&jetAK8puppi_dnnDecorr_probTbq_3,"jetAK8puppi_dnnDecorr_probTbq_3/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probWcq_3",&jetAK8puppi_dnnDecorr_probWcq_3,"jetAK8puppi_dnnDecorr_probWcq_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probWqq_3",&jetAK8puppi_dnnDecorr_probWqq_3,"jetAK8puppi_dnnDecorr_probWqq_3/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probZbb_3",&jetAK8puppi_dnnDecorr_probZbb_3,"jetAK8puppi_dnnDecorr_probZbb_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZcc_3",&jetAK8puppi_dnnDecorr_probZcc_3,"jetAK8puppi_dnnDecorr_probZcc_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probZqq_3",&jetAK8puppi_dnnDecorr_probZqq_3,"jetAK8puppi_dnnDecorr_probZqq_3/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probHbb_3",&jetAK8puppi_dnnDecorr_probHbb_3,"jetAK8puppi_dnnDecorr_probHbb_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHcc_3",&jetAK8puppi_dnnDecorr_probHcc_3,"jetAK8puppi_dnnDecorr_probHcc_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probHqqqq_3",&jetAK8puppi_dnnDecorr_probHqqqq_3,"jetAK8puppi_dnnDecorr_probHqqqq_3/D");

// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDbb_3",&jetAK8puppi_dnnDecorr_probQCDbb_3,"jetAK8puppi_dnnDecorr_probQCDbb_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDcc_3",&jetAK8puppi_dnnDecorr_probQCDcc_3,"jetAK8puppi_dnnDecorr_probQCDcc_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDb_3",&jetAK8puppi_dnnDecorr_probQCDb_3,"jetAK8puppi_dnnDecorr_probQCDb_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDc_3",&jetAK8puppi_dnnDecorr_probQCDc_3,"jetAK8puppi_dnnDecorr_probQCDc_3/D");
// ExTree->Branch("jetAK8puppi_dnnDecorr_probQCDothers_3",&jetAK8puppi_dnnDecorr_probQCDothers_3,"jetAK8puppi_dnnDecorr_probQCDothers_3/D");


//       
ExTree->Branch("num_ak4jetsex", &num_ak4jetsex, "num_ak4jetsex/I");
ExTree->Branch("num_ak4jetsin", &num_ak4jetsin, "num_ak4jetsin/I");


ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
ExTree->Branch("pileupWeight", &pileupWeight, "pileupWeight/D");

   
ExTree->Branch("MJJ", &MJJ, "MJJ/D");
   
ExTree->Branch("event",&event,"event/L");
ExTree->Branch("lumi",&ls,"lumi/I");
ExTree->Branch("nPV",&nVtx,"nPV/I");

ExTree->Branch("weight", &weight, "weight/D");
  
ExTree->Branch("Mj_max",&Mj_max,"Mj_max/F");
ExTree->Branch("Mj_mid",&Mj_mid,"Mj_mid/F");
ExTree->Branch("Mj_min",&Mj_min,"Mj_min/F");
ExTree->Branch("PTj_max",&PTj_max,"PTj_max/F");
ExTree->Branch("PTj_mid",&PTj_mid,"PTj_mid/F");
ExTree->Branch("PTj_min",&PTj_min,"PTj_min/F");

  

ExTree->Branch("Etaj_max",&Etaj_max,"Etaj_max/F");
ExTree->Branch("Etaj_mid",&Etaj_mid,"Etaj_mid/F");
ExTree->Branch("Etaj_min",&Etaj_min,"Etaj_min/F");
ExTree->Branch("Phij_max",&Phij_max,"Phij_max/F");
ExTree->Branch("Phij_mid",&Phij_mid,"Phij_mid/F");
ExTree->Branch("Phij_min",&Phij_min,"Phij_min/F");
  
ExTree->Branch("PTj",&PTj,"PTj/F");
ExTree->Branch("PTj_2",&PTj_2,"PTj_2/D");
ExTree->Branch("PTj_3",&PTj_3,"PTj_3/D");
ExTree->Branch("PTj_4",&PTj_4,"PTj_4/F");
ExTree->Branch("Etaj",&Etaj,"Etaj/F");
ExTree->Branch("Etaj_2",&Etaj_2,"Etaj_2/F");
ExTree->Branch("Etaj_3",&Etaj_3,"Etaj_3/F");
ExTree->Branch("Etaj_4",&Etaj_4,"Etaj_4/F");
ExTree->Branch("Phij",&Phij,"Phij/F");
ExTree->Branch("Phij_2",&Phij_2,"Phij_2/F");
ExTree->Branch("Phij_4",&Phij_4,"Phij_4/F");
ExTree->Branch("Phij_3",&Phij_3,"Phij_3/F");


ExTree->Branch("ST",&ST,"ST/F");
ExTree->Branch("HT",&HT,"HT/F");
ExTree->Branch("Nj4",&Nj4,"Nj4/F");
ExTree->Branch("Nj8",&Nj8,"Nj8/F");
ExTree->Branch("MJJJ",&MJJJ,"MJJJ/F");
   
ExTree->Branch("nbtag",&nbtag,"nbtag/I");
ExTree->Branch("nbtag_deep",&nbtag_deep,"nbtag_deep/I");
ExTree->Branch("nbtag_deep_loose",&nbtag_deep_loose,"nbtag_deep_loose/I");
ExTree->Branch("nbtag_deep_tight",&nbtag_deep_tight,"nbtag_deep_tight/I");
ExTree->Branch("num_bJet",&num_bJet,"num_bJet/I");
ExTree->Branch("num_bJet_loose",&num_bJet_loose,"num_bJet_loose/I");
ExTree->Branch("num_bJet_tight",&num_bJet_tight,"num_bJet_tight/I");

// // gKK 21.9.7 adding inclusive b jets
ExTree->Branch("num_bJet_in",&num_bJet_in,"num_bJet_in/I");
ExTree->Branch("num_bJet_loose_in",&num_bJet_loose_in,"num_bJet_loose_in/I");
ExTree->Branch("num_bJet_tight_in",&num_bJet_tight_in,"num_bJet_tight_in/I");
ExTree->Branch("num_bJet_deep_in",&num_bJet_deep_in,"num_bJet_deep_in/I");
ExTree->Branch("num_bJet_loose_deep_in",&num_bJet_loose_deep_in,"num_bJet_loose_deep_in/I");
ExTree->Branch("num_bJet_tight_deep_in",&num_bJet_tight_deep_in,"num_bJet_tight_deep_in/I");





ExTree->Branch("MET_et",&MET_et,"MET_et/D");
ExTree->Branch("MET_phi",&MET_phi,"MET_phi/F");


ExTree->Branch("dnn_probTbcq_a",&dnn_probTbcq_a,"dnn_probTbcq_a/F");
ExTree->Branch("dnn_probTbcq_b",&dnn_probTbcq_b,"dnn_probTbcq_b/F");
ExTree->Branch("dnn_probTbcq_c",&dnn_probTbcq_c,"dnn_probTbcq_c/F");
ExTree->Branch("dnn_probTbqq_a",&dnn_probTbqq_a,"dnn_probTbqq_a/F");
ExTree->Branch("dnn_probTbqq_b",&dnn_probTbqq_b,"dnn_probTbqq_b/F");
ExTree->Branch("dnn_probTbqq_c",&dnn_probTbqq_c,"dnn_probTbqq_c/F");
ExTree->Branch("dnn_probTbc_a",&dnn_probTbc_a,"dnn_probTbc_a/F");
ExTree->Branch("dnn_probTbc_b",&dnn_probTbc_b,"dnn_probTbc_b/F");
ExTree->Branch("dnn_probTbc_c",&dnn_probTbc_c,"dnn_probTbc_c/F");
ExTree->Branch("dnn_probTbq_a",&dnn_probTbq_a,"dnn_probTbq_a/F");
ExTree->Branch("dnn_probTbq_b",&dnn_probTbq_b,"dnn_probTbq_b/F");
ExTree->Branch("dnn_probTbq_c",&dnn_probTbq_c,"dnn_probTbq_c/F");
ExTree->Branch("dnn_probWcq_a",&dnn_probWcq_a,"dnn_probWcq_a/F");
ExTree->Branch("dnn_probWcq_b",&dnn_probWcq_b,"dnn_probWcq_b/F");
ExTree->Branch("dnn_probWcq_c",&dnn_probWcq_c,"dnn_probWcq_c/F");
ExTree->Branch("dnn_probWqq_a",&dnn_probWqq_a,"dnn_probWqq_a/F");
ExTree->Branch("dnn_probWqq_b",&dnn_probWqq_b,"dnn_probWqq_b/F");
ExTree->Branch("dnn_probWqq_c",&dnn_probWqq_c,"dnn_probWqq_c/F");
ExTree->Branch("dnn_probZbb_a",&dnn_probZbb_a,"dnn_probZbb_a/F");
ExTree->Branch("dnn_probZbb_b",&dnn_probZbb_b,"dnn_probZbb_b/F");
ExTree->Branch("dnn_probZbb_c",&dnn_probZbb_c,"dnn_probZbb_c/F");
ExTree->Branch("dnn_probZcc_a",&dnn_probZcc_a,"dnn_probZcc_a/F");
ExTree->Branch("dnn_probZcc_b",&dnn_probZcc_b,"dnn_probZcc_b/F");
ExTree->Branch("dnn_probZcc_c",&dnn_probZcc_c,"dnn_probZcc_c/F");
ExTree->Branch("dnn_probZqq_a",&dnn_probZqq_a,"dnn_probZqq_a/F");
ExTree->Branch("dnn_probZqq_b",&dnn_probZqq_b,"dnn_probZqq_b/F");
ExTree->Branch("dnn_probZqq_c",&dnn_probZqq_c,"dnn_probZqq_c/F");
ExTree->Branch("dnn_probHbb_a",&dnn_probHbb_a,"dnn_probHbb_a/F");
ExTree->Branch("dnn_probHbb_b",&dnn_probHbb_b,"dnn_probHbb_b/F");
ExTree->Branch("dnn_probHbb_c",&dnn_probHbb_c,"dnn_probHbb_c/F");
ExTree->Branch("dnn_probHcc_a",&dnn_probHcc_a,"dnn_probHcc_a/F");
ExTree->Branch("dnn_probHcc_b",&dnn_probHcc_b,"dnn_probHcc_b/F");
ExTree->Branch("dnn_probHcc_c",&dnn_probHcc_c,"dnn_probHcc_c/F");
ExTree->Branch("dnn_probHqqqq_a",&dnn_probHqqqq_a,"dnn_probHqqqq_a/F");
ExTree->Branch("dnn_probHqqqq_b",&dnn_probHqqqq_b,"dnn_probHqqqq_b/F");
ExTree->Branch("dnn_probHqqqq_c",&dnn_probHqqqq_c,"dnn_probHqqqq_c/F");
ExTree->Branch("dnn_probQCDbb_a",&dnn_probQCDbb_a,"dnn_probQCDbb_a/F");
ExTree->Branch("dnn_probQCDbb_b",&dnn_probQCDbb_b,"dnn_probQCDbb_b/F");
ExTree->Branch("dnn_probQCDbb_c",&dnn_probQCDbb_c,"dnn_probQCDbb_c/F");
ExTree->Branch("dnn_probQCDcc_a",&dnn_probQCDcc_a,"dnn_probQCDcc_a/F");
ExTree->Branch("dnn_probQCDcc_b",&dnn_probQCDcc_b,"dnn_probQCDcc_b/F");
ExTree->Branch("dnn_probQCDcc_c",&dnn_probQCDcc_c,"dnn_probQCDcc_c/F");
ExTree->Branch("dnn_probQCDb_a",&dnn_probQCDb_a,"dnn_probQCDb_a/F");
ExTree->Branch("dnn_probQCDb_b",&dnn_probQCDb_b,"dnn_probQCDb_b/F");
ExTree->Branch("dnn_probQCDb_c",&dnn_probQCDb_c,"dnn_probQCDb_c/F");
ExTree->Branch("dnn_probQCDc_a",&dnn_probQCDc_a,"dnn_probQCDc_a/F");
ExTree->Branch("dnn_probQCDc_b",&dnn_probQCDc_b,"dnn_probQCDc_b/F");
ExTree->Branch("dnn_probQCDc_c",&dnn_probQCDc_c,"dnn_probQCDc_c/F");
ExTree->Branch("dnn_probQCDothers_a",&dnn_probQCDothers_a,"dnn_probQCDothers_a/F");
ExTree->Branch("dnn_probQCDothers_b",&dnn_probQCDothers_b,"dnn_probQCDothers_b/F");
ExTree->Branch("dnn_probQCDothers_c",&dnn_probQCDothers_c,"dnn_probQCDothers_c/F");
ExTree->Branch("dnnDecorr_probTbcq_a",&dnnDecorr_probTbcq_a,"dnnDecorr_probTbcq_a/F");
ExTree->Branch("dnnDecorr_probTbcq_b",&dnnDecorr_probTbcq_b,"dnnDecorr_probTbcq_b/F");
ExTree->Branch("dnnDecorr_probTbcq_c",&dnnDecorr_probTbcq_c,"dnnDecorr_probTbcq_c/F");
ExTree->Branch("dnnDecorr_probTbqq_a",&dnnDecorr_probTbqq_a,"dnnDecorr_probTbqq_a/F");
ExTree->Branch("dnnDecorr_probTbqq_b",&dnnDecorr_probTbqq_b,"dnnDecorr_probTbqq_b/F");
ExTree->Branch("dnnDecorr_probTbqq_c",&dnnDecorr_probTbqq_c,"dnnDecorr_probTbqq_c/F");
ExTree->Branch("dnnDecorr_probTbc_a",&dnnDecorr_probTbc_a,"dnnDecorr_probTbc_a/F");
ExTree->Branch("dnnDecorr_probTbc_b",&dnnDecorr_probTbc_b,"dnnDecorr_probTbc_b/F");
ExTree->Branch("dnnDecorr_probTbc_c",&dnnDecorr_probTbc_c,"dnnDecorr_probTbc_c/F");
ExTree->Branch("dnnDecorr_probTbq_a",&dnnDecorr_probTbq_a,"dnnDecorr_probTbq_a/F");
ExTree->Branch("dnnDecorr_probTbq_b",&dnnDecorr_probTbq_b,"dnnDecorr_probTbq_b/F");
ExTree->Branch("dnnDecorr_probTbq_c",&dnnDecorr_probTbq_c,"dnnDecorr_probTbq_c/F");
ExTree->Branch("dnnDecorr_probWcq_a",&dnnDecorr_probWcq_a,"dnnDecorr_probWcq_a/F");
ExTree->Branch("dnnDecorr_probWcq_b",&dnnDecorr_probWcq_b,"dnnDecorr_probWcq_b/F");
ExTree->Branch("dnnDecorr_probWcq_c",&dnnDecorr_probWcq_c,"dnnDecorr_probWcq_c/F");
ExTree->Branch("dnnDecorr_probWqq_a",&dnnDecorr_probWqq_a,"dnnDecorr_probWqq_a/F");
ExTree->Branch("dnnDecorr_probWqq_b",&dnnDecorr_probWqq_b,"dnnDecorr_probWqq_b/F");
ExTree->Branch("dnnDecorr_probWqq_c",&dnnDecorr_probWqq_c,"dnnDecorr_probWqq_c/F");
ExTree->Branch("dnnDecorr_probZbb_a",&dnnDecorr_probZbb_a,"dnnDecorr_probZbb_a/F");
ExTree->Branch("dnnDecorr_probZbb_b",&dnnDecorr_probZbb_b,"dnnDecorr_probZbb_b/F");
ExTree->Branch("dnnDecorr_probZbb_c",&dnnDecorr_probZbb_c,"dnnDecorr_probZbb_c/F");
ExTree->Branch("dnnDecorr_probZcc_a",&dnnDecorr_probZcc_a,"dnnDecorr_probZcc_a/F");
ExTree->Branch("dnnDecorr_probZcc_b",&dnnDecorr_probZcc_b,"dnnDecorr_probZcc_b/F");
ExTree->Branch("dnnDecorr_probZcc_c",&dnnDecorr_probZcc_c,"dnnDecorr_probZcc_c/F");
ExTree->Branch("dnnDecorr_probZqq_a",&dnnDecorr_probZqq_a,"dnnDecorr_probZqq_a/F");
ExTree->Branch("dnnDecorr_probZqq_b",&dnnDecorr_probZqq_b,"dnnDecorr_probZqq_b/F");
ExTree->Branch("dnnDecorr_probZqq_c",&dnnDecorr_probZqq_c,"dnnDecorr_probZqq_c/F");
ExTree->Branch("dnnDecorr_probHbb_a",&dnnDecorr_probHbb_a,"dnnDecorr_probHbb_a/F");
ExTree->Branch("dnnDecorr_probHbb_b",&dnnDecorr_probHbb_b,"dnnDecorr_probHbb_b/F");
ExTree->Branch("dnnDecorr_probHbb_c",&dnnDecorr_probHbb_c,"dnnDecorr_probHbb_c/F");
ExTree->Branch("dnnDecorr_probHcc_a",&dnnDecorr_probHcc_a,"dnnDecorr_probHcc_a/F");
ExTree->Branch("dnnDecorr_probHcc_b",&dnnDecorr_probHcc_b,"dnnDecorr_probHcc_b/F");
ExTree->Branch("dnnDecorr_probHcc_c",&dnnDecorr_probHcc_c,"dnnDecorr_probHcc_c/F");
ExTree->Branch("dnnDecorr_probHqqqq_a",&dnnDecorr_probHqqqq_a,"dnnDecorr_probHqqqq_a/F");
ExTree->Branch("dnnDecorr_probHqqqq_b",&dnnDecorr_probHqqqq_b,"dnnDecorr_probHqqqq_b/F");
ExTree->Branch("dnnDecorr_probHqqqq_c",&dnnDecorr_probHqqqq_c,"dnnDecorr_probHqqqq_c/F");
ExTree->Branch("dnnDecorr_probQCDbb_a",&dnnDecorr_probQCDbb_a,"dnnDecorr_probQCDbb_a/F");
ExTree->Branch("dnnDecorr_probQCDbb_b",&dnnDecorr_probQCDbb_b,"dnnDecorr_probQCDbb_b/F");
ExTree->Branch("dnnDecorr_probQCDbb_c",&dnnDecorr_probQCDbb_c,"dnnDecorr_probQCDbb_c/F");
ExTree->Branch("dnnDecorr_probQCDcc_a",&dnnDecorr_probQCDcc_a,"dnnDecorr_probQCDcc_a/F");
ExTree->Branch("dnnDecorr_probQCDcc_b",&dnnDecorr_probQCDcc_b,"dnnDecorr_probQCDcc_b/F");
ExTree->Branch("dnnDecorr_probQCDcc_c",&dnnDecorr_probQCDcc_c,"dnnDecorr_probQCDcc_c/F");
ExTree->Branch("dnnDecorr_probQCDb_a",&dnnDecorr_probQCDb_a,"dnnDecorr_probQCDb_a/F");
ExTree->Branch("dnnDecorr_probQCDb_b",&dnnDecorr_probQCDb_b,"dnnDecorr_probQCDb_b/F");
ExTree->Branch("dnnDecorr_probQCDb_c",&dnnDecorr_probQCDb_c,"dnnDecorr_probQCDb_c/F");
ExTree->Branch("dnnDecorr_probQCDc_a",&dnnDecorr_probQCDc_a,"dnnDecorr_probQCDc_a/F");
ExTree->Branch("dnnDecorr_probQCDc_b",&dnnDecorr_probQCDc_b,"dnnDecorr_probQCDc_b/F");
ExTree->Branch("dnnDecorr_probQCDc_c",&dnnDecorr_probQCDc_c,"dnnDecorr_probQCDc_c/F");
ExTree->Branch("dnnDecorr_probQCDothers_a",&dnnDecorr_probQCDothers_a,"dnnDecorr_probQCDothers_a/F");
ExTree->Branch("dnnDecorr_probQCDothers_b",&dnnDecorr_probQCDothers_b,"dnnDecorr_probQCDothers_b/F");
ExTree->Branch("dnnDecorr_probQCDothers_c",&dnnDecorr_probQCDothers_c,"dnnDecorr_probQCDothers_c/F");

ExTree->Branch("Mj_a",&Mj_a,"Mj_a/F");
ExTree->Branch("Mj_b",&Mj_b,"Mj_b/F");
ExTree->Branch("Mj_c",&Mj_c,"Mj_c/F");
ExTree->Branch("PTj_a",&PTj_a,"PTj_a/F");
ExTree->Branch("PTj_b",&PTj_b,"PTj_b/F");
ExTree->Branch("PTj_c",&PTj_c,"PTj_c/F");
ExTree->Branch("Etaj_a",&Etaj_a,"Etaj_a/F");
ExTree->Branch("Etaj_b",&Etaj_b,"Etaj_b/F");
ExTree->Branch("Etaj_c",&Etaj_c,"Etaj_c/F");
ExTree->Branch("Phij_a",&Phij_a,"Phij_a/F");
ExTree->Branch("Phij_b",&Phij_b,"Phij_b/F");
ExTree->Branch("Phij_c",&Phij_c,"Phij_c/F");


ExTree->Branch("dnnTop_a",&dnnTop_a,"dnnTop_a/F");
ExTree->Branch("dnnTop_b",&dnnTop_b,"dnnTop_b/F");
ExTree->Branch("dnnTop_c",&dnnTop_c,"dnnTop_c/F");
ExTree->Branch("dnnW_a",&dnnW_a,"dnnW_a/F");
ExTree->Branch("dnnW_b",&dnnW_b,"dnnW_b/F");
ExTree->Branch("dnnW_c",&dnnW_c,"dnnW_c/F");
ExTree->Branch("dnnH4q_a",&dnnH4q_a,"dnnH4q_a/F");
ExTree->Branch("dnnH4q_b",&dnnH4q_b,"dnnH4q_b/F");
ExTree->Branch("dnnH4q_c",&dnnH4q_c,"dnnH4q_c/F");
ExTree->Branch("dnnZ_a",&dnnZ_a,"dnnZ_a/F");
ExTree->Branch("dnnZ_b",&dnnZ_b,"dnnZ_b/F");
ExTree->Branch("dnnZ_c",&dnnZ_c,"dnnZ_c/F");
ExTree->Branch("dnnZbb_a",&dnnZbb_a,"dnnZbb_a/F");
ExTree->Branch("dnnZbb_b",&dnnZbb_b,"dnnZbb_b/F");
ExTree->Branch("dnnZbb_c",&dnnZbb_c,"dnnZbb_c/F");
ExTree->Branch("dnnHbb_a",&dnnHbb_a,"dnnHbb_a/F");
ExTree->Branch("dnnHbb_b",&dnnHbb_b,"dnnHbb_b/F");
ExTree->Branch("dnnHbb_c",&dnnHbb_c,"dnnHbb_c/F");
ExTree->Branch("dnnDecorrTop_a",&dnnDecorrTop_a,"dnnDecorrTop_a/F");
ExTree->Branch("dnnDecorrTop_b",&dnnDecorrTop_b,"dnnDecorrTop_b/F");
ExTree->Branch("dnnDecorrTop_c",&dnnDecorrTop_c,"dnnDecorrTop_c/F");
ExTree->Branch("dnnDecorrW_a",&dnnDecorrW_a,"dnnDecorrW_a/F");
ExTree->Branch("dnnDecorrW_b",&dnnDecorrW_b,"dnnDecorrW_b/F");
ExTree->Branch("dnnDecorrW_c",&dnnDecorrW_c,"dnnDecorrW_c/F");
ExTree->Branch("dnnDecorrH4q_a",&dnnDecorrH4q_a,"dnnDecorrH4q_a/F");
ExTree->Branch("dnnDecorrH4q_b",&dnnDecorrH4q_b,"dnnDecorrH4q_b/F");
ExTree->Branch("dnnDecorrH4q_c",&dnnDecorrH4q_c,"dnnDecorrH4q_c/F");
ExTree->Branch("dnnDecorrZ_a",&dnnDecorrZ_a,"dnnDecorrZ_a/F");
ExTree->Branch("dnnDecorrZ_b",&dnnDecorrZ_b,"dnnDecorrZ_b/F");
ExTree->Branch("dnnDecorrZ_c",&dnnDecorrZ_c,"dnnDecorrZ_c/F");
ExTree->Branch("dnnDecorrZbb_a",&dnnDecorrZbb_a,"dnnDecorrZbb_a/F");
ExTree->Branch("dnnDecorrZbb_b",&dnnDecorrZbb_b,"dnnDecorrZbb_b/F");
ExTree->Branch("dnnDecorrZbb_c",&dnnDecorrZbb_c,"dnnDecorrZbb_c/F");
ExTree->Branch("dnnDecorrHbb_a",&dnnDecorrHbb_a,"dnnDecorrHbb_a/F");
ExTree->Branch("dnnDecorrHbb_b",&dnnDecorrHbb_b,"dnnDecorrHbb_b/F");
ExTree->Branch("dnnDecorrHbb_c",&dnnDecorrHbb_c,"dnnDecorrHbb_c/F");
ExTree->Branch("dnnDecorrbb_a",&dnnDecorrbb_a,"dnnDecorrbb_a/F");
ExTree->Branch("dnnDecorrbb_b",&dnnDecorrbb_b,"dnnDecorrbb_b/F");
ExTree->Branch("dnnDecorrbb_c",&dnnDecorrbb_c,"dnnDecorrbb_c/F");
ExTree->Branch("dnnDecorrcc_a",&dnnDecorrcc_a,"dnnDecorrcc_a/F");
ExTree->Branch("dnnDecorrcc_b",&dnnDecorrcc_b,"dnnDecorrcc_b/F");
ExTree->Branch("dnnDecorrcc_c",&dnnDecorrcc_c,"dnnDecorrcc_c/F");
ExTree->Branch("dnnDecorrbbnog_a",&dnnDecorrbbnog_a,"dnnDecorrbbnog_a/F");
ExTree->Branch("dnnDecorrbbnog_b",&dnnDecorrbbnog_b,"dnnDecorrbbnog_b/F");
ExTree->Branch("dnnDecorrbbnog_c",&dnnDecorrbbnog_c,"dnnDecorrbbnog_c/F");
ExTree->Branch("dnnDecorrccnog_a",&dnnDecorrccnog_a,"dnnDecorrccnog_a/F");
ExTree->Branch("dnnDecorrccnog_b",&dnnDecorrccnog_b,"dnnDecorrccnog_b/F");
ExTree->Branch("dnnDecorrccnog_c",&dnnDecorrccnog_c,"dnnDecorrccnog_c/F");
ExTree->Branch("dnnqcd_a",&dnnqcd_a,"dnnqcd_a/F");
ExTree->Branch("dnnqcd_b",&dnnqcd_b,"dnnqcd_b/F");
ExTree->Branch("dnnqcd_c",&dnnqcd_c,"dnnqcd_c/F");
ExTree->Branch("dnntop_a",&dnntop_a,"dnntop_a/F");
ExTree->Branch("dnntop_b",&dnntop_b,"dnntop_b/F");
ExTree->Branch("dnntop_c",&dnntop_c,"dnntop_c/F");
ExTree->Branch("dnnw_a",&dnnw_a,"dnnw_a/F");
ExTree->Branch("dnnw_b",&dnnw_b,"dnnw_b/F");
ExTree->Branch("dnnw_c",&dnnw_c,"dnnw_c/F");
ExTree->Branch("dnnz_a",&dnnz_a,"dnnz_a/F");
ExTree->Branch("dnnz_b",&dnnz_b,"dnnz_b/F");
ExTree->Branch("dnnz_c",&dnnz_c,"dnnz_c/F");
ExTree->Branch("dnnzbb_a",&dnnzbb_a,"dnnzbb_a/F");
ExTree->Branch("dnnzbb_b",&dnnzbb_b,"dnnzbb_b/F");
ExTree->Branch("dnnzbb_c",&dnnzbb_c,"dnnzbb_c/F");
ExTree->Branch("dnnhbb_a",&dnnhbb_a,"dnnhbb_a/F");
ExTree->Branch("dnnhbb_b",&dnnhbb_b,"dnnhbb_b/F");
ExTree->Branch("dnnhbb_c",&dnnhbb_c,"dnnhbb_c/F");
ExTree->Branch("dnnh4q_a",&dnnh4q_a,"dnnh4q_a/F");
ExTree->Branch("dnnh4q_b",&dnnh4q_b,"dnnh4q_b/F");
ExTree->Branch("dnnh4q_c",&dnnh4q_c,"dnnh4q_c/F");
ExTree->Branch("dnnDecorrqcd_a",&dnnDecorrqcd_a,"dnnDecorrqcd_a/F");
ExTree->Branch("dnnDecorrqcd_b",&dnnDecorrqcd_b,"dnnDecorrqcd_b/F");
ExTree->Branch("dnnDecorrqcd_c",&dnnDecorrqcd_c,"dnnDecorrqcd_c/F");
ExTree->Branch("dnnDecorrtop_a",&dnnDecorrtop_a,"dnnDecorrtop_a/F");
ExTree->Branch("dnnDecorrtop_b",&dnnDecorrtop_b,"dnnDecorrtop_b/F");
ExTree->Branch("dnnDecorrtop_c",&dnnDecorrtop_c,"dnnDecorrtop_c/F");
ExTree->Branch("dnnDecorrw_a",&dnnDecorrw_a,"dnnDecorrw_a/F");
ExTree->Branch("dnnDecorrw_b",&dnnDecorrw_b,"dnnDecorrw_b/F");
ExTree->Branch("dnnDecorrw_c",&dnnDecorrw_c,"dnnDecorrw_c/F");
ExTree->Branch("dnnDecorrz_a",&dnnDecorrz_a,"dnnDecorrz_a/F");
ExTree->Branch("dnnDecorrz_b",&dnnDecorrz_b,"dnnDecorrz_b/F");
ExTree->Branch("dnnDecorrz_c",&dnnDecorrz_c,"dnnDecorrz_c/F");
ExTree->Branch("dnnDecorrzbb_a",&dnnDecorrzbb_a,"dnnDecorrzbb_a/F");
ExTree->Branch("dnnDecorrzbb_b",&dnnDecorrzbb_b,"dnnDecorrzbb_b/F");
ExTree->Branch("dnnDecorrzbb_c",&dnnDecorrzbb_c,"dnnDecorrzbb_c/F");
ExTree->Branch("dnnDecorrhbb_a",&dnnDecorrhbb_a,"dnnDecorrhbb_a/F");
ExTree->Branch("dnnDecorrhbb_b",&dnnDecorrhbb_b,"dnnDecorrhbb_b/F");
ExTree->Branch("dnnDecorrhbb_c",&dnnDecorrhbb_c,"dnnDecorrhbb_c/F");
ExTree->Branch("dnnDecorrh4q_a",&dnnDecorrh4q_a,"dnnDecorrh4q_a/F");
ExTree->Branch("dnnDecorrh4q_b",&dnnDecorrh4q_b,"dnnDecorrh4q_b/F");
ExTree->Branch("dnnDecorrh4q_c",&dnnDecorrh4q_c,"dnnDecorrh4q_c/F");
// ==================== gKK 21.9.25 =========================
// ==================== gKK 21.9.25 =========================
// ==================== gKK 21.9.25 =========================

fChain->SetBranchAddress("jetAK8puppi_pt",&jetAK8puppi_pt,&b_jetAK8puppi_pt);
fChain->SetBranchAddress("jetAK8puppi_pt_2",&jetAK8puppi_pt_2,&b_jetAK8puppi_pt_2);
fChain->SetBranchAddress("jetAK8puppi_pt_3",&jetAK8puppi_pt_3,&b_jetAK8puppi_pt_3);
fChain->SetBranchAddress("jetAK8puppi_eta",&jetAK8puppi_eta,&b_jetAK8puppi_eta);
fChain->SetBranchAddress("jetAK8puppi_eta_2",&jetAK8puppi_eta_2,&b_jetAK8puppi_eta_2);
fChain->SetBranchAddress("jetAK8puppi_eta_3",&jetAK8puppi_eta_3,&b_jetAK8puppi_eta_3);
fChain->SetBranchAddress("jetAK8puppi_phi",&jetAK8puppi_phi,&b_jetAK8puppi_phi);
fChain->SetBranchAddress("jetAK8puppi_phi_2",&jetAK8puppi_phi_2,&b_jetAK8puppi_phi_2);
fChain->SetBranchAddress("jetAK8puppi_phi_3",&jetAK8puppi_phi_3,&b_jetAK8puppi_phi_3);
fChain->SetBranchAddress("jetAK8puppi_sd",&jetAK8puppi_sd,&b_jetAK8puppi_sd);
fChain->SetBranchAddress("jetAK8puppi_sd_2",&jetAK8puppi_sd_2,&b_jetAK8puppi_sd_2);
fChain->SetBranchAddress("jetAK8puppi_sd_3",&jetAK8puppi_sd_3,&b_jetAK8puppi_sd_3);

fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);

fChain->SetBranchAddress("usenumber3",&usenumber3,&b_usenumber3);
fChain->SetBranchAddress("usenumber2",&usenumber2,&b_usenumber2);
fChain->SetBranchAddress("usenumber1",&usenumber1,&b_usenumber1);

// for the Genparticle

b_GenPart_eta_ = fChain->GetBranch("GenPart_eta");
if (b_GenPart_eta_) { b_GenPart_eta_->SetAddress(&GenPart_eta_);}
    
b_GenPart_genPartIdxMother_ = fChain->GetBranch("GenPart_genPartIdxMother");
if (b_GenPart_genPartIdxMother_) { b_GenPart_genPartIdxMother_->SetAddress(&GenPart_genPartIdxMother_);}
    
b_GenPart_mass_ = fChain->GetBranch("GenPart_mass");
if (b_GenPart_mass_) { b_GenPart_mass_->SetAddress(&GenPart_mass_);}
    
b_GenPart_pdgId_ = fChain->GetBranch("GenPart_pdgId");
if (b_GenPart_pdgId_) { b_GenPart_pdgId_->SetAddress(&GenPart_pdgId_);}
    
b_GenPart_phi_ = fChain->GetBranch("GenPart_phi");
if (b_GenPart_phi_) { b_GenPart_phi_->SetAddress(&GenPart_phi_);}
    
b_GenPart_pt_ = fChain->GetBranch("GenPart_pt");
if (b_GenPart_pt_) { b_GenPart_pt_->SetAddress(&GenPart_pt_);}
    
b_GenPart_status_ = fChain->GetBranch("GenPart_status");
if (b_GenPart_status_) { b_GenPart_status_->SetAddress(&GenPart_status_);}
    
b_GenPart_statusFlags_ = fChain->GetBranch("GenPart_statusFlags");
if (b_GenPart_statusFlags_) { b_GenPart_statusFlags_->SetAddress(&GenPart_statusFlags_);}



b_Jet_btagDeepB_ = fChain->GetBranch("Jet_btagDeepB");
if (b_Jet_btagDeepB_) { b_Jet_btagDeepB_->SetAddress(&Jet_btagDeepB_);}
    
b_Jet_btagDeepFlavB_ = fChain->GetBranch("Jet_btagDeepFlavB");
if (b_Jet_btagDeepFlavB_) { b_Jet_btagDeepFlavB_->SetAddress(&Jet_btagDeepFlavB_);}
    
b_Jet_btagDeepFlavCvB_ = fChain->GetBranch("Jet_btagDeepFlavCvB");
if (b_Jet_btagDeepFlavCvB_) { b_Jet_btagDeepFlavCvB_->SetAddress(&Jet_btagDeepFlavCvB_);}
    
b_Jet_btagDeepFlavCvL_ = fChain->GetBranch("Jet_btagDeepFlavCvL");
if (b_Jet_btagDeepFlavCvL_) { b_Jet_btagDeepFlavCvL_->SetAddress(&Jet_btagDeepFlavCvL_);}
    
b_Jet_btagDeepFlavQG_ = fChain->GetBranch("Jet_btagDeepFlavQG");
if (b_Jet_btagDeepFlavQG_) { b_Jet_btagDeepFlavQG_->SetAddress(&Jet_btagDeepFlavQG_);}
    
b_Jet_eta_ = fChain->GetBranch("Jet_eta");
if (b_Jet_eta_) { b_Jet_eta_->SetAddress(&Jet_eta_);}
    
b_Jet_hadronFlavour_ = fChain->GetBranch("Jet_hadronFlavour");
if (b_Jet_hadronFlavour_) { b_Jet_hadronFlavour_->SetAddress(&Jet_hadronFlavour_);}
    
b_Jet_jetId_ = fChain->GetBranch("Jet_jetId");
if (b_Jet_jetId_) { b_Jet_jetId_->SetAddress(&Jet_jetId_);}
    
b_Jet_mass_ = fChain->GetBranch("Jet_mass");
if (b_Jet_mass_) { b_Jet_mass_->SetAddress(&Jet_mass_);}
    
b_Jet_partonFlavour_ = fChain->GetBranch("Jet_partonFlavour");
if (b_Jet_partonFlavour_) { b_Jet_partonFlavour_->SetAddress(&Jet_partonFlavour_);}
    
b_Jet_phi_ = fChain->GetBranch("Jet_phi");
if (b_Jet_phi_) { b_Jet_phi_->SetAddress(&Jet_phi_);}
    
b_Jet_pt_ = fChain->GetBranch("Jet_pt");
if (b_Jet_pt_) { b_Jet_pt_->SetAddress(&Jet_pt_);}
    
b_Jet_puId_ = fChain->GetBranch("Jet_puId");
if (b_Jet_puId_) { b_Jet_puId_->SetAddress(&Jet_puId_);}
    
b_Jet_puIdDisc_ = fChain->GetBranch("Jet_puIdDisc");
if (b_Jet_puIdDisc_) { b_Jet_puIdDisc_->SetAddress(&Jet_puIdDisc_);}
    
b_Jet_qgl_ = fChain->GetBranch("Jet_qgl");
if (b_Jet_qgl_) { b_Jet_qgl_->SetAddress(&Jet_qgl_);}
    
b_Jet_rawFactor_ = fChain->GetBranch("Jet_rawFactor");
if (b_Jet_rawFactor_) { b_Jet_rawFactor_->SetAddress(&Jet_rawFactor_);}
    
    
   
b_FatJet_pt_ = fChain->GetBranch("FatJet_pt");
if (b_FatJet_pt_) { b_FatJet_pt_->SetAddress(&FatJet_pt_);}
    
b_FatJet_eta_ = fChain->GetBranch("FatJet_eta");
if (b_FatJet_eta_) { b_FatJet_eta_->SetAddress(&FatJet_eta_);}
    
b_FatJet_phi_ = fChain->GetBranch("FatJet_phi");
if (b_FatJet_phi_) { b_FatJet_phi_->SetAddress(&FatJet_phi_);}
    
b_FatJet_msoftdrop_ = fChain->GetBranch("FatJet_msoftdrop");
if (b_FatJet_msoftdrop_) { b_FatJet_msoftdrop_->SetAddress(&FatJet_msoftdrop_);}
    

b_FatJet_deepTagMD_probHbb_ = fChain->GetBranch("FatJet_deepTagMD_probHbb");
if (b_FatJet_deepTagMD_probHbb_) { b_FatJet_deepTagMD_probHbb_->SetAddress(&FatJet_deepTagMD_probHbb_);}
    
b_FatJet_deepTagMD_probHcc_ = fChain->GetBranch("FatJet_deepTagMD_probHcc");
if (b_FatJet_deepTagMD_probHcc_) { b_FatJet_deepTagMD_probHcc_->SetAddress(&FatJet_deepTagMD_probHcc_);}
    
b_FatJet_deepTagMD_probHqqqq_ = fChain->GetBranch("FatJet_deepTagMD_probHqqqq");
if (b_FatJet_deepTagMD_probHqqqq_) { b_FatJet_deepTagMD_probHqqqq_->SetAddress(&FatJet_deepTagMD_probHqqqq_);}
    
b_FatJet_deepTagMD_probQCDb_ = fChain->GetBranch("FatJet_deepTagMD_probQCDb");
if (b_FatJet_deepTagMD_probQCDb_) { b_FatJet_deepTagMD_probQCDb_->SetAddress(&FatJet_deepTagMD_probQCDb_);}
    
b_FatJet_deepTagMD_probQCDbb_ = fChain->GetBranch("FatJet_deepTagMD_probQCDbb");
if (b_FatJet_deepTagMD_probQCDbb_) { b_FatJet_deepTagMD_probQCDbb_->SetAddress(&FatJet_deepTagMD_probQCDbb_);}
    
b_FatJet_deepTagMD_probQCDc_ = fChain->GetBranch("FatJet_deepTagMD_probQCDc");
if (b_FatJet_deepTagMD_probQCDc_) { b_FatJet_deepTagMD_probQCDc_->SetAddress(&FatJet_deepTagMD_probQCDc_);}
    
b_FatJet_deepTagMD_probQCDcc_ = fChain->GetBranch("FatJet_deepTagMD_probQCDcc");
if (b_FatJet_deepTagMD_probQCDcc_) { b_FatJet_deepTagMD_probQCDcc_->SetAddress(&FatJet_deepTagMD_probQCDcc_);}
    
b_FatJet_deepTagMD_probQCDothers_ = fChain->GetBranch("FatJet_deepTagMD_probQCDothers");
if (b_FatJet_deepTagMD_probQCDothers_) { b_FatJet_deepTagMD_probQCDothers_->SetAddress(&FatJet_deepTagMD_probQCDothers_);}
    
b_FatJet_deepTagMD_probTbc_ = fChain->GetBranch("FatJet_deepTagMD_probTbc");
if (b_FatJet_deepTagMD_probTbc_) { b_FatJet_deepTagMD_probTbc_->SetAddress(&FatJet_deepTagMD_probTbc_);}
    
b_FatJet_deepTagMD_probTbcq_ = fChain->GetBranch("FatJet_deepTagMD_probTbcq");
if (b_FatJet_deepTagMD_probTbcq_) { b_FatJet_deepTagMD_probTbcq_->SetAddress(&FatJet_deepTagMD_probTbcq_);}
    
b_FatJet_deepTagMD_probTbq_ = fChain->GetBranch("FatJet_deepTagMD_probTbq");
if (b_FatJet_deepTagMD_probTbq_) { b_FatJet_deepTagMD_probTbq_->SetAddress(&FatJet_deepTagMD_probTbq_);}
    
b_FatJet_deepTagMD_probTbqq_ = fChain->GetBranch("FatJet_deepTagMD_probTbqq");
if (b_FatJet_deepTagMD_probTbqq_) { b_FatJet_deepTagMD_probTbqq_->SetAddress(&FatJet_deepTagMD_probTbqq_);}
    
b_FatJet_deepTagMD_probWcq_ = fChain->GetBranch("FatJet_deepTagMD_probWcq");
if (b_FatJet_deepTagMD_probWcq_) { b_FatJet_deepTagMD_probWcq_->SetAddress(&FatJet_deepTagMD_probWcq_);}
    
b_FatJet_deepTagMD_probWqq_ = fChain->GetBranch("FatJet_deepTagMD_probWqq");
if (b_FatJet_deepTagMD_probWqq_) { b_FatJet_deepTagMD_probWqq_->SetAddress(&FatJet_deepTagMD_probWqq_);}
    
b_FatJet_deepTagMD_probZbb_ = fChain->GetBranch("FatJet_deepTagMD_probZbb");
if (b_FatJet_deepTagMD_probZbb_) { b_FatJet_deepTagMD_probZbb_->SetAddress(&FatJet_deepTagMD_probZbb_);}
    
b_FatJet_deepTagMD_probZcc_ = fChain->GetBranch("FatJet_deepTagMD_probZcc");
if (b_FatJet_deepTagMD_probZcc_) { b_FatJet_deepTagMD_probZcc_->SetAddress(&FatJet_deepTagMD_probZcc_);}
    
b_FatJet_deepTagMD_probZqq_ = fChain->GetBranch("FatJet_deepTagMD_probZqq");
if (b_FatJet_deepTagMD_probZqq_) { b_FatJet_deepTagMD_probZqq_->SetAddress(&FatJet_deepTagMD_probZqq_);}
    
b_FatJet_deepTag_probHbb_ = fChain->GetBranch("FatJet_deepTag_probHbb");
if (b_FatJet_deepTag_probHbb_) { b_FatJet_deepTag_probHbb_->SetAddress(&FatJet_deepTag_probHbb_);}
    
b_FatJet_deepTag_probHcc_ = fChain->GetBranch("FatJet_deepTag_probHcc");
if (b_FatJet_deepTag_probHcc_) { b_FatJet_deepTag_probHcc_->SetAddress(&FatJet_deepTag_probHcc_);}
    
b_FatJet_deepTag_probHqqqq_ = fChain->GetBranch("FatJet_deepTag_probHqqqq");
if (b_FatJet_deepTag_probHqqqq_) { b_FatJet_deepTag_probHqqqq_->SetAddress(&FatJet_deepTag_probHqqqq_);}
    
b_FatJet_deepTag_probQCDb_ = fChain->GetBranch("FatJet_deepTag_probQCDb");
if (b_FatJet_deepTag_probQCDb_) { b_FatJet_deepTag_probQCDb_->SetAddress(&FatJet_deepTag_probQCDb_);}
    
b_FatJet_deepTag_probQCDbb_ = fChain->GetBranch("FatJet_deepTag_probQCDbb");
if (b_FatJet_deepTag_probQCDbb_) { b_FatJet_deepTag_probQCDbb_->SetAddress(&FatJet_deepTag_probQCDbb_);}
    
b_FatJet_deepTag_probQCDc_ = fChain->GetBranch("FatJet_deepTag_probQCDc");
if (b_FatJet_deepTag_probQCDc_) { b_FatJet_deepTag_probQCDc_->SetAddress(&FatJet_deepTag_probQCDc_);}
    
b_FatJet_deepTag_probQCDcc_ = fChain->GetBranch("FatJet_deepTag_probQCDcc");
if (b_FatJet_deepTag_probQCDcc_) { b_FatJet_deepTag_probQCDcc_->SetAddress(&FatJet_deepTag_probQCDcc_);}
    
b_FatJet_deepTag_probQCDothers_ = fChain->GetBranch("FatJet_deepTag_probQCDothers");
if (b_FatJet_deepTag_probQCDothers_) { b_FatJet_deepTag_probQCDothers_->SetAddress(&FatJet_deepTag_probQCDothers_);}
    
b_FatJet_deepTag_probTbc_ = fChain->GetBranch("FatJet_deepTag_probTbc");
if (b_FatJet_deepTag_probTbc_) { b_FatJet_deepTag_probTbc_->SetAddress(&FatJet_deepTag_probTbc_);}
    
b_FatJet_deepTag_probTbcq_ = fChain->GetBranch("FatJet_deepTag_probTbcq");
if (b_FatJet_deepTag_probTbcq_) { b_FatJet_deepTag_probTbcq_->SetAddress(&FatJet_deepTag_probTbcq_);}
    
b_FatJet_deepTag_probTbq_ = fChain->GetBranch("FatJet_deepTag_probTbq");
if (b_FatJet_deepTag_probTbq_) { b_FatJet_deepTag_probTbq_->SetAddress(&FatJet_deepTag_probTbq_);}
    
b_FatJet_deepTag_probTbqq_ = fChain->GetBranch("FatJet_deepTag_probTbqq");
if (b_FatJet_deepTag_probTbqq_) { b_FatJet_deepTag_probTbqq_->SetAddress(&FatJet_deepTag_probTbqq_);}
    
b_FatJet_deepTag_probWcq_ = fChain->GetBranch("FatJet_deepTag_probWcq");
if (b_FatJet_deepTag_probWcq_) { b_FatJet_deepTag_probWcq_->SetAddress(&FatJet_deepTag_probWcq_);}
    
b_FatJet_deepTag_probWqq_ = fChain->GetBranch("FatJet_deepTag_probWqq");
if (b_FatJet_deepTag_probWqq_) { b_FatJet_deepTag_probWqq_->SetAddress(&FatJet_deepTag_probWqq_);}
    
b_FatJet_deepTag_probZbb_ = fChain->GetBranch("FatJet_deepTag_probZbb");
if (b_FatJet_deepTag_probZbb_) { b_FatJet_deepTag_probZbb_->SetAddress(&FatJet_deepTag_probZbb_);}
    
b_FatJet_deepTag_probZcc_ = fChain->GetBranch("FatJet_deepTag_probZcc");
if (b_FatJet_deepTag_probZcc_) { b_FatJet_deepTag_probZcc_->SetAddress(&FatJet_deepTag_probZcc_);}
    
b_FatJet_deepTag_probZqq_ = fChain->GetBranch("FatJet_deepTag_probZqq");
if (b_FatJet_deepTag_probZqq_) { b_FatJet_deepTag_probZqq_->SetAddress(&FatJet_deepTag_probZqq_);}



b_FatJet_particleNetMD_QCD_ = fChain->GetBranch("FatJet_particleNetMD_QCD");
if (b_FatJet_particleNetMD_QCD_) { b_FatJet_particleNetMD_QCD_->SetAddress(&FatJet_particleNetMD_QCD_);}
    
b_FatJet_particleNetMD_Xbb_ = fChain->GetBranch("FatJet_particleNetMD_Xbb");
if (b_FatJet_particleNetMD_Xbb_) { b_FatJet_particleNetMD_Xbb_->SetAddress(&FatJet_particleNetMD_Xbb_);}
    
b_FatJet_particleNetMD_Xcc_ = fChain->GetBranch("FatJet_particleNetMD_Xcc");
if (b_FatJet_particleNetMD_Xcc_) { b_FatJet_particleNetMD_Xcc_->SetAddress(&FatJet_particleNetMD_Xcc_);}
    
b_FatJet_particleNetMD_Xqq_ = fChain->GetBranch("FatJet_particleNetMD_Xqq");
if (b_FatJet_particleNetMD_Xqq_) { b_FatJet_particleNetMD_Xqq_->SetAddress(&FatJet_particleNetMD_Xqq_);}
    
b_FatJet_particleNet_H4qvsQCD_ = fChain->GetBranch("FatJet_particleNet_H4qvsQCD");
if (b_FatJet_particleNet_H4qvsQCD_) { b_FatJet_particleNet_H4qvsQCD_->SetAddress(&FatJet_particleNet_H4qvsQCD_);}
    
b_FatJet_particleNet_HbbvsQCD_ = fChain->GetBranch("FatJet_particleNet_HbbvsQCD");
if (b_FatJet_particleNet_HbbvsQCD_) { b_FatJet_particleNet_HbbvsQCD_->SetAddress(&FatJet_particleNet_HbbvsQCD_);}
    
b_FatJet_particleNet_HccvsQCD_ = fChain->GetBranch("FatJet_particleNet_HccvsQCD");
if (b_FatJet_particleNet_HccvsQCD_) { b_FatJet_particleNet_HccvsQCD_->SetAddress(&FatJet_particleNet_HccvsQCD_);}
    
b_FatJet_particleNet_QCD_ = fChain->GetBranch("FatJet_particleNet_QCD");
if (b_FatJet_particleNet_QCD_) { b_FatJet_particleNet_QCD_->SetAddress(&FatJet_particleNet_QCD_);}
    
b_FatJet_particleNet_TvsQCD_ = fChain->GetBranch("FatJet_particleNet_TvsQCD");
if (b_FatJet_particleNet_TvsQCD_) { b_FatJet_particleNet_TvsQCD_->SetAddress(&FatJet_particleNet_TvsQCD_);}
    
b_FatJet_particleNet_WvsQCD_ = fChain->GetBranch("FatJet_particleNet_WvsQCD");
if (b_FatJet_particleNet_WvsQCD_) { b_FatJet_particleNet_WvsQCD_->SetAddress(&FatJet_particleNet_WvsQCD_);}
    
b_FatJet_particleNet_ZvsQCD_ = fChain->GetBranch("FatJet_particleNet_ZvsQCD");
if (b_FatJet_particleNet_ZvsQCD_) { b_FatJet_particleNet_ZvsQCD_->SetAddress(&FatJet_particleNet_ZvsQCD_);}
    
b_FatJet_particleNet_mass_ = fChain->GetBranch("FatJet_particleNet_mass");
if (b_FatJet_particleNet_mass_) { b_FatJet_particleNet_mass_->SetAddress(&FatJet_particleNet_mass_);}
    


fChain->SetBranchAddress("genWeight",&genWeight,&b_genWeight);






// gKK raw score
fChain->SetBranchAddress("ak4jet_deepflavor_probb", ak4jet_deepflavor_probb, &b_ak4jet_deepflavor_probb);
fChain->SetBranchAddress("ak4jet_deepflavor_probc", ak4jet_deepflavor_probc, &b_ak4jet_deepflavor_probc);
fChain->SetBranchAddress("ak4jet_deepflavor_probg", ak4jet_deepflavor_probg, &b_ak4jet_deepflavor_probg);
fChain->SetBranchAddress("ak4jet_deepflavor_problepb", ak4jet_deepflavor_problepb, &b_ak4jet_deepflavor_problepb);
fChain->SetBranchAddress("ak4jet_deepflavor_probbb", ak4jet_deepflavor_probbb, &b_ak4jet_deepflavor_probbb);
fChain->SetBranchAddress("ak4jet_deepflavor_probuds", ak4jet_deepflavor_probuds, &b_ak4jet_deepflavor_probuds);

fChain->SetBranchAddress("jetAK8puppi_dnn_probTbcq",&jetAK8puppi_dnn_probTbcq,&b_jetAK8puppi_dnn_probTbcq);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbqq",&jetAK8puppi_dnn_probTbqq,&b_jetAK8puppi_dnn_probTbqq);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbc",&jetAK8puppi_dnn_probTbc,&b_jetAK8puppi_dnn_probTbc);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbq",&jetAK8puppi_dnn_probTbq,&b_jetAK8puppi_dnn_probTbq);
fChain->SetBranchAddress("jetAK8puppi_dnn_probWcq",&jetAK8puppi_dnn_probWcq,&b_jetAK8puppi_dnn_probWcq);
fChain->SetBranchAddress("jetAK8puppi_dnn_probWqq",&jetAK8puppi_dnn_probWqq,&b_jetAK8puppi_dnn_probWqq);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZbb",&jetAK8puppi_dnn_probZbb,&b_jetAK8puppi_dnn_probZbb);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZcc",&jetAK8puppi_dnn_probZcc,&b_jetAK8puppi_dnn_probZcc);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZqq",&jetAK8puppi_dnn_probZqq,&b_jetAK8puppi_dnn_probZqq);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHbb",&jetAK8puppi_dnn_probHbb,&b_jetAK8puppi_dnn_probHbb);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHcc",&jetAK8puppi_dnn_probHcc,&b_jetAK8puppi_dnn_probHcc);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHqqqq",&jetAK8puppi_dnn_probHqqqq,&b_jetAK8puppi_dnn_probHqqqq);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDbb",&jetAK8puppi_dnn_probQCDbb,&b_jetAK8puppi_dnn_probQCDbb);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDcc",&jetAK8puppi_dnn_probQCDcc,&b_jetAK8puppi_dnn_probQCDcc);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDb",&jetAK8puppi_dnn_probQCDb,&b_jetAK8puppi_dnn_probQCDb);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDc",&jetAK8puppi_dnn_probQCDc,&b_jetAK8puppi_dnn_probQCDc);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDothers",&jetAK8puppi_dnn_probQCDothers,&b_jetAK8puppi_dnn_probQCDothers);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbcq",&jetAK8puppi_dnnDecorr_probTbcq,&b_jetAK8puppi_dnnDecorr_probTbcq);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbqq",&jetAK8puppi_dnnDecorr_probTbqq,&b_jetAK8puppi_dnnDecorr_probTbqq);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbc",&jetAK8puppi_dnnDecorr_probTbc,&b_jetAK8puppi_dnnDecorr_probTbc);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbq",&jetAK8puppi_dnnDecorr_probTbq,&b_jetAK8puppi_dnnDecorr_probTbq);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probWcq",&jetAK8puppi_dnnDecorr_probWcq,&b_jetAK8puppi_dnnDecorr_probWcq);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probWqq",&jetAK8puppi_dnnDecorr_probWqq,&b_jetAK8puppi_dnnDecorr_probWqq);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZbb",&jetAK8puppi_dnnDecorr_probZbb,&b_jetAK8puppi_dnnDecorr_probZbb);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZcc",&jetAK8puppi_dnnDecorr_probZcc,&b_jetAK8puppi_dnnDecorr_probZcc);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZqq",&jetAK8puppi_dnnDecorr_probZqq,&b_jetAK8puppi_dnnDecorr_probZqq);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHbb",&jetAK8puppi_dnnDecorr_probHbb,&b_jetAK8puppi_dnnDecorr_probHbb);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHcc",&jetAK8puppi_dnnDecorr_probHcc,&b_jetAK8puppi_dnnDecorr_probHcc);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHqqqq",&jetAK8puppi_dnnDecorr_probHqqqq,&b_jetAK8puppi_dnnDecorr_probHqqqq);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDbb",&jetAK8puppi_dnnDecorr_probQCDbb,&b_jetAK8puppi_dnnDecorr_probQCDbb);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDcc",&jetAK8puppi_dnnDecorr_probQCDcc,&b_jetAK8puppi_dnnDecorr_probQCDcc);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDb",&jetAK8puppi_dnnDecorr_probQCDb,&b_jetAK8puppi_dnnDecorr_probQCDb);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDc",&jetAK8puppi_dnnDecorr_probQCDc,&b_jetAK8puppi_dnnDecorr_probQCDc);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDothers",&jetAK8puppi_dnnDecorr_probQCDothers,&b_jetAK8puppi_dnnDecorr_probQCDothers);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbcq_2",&jetAK8puppi_dnn_probTbcq_2,&b_jetAK8puppi_dnn_probTbcq_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbqq_2",&jetAK8puppi_dnn_probTbqq_2,&b_jetAK8puppi_dnn_probTbqq_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbc_2",&jetAK8puppi_dnn_probTbc_2,&b_jetAK8puppi_dnn_probTbc_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbq_2",&jetAK8puppi_dnn_probTbq_2,&b_jetAK8puppi_dnn_probTbq_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probWcq_2",&jetAK8puppi_dnn_probWcq_2,&b_jetAK8puppi_dnn_probWcq_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probWqq_2",&jetAK8puppi_dnn_probWqq_2,&b_jetAK8puppi_dnn_probWqq_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZbb_2",&jetAK8puppi_dnn_probZbb_2,&b_jetAK8puppi_dnn_probZbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZcc_2",&jetAK8puppi_dnn_probZcc_2,&b_jetAK8puppi_dnn_probZcc_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZqq_2",&jetAK8puppi_dnn_probZqq_2,&b_jetAK8puppi_dnn_probZqq_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHbb_2",&jetAK8puppi_dnn_probHbb_2,&b_jetAK8puppi_dnn_probHbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHcc_2",&jetAK8puppi_dnn_probHcc_2,&b_jetAK8puppi_dnn_probHcc_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHqqqq_2",&jetAK8puppi_dnn_probHqqqq_2,&b_jetAK8puppi_dnn_probHqqqq_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDbb_2",&jetAK8puppi_dnn_probQCDbb_2,&b_jetAK8puppi_dnn_probQCDbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDcc_2",&jetAK8puppi_dnn_probQCDcc_2,&b_jetAK8puppi_dnn_probQCDcc_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDb_2",&jetAK8puppi_dnn_probQCDb_2,&b_jetAK8puppi_dnn_probQCDb_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDc_2",&jetAK8puppi_dnn_probQCDc_2,&b_jetAK8puppi_dnn_probQCDc_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDothers_2",&jetAK8puppi_dnn_probQCDothers_2,&b_jetAK8puppi_dnn_probQCDothers_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbcq_2",&jetAK8puppi_dnnDecorr_probTbcq_2,&b_jetAK8puppi_dnnDecorr_probTbcq_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbqq_2",&jetAK8puppi_dnnDecorr_probTbqq_2,&b_jetAK8puppi_dnnDecorr_probTbqq_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbc_2",&jetAK8puppi_dnnDecorr_probTbc_2,&b_jetAK8puppi_dnnDecorr_probTbc_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbq_2",&jetAK8puppi_dnnDecorr_probTbq_2,&b_jetAK8puppi_dnnDecorr_probTbq_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probWcq_2",&jetAK8puppi_dnnDecorr_probWcq_2,&b_jetAK8puppi_dnnDecorr_probWcq_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probWqq_2",&jetAK8puppi_dnnDecorr_probWqq_2,&b_jetAK8puppi_dnnDecorr_probWqq_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZbb_2",&jetAK8puppi_dnnDecorr_probZbb_2,&b_jetAK8puppi_dnnDecorr_probZbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZcc_2",&jetAK8puppi_dnnDecorr_probZcc_2,&b_jetAK8puppi_dnnDecorr_probZcc_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZqq_2",&jetAK8puppi_dnnDecorr_probZqq_2,&b_jetAK8puppi_dnnDecorr_probZqq_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHbb_2",&jetAK8puppi_dnnDecorr_probHbb_2,&b_jetAK8puppi_dnnDecorr_probHbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHcc_2",&jetAK8puppi_dnnDecorr_probHcc_2,&b_jetAK8puppi_dnnDecorr_probHcc_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHqqqq_2",&jetAK8puppi_dnnDecorr_probHqqqq_2,&b_jetAK8puppi_dnnDecorr_probHqqqq_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDbb_2",&jetAK8puppi_dnnDecorr_probQCDbb_2,&b_jetAK8puppi_dnnDecorr_probQCDbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDcc_2",&jetAK8puppi_dnnDecorr_probQCDcc_2,&b_jetAK8puppi_dnnDecorr_probQCDcc_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDb_2",&jetAK8puppi_dnnDecorr_probQCDb_2,&b_jetAK8puppi_dnnDecorr_probQCDb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDc_2",&jetAK8puppi_dnnDecorr_probQCDc_2,&b_jetAK8puppi_dnnDecorr_probQCDc_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDothers_2",&jetAK8puppi_dnnDecorr_probQCDothers_2,&b_jetAK8puppi_dnnDecorr_probQCDothers_2);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbcq_3",&jetAK8puppi_dnn_probTbcq_3,&b_jetAK8puppi_dnn_probTbcq_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbqq_3",&jetAK8puppi_dnn_probTbqq_3,&b_jetAK8puppi_dnn_probTbqq_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbc_3",&jetAK8puppi_dnn_probTbc_3,&b_jetAK8puppi_dnn_probTbc_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbq_3",&jetAK8puppi_dnn_probTbq_3,&b_jetAK8puppi_dnn_probTbq_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probWcq_3",&jetAK8puppi_dnn_probWcq_3,&b_jetAK8puppi_dnn_probWcq_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probWqq_3",&jetAK8puppi_dnn_probWqq_3,&b_jetAK8puppi_dnn_probWqq_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZbb_3",&jetAK8puppi_dnn_probZbb_3,&b_jetAK8puppi_dnn_probZbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZcc_3",&jetAK8puppi_dnn_probZcc_3,&b_jetAK8puppi_dnn_probZcc_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZqq_3",&jetAK8puppi_dnn_probZqq_3,&b_jetAK8puppi_dnn_probZqq_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHbb_3",&jetAK8puppi_dnn_probHbb_3,&b_jetAK8puppi_dnn_probHbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHcc_3",&jetAK8puppi_dnn_probHcc_3,&b_jetAK8puppi_dnn_probHcc_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHqqqq_3",&jetAK8puppi_dnn_probHqqqq_3,&b_jetAK8puppi_dnn_probHqqqq_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDbb_3",&jetAK8puppi_dnn_probQCDbb_3,&b_jetAK8puppi_dnn_probQCDbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDcc_3",&jetAK8puppi_dnn_probQCDcc_3,&b_jetAK8puppi_dnn_probQCDcc_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDb_3",&jetAK8puppi_dnn_probQCDb_3,&b_jetAK8puppi_dnn_probQCDb_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDc_3",&jetAK8puppi_dnn_probQCDc_3,&b_jetAK8puppi_dnn_probQCDc_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDothers_3",&jetAK8puppi_dnn_probQCDothers_3,&b_jetAK8puppi_dnn_probQCDothers_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbcq_3",&jetAK8puppi_dnnDecorr_probTbcq_3,&b_jetAK8puppi_dnnDecorr_probTbcq_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbqq_3",&jetAK8puppi_dnnDecorr_probTbqq_3,&b_jetAK8puppi_dnnDecorr_probTbqq_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbc_3",&jetAK8puppi_dnnDecorr_probTbc_3,&b_jetAK8puppi_dnnDecorr_probTbc_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbq_3",&jetAK8puppi_dnnDecorr_probTbq_3,&b_jetAK8puppi_dnnDecorr_probTbq_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probWcq_3",&jetAK8puppi_dnnDecorr_probWcq_3,&b_jetAK8puppi_dnnDecorr_probWcq_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probWqq_3",&jetAK8puppi_dnnDecorr_probWqq_3,&b_jetAK8puppi_dnnDecorr_probWqq_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZbb_3",&jetAK8puppi_dnnDecorr_probZbb_3,&b_jetAK8puppi_dnnDecorr_probZbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZcc_3",&jetAK8puppi_dnnDecorr_probZcc_3,&b_jetAK8puppi_dnnDecorr_probZcc_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZqq_3",&jetAK8puppi_dnnDecorr_probZqq_3,&b_jetAK8puppi_dnnDecorr_probZqq_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHbb_3",&jetAK8puppi_dnnDecorr_probHbb_3,&b_jetAK8puppi_dnnDecorr_probHbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHcc_3",&jetAK8puppi_dnnDecorr_probHcc_3,&b_jetAK8puppi_dnnDecorr_probHcc_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHqqqq_3",&jetAK8puppi_dnnDecorr_probHqqqq_3,&b_jetAK8puppi_dnnDecorr_probHqqqq_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDbb_3",&jetAK8puppi_dnnDecorr_probQCDbb_3,&b_jetAK8puppi_dnnDecorr_probQCDbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDcc_3",&jetAK8puppi_dnnDecorr_probQCDcc_3,&b_jetAK8puppi_dnnDecorr_probQCDcc_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDb_3",&jetAK8puppi_dnnDecorr_probQCDb_3,&b_jetAK8puppi_dnnDecorr_probQCDb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDc_3",&jetAK8puppi_dnnDecorr_probQCDc_3,&b_jetAK8puppi_dnnDecorr_probQCDc_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDothers_3",&jetAK8puppi_dnnDecorr_probQCDothers_3,&b_jetAK8puppi_dnnDecorr_probQCDothers_3);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbcq_4",&jetAK8puppi_dnn_probTbcq_4,&b_jetAK8puppi_dnn_probTbcq_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbqq_4",&jetAK8puppi_dnn_probTbqq_4,&b_jetAK8puppi_dnn_probTbqq_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbc_4",&jetAK8puppi_dnn_probTbc_4,&b_jetAK8puppi_dnn_probTbc_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probTbq_4",&jetAK8puppi_dnn_probTbq_4,&b_jetAK8puppi_dnn_probTbq_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probWcq_4",&jetAK8puppi_dnn_probWcq_4,&b_jetAK8puppi_dnn_probWcq_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probWqq_4",&jetAK8puppi_dnn_probWqq_4,&b_jetAK8puppi_dnn_probWqq_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZbb_4",&jetAK8puppi_dnn_probZbb_4,&b_jetAK8puppi_dnn_probZbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZcc_4",&jetAK8puppi_dnn_probZcc_4,&b_jetAK8puppi_dnn_probZcc_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probZqq_4",&jetAK8puppi_dnn_probZqq_4,&b_jetAK8puppi_dnn_probZqq_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHbb_4",&jetAK8puppi_dnn_probHbb_4,&b_jetAK8puppi_dnn_probHbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHcc_4",&jetAK8puppi_dnn_probHcc_4,&b_jetAK8puppi_dnn_probHcc_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probHqqqq_4",&jetAK8puppi_dnn_probHqqqq_4,&b_jetAK8puppi_dnn_probHqqqq_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDbb_4",&jetAK8puppi_dnn_probQCDbb_4,&b_jetAK8puppi_dnn_probQCDbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDcc_4",&jetAK8puppi_dnn_probQCDcc_4,&b_jetAK8puppi_dnn_probQCDcc_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDb_4",&jetAK8puppi_dnn_probQCDb_4,&b_jetAK8puppi_dnn_probQCDb_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDc_4",&jetAK8puppi_dnn_probQCDc_4,&b_jetAK8puppi_dnn_probQCDc_4);
fChain->SetBranchAddress("jetAK8puppi_dnn_probQCDothers_4",&jetAK8puppi_dnn_probQCDothers_4,&b_jetAK8puppi_dnn_probQCDothers_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbcq_4",&jetAK8puppi_dnnDecorr_probTbcq_4,&b_jetAK8puppi_dnnDecorr_probTbcq_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbqq_4",&jetAK8puppi_dnnDecorr_probTbqq_4,&b_jetAK8puppi_dnnDecorr_probTbqq_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbc_4",&jetAK8puppi_dnnDecorr_probTbc_4,&b_jetAK8puppi_dnnDecorr_probTbc_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probTbq_4",&jetAK8puppi_dnnDecorr_probTbq_4,&b_jetAK8puppi_dnnDecorr_probTbq_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probWcq_4",&jetAK8puppi_dnnDecorr_probWcq_4,&b_jetAK8puppi_dnnDecorr_probWcq_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probWqq_4",&jetAK8puppi_dnnDecorr_probWqq_4,&b_jetAK8puppi_dnnDecorr_probWqq_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZbb_4",&jetAK8puppi_dnnDecorr_probZbb_4,&b_jetAK8puppi_dnnDecorr_probZbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZcc_4",&jetAK8puppi_dnnDecorr_probZcc_4,&b_jetAK8puppi_dnnDecorr_probZcc_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probZqq_4",&jetAK8puppi_dnnDecorr_probZqq_4,&b_jetAK8puppi_dnnDecorr_probZqq_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHbb_4",&jetAK8puppi_dnnDecorr_probHbb_4,&b_jetAK8puppi_dnnDecorr_probHbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHcc_4",&jetAK8puppi_dnnDecorr_probHcc_4,&b_jetAK8puppi_dnnDecorr_probHcc_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probHqqqq_4",&jetAK8puppi_dnnDecorr_probHqqqq_4,&b_jetAK8puppi_dnnDecorr_probHqqqq_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDbb_4",&jetAK8puppi_dnnDecorr_probQCDbb_4,&b_jetAK8puppi_dnnDecorr_probQCDbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDcc_4",&jetAK8puppi_dnnDecorr_probQCDcc_4,&b_jetAK8puppi_dnnDecorr_probQCDcc_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDb_4",&jetAK8puppi_dnnDecorr_probQCDb_4,&b_jetAK8puppi_dnnDecorr_probQCDb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDc_4",&jetAK8puppi_dnnDecorr_probQCDc_4,&b_jetAK8puppi_dnnDecorr_probQCDc_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorr_probQCDothers_4",&jetAK8puppi_dnnDecorr_probQCDothers_4,&b_jetAK8puppi_dnnDecorr_probQCDothers_4);

fChain->SetBranchAddress("jetAK8puppi_dnnTop",&jetAK8puppi_dnnTop,&b_jetAK8puppi_dnnTop);
fChain->SetBranchAddress("jetAK8puppi_dnnW",&jetAK8puppi_dnnW,&b_jetAK8puppi_dnnW);
fChain->SetBranchAddress("jetAK8puppi_dnnH4q",&jetAK8puppi_dnnH4q,&b_jetAK8puppi_dnnH4q);
fChain->SetBranchAddress("jetAK8puppi_dnnTop_2",&jetAK8puppi_dnnTop_2,&b_jetAK8puppi_dnnTop_2);
fChain->SetBranchAddress("jetAK8puppi_dnnW_2",&jetAK8puppi_dnnW_2,&b_jetAK8puppi_dnnW_2);
fChain->SetBranchAddress("jetAK8puppi_dnnH4q_2",&jetAK8puppi_dnnH4q_2,&b_jetAK8puppi_dnnH4q_2);
fChain->SetBranchAddress("jetAK8puppi_dnnTop_3",&jetAK8puppi_dnnTop_3,&b_jetAK8puppi_dnnTop_3);
fChain->SetBranchAddress("jetAK8puppi_dnnW_3",&jetAK8puppi_dnnW_3,&b_jetAK8puppi_dnnW_3);
fChain->SetBranchAddress("jetAK8puppi_dnnH4q_3",&jetAK8puppi_dnnH4q_3,&b_jetAK8puppi_dnnH4q_3);
fChain->SetBranchAddress("jetAK8puppi_dnnTop_4",&jetAK8puppi_dnnTop_4,&b_jetAK8puppi_dnnTop_4);
fChain->SetBranchAddress("jetAK8puppi_dnnW_4",&jetAK8puppi_dnnW_4,&b_jetAK8puppi_dnnW_4);
fChain->SetBranchAddress("jetAK8puppi_dnnH4q_4",&jetAK8puppi_dnnH4q_4,&b_jetAK8puppi_dnnH4q_4);
fChain->SetBranchAddress("jetAK8puppi_dnnZ",&jetAK8puppi_dnnZ,&b_jetAK8puppi_dnnZ);
fChain->SetBranchAddress("jetAK8puppi_dnnZbb",&jetAK8puppi_dnnZbb,&b_jetAK8puppi_dnnZbb);
fChain->SetBranchAddress("jetAK8puppi_dnnHbb",&jetAK8puppi_dnnHbb,&b_jetAK8puppi_dnnHbb);
fChain->SetBranchAddress("jetAK8puppi_dnnZ_2",&jetAK8puppi_dnnZ_2,&b_jetAK8puppi_dnnZ_2);
fChain->SetBranchAddress("jetAK8puppi_dnnZbb_2",&jetAK8puppi_dnnZbb_2,&b_jetAK8puppi_dnnZbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnHbb_2",&jetAK8puppi_dnnHbb_2,&b_jetAK8puppi_dnnHbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnZ_3",&jetAK8puppi_dnnZ_3,&b_jetAK8puppi_dnnZ_3);
fChain->SetBranchAddress("jetAK8puppi_dnnZbb_3",&jetAK8puppi_dnnZbb_3,&b_jetAK8puppi_dnnZbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnHbb_3",&jetAK8puppi_dnnHbb_3,&b_jetAK8puppi_dnnHbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnZ_4",&jetAK8puppi_dnnZ_4,&b_jetAK8puppi_dnnZ_4);
fChain->SetBranchAddress("jetAK8puppi_dnnZbb_4",&jetAK8puppi_dnnZbb_4,&b_jetAK8puppi_dnnZbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnHbb_4",&jetAK8puppi_dnnHbb_4,&b_jetAK8puppi_dnnHbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrTop",&jetAK8puppi_dnnDecorrTop,&b_jetAK8puppi_dnnDecorrTop);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrW",&jetAK8puppi_dnnDecorrW,&b_jetAK8puppi_dnnDecorrW);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrH4q",&jetAK8puppi_dnnDecorrH4q,&b_jetAK8puppi_dnnDecorrH4q);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrTop_2",&jetAK8puppi_dnnDecorrTop_2,&b_jetAK8puppi_dnnDecorrTop_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrW_2",&jetAK8puppi_dnnDecorrW_2,&b_jetAK8puppi_dnnDecorrW_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrH4q_2",&jetAK8puppi_dnnDecorrH4q_2,&b_jetAK8puppi_dnnDecorrH4q_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrTop_3",&jetAK8puppi_dnnDecorrTop_3,&b_jetAK8puppi_dnnDecorrTop_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrW_3",&jetAK8puppi_dnnDecorrW_3,&b_jetAK8puppi_dnnDecorrW_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrH4q_3",&jetAK8puppi_dnnDecorrH4q_3,&b_jetAK8puppi_dnnDecorrH4q_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrTop_4",&jetAK8puppi_dnnDecorrTop_4,&b_jetAK8puppi_dnnDecorrTop_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrW_4",&jetAK8puppi_dnnDecorrW_4,&b_jetAK8puppi_dnnDecorrW_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrH4q_4",&jetAK8puppi_dnnDecorrH4q_4,&b_jetAK8puppi_dnnDecorrH4q_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrZ",&jetAK8puppi_dnnDecorrZ,&b_jetAK8puppi_dnnDecorrZ);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrZbb",&jetAK8puppi_dnnDecorrZbb,&b_jetAK8puppi_dnnDecorrZbb);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrHbb",&jetAK8puppi_dnnDecorrHbb,&b_jetAK8puppi_dnnDecorrHbb);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrZ_2",&jetAK8puppi_dnnDecorrZ_2,&b_jetAK8puppi_dnnDecorrZ_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrZbb_2",&jetAK8puppi_dnnDecorrZbb_2,&b_jetAK8puppi_dnnDecorrZbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrHbb_2",&jetAK8puppi_dnnDecorrHbb_2,&b_jetAK8puppi_dnnDecorrHbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrZ_3",&jetAK8puppi_dnnDecorrZ_3,&b_jetAK8puppi_dnnDecorrZ_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrZbb_3",&jetAK8puppi_dnnDecorrZbb_3,&b_jetAK8puppi_dnnDecorrZbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrHbb_3",&jetAK8puppi_dnnDecorrHbb_3,&b_jetAK8puppi_dnnDecorrHbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrZ_4",&jetAK8puppi_dnnDecorrZ_4,&b_jetAK8puppi_dnnDecorrZ_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrZbb_4",&jetAK8puppi_dnnDecorrZbb_4,&b_jetAK8puppi_dnnDecorrZbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrHbb_4",&jetAK8puppi_dnnDecorrHbb_4,&b_jetAK8puppi_dnnDecorrHbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrbb",&jetAK8puppi_dnnDecorrbb,&b_jetAK8puppi_dnnDecorrbb);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrcc",&jetAK8puppi_dnnDecorrcc,&b_jetAK8puppi_dnnDecorrcc);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrbbnog",&jetAK8puppi_dnnDecorrbbnog,&b_jetAK8puppi_dnnDecorrbbnog);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrccnog",&jetAK8puppi_dnnDecorrccnog,&b_jetAK8puppi_dnnDecorrccnog);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrbb_2",&jetAK8puppi_dnnDecorrbb_2,&b_jetAK8puppi_dnnDecorrbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrcc_2",&jetAK8puppi_dnnDecorrcc_2,&b_jetAK8puppi_dnnDecorrcc_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrbbnog_2",&jetAK8puppi_dnnDecorrbbnog_2,&b_jetAK8puppi_dnnDecorrbbnog_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrccnog_2",&jetAK8puppi_dnnDecorrccnog_2,&b_jetAK8puppi_dnnDecorrccnog_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrbb_3",&jetAK8puppi_dnnDecorrbb_3,&b_jetAK8puppi_dnnDecorrbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrcc_3",&jetAK8puppi_dnnDecorrcc_3,&b_jetAK8puppi_dnnDecorrcc_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrbbnog_3",&jetAK8puppi_dnnDecorrbbnog_3,&b_jetAK8puppi_dnnDecorrbbnog_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrccnog_3",&jetAK8puppi_dnnDecorrccnog_3,&b_jetAK8puppi_dnnDecorrccnog_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrbb_4",&jetAK8puppi_dnnDecorrbb_4,&b_jetAK8puppi_dnnDecorrbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrcc_4",&jetAK8puppi_dnnDecorrcc_4,&b_jetAK8puppi_dnnDecorrcc_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrbbnog_4",&jetAK8puppi_dnnDecorrbbnog_4,&b_jetAK8puppi_dnnDecorrbbnog_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrccnog_4",&jetAK8puppi_dnnDecorrccnog_4,&b_jetAK8puppi_dnnDecorrccnog_4);
fChain->SetBranchAddress("jetAK8puppi_dnnqcd",&jetAK8puppi_dnnqcd,&b_jetAK8puppi_dnnqcd);
fChain->SetBranchAddress("jetAK8puppi_dnntop",&jetAK8puppi_dnntop,&b_jetAK8puppi_dnntop);
fChain->SetBranchAddress("jetAK8puppi_dnnw",&jetAK8puppi_dnnw,&b_jetAK8puppi_dnnw);
fChain->SetBranchAddress("jetAK8puppi_dnnz",&jetAK8puppi_dnnz,&b_jetAK8puppi_dnnz);
fChain->SetBranchAddress("jetAK8puppi_dnnzbb",&jetAK8puppi_dnnzbb,&b_jetAK8puppi_dnnzbb);
fChain->SetBranchAddress("jetAK8puppi_dnnhbb",&jetAK8puppi_dnnhbb,&b_jetAK8puppi_dnnhbb);
fChain->SetBranchAddress("jetAK8puppi_dnnh4q",&jetAK8puppi_dnnh4q,&b_jetAK8puppi_dnnh4q);
fChain->SetBranchAddress("jetAK8puppi_dnnqcd_2",&jetAK8puppi_dnnqcd_2,&b_jetAK8puppi_dnnqcd_2);
fChain->SetBranchAddress("jetAK8puppi_dnntop_2",&jetAK8puppi_dnntop_2,&b_jetAK8puppi_dnntop_2);
fChain->SetBranchAddress("jetAK8puppi_dnnw_2",&jetAK8puppi_dnnw_2,&b_jetAK8puppi_dnnw_2);
fChain->SetBranchAddress("jetAK8puppi_dnnz_2",&jetAK8puppi_dnnz_2,&b_jetAK8puppi_dnnz_2);
fChain->SetBranchAddress("jetAK8puppi_dnnzbb_2",&jetAK8puppi_dnnzbb_2,&b_jetAK8puppi_dnnzbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnhbb_2",&jetAK8puppi_dnnhbb_2,&b_jetAK8puppi_dnnhbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnh4q_2",&jetAK8puppi_dnnh4q_2,&b_jetAK8puppi_dnnh4q_2);
fChain->SetBranchAddress("jetAK8puppi_dnnqcd_3",&jetAK8puppi_dnnqcd_3,&b_jetAK8puppi_dnnqcd_3);
fChain->SetBranchAddress("jetAK8puppi_dnntop_3",&jetAK8puppi_dnntop_3,&b_jetAK8puppi_dnntop_3);
fChain->SetBranchAddress("jetAK8puppi_dnnw_3",&jetAK8puppi_dnnw_3,&b_jetAK8puppi_dnnw_3);
fChain->SetBranchAddress("jetAK8puppi_dnnz_3",&jetAK8puppi_dnnz_3,&b_jetAK8puppi_dnnz_3);
fChain->SetBranchAddress("jetAK8puppi_dnnzbb_3",&jetAK8puppi_dnnzbb_3,&b_jetAK8puppi_dnnzbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnhbb_3",&jetAK8puppi_dnnhbb_3,&b_jetAK8puppi_dnnhbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnh4q_3",&jetAK8puppi_dnnh4q_3,&b_jetAK8puppi_dnnh4q_3);
fChain->SetBranchAddress("jetAK8puppi_dnnqcd_4",&jetAK8puppi_dnnqcd_4,&b_jetAK8puppi_dnnqcd_4);
fChain->SetBranchAddress("jetAK8puppi_dnntop_4",&jetAK8puppi_dnntop_4,&b_jetAK8puppi_dnntop_4);
fChain->SetBranchAddress("jetAK8puppi_dnnw_4",&jetAK8puppi_dnnw_4,&b_jetAK8puppi_dnnw_4);
fChain->SetBranchAddress("jetAK8puppi_dnnz_4",&jetAK8puppi_dnnz_4,&b_jetAK8puppi_dnnz_4);
fChain->SetBranchAddress("jetAK8puppi_dnnzbb_4",&jetAK8puppi_dnnzbb_4,&b_jetAK8puppi_dnnzbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnhbb_4",&jetAK8puppi_dnnhbb_4,&b_jetAK8puppi_dnnhbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnh4q_4",&jetAK8puppi_dnnh4q_4,&b_jetAK8puppi_dnnh4q_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrqcd",&jetAK8puppi_dnnDecorrqcd,&b_jetAK8puppi_dnnDecorrqcd);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrtop",&jetAK8puppi_dnnDecorrtop,&b_jetAK8puppi_dnnDecorrtop);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrw",&jetAK8puppi_dnnDecorrw,&b_jetAK8puppi_dnnDecorrw);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrz",&jetAK8puppi_dnnDecorrz,&b_jetAK8puppi_dnnDecorrz);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrzbb",&jetAK8puppi_dnnDecorrzbb,&b_jetAK8puppi_dnnDecorrzbb);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrhbb",&jetAK8puppi_dnnDecorrhbb,&b_jetAK8puppi_dnnDecorrhbb);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrh4q",&jetAK8puppi_dnnDecorrh4q,&b_jetAK8puppi_dnnDecorrh4q);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrqcd_2",&jetAK8puppi_dnnDecorrqcd_2,&b_jetAK8puppi_dnnDecorrqcd_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrtop_2",&jetAK8puppi_dnnDecorrtop_2,&b_jetAK8puppi_dnnDecorrtop_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrw_2",&jetAK8puppi_dnnDecorrw_2,&b_jetAK8puppi_dnnDecorrw_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrz_2",&jetAK8puppi_dnnDecorrz_2,&b_jetAK8puppi_dnnDecorrz_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrzbb_2",&jetAK8puppi_dnnDecorrzbb_2,&b_jetAK8puppi_dnnDecorrzbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrhbb_2",&jetAK8puppi_dnnDecorrhbb_2,&b_jetAK8puppi_dnnDecorrhbb_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrh4q_2",&jetAK8puppi_dnnDecorrh4q_2,&b_jetAK8puppi_dnnDecorrh4q_2);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrqcd_3",&jetAK8puppi_dnnDecorrqcd_3,&b_jetAK8puppi_dnnDecorrqcd_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrtop_3",&jetAK8puppi_dnnDecorrtop_3,&b_jetAK8puppi_dnnDecorrtop_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrw_3",&jetAK8puppi_dnnDecorrw_3,&b_jetAK8puppi_dnnDecorrw_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrz_3",&jetAK8puppi_dnnDecorrz_3,&b_jetAK8puppi_dnnDecorrz_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrzbb_3",&jetAK8puppi_dnnDecorrzbb_3,&b_jetAK8puppi_dnnDecorrzbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrhbb_3",&jetAK8puppi_dnnDecorrhbb_3,&b_jetAK8puppi_dnnDecorrhbb_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrh4q_3",&jetAK8puppi_dnnDecorrh4q_3,&b_jetAK8puppi_dnnDecorrh4q_3);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrqcd_4",&jetAK8puppi_dnnDecorrqcd_4,&b_jetAK8puppi_dnnDecorrqcd_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrtop_4",&jetAK8puppi_dnnDecorrtop_4,&b_jetAK8puppi_dnnDecorrtop_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrw_4",&jetAK8puppi_dnnDecorrw_4,&b_jetAK8puppi_dnnDecorrw_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrz_4",&jetAK8puppi_dnnDecorrz_4,&b_jetAK8puppi_dnnDecorrz_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrzbb_4",&jetAK8puppi_dnnDecorrzbb_4,&b_jetAK8puppi_dnnDecorrzbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrhbb_4",&jetAK8puppi_dnnDecorrhbb_4,&b_jetAK8puppi_dnnDecorrhbb_4);
fChain->SetBranchAddress("jetAK8puppi_dnnDecorrh4q_4",&jetAK8puppi_dnnDecorrh4q_4,&b_jetAK8puppi_dnnDecorrh4q_4);

   fChain->SetBranchAddress("ak8sj11", &ak8sj11, &b_ak8sj11);
   fChain->SetBranchAddress("ak8sj21", &ak8sj21, &b_ak8sj21);
   fChain->SetBranchAddress("ak8sj31", &ak8sj31, &b_ak8sj31);
   fChain->SetBranchAddress("ak8sj12", &ak8sj12, &b_ak8sj12);
   fChain->SetBranchAddress("ak8sj22", &ak8sj22, &b_ak8sj22);
   fChain->SetBranchAddress("ak8sj32", &ak8sj32, &b_ak8sj32);
   fChain->SetBranchAddress("ak8sj13", &ak8sj13, &b_ak8sj13);
   fChain->SetBranchAddress("ak8sj23", &ak8sj23, &b_ak8sj23);
   fChain->SetBranchAddress("ak8sj33", &ak8sj33, &b_ak8sj33);
   fChain->SetBranchAddress("ak8sj14", &ak8sj14, &b_ak8sj14);
   fChain->SetBranchAddress("ak8sj24", &ak8sj24, &b_ak8sj24);
   fChain->SetBranchAddress("ak8sj34", &ak8sj34, &b_ak8sj34);
   fChain->SetBranchAddress("ak8sj15", &ak8sj15, &b_ak8sj15);
   fChain->SetBranchAddress("ak8sj25", &ak8sj25, &b_ak8sj25);
   fChain->SetBranchAddress("ak8sj35", &ak8sj35, &b_ak8sj35);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("ls", &ls, &b_ls);
   fChain->SetBranchAddress("nLooseEle", &nLooseEle, &b_nLooseEle);
   fChain->SetBranchAddress("nLooseMu", &nLooseMu, &b_nLooseMu);
//   fChain->SetBranchAddress("njets", &njets, &b_njets);
//   fChain->SetBranchAddress("nbtag", &nbtag, &b_nbtag);
//   fChain->SetBranchAddress("jet2_pt", &jet2_pt, &b_jet2_pt);
//   fChain->SetBranchAddress("jet2_btag", &jet2_btag, &b_jet2_btag);
//   fChain->SetBranchAddress("jet3_pt", &jet3_pt, &b_jet3_pt);
//   fChain->SetBranchAddress("jet3_btag", &jet3_btag, &b_jet3_btag);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("nVtx", &nVtx, &b_nVtx);
 //  fChain->SetBranchAddress("numCands", &numCands, &b_numCands);
//   fChain->SetBranchAddress("ptVlep", &ptVlep, &b_ptVlep);
   fChain->SetBranchAddress("ptVhad", &ptVhad, &b_ptVhad);
  // fChain->SetBranchAddress("yVlep", &yVlep, &b_yVlep);
   fChain->SetBranchAddress("yVhad", &yVhad, &b_yVhad);
   fChain->SetBranchAddress("yVhadJEC", &yVhadJEC, &b_yVhadJEC);
//   fChain->SetBranchAddress("phiVlep", &phiVlep, &b_phiVlep);
   fChain->SetBranchAddress("phiVhad", &phiVhad, &b_phiVhad);
  // fChain->SetBranchAddress("massVlep", &massVlep, &b_massVlep);
 //  fChain->SetBranchAddress("mtVlep", &mtVlep, &b_mtVlep);
   fChain->SetBranchAddress("massVhad", &massVhad, &b_massVhad);
//   fChain->SetBranchAddress("massVhad_gen", &massVhad_gen, &b_massVhad_gen);
   fChain->SetBranchAddress("tau1", &tau1, &b_tau1);
   fChain->SetBranchAddress("tau2", &tau2, &b_tau2);
   fChain->SetBranchAddress("tau3", &tau3, &b_tau3);
 //  fChain->SetBranchAddress("tau21", &tau21, &b_tau21);
//   fChain->SetBranchAddress("sdrop", &sdrop, &b_sdrop);
 //  fChain->SetBranchAddress("lep", &lep, &b_lep);
   fChain->SetBranchAddress("channel", &channel, &b_channel);
   fChain->SetBranchAddress("candMass", &candMass, &b_candMass);
  /* fChain->SetBranchAddress("ptlep1", &ptlep1, &b_ptlep1);
   fChain->SetBranchAddress("ptlep2", &ptlep2, &b_ptlep2);
   fChain->SetBranchAddress("etalep1", &etalep1, &b_etalep1);
   fChain->SetBranchAddress("etalep2", &etalep2, &b_etalep2);
   fChain->SetBranchAddress("philep1", &philep1, &b_philep1);
   fChain->SetBranchAddress("philep2", &philep2, &b_philep2);
*/  
 fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metPhi", &metPhi, &b_metPhi);
   fChain->SetBranchAddress("theWeight", &theWeight, &b_theWeight);
   fChain->SetBranchAddress("nump", &nump, &b_nump);
   fChain->SetBranchAddress("numm", &numm, &b_numm);
   fChain->SetBranchAddress("npT", &npT, &b_npT);
   fChain->SetBranchAddress("npIT", &npIT, &b_npIT);
   fChain->SetBranchAddress("nBX", &nBX, &b_nBX);
   fChain->SetBranchAddress("triggerWeight", &triggerWeight, &b_triggerWeight);
   fChain->SetBranchAddress("lumiWeight", &lumiWeight, &b_lumiWeight);
   fChain->SetBranchAddress("pileupWeight", &pileupWeight, &b_pileupWeight);
   fChain->SetBranchAddress("delPhilepmet", &delPhilepmet, &b_delPhilepmet);
   fChain->SetBranchAddress("deltaRlepjet", &deltaRlepjet, &b_deltaRlepjet);
   fChain->SetBranchAddress("delPhijetmet", &delPhijetmet, &b_delPhijetmet);
   fChain->SetBranchAddress("delPhijetlep", &delPhijetlep, &b_delPhijetlep);
   fChain->SetBranchAddress("vbftag", &vbftag, &b_vbftag);
   //fChain->SetBranchAddress("IDLoose", &IDLoose, &b_IDLoose);
 //  fChain->SetBranchAddress("IDTight", &IDTight, &b_IDTight);
   //fChain->SetBranchAddress("isHighPt", &isHighPt, &b_isHighPt);
   //fChain->SetBranchAddress("isHEEP", &isHEEP, &b_isHEEP);
   fChain->SetBranchAddress("trackIso", &trackIso, &b_trackIso);
//   fChain->SetBranchAddress("muchaiso", &muchaiso, &b_muchaiso);
  // fChain->SetBranchAddress("muneuiso", &muneuiso, &b_muneuiso);
//   fChain->SetBranchAddress("muphoiso", &muphoiso, &b_muphoiso);
  // fChain->SetBranchAddress("muPU", &muPU, &b_muPU);
 //  fChain->SetBranchAddress("muisolation", &muisolation, &b_muisolation);
   fChain->SetBranchAddress("METraw_et", &METraw_et, &b_METraw_et);
   fChain->SetBranchAddress("METraw_phi", &METraw_phi, &b_METraw_phi);
   fChain->SetBranchAddress("METraw_sumEt", &METraw_sumEt, &b_METraw_sumEt);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("RawMET_phi", &RawMET_phi, &b_RawMET_phi);
   fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   fChain->SetBranchAddress("jetAK8_pt", &jetAK8_pt, &b_jetAK8_pt);
   fChain->SetBranchAddress("jetAK8_mass", &jetAK8_mass, &b_jetAK8_mass);
   fChain->SetBranchAddress("jetAK8_jec", &jetAK8_jec, &b_jetAK8_jec);
   fChain->SetBranchAddress("jetAK8_pt1", jetAK8_pt1, &b_jetAK8_pt1);
   fChain->SetBranchAddress("jetAK8_eta1", jetAK8_eta1, &b_jetAK8_eta1);
   fChain->SetBranchAddress("jetAK8_mass1", jetAK8_mass1, &b_jetAK8_mass1);
   fChain->SetBranchAddress("jetAK8_SF_mass1", jetAK8_SF_mass1, &b_jetAK8_SF_mass1);
   fChain->SetBranchAddress("jetAK8_SF_mass2", jetAK8_SF_mass2, &b_jetAK8_SF_mass2);
   fChain->SetBranchAddress("jetAK8_jec1", jetAK8_jec1, &b_jetAK8_jec1);
   fChain->SetBranchAddress("jetAK8_eta", &jetAK8_eta, &b_jetAK8_eta);
   fChain->SetBranchAddress("jetAK8_phi", &jetAK8_phi, &b_jetAK8_phi);

   fChain->SetBranchAddress("MJJ_JEC_up", &MJJ_JEC_up, &b_MJJ_JEC_up);
   fChain->SetBranchAddress("MJJ_JEC_down", &MJJ_JEC_down, &b_MJJ_JEC_down);
   fChain->SetBranchAddress("MJJ_JER_up", &MJJ_JER_up, &b_MJJ_JER_up);
   fChain->SetBranchAddress("MJJ_JER_down", &MJJ_JER_down, &b_MJJ_JER_down);

  
   fChain->SetBranchAddress("candMasspuppiJEC_new", &candMasspuppiJEC_new, &b_candMasspuppiJEC_new);
   fChain->SetBranchAddress("candMasspuppiJEC", &candMasspuppiJEC, &b_candMasspuppiJEC);
   fChain->SetBranchAddress("candMasspuppiJEC_JEC_up", &candMasspuppiJEC_JEC_up, &b_candMasspuppiJEC_JEC_up);
   fChain->SetBranchAddress("candMasspuppiJEC_JEC_down", &candMasspuppiJEC_JEC_down, &b_candMasspuppiJEC_JEC_down);
   fChain->SetBranchAddress("candMasspuppiJEC_JER_up", &candMasspuppiJEC_JER_up, &b_candMasspuppiJEC_JER_up);
   fChain->SetBranchAddress("candMasspuppiJEC_JER_down", &candMasspuppiJEC_JER_down, &b_candMasspuppiJEC_JER_down);


   fChain->SetBranchAddress("HLT_Mu1", &HLT_Mu1, &b_HLT_Mu1);
   fChain->SetBranchAddress("HLT_Mu2", &HLT_Mu2, &b_HLT_Mu2);
   fChain->SetBranchAddress("HLT_Mu3", &HLT_Mu3, &b_HLT_Mu3);
   fChain->SetBranchAddress("HLT_Mu4", &HLT_Mu4, &b_HLT_Mu4);
   fChain->SetBranchAddress("HLT_Mu5", &HLT_Mu5, &b_HLT_Mu5);
   fChain->SetBranchAddress("HLT_Mu6", &HLT_Mu6, &b_HLT_Mu6);
   fChain->SetBranchAddress("HLT_Mu7", &HLT_Mu7, &b_HLT_Mu7);
   fChain->SetBranchAddress("HLT_Mu8", &HLT_Mu8, &b_HLT_Mu8);
   fChain->SetBranchAddress("HLT_Mu9", &HLT_Mu9, &b_HLT_Mu9);
   fChain->SetBranchAddress("HLT_Mu10", &HLT_Mu10, &b_HLT_Mu10);
   fChain->SetBranchAddress("HLT_Mu11", &HLT_Mu11, &b_HLT_Mu11);
   fChain->SetBranchAddress("HLT_Mu12", &HLT_Mu12, &b_HLT_Mu12);
   fChain->SetBranchAddress("HLT_Mu13", &HLT_Mu13, &b_HLT_Mu13);
   fChain->SetBranchAddress("HLT_Mu14", &HLT_Mu14, &b_HLT_Mu14);
   fChain->SetBranchAddress("HLT_Mu15", &HLT_Mu15, &b_HLT_Mu15);
   fChain->SetBranchAddress("HLT_Mu16", &HLT_Mu16, &b_HLT_Mu16);
   fChain->SetBranchAddress("HLT_Mu17", &HLT_Mu17, &b_HLT_Mu17);

   fChain->SetBranchAddress("pweight", pweight, &b_pweight);


   fChain->SetBranchAddress("ak4jet_hf", ak4jet_hf, &b_ak4jet_hf);
   fChain->SetBranchAddress("ak4jet_pf", ak4jet_pf, &b_ak4jet_pf);
   fChain->SetBranchAddress("ak4jet_pt", ak4jet_pt, &b_ak4jet_pt);
   fChain->SetBranchAddress("ak4jet_pt_uncorr", ak4jet_pt_uncorr, &b_ak4jet_pt_uncorr);
   fChain->SetBranchAddress("ak4jet_eta", ak4jet_eta, &b_ak4jet_eta);
   fChain->SetBranchAddress("ak4jet_phi", ak4jet_phi, &b_ak4jet_phi);
   fChain->SetBranchAddress("ak4jet_e", ak4jet_e, &b_ak4jet_e);
   fChain->SetBranchAddress("ak4jet_dr", ak4jet_dr, &b_ak4jet_dr);
   fChain->SetBranchAddress("ak4jet_csv", ak4jet_csv, &b_ak4jet_csv);
   fChain->SetBranchAddress("ak4jet_icsv", ak4jet_icsv, &b_ak4jet_icsv);
   fChain->SetBranchAddress("ak4jet_deepcsvb", ak4jet_deepcsvb, &b_ak4jet_deepcsvb);
   fChain->SetBranchAddress("ak4jet_deepcsvbb", ak4jet_deepcsvbb, &b_ak4jet_deepcsvbb);
   fChain->SetBranchAddress("ak4jet_IDLoose", ak4jet_IDLoose, &b_ak4jet_IDLoose);
   fChain->SetBranchAddress("ak4jet_IDTight", ak4jet_IDTight, &b_ak4jet_IDTight);

   fChain->SetBranchAddress("deltaRAK4AK8", deltaRAK4AK8, &b_deltaRAK4AK8);
   fChain->SetBranchAddress("gen_gra_m", &gen_gra_m, &b_gen_gra_m);
   fChain->SetBranchAddress("gen_gra_pt", &gen_gra_pt, &b_gen_gra_pt);
   fChain->SetBranchAddress("gen_gra_eta", &gen_gra_eta, &b_gen_gra_eta);
   fChain->SetBranchAddress("gen_gra_phi", &gen_gra_phi, &b_gen_gra_phi);
   fChain->SetBranchAddress("gen_rad_m", &gen_rad_m, &b_gen_rad_m);
   fChain->SetBranchAddress("gen_rad_pt", &gen_rad_pt, &b_gen_rad_pt);
   fChain->SetBranchAddress("gen_rad_eta", &gen_rad_eta, &b_gen_rad_eta);
   fChain->SetBranchAddress("gen_rad_phi", &gen_rad_phi, &b_gen_rad_phi);

   fChain->SetBranchAddress("gen_tau_eta", &gen_tau_eta, &b_gen_tau_eta);
   fChain->SetBranchAddress("gen_tau_phi", &gen_tau_phi, &b_gen_tau_phi);
   fChain->SetBranchAddress("gen_tau_pt", &gen_tau_pt, &b_gen_tau_pt);
   fChain->SetBranchAddress("gen_tau_e", &gen_tau_e, &b_gen_tau_e);
   fChain->SetBranchAddress("gen_tau_eta_2", &gen_tau_eta_2, &b_gen_tau_eta_2);
   fChain->SetBranchAddress("gen_tau_phi_2", &gen_tau_phi_2, &b_gen_tau_phi_2);
   fChain->SetBranchAddress("gen_tau_pt_2", &gen_tau_pt_2, &b_gen_tau_pt_2);
   fChain->SetBranchAddress("gen_tau_e_2", &gen_tau_e_2, &b_gen_tau_e_2);
   fChain->SetBranchAddress("gen_tau_eta_3", &gen_tau_eta_3, &b_gen_tau_eta_3);
   fChain->SetBranchAddress("gen_tau_phi_3", &gen_tau_phi_3, &b_gen_tau_phi_3);
   fChain->SetBranchAddress("gen_tau_pt_3", &gen_tau_pt_3, &b_gen_tau_pt_3);
   fChain->SetBranchAddress("gen_tau_e_3", &gen_tau_e_3, &b_gen_tau_e_3);

  
   fChain->SetBranchAddress("gentop_pt", &gentop_pt, &b_gentop_pt);
   fChain->SetBranchAddress("gentop_eta", &gentop_eta, &b_gentop_eta);
   fChain->SetBranchAddress("gentop_phi", &gentop_phi, &b_gentop_phi);
   fChain->SetBranchAddress("gentop_mass", &gentop_mass, &b_gentop_mass);
   fChain->SetBranchAddress("genantitop_pt", &genantitop_pt, &b_genantitop_pt);
   fChain->SetBranchAddress("genantitop_eta", &genantitop_eta, &b_genantitop_eta);
   fChain->SetBranchAddress("genantitop_phi", &genantitop_phi, &b_genantitop_phi);
   fChain->SetBranchAddress("genantitop_mass", &genantitop_mass, &b_genantitop_mass);


   fChain->SetBranchAddress("ptGenVlep", &ptGenVlep, &b_ptGenVlep);
   fChain->SetBranchAddress("etaGenVlep", &etaGenVlep, &b_etaGenVlep);
   fChain->SetBranchAddress("phiGenVlep", &phiGenVlep, &b_phiGenVlep);
   fChain->SetBranchAddress("massGenVlep", &massGenVlep, &b_massGenVlep);
   fChain->SetBranchAddress("ptGenVhad", &ptGenVhad, &b_ptGenVhad);
   fChain->SetBranchAddress("etaGenVhad", &etaGenVhad, &b_etaGenVhad);
   fChain->SetBranchAddress("phiGenVhad", &phiGenVhad, &b_phiGenVhad);
   fChain->SetBranchAddress("etaGenVhad_2", &etaGenVhad_2, &b_etaGenVhad_2);
   fChain->SetBranchAddress("phiGenVhad_2", &phiGenVhad_2, &b_phiGenVhad_2);
   fChain->SetBranchAddress("etaGenVhad_3", &etaGenVhad_3, &b_etaGenVhad_3);
   fChain->SetBranchAddress("phiGenVhad_3", &phiGenVhad_3, &b_phiGenVhad_3);
   fChain->SetBranchAddress("massGenVhad", &massGenVhad, &b_massGenVhad);
   fChain->SetBranchAddress("ptGenVlep_2", &ptGenVlep_2, &b_ptGenVlep_2);
   fChain->SetBranchAddress("etaGenVlep_2", &etaGenVlep_2, &b_etaGenVlep_2);
   fChain->SetBranchAddress("phiGenVlep_2", &phiGenVlep_2, &b_phiGenVlep_2);
   fChain->SetBranchAddress("massGenVlep_2", &massGenVlep_2, &b_massGenVlep_2);
   fChain->SetBranchAddress("ptGenV_2", &ptGenV_2, &b_ptGenV_2);
   fChain->SetBranchAddress("etaGenV_2", &etaGenV_2, &b_etaGenV_2);
   fChain->SetBranchAddress("phiGenV_2", &phiGenV_2, &b_phiGenV_2);
   fChain->SetBranchAddress("massGenV_2", &massGenV_2, &b_massGenV_2);
   fChain->SetBranchAddress("ptGenVlep_3", &ptGenVlep_3, &b_ptGenVlep_3);
   fChain->SetBranchAddress("etaGenVlep_3", &etaGenVlep_3, &b_etaGenVlep_3);
   fChain->SetBranchAddress("phiGenVlep_3", &phiGenVlep_3, &b_phiGenVlep_3);
   fChain->SetBranchAddress("massGenVlep_3", &massGenVlep_3, &b_massGenVlep_3);
   fChain->SetBranchAddress("ptGenV_3", &ptGenV_3, &b_ptGenV_3);
   fChain->SetBranchAddress("etaGenV_3", &etaGenV_3, &b_etaGenV_3);
   fChain->SetBranchAddress("phiGenV_3", &phiGenV_3, &b_phiGenV_3);
   fChain->SetBranchAddress("massGenV_3", &massGenV_3, &b_massGenV_3);

   fChain->SetBranchAddress("ptq11", &ptq11, &b_ptq11);
   fChain->SetBranchAddress("etaq11", &etaq11, &b_etaq11);
   fChain->SetBranchAddress("phiq11", &phiq11, &b_phiq11);
   fChain->SetBranchAddress("massq11", &massq11, &b_massq11);
   fChain->SetBranchAddress("ptq12", &ptq12, &b_ptq12);
   fChain->SetBranchAddress("etaq12", &etaq12, &b_etaq12);
   fChain->SetBranchAddress("phiq12", &phiq12, &b_phiq12);
   fChain->SetBranchAddress("massq12", &massq12, &b_massq12);
   fChain->SetBranchAddress("ptq21", &ptq21, &b_ptq21);
   fChain->SetBranchAddress("etaq21", &etaq21, &b_etaq21);
   fChain->SetBranchAddress("phiq21", &phiq21, &b_phiq21);
   fChain->SetBranchAddress("massq21", &massq21, &b_massq21);
   fChain->SetBranchAddress("ptq22", &ptq22, &b_ptq22);
   fChain->SetBranchAddress("etaq22", &etaq22, &b_etaq22);
   fChain->SetBranchAddress("phiq22", &phiq22, &b_phiq22);
   fChain->SetBranchAddress("massq22", &massq22, &b_massq22);   
   fChain->SetBranchAddress("ptq31", &ptq31, &b_ptq31);
   fChain->SetBranchAddress("etaq31", &etaq31, &b_etaq31);
   fChain->SetBranchAddress("phiq31", &phiq31, &b_phiq31);
   fChain->SetBranchAddress("massq31", &massq31, &b_massq31);
   fChain->SetBranchAddress("ptq32", &ptq32, &b_ptq32);
   fChain->SetBranchAddress("etaq32", &etaq32, &b_etaq32);
   fChain->SetBranchAddress("phiq32", &phiq32, &b_phiq32);
   fChain->SetBranchAddress("massq32", &massq32, &b_massq32);
Notify();
}

Bool_t EDBR2PKUTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void EDBR2PKUTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

void EDBR2PKUTree::endJob() {
   fout->cd();
   ExTree->Write();
   // ExTree->Write("",TObject::kWriteDelete); // 21.9.7 : in order to solve the problem for write the backup trees
   // ExTree->Write("",TObject::kOverwrite); // 21.9.7 : in order to solve the problem for write the backup trees
   
   fout->Write();
   fout->Close();
}

Int_t EDBR2PKUTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef EDBR2PKUTree_cxx

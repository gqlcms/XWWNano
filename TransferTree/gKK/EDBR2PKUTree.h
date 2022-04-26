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

#include "VVVTree_HeadFile/goodrun.h"


#include <iostream>
#include <fstream>
using namespace std;

#define NFATJET_MAX 20 // for FatJet collection
#define NJET_MAX 100 // for FatJet collection
#define NGENPART_MAX 502 // for FatJet collection

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
      // TChain          *fChain;   //!pointer to the analyzed TTree or TChain
      Int_t           fCurrent; //!current Tree number in a TChain
      TString channelName;

   bool Exclusive_Collection(TLorentzVector object, vector<TLorentzVector> collectionP4 , float deltaR_);
   

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
   void EventLevel(Long64_t jentry, TString YEAR, Int_t IS_Data);
   void AK4_init(Long64_t jentry);
   void HT_ST();
   void Nj4_Nj8();
   // void NAK4();
   void Nbtagf(TString YEAR, Int_t IS_Data);
   void Weightf(Double_t XS, Int_t Nevents, Double_t LUMI);
   void GlobalInit(TString YEAR, Int_t IS_Data);
   void goldenjsoninit(TString YEAR, Int_t IS_Data);
   void loadVectorBranches();
   void Deep_W_Ordered_ParticleNetScore();
   void AK8_Nsubjetness_Init(Long64_t jentry);
   void Deep_W_Ordered_Nsubjetness();

    

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
   void Radion_Matching_deepW_Ordered();
   void Outputbranches();
   bool Filter_Events(TString YEAR, Int_t IS_Data);

   // for VVV EFT study
   void VVVEFT_analysis_init(Long64_t jentry);
   void VVVEFT_AK8_init();
   void VVVEFT_GenMatching();
   void VVVEFT_leptonicW();
   void VVVEFT_EventLevel();
   void VVVEFT_Nbjets();
   void VVVEFT_process(Long64_t jentry);
   void VVVEFT_weight(Double_t XS, Int_t Nevents, Double_t LUMI);
   bool Filter_Event_1LeptonEFT(TString YEAR, Int_t IS_Data);

std::vector<std::string> outputbranches;

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

bool goodRun;
bool Flag;

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

Int_t matchingt_a;
Int_t matchingW_a;
Int_t matchingg_a;
Int_t matchingZ_a;
Int_t matchingu_a;
Int_t matchingd_a;
Int_t matchings_a;
Int_t matchingc_a;
Int_t matchingg_first_a;
Int_t matchingu_first_a;
Int_t matchingd_first_a;
Int_t matchings_first_a;
Int_t matchingc_first_a;
Int_t matchingqg_first_a;
Int_t matchingt_first_a;


Int_t matchingt_b;
Int_t matchingW_b;
Int_t matchingg_b;
Int_t matchingZ_b;
Int_t matchingu_b;
Int_t matchingd_b;
Int_t matchings_b;
Int_t matchingc_b;
Int_t matchingg_first_b;
Int_t matchingu_first_b;
Int_t matchingd_first_b;
Int_t matchings_first_b;
Int_t matchingc_first_b;
Int_t matchingqg_first_b;
Int_t matchingt_first_b;


Int_t matchingt_c;
Int_t matchingW_c;
Int_t matchingg_c;
Int_t matchingZ_c;
Int_t matchingu_c;
Int_t matchingd_c;
Int_t matchings_c;
Int_t matchingc_c;
Int_t matchingg_first_c;
Int_t matchingu_first_c;
Int_t matchingd_first_c;
Int_t matchings_first_c;
Int_t matchingc_first_c;
Int_t matchingqg_first_c;
Int_t matchingt_first_c;


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

Int_t R4q_a , R4q_b , R4q_c;
Int_t R3q_a , R3q_b , R3q_c;
Int_t R2q_a , R2q_b , R2q_c;
Int_t w_a , w_b , w_c;
Int_t z_a , z_b , z_c;
Int_t Rlqq_a , Rlqq_b , Rlqq_c;
Int_t Rlq_a , Rlq_b , Rlq_c;
Int_t gKK_g_a , gKK_g_b , gKK_g_c;
Int_t u_a , u_b , u_c;
Int_t R3q_taudecay_a , R3q_taudecay_b , R3q_taudecay_c;

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
TBranch *b_FatJet_pt_ = 0;
    
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

float FatJet_tau1_[NFATJET_MAX];
vector<float> v_FatJet_tau1_;
TBranch *b_FatJet_tau1_;

float FatJet_tau2_[NFATJET_MAX];
vector<float> v_FatJet_tau2_;
TBranch *b_FatJet_tau2_;

float FatJet_tau3_[NFATJET_MAX];
vector<float> v_FatJet_tau3_;
TBranch *b_FatJet_tau3_;

float FatJet_tau4_[NFATJET_MAX];
vector<float> v_FatJet_tau4_;
TBranch *b_FatJet_tau4_;



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
UInt_t           run;
UInt_t           luminosityBlock;
Int_t           nLooseEle;
Int_t           nLooseMu;

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

float PartNet_MD_W_a;
float PartNet_MD_W_b;
float PartNet_MD_W_c;

float FatJet_tau1_a;
float FatJet_tau1_b;
float FatJet_tau1_c;
float FatJet_tau2_a;
float FatJet_tau2_b;
float FatJet_tau2_c;
float FatJet_tau3_a;
float FatJet_tau3_b;
float FatJet_tau3_c;
float FatJet_tau4_a;
float FatJet_tau4_b;
float FatJet_tau4_c;

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
Double_t        genz_q1_eta[5];
Double_t        genz_q1_phi[5];
Double_t        genz_q2_eta[5];
Double_t        genz_q2_phi[5];
Int_t           taggenzl[5];

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

bool Flag_METFilters;
bool Flag_goodVertices;
bool Flag_globalSuperTightHalo2016Filter;
bool Flag_HBHENoiseFilter;
bool Flag_HBHENoiseIsoFilter;
bool Flag_EcalDeadCellTriggerPrimitiveFilter;
bool Flag_BadPFMuonFilter;
bool Flag_eeBadScFilter;


// for 1lepton VVV EFT

float Lep1fatJet2_LeptonPt;
float Lep1fatJet2_LeptonEta;
float Lep1fatJet2_LeptonPhi;
float Lep1fatJet2_LeptonE;
int Lep1fatJet2_LeptonPDGID;
float Lep1fatJet2_Muon_pfRelIso04_all;

    // MET
float Lep1fatJet2_MET_pt;
float Lep1fatJet2_MET_phi;
float Common_MET_pt_JER;
float Common_MET_phi_JER;

    // neutrino
float Lep1fatJet2_NeutrinoPt;
float Lep1fatJet2_NeutrinoEta;
float Lep1fatJet2_Neutrinophi;
float Lep1fatJet2_NeutrinoE;

    // Leptonic W
float Lep1fatJet2_LeptonicWPt;
float Lep1fatJet2_LeptonicWEta;
float Lep1fatJet2_LeptonicWPhi;
float Lep1fatJet2_LeptonicWM;
float Lep1fatJet2_LeptonicWMt;

    
// fatJet
float Lep1fatJet2_FatJet_pt;
float Lep1fatJet2_FatJet_eta;
float Lep1fatJet2_FatJet_phi;
float Lep1fatJet2_FatJet_msoftdrop;
int Lep1fatJet2_FatJet_jetId;
float Lep1fatJet2_FatJet_tau1;
float Lep1fatJet2_FatJet_tau2;
float Lep1fatJet2_FatJet_tau3;
float Lep1fatJet2_FatJet_tau4;
float Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_TvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_WvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_ZvsQCD;
float Lep1fatJet2_FatJet_deepTagMD_bbvsLight;
float Lep1fatJet2_FatJet_deepTagMD_ccvsLight;
float Lep1fatJet2_FatJet_deepTag_H;
float Lep1fatJet2_FatJet_deepTag_QCD;
float Lep1fatJet2_FatJet_deepTag_QCDothers;
float Lep1fatJet2_FatJet_deepTag_TvsQCD;
float Lep1fatJet2_FatJet_deepTag_WvsQCD;
float Lep1fatJet2_FatJet_deepTag_ZvsQCD;
float Lep1fatJet2_FatJet_particleNetMD_QCD;
float Lep1fatJet2_FatJet_particleNetMD_Xbb;
float Lep1fatJet2_FatJet_particleNetMD_Xcc;
float Lep1fatJet2_FatJet_particleNetMD_Xqq;
float Lep1fatJet2_FatJet_particleNet_H4qvsQCD;
float Lep1fatJet2_FatJet_particleNet_HbbvsQCD;
float Lep1fatJet2_FatJet_particleNet_HccvsQCD;
float Lep1fatJet2_FatJet_particleNet_QCD;
float Lep1fatJet2_FatJet_particleNet_TvsQCD;
float Lep1fatJet2_FatJet_particleNet_WvsQCD;
float Lep1fatJet2_FatJet_particleNet_ZvsQCD;

float Lep1fatJet2_FatJet_pt_2;
float Lep1fatJet2_FatJet_eta_2;
float Lep1fatJet2_FatJet_phi_2;
float Lep1fatJet2_FatJet_msoftdrop_2;
int Lep1fatJet2_FatJet_jetId_2;
float Lep1fatJet2_FatJet_tau1_2;
float Lep1fatJet2_FatJet_tau2_2;
float Lep1fatJet2_FatJet_tau3_2;
float Lep1fatJet2_FatJet_tau4_2;
float Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2;
float Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2;
float Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2;
float Lep1fatJet2_FatJet_deepTag_H_2;
float Lep1fatJet2_FatJet_deepTag_QCD_2;
float Lep1fatJet2_FatJet_deepTag_QCDothers_2;
float Lep1fatJet2_FatJet_deepTag_TvsQCD_2;
float Lep1fatJet2_FatJet_deepTag_WvsQCD_2;
float Lep1fatJet2_FatJet_deepTag_ZvsQCD_2;
float Lep1fatJet2_FatJet_particleNetMD_QCD_2;
float Lep1fatJet2_FatJet_particleNetMD_Xbb_2;
float Lep1fatJet2_FatJet_particleNetMD_Xcc_2;
float Lep1fatJet2_FatJet_particleNetMD_Xqq_2;
float Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_HccvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_QCD_2;
float Lep1fatJet2_FatJet_particleNet_TvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_WvsQCD_2;
float Lep1fatJet2_FatJet_particleNet_ZvsQCD_2;

// Gen


// weight, HLT
float Lep1fatJet2_Pileup_nTrueInt;
float Lep1fatJet2_Pileup_nPU;

int Lep1fatJet2_HLT_Mu50;
int Lep1fatJet2_HLT_IsoMu24;
int Lep1fatJet2_HLT_OldMu100;
int Lep1fatJet2_HLT_TkMu100;
int Lep1fatJet2_HLT_IsoMu27;
int Lep1fatJet2_HLT_Ele27_WPTight_Gsf;
int Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG;
int Lep1fatJet2_HLT_Ele35_WPTight_Gsf;
int Lep1fatJet2_HLT_Photon200;
int Lep1fatJet2_HLT_Ele32_WPTight_Gsf;

bool Common_passGoodRun;
bool Common_noiseFlag;
bool Common_noiseFlagMC;

int Common_nb_tight;
int Common_nb_medium;
int Common_nb_loose;

float Common_event_lepSF;
float Common_event_tightBtagSF;
float Common_event_mediumBtagSF;
float Common_event_looseBtagSF;
float Common_eventweight_fatjet_SFVLoose;
float Common_eventweight_fatjet_SFLoose;
float Common_eventweight_fatjet_SFMedium;
float Common_eventweight_fatjet_SFTight;

float Weight_btagtight;
float weight_btagmediun;
float Weight_btagloose;
float Weight_FJVL;
float Weight_FJL;
float Weight_FJM;
float Weight_FJT;

// Gen matching
int matchingt_1;
int matchingW_1;
int matchingg_1;
int matchingZ_1;
int matchingu_1;
int matchingd_1;
int matchings_1;
int matchingc_1;
int matching_gq_1;

int matchingt_2;
int matchingW_2;
int matchingg_2;
int matchingZ_2;
int matchingu_2;
int matchingd_2;
int matchings_2;
int matchingc_2;
int matching_gq_2;

// calculated variables
int nb_l_deep_ex;
int nb_m_deep_ex;
int nb_t_deep_ex;
int nb_l_deep_in;
int nb_m_deep_in;
int nb_t_deep_in;



float MJJlv;

float leptonicWMT;

// vector branches
std::vector<float> *  Lep1fatJet2_Jet_btagDeepB=0;
std::vector<float> *  Lep1fatJet2_Jet_btagDeepC=0;
std::vector<float> *  Lep1fatJet2_Jet_btagDeepFlavC=0;
std::vector<float> *  Lep1fatJet2_Jet_btagDeepFlavB=0;
std::vector<float> *  Lep1fatJet2_Jet_qgl=0;
std::vector<float> *  Lep1fatJet2_Jet_jetId=0;
std::vector<float> *  Lep1fatJet2_Jet_hadronFlavour=0;
std::vector<float> *  Lep1fatJet2_Jet_partonFlavour=0;
std::vector<float> *  Lep1fatJet2_Jet_pt=0;
std::vector<float> *  Lep1fatJet2_Jet_eta=0;
std::vector<float> *  Lep1fatJet2_Jet_phi=0;
std::vector<float> *  Lep1fatJet2_Jet_e=0;

std::vector<float> *  Lep1fatJet2_GenPart_eta=0;
std::vector<int> *  Lep1fatJet2_GenPart_genPartIdxMother=0;
std::vector<float> *  Lep1fatJet2_GenPart_mass=0;
std::vector<int> *  Lep1fatJet2_GenPart_pdgId=0;
std::vector<float> *  Lep1fatJet2_GenPart_phi=0;
std::vector<float> *  Lep1fatJet2_GenPart_pt=0;
std::vector<int> *  Lep1fatJet2_GenPart_status=0;
std::vector<int> *  Lep1fatJet2_GenPart_statusFlags=0;



TBranch        *b_Lep1fatJet2_LeptonPt;
TBranch        *b_Lep1fatJet2_LeptonEta;
TBranch        *b_Lep1fatJet2_LeptonPhi;
TBranch        *b_Lep1fatJet2_LeptonE;
TBranch        *b_Lep1fatJet2_LeptonPDGID;
TBranch        *b_Lep1fatJet2_Muon_pfRelIso04_all;

    // MET
TBranch        *b_Lep1fatJet2_MET_pt;
TBranch        *b_Lep1fatJet2_MET_phi;
TBranch        *b_Common_MET_pt_JER;
TBranch        *b_Common_MET_phi_JER;

    // neutrino
TBranch        *b_Lep1fatJet2_NeutrinoPt;
TBranch        *b_Lep1fatJet2_NeutrinoEta;
TBranch        *b_Lep1fatJet2_Neutrinophi;
TBranch        *b_Lep1fatJet2_NeutrinoE;

    // Leptonic W
TBranch        *b_Lep1fatJet2_LeptonicWPt;
TBranch        *b_Lep1fatJet2_LeptonicWEta;
TBranch        *b_Lep1fatJet2_LeptonicWPhi;
TBranch        *b_Lep1fatJet2_LeptonicWM;
TBranch        *b_Lep1fatJet2_LeptonicWMt;

    
   
// fatJet

TBranch        *b_Lep1fatJet2_FatJet_pt;
TBranch        *b_Lep1fatJet2_FatJet_eta;
TBranch        *b_Lep1fatJet2_FatJet_phi;
TBranch        *b_Lep1fatJet2_FatJet_msoftdrop;
TBranch        *b_Lep1fatJet2_FatJet_jetId;
TBranch        *b_Lep1fatJet2_FatJet_tau1;
TBranch        *b_Lep1fatJet2_FatJet_tau2;
TBranch        *b_Lep1fatJet2_FatJet_tau3;
TBranch        *b_Lep1fatJet2_FatJet_tau4;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_TvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_WvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_bbvsLight;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ccvsLight;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_H;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_QCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_QCDothers;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_TvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_WvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_ZvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_QCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xbb;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xcc;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xqq;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_H4qvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_HbbvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_HccvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_QCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_TvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_WvsQCD;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_ZvsQCD;

TBranch        *b_Lep1fatJet2_FatJet_pt_2;
TBranch        *b_Lep1fatJet2_FatJet_eta_2;
TBranch        *b_Lep1fatJet2_FatJet_phi_2;
TBranch        *b_Lep1fatJet2_FatJet_msoftdrop_2;
TBranch        *b_Lep1fatJet2_FatJet_jetId_2;
TBranch        *b_Lep1fatJet2_FatJet_tau1_2;
TBranch        *b_Lep1fatJet2_FatJet_tau2_2;
TBranch        *b_Lep1fatJet2_FatJet_tau3_2;
TBranch        *b_Lep1fatJet2_FatJet_tau4_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_H_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_QCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_QCDothers_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_TvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_WvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_deepTag_ZvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_QCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xbb_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xcc_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNetMD_Xqq_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_HccvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_QCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_TvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_WvsQCD_2;
TBranch        *b_Lep1fatJet2_FatJet_particleNet_ZvsQCD_2;


// weight, HLT
TBranch        *b_Lep1fatJet2_Pileup_nTrueInt;
TBranch        *b_Lep1fatJet2_Pileup_nPU;

TBranch        *b_Lep1fatJet2_HLT_Mu50;
TBranch        *b_Lep1fatJet2_HLT_IsoMu24;
TBranch        *b_Lep1fatJet2_HLT_OldMu100;
TBranch        *b_Lep1fatJet2_HLT_TkMu100;
TBranch        *b_Lep1fatJet2_HLT_IsoMu27;
TBranch        *b_Lep1fatJet2_HLT_Ele27_WPTight_Gsf;
TBranch        *b_Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG;
TBranch        *b_Lep1fatJet2_HLT_Ele35_WPTight_Gsf;
TBranch        *b_Lep1fatJet2_HLT_Photon200;
TBranch        *b_Lep1fatJet2_HLT_Ele32_WPTight_Gsf;

TBranch        *b_Common_passGoodRun;
TBranch        *b_Common_noiseFlag;
TBranch        *b_Common_noiseFlagMC;

TBranch        *b_Common_nb_tight;
TBranch        *b_Common_nb_medium;
TBranch        *b_Common_nb_loose;


TBranch        *b_Common_event_lepSF;
TBranch        *b_Common_event_tightBtagSF;
TBranch        *b_Common_event_mediumBtagSF;
TBranch        *b_Common_event_looseBtagSF;
TBranch        *b_Common_eventweight_fatjet_SFVLoose;
TBranch        *b_Common_eventweight_fatjet_SFLoose;
TBranch        *b_Common_eventweight_fatjet_SFMedium;
TBranch        *b_Common_eventweight_fatjet_SFTight;

// end of for VVV EFT 1lepton 


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


TBranch        *b_Flag_METFilters;
TBranch        *b_Flag_goodVertices;
TBranch        *b_Flag_globalSuperTightHalo2016Filter;
TBranch        *b_Flag_HBHENoiseFilter;
TBranch        *b_Flag_HBHENoiseIsoFilter;
TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;
TBranch        *b_Flag_BadPFMuonFilter;
TBranch        *b_Flag_eeBadScFilter;

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
TBranch        *b_luminosityBlock;   //!

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





   TString m_dataset;
   EDBR2PKUTree(TTree *tree=0, TString dataset="", Int_t IsData = 1, std::vector<std::string> outputbranches_ = std::vector<std::string>({}), TString channel_ = "" );
   // EDBR2PKUTree(TChain *tree=0, TString dataset="", Int_t IsData = 1, std::vector<std::string> outputbranches_ = std::vector<std::string>({}), TString channel_ = "" );

   virtual ~EDBR2PKUTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree, Int_t IsData);
   // virtual void     Init(TChain *tree, Int_t IsData);
   virtual void     Loop(TString channelname, Double_t XS, Int_t IsData, Float_t Nevents, Double_t LUMI, TString YEAR);// channelname= "mu" or "el"
   virtual Bool_t   Notify(Long64_t entry);
   virtual void     Show(Long64_t entry = -1);
   virtual void     endJob() ;

   private:
   TTree *ExTree;
   TFile *fout; 
   ofstream *file_cutflow;

};

#endif

#ifdef EDBR2PKUTree_cxx
// EDBR2PKUTree::EDBR2PKUTree(TChain *tree, TString dataset, Int_t IsData, std::vector<std::string> outputbranches_, TString channel_) : fChain(0) 
EDBR2PKUTree::EDBR2PKUTree(TTree *tree, TString dataset, Int_t IsData, std::vector<std::string> outputbranches_, TString channel_) : fChain(0) 
{
   channelName = channel_;
   cout << "channelName : " << channelName << endl;
   m_dataset = dataset;
   Init(tree, IsData);
   outputbranches = outputbranches_;
   Outputbranches();
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
      Notify(entry);
   }
   return centry;
}

void EDBR2PKUTree::Outputbranches(){
   if(outputbranches.size() > 0){
      ExTree->SetBranchStatus("*",0);
      for(size_t i ; i < outputbranches.size(); i++){
         ExTree->SetBranchStatus(outputbranches[i].c_str(),1);
      }
   }
}

void EDBR2PKUTree::Init(TTree *tree, Int_t IsData)
// void EDBR2PKUTree::Init(TChain *tree, Int_t IsData)
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

if ( channelName.EqualTo("had") ){
if (IsData > 0){
   ExTree->Branch("matchingt_a", &matchingt_a, "matchingt_a/I");
   ExTree->Branch("matchingW_a", &matchingW_a, "matchingW_a/I");
   ExTree->Branch("matchingg_a", &matchingg_a, "matchingg_a/I");
   ExTree->Branch("matchingZ_a", &matchingZ_a, "matchingZ_a/I");
   ExTree->Branch("matchingu_a", &matchingu_a, "matchingu_a/I");
   ExTree->Branch("matchingd_a", &matchingd_a, "matchingd_a/I");
   ExTree->Branch("matchings_a", &matchings_a, "matchings_a/I");
   ExTree->Branch("matchingc_a", &matchingc_a, "matchingc_a/I");
   ExTree->Branch("matchingg_first_a", &matchingg_first_a, "matchingg_first_a/I");
   ExTree->Branch("matchingu_first_a", &matchingu_first_a, "matchingu_first_a/I");
   ExTree->Branch("matchingd_first_a", &matchingd_first_a, "matchingd_first_a/I");
   ExTree->Branch("matchings_first_a", &matchings_first_a, "matchings_first_a/I");
   ExTree->Branch("matchingc_first_a", &matchingc_first_a, "matchingc_first_a/I");
   ExTree->Branch("matchingqg_first_a", &matchingqg_first_a, "matchingqg_first_a/I");
   ExTree->Branch("matchingt_first_a", &matchingt_first_a, "matchingt_first_a/I");

   ExTree->Branch("matchingt_b", &matchingt_b, "matchingt_b/I");
   ExTree->Branch("matchingW_b", &matchingW_b, "matchingW_b/I");
   ExTree->Branch("matchingg_b", &matchingg_b, "matchingg_b/I");
   ExTree->Branch("matchingZ_b", &matchingZ_b, "matchingZ_b/I");
   ExTree->Branch("matchingu_b", &matchingu_b, "matchingu_b/I");
   ExTree->Branch("matchingd_b", &matchingd_b, "matchingd_b/I");
   ExTree->Branch("matchings_b", &matchings_b, "matchings_b/I");
   ExTree->Branch("matchingc_b", &matchingc_b, "matchingc_b/I");
   ExTree->Branch("matchingg_first_b", &matchingg_first_b, "matchingg_first_b/I");
   ExTree->Branch("matchingu_first_b", &matchingu_first_b, "matchingu_first_b/I");
   ExTree->Branch("matchingd_first_b", &matchingd_first_b, "matchingd_first_b/I");
   ExTree->Branch("matchings_first_b", &matchings_first_b, "matchings_first_b/I");
   ExTree->Branch("matchingc_first_b", &matchingc_first_b, "matchingc_first_b/I");
   ExTree->Branch("matchingqg_first_b", &matchingqg_first_b, "matchingqg_first_b/I");
   ExTree->Branch("matchingt_first_b", &matchingt_first_b, "matchingt_first_b/I");

   ExTree->Branch("matchingt_c", &matchingt_c, "matchingt_c/I");
   ExTree->Branch("matchingW_c", &matchingW_c, "matchingW_c/I");
   ExTree->Branch("matchingg_c", &matchingg_c, "matchingg_c/I");
   ExTree->Branch("matchingZ_c", &matchingZ_c, "matchingZ_c/I");
   ExTree->Branch("matchingu_c", &matchingu_c, "matchingu_c/I");
   ExTree->Branch("matchingd_c", &matchingd_c, "matchingd_c/I");
   ExTree->Branch("matchings_c", &matchings_c, "matchings_c/I");
   ExTree->Branch("matchingc_c", &matchingc_c, "matchingc_c/I");
   ExTree->Branch("matchingg_first_c", &matchingg_first_c, "matchingg_first_c/I");
   ExTree->Branch("matchingu_first_c", &matchingu_first_c, "matchingu_first_c/I");
   ExTree->Branch("matchingd_first_c", &matchingd_first_c, "matchingd_first_c/I");
   ExTree->Branch("matchings_first_c", &matchings_first_c, "matchings_first_c/I");
   ExTree->Branch("matchingc_first_c", &matchingc_first_c, "matchingc_first_c/I");
   ExTree->Branch("matchingqg_first_c", &matchingqg_first_c, "matchingqg_first_c/I");
   ExTree->Branch("matchingt_first_c", &matchingt_first_c, "matchingt_first_c/I");



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

   ExTree->Branch("R4q_a",&R4q_a,"R4q_a/I");
   ExTree->Branch("R4q_b",&R4q_b,"R4q_b/I");
   ExTree->Branch("R4q_c",&R4q_c,"R4q_c/I");
   ExTree->Branch("R3q_a",&R3q_a,"R3q_a/I");
   ExTree->Branch("R3q_b",&R3q_b,"R3q_b/I");
   ExTree->Branch("R3q_c",&R3q_c,"R3q_c/I");
   ExTree->Branch("R2q_a",&R2q_a,"R2q_a/I");
   ExTree->Branch("R2q_b",&R2q_b,"R2q_b/I");
   ExTree->Branch("R2q_c",&R2q_c,"R2q_c/I");
   ExTree->Branch("w_a",&w_a,"w_a/I");
   ExTree->Branch("w_b",&w_b,"w_b/I");
   ExTree->Branch("w_c",&w_c,"w_c/I");
   ExTree->Branch("z_a",&z_a,"z_a/I");
   ExTree->Branch("z_b",&z_b,"z_b/I");
   ExTree->Branch("z_c",&z_c,"z_c/I");
   ExTree->Branch("Rlqq_a",&Rlqq_a,"Rlqq_a/I");
   ExTree->Branch("Rlqq_b",&Rlqq_b,"Rlqq_b/I");
   ExTree->Branch("Rlqq_c",&Rlqq_c,"Rlqq_c/I");
   ExTree->Branch("Rlq_a",&Rlq_a,"Rlq_a/I");
   ExTree->Branch("Rlq_b",&Rlq_b,"Rlq_b/I");
   ExTree->Branch("Rlq_c",&Rlq_c,"Rlq_c/I");
   ExTree->Branch("gKK_g_a",&gKK_g_a,"gKK_g_a/I");
   ExTree->Branch("gKK_g_b",&gKK_g_b,"gKK_g_b/I");
   ExTree->Branch("gKK_g_c",&gKK_g_c,"gKK_g_c/I");
   ExTree->Branch("u_a",&u_a,"u_a/I");
   ExTree->Branch("u_b",&u_b,"u_b/I");
   ExTree->Branch("u_c",&u_c,"u_c/I");
   ExTree->Branch("R3q_taudecay_a",&R3q_taudecay_a,"R3q_taudecay_a/I");
   ExTree->Branch("R3q_taudecay_b",&R3q_taudecay_b,"R3q_taudecay_b/I");
   ExTree->Branch("R3q_taudecay_c",&R3q_taudecay_c,"R3q_taudecay_c/I");

}

ExTree->Branch("goodRun", &goodRun, "goodRun/b");
ExTree->Branch("Flag", &Flag, "Flag/b");

ExTree->Branch("MET_eta", &MET_eta, "MET_eta/F");
ExTree->Branch("MET_et", &MET_et, "MET_et/F");

ExTree->Branch("Mj",&Mj,"Mj/F");
ExTree->Branch("Mj_2",&Mj_2,"Mj_2/F");
ExTree->Branch("Mj_3",&Mj_3,"Mj_3/F");
ExTree->Branch("Mj_4",&Mj_4,"Mj_4/F");

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

ExTree->Branch("PartNet_MD_W_a",&PartNet_MD_W_a,"PartNet_MD_W_a/F");
ExTree->Branch("PartNet_MD_W_b",&PartNet_MD_W_b,"PartNet_MD_W_b/F");
ExTree->Branch("PartNet_MD_W_c",&PartNet_MD_W_c,"PartNet_MD_W_c/F");

ExTree->Branch("FatJet_tau1_a",&FatJet_tau1_a,"FatJet_tau1_a/F");
ExTree->Branch("FatJet_tau1_b",&FatJet_tau1_b,"FatJet_tau1_b/F");
ExTree->Branch("FatJet_tau1_c",&FatJet_tau1_c,"FatJet_tau1_c/F");
ExTree->Branch("FatJet_tau2_a",&FatJet_tau2_a,"FatJet_tau2_a/F");
ExTree->Branch("FatJet_tau2_b",&FatJet_tau2_b,"FatJet_tau2_b/F");
ExTree->Branch("FatJet_tau2_c",&FatJet_tau2_c,"FatJet_tau2_c/F");
ExTree->Branch("FatJet_tau3_a",&FatJet_tau3_a,"FatJet_tau3_a/F");
ExTree->Branch("FatJet_tau3_b",&FatJet_tau3_b,"FatJet_tau3_b/F");
ExTree->Branch("FatJet_tau3_c",&FatJet_tau3_c,"FatJet_tau3_c/F");
ExTree->Branch("FatJet_tau4_a",&FatJet_tau4_a,"FatJet_tau4_a/F");
ExTree->Branch("FatJet_tau4_b",&FatJet_tau4_b,"FatJet_tau4_b/F");
ExTree->Branch("FatJet_tau4_c",&FatJet_tau4_c,"FatJet_tau4_c/F");
    

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

ExTree->Branch("nb_l_deep_ex",&nb_l_deep_ex,"nb_l_deep_ex/I");
ExTree->Branch("nb_m_deep_ex",&nb_m_deep_ex,"nb_m_deep_ex/I");
ExTree->Branch("nb_t_deep_ex",&nb_t_deep_ex,"nb_t_deep_ex/I");
ExTree->Branch("nb_l_deep_in",&nb_l_deep_in,"nb_l_deep_in/I");
ExTree->Branch("nb_m_deep_in",&nb_m_deep_in,"nb_m_deep_in/I");
ExTree->Branch("nb_t_deep_in",&nb_t_deep_in,"nb_t_deep_in/I");
}

if ( channelName.Contains("VVV_EFT_1lepton") ){
   
ExTree->Branch("Lep1fatJet2_LeptonPt",&Lep1fatJet2_LeptonPt,"Lep1fatJet2_LeptonPt/F");
ExTree->Branch("Lep1fatJet2_LeptonEta",&Lep1fatJet2_LeptonEta,"Lep1fatJet2_LeptonEta/F");
ExTree->Branch("Lep1fatJet2_LeptonPhi",&Lep1fatJet2_LeptonPhi,"Lep1fatJet2_LeptonPhi/F");
ExTree->Branch("Lep1fatJet2_LeptonE",&Lep1fatJet2_LeptonE,"Lep1fatJet2_LeptonE/F");
ExTree->Branch("Lep1fatJet2_LeptonPDGID",&Lep1fatJet2_LeptonPDGID,"Lep1fatJet2_LeptonPDGID/I");
ExTree->Branch("Lep1fatJet2_Muon_pfRelIso04_all",&Lep1fatJet2_Muon_pfRelIso04_all,"Lep1fatJet2_Muon_pfRelIso04_all/F");

    // MET
ExTree->Branch("Lep1fatJet2_MET_pt",&Lep1fatJet2_MET_pt,"Lep1fatJet2_MET_pt/F");
ExTree->Branch("Lep1fatJet2_MET_phi",&Lep1fatJet2_MET_phi,"Lep1fatJet2_MET_phi/F");
ExTree->Branch("Common_MET_pt_JER",&Common_MET_pt_JER,"Common_MET_pt_JER/F");
ExTree->Branch("Common_MET_phi_JER",&Common_MET_phi_JER,"Common_MET_phi_JER/F");

    // neutrino
ExTree->Branch("Lep1fatJet2_NeutrinoPt",&Lep1fatJet2_NeutrinoPt,"Lep1fatJet2_NeutrinoPt/F");
ExTree->Branch("Lep1fatJet2_NeutrinoEta",&Lep1fatJet2_NeutrinoEta,"Lep1fatJet2_NeutrinoEta/F");
ExTree->Branch("Lep1fatJet2_Neutrinophi",&Lep1fatJet2_Neutrinophi,"Lep1fatJet2_Neutrinophi/F");
ExTree->Branch("Lep1fatJet2_NeutrinoE",&Lep1fatJet2_NeutrinoE,"Lep1fatJet2_NeutrinoE/F");

    // Leptonic W
ExTree->Branch("Lep1fatJet2_LeptonicWPt",&Lep1fatJet2_LeptonicWPt,"Lep1fatJet2_LeptonicWPt/F");
ExTree->Branch("Lep1fatJet2_LeptonicWEta",&Lep1fatJet2_LeptonicWEta,"Lep1fatJet2_LeptonicWEta/F");
ExTree->Branch("Lep1fatJet2_LeptonicWPhi",&Lep1fatJet2_LeptonicWPhi,"Lep1fatJet2_LeptonicWPhi/F");
ExTree->Branch("Lep1fatJet2_LeptonicWM",&Lep1fatJet2_LeptonicWM,"Lep1fatJet2_LeptonicWM/F");
ExTree->Branch("Lep1fatJet2_LeptonicWMt",&Lep1fatJet2_LeptonicWMt,"Lep1fatJet2_LeptonicWMt/F");
   
// fatJet

ExTree->Branch("Lep1fatJet2_FatJet_pt",&Lep1fatJet2_FatJet_pt,"Lep1fatJet2_FatJet_pt/F");
ExTree->Branch("Lep1fatJet2_FatJet_eta",&Lep1fatJet2_FatJet_eta,"Lep1fatJet2_FatJet_eta/F");
ExTree->Branch("Lep1fatJet2_FatJet_phi",&Lep1fatJet2_FatJet_phi,"Lep1fatJet2_FatJet_phi/F");
ExTree->Branch("Lep1fatJet2_FatJet_msoftdrop",&Lep1fatJet2_FatJet_msoftdrop,"Lep1fatJet2_FatJet_msoftdrop/F");
ExTree->Branch("Lep1fatJet2_FatJet_jetId",&Lep1fatJet2_FatJet_jetId,"Lep1fatJet2_FatJet_jetId/I");
ExTree->Branch("Lep1fatJet2_FatJet_tau1",&Lep1fatJet2_FatJet_tau1,"Lep1fatJet2_FatJet_tau1/F");
ExTree->Branch("Lep1fatJet2_FatJet_tau2",&Lep1fatJet2_FatJet_tau2,"Lep1fatJet2_FatJet_tau2/F");
ExTree->Branch("Lep1fatJet2_FatJet_tau3",&Lep1fatJet2_FatJet_tau3,"Lep1fatJet2_FatJet_tau3/F");
ExTree->Branch("Lep1fatJet2_FatJet_tau4",&Lep1fatJet2_FatJet_tau4,"Lep1fatJet2_FatJet_tau4/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD",&Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD,"Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD,"Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_TvsQCD",&Lep1fatJet2_FatJet_deepTagMD_TvsQCD,"Lep1fatJet2_FatJet_deepTagMD_TvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_WvsQCD",&Lep1fatJet2_FatJet_deepTagMD_WvsQCD,"Lep1fatJet2_FatJet_deepTagMD_WvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD,"Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD,"Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD,"Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZvsQCD,"Lep1fatJet2_FatJet_deepTagMD_ZvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_bbvsLight",&Lep1fatJet2_FatJet_deepTagMD_bbvsLight,"Lep1fatJet2_FatJet_deepTagMD_bbvsLight/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ccvsLight",&Lep1fatJet2_FatJet_deepTagMD_ccvsLight,"Lep1fatJet2_FatJet_deepTagMD_ccvsLight/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_H",&Lep1fatJet2_FatJet_deepTag_H,"Lep1fatJet2_FatJet_deepTag_H/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_QCD",&Lep1fatJet2_FatJet_deepTag_QCD,"Lep1fatJet2_FatJet_deepTag_QCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_QCDothers",&Lep1fatJet2_FatJet_deepTag_QCDothers,"Lep1fatJet2_FatJet_deepTag_QCDothers/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_TvsQCD",&Lep1fatJet2_FatJet_deepTag_TvsQCD,"Lep1fatJet2_FatJet_deepTag_TvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_WvsQCD",&Lep1fatJet2_FatJet_deepTag_WvsQCD,"Lep1fatJet2_FatJet_deepTag_WvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_ZvsQCD",&Lep1fatJet2_FatJet_deepTag_ZvsQCD,"Lep1fatJet2_FatJet_deepTag_ZvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_QCD",&Lep1fatJet2_FatJet_particleNetMD_QCD,"Lep1fatJet2_FatJet_particleNetMD_QCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xbb",&Lep1fatJet2_FatJet_particleNetMD_Xbb,"Lep1fatJet2_FatJet_particleNetMD_Xbb/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xcc",&Lep1fatJet2_FatJet_particleNetMD_Xcc,"Lep1fatJet2_FatJet_particleNetMD_Xcc/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xqq",&Lep1fatJet2_FatJet_particleNetMD_Xqq,"Lep1fatJet2_FatJet_particleNetMD_Xqq/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_H4qvsQCD",&Lep1fatJet2_FatJet_particleNet_H4qvsQCD,"Lep1fatJet2_FatJet_particleNet_H4qvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_HbbvsQCD",&Lep1fatJet2_FatJet_particleNet_HbbvsQCD,"Lep1fatJet2_FatJet_particleNet_HbbvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_HccvsQCD",&Lep1fatJet2_FatJet_particleNet_HccvsQCD,"Lep1fatJet2_FatJet_particleNet_HccvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_QCD",&Lep1fatJet2_FatJet_particleNet_QCD,"Lep1fatJet2_FatJet_particleNet_QCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_TvsQCD",&Lep1fatJet2_FatJet_particleNet_TvsQCD,"Lep1fatJet2_FatJet_particleNet_TvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_WvsQCD",&Lep1fatJet2_FatJet_particleNet_WvsQCD,"Lep1fatJet2_FatJet_particleNet_WvsQCD/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_ZvsQCD",&Lep1fatJet2_FatJet_particleNet_ZvsQCD,"Lep1fatJet2_FatJet_particleNet_ZvsQCD/F");

ExTree->Branch("Lep1fatJet2_FatJet_pt_2",&Lep1fatJet2_FatJet_pt_2,"Lep1fatJet2_FatJet_pt_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_eta_2",&Lep1fatJet2_FatJet_eta_2,"Lep1fatJet2_FatJet_eta_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_phi_2",&Lep1fatJet2_FatJet_phi_2,"Lep1fatJet2_FatJet_phi_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_msoftdrop_2",&Lep1fatJet2_FatJet_msoftdrop_2,"Lep1fatJet2_FatJet_msoftdrop_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_jetId_2",&Lep1fatJet2_FatJet_jetId_2,"Lep1fatJet2_FatJet_jetId_2/I");
ExTree->Branch("Lep1fatJet2_FatJet_tau1_2",&Lep1fatJet2_FatJet_tau1_2,"Lep1fatJet2_FatJet_tau1_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_tau2_2",&Lep1fatJet2_FatJet_tau2_2,"Lep1fatJet2_FatJet_tau2_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_tau3_2",&Lep1fatJet2_FatJet_tau3_2,"Lep1fatJet2_FatJet_tau3_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_tau4_2",&Lep1fatJet2_FatJet_tau4_2,"Lep1fatJet2_FatJet_tau4_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2,"Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2",&Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2,"Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2",&Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2,"Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_H_2",&Lep1fatJet2_FatJet_deepTag_H_2,"Lep1fatJet2_FatJet_deepTag_H_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_QCD_2",&Lep1fatJet2_FatJet_deepTag_QCD_2,"Lep1fatJet2_FatJet_deepTag_QCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_QCDothers_2",&Lep1fatJet2_FatJet_deepTag_QCDothers_2,"Lep1fatJet2_FatJet_deepTag_QCDothers_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_TvsQCD_2",&Lep1fatJet2_FatJet_deepTag_TvsQCD_2,"Lep1fatJet2_FatJet_deepTag_TvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_WvsQCD_2",&Lep1fatJet2_FatJet_deepTag_WvsQCD_2,"Lep1fatJet2_FatJet_deepTag_WvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_deepTag_ZvsQCD_2",&Lep1fatJet2_FatJet_deepTag_ZvsQCD_2,"Lep1fatJet2_FatJet_deepTag_ZvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_QCD_2",&Lep1fatJet2_FatJet_particleNetMD_QCD_2,"Lep1fatJet2_FatJet_particleNetMD_QCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xbb_2",&Lep1fatJet2_FatJet_particleNetMD_Xbb_2,"Lep1fatJet2_FatJet_particleNetMD_Xbb_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xcc_2",&Lep1fatJet2_FatJet_particleNetMD_Xcc_2,"Lep1fatJet2_FatJet_particleNetMD_Xcc_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNetMD_Xqq_2",&Lep1fatJet2_FatJet_particleNetMD_Xqq_2,"Lep1fatJet2_FatJet_particleNetMD_Xqq_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2",&Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2,"Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2",&Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2,"Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_HccvsQCD_2",&Lep1fatJet2_FatJet_particleNet_HccvsQCD_2,"Lep1fatJet2_FatJet_particleNet_HccvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_QCD_2",&Lep1fatJet2_FatJet_particleNet_QCD_2,"Lep1fatJet2_FatJet_particleNet_QCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_TvsQCD_2",&Lep1fatJet2_FatJet_particleNet_TvsQCD_2,"Lep1fatJet2_FatJet_particleNet_TvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_WvsQCD_2",&Lep1fatJet2_FatJet_particleNet_WvsQCD_2,"Lep1fatJet2_FatJet_particleNet_WvsQCD_2/F");
ExTree->Branch("Lep1fatJet2_FatJet_particleNet_ZvsQCD_2",&Lep1fatJet2_FatJet_particleNet_ZvsQCD_2,"Lep1fatJet2_FatJet_particleNet_ZvsQCD_2/F");

// weight, HLT
ExTree->Branch("Lep1fatJet2_Pileup_nTrueInt",&Lep1fatJet2_Pileup_nTrueInt,"Lep1fatJet2_Pileup_nTrueInt/F");
ExTree->Branch("Lep1fatJet2_Pileup_nPU",&Lep1fatJet2_Pileup_nPU,"Lep1fatJet2_Pileup_nPU/F");

ExTree->Branch("Lep1fatJet2_HLT_Mu50",&Lep1fatJet2_HLT_Mu50,"Lep1fatJet2_HLT_Mu50/I");
ExTree->Branch("Lep1fatJet2_HLT_IsoMu24",&Lep1fatJet2_HLT_IsoMu24,"Lep1fatJet2_HLT_IsoMu24/I");
ExTree->Branch("Lep1fatJet2_HLT_OldMu100",&Lep1fatJet2_HLT_OldMu100,"Lep1fatJet2_HLT_OldMu100/I");
ExTree->Branch("Lep1fatJet2_HLT_TkMu100",&Lep1fatJet2_HLT_TkMu100,"Lep1fatJet2_HLT_TkMu100/I");
ExTree->Branch("Lep1fatJet2_HLT_IsoMu27",&Lep1fatJet2_HLT_IsoMu27,"Lep1fatJet2_HLT_IsoMu27/I");
ExTree->Branch("Lep1fatJet2_HLT_Ele27_WPTight_GsI",&Lep1fatJet2_HLT_Ele27_WPTight_Gsf,"Lep1fatJet2_HLT_Ele27_WPTight_Gsf/I");
ExTree->Branch("Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG",&Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG,"Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG/I");
ExTree->Branch("Lep1fatJet2_HLT_Ele35_WPTight_Gsf",&Lep1fatJet2_HLT_Ele35_WPTight_Gsf,"Lep1fatJet2_HLT_Ele35_WPTight_Gsf/I");
ExTree->Branch("Lep1fatJet2_HLT_Photon200",&Lep1fatJet2_HLT_Photon200,"Lep1fatJet2_HLT_Photon200/I");
ExTree->Branch("Lep1fatJet2_HLT_Ele32_WPTight_GsI",&Lep1fatJet2_HLT_Ele32_WPTight_Gsf,"Lep1fatJet2_HLT_Ele32_WPTight_Gsf/I");

if( IsData > 0){
   ExTree->Branch("weight", &weight, "weight/D");
   ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
   ExTree->Branch("Weight_btagtight", &Weight_btagtight, "Weight_btagtight/F");
   ExTree->Branch("weight_btagmediun", &weight_btagmediun, "weight_btagmediun/F");
   ExTree->Branch("Weight_btagloose", &Weight_btagloose, "Weight_btagloose/F");
   ExTree->Branch("Weight_FJVL", &Weight_FJVL, "Weight_FJVL/F");
   ExTree->Branch("Weight_FJL", &Weight_FJL, "Weight_FJL/F");
   ExTree->Branch("Weight_FJM", &Weight_FJM, "Weight_FJM/F");
   ExTree->Branch("Weight_FJT", &Weight_FJT, "Weight_FJT/F");
}


// Genmatching
ExTree->Branch("matchingt_1",&matchingt_1,"matchingt_1/I");
ExTree->Branch("matchingW_1",&matchingW_1,"matchingW_1/I");
ExTree->Branch("matchingg_1",&matchingg_1,"matchingg_1/I");
ExTree->Branch("matchingZ_1",&matchingZ_1,"matchingZ_1/I");
ExTree->Branch("matchingu_1",&matchingu_1,"matchingu_1/I");
ExTree->Branch("matchingd_1",&matchingd_1,"matchingd_1/I");
ExTree->Branch("matchings_1",&matchings_1,"matchings_1/I");
ExTree->Branch("matchingc_1",&matchingc_1,"matchingc_1/I");
ExTree->Branch("matching_gq_1",&matching_gq_1,"matching_gq_1/I");

ExTree->Branch("matchingt_2",&matchingt_2,"matchingt_2/I");
ExTree->Branch("matchingW_2",&matchingW_2,"matchingW_2/I");
ExTree->Branch("matchingg_2",&matchingg_2,"matchingg_2/I");
ExTree->Branch("matchingZ_2",&matchingZ_2,"matchingZ_2/I");
ExTree->Branch("matchingu_2",&matchingu_2,"matchingu_2/I");
ExTree->Branch("matchingd_2",&matchingd_2,"matchingd_2/I");
ExTree->Branch("matchings_2",&matchings_2,"matchings_2/I");
ExTree->Branch("matchingc_2",&matchingc_2,"matchingc_2/I");
ExTree->Branch("matching_gq_2",&matching_gq_2,"matching_gq_2/I");


// event level variables
ExTree->Branch("nb_l_deep_ex",&nb_l_deep_ex,"nb_l_deep_ex/I");
ExTree->Branch("nb_m_deep_ex",&nb_m_deep_ex,"nb_m_deep_ex/I");
ExTree->Branch("nb_t_deep_ex",&nb_t_deep_ex,"nb_t_deep_ex/I");
ExTree->Branch("nb_l_deep_in",&nb_l_deep_in,"nb_l_deep_in/I");
ExTree->Branch("nb_m_deep_in",&nb_m_deep_in,"nb_m_deep_in/I");
ExTree->Branch("nb_t_deep_in",&nb_t_deep_in,"nb_t_deep_in/I");
ExTree->Branch("Common_nb_tight" ,&Common_nb_tight ,"Common_nb_tight/I");
ExTree->Branch("Common_nb_medium",&Common_nb_medium,"Common_nb_medium/I");
ExTree->Branch("Common_nb_loose" ,&Common_nb_loose ,"Common_nb_loose/I");


ExTree->Branch("ST",&ST,"ST/F");
ExTree->Branch("HT",&HT,"HT/F");
ExTree->Branch("MJJlv",&MJJlv,"MJJlv/F");

ExTree->Branch("leptonicWMT",&leptonicWMT,"leptonicWMT/F");

}

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



// for VVV EFT analysis



// for VVV EFT 



// end of for VVV EFT
if ( channelName.Contains("VVV_EFT_1lepton") ){

   fChain->SetBranchStatus("*",0);

   // lepton
    fChain->SetBranchStatus("Lep1fatJet2_LeptonPt",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonEta",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonPhi",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonE",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonPDGID",1);
    fChain->SetBranchStatus("Lep1fatJet2_Muon_pfRelIso04_all",1);

    // MET
    fChain->SetBranchStatus("Lep1fatJet2_MET_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_MET_phi",1);
    fChain->SetBranchStatus("Common_MET_pt_JER",1);
    fChain->SetBranchStatus("Common_MET_phi_JER",1);

    // neutrino
    fChain->SetBranchStatus("Lep1fatJet2_NeutrinoPt",1);
    fChain->SetBranchStatus("Lep1fatJet2_NeutrinoEta",1);
    fChain->SetBranchStatus("Lep1fatJet2_Neutrinophi",1);
    fChain->SetBranchStatus("Lep1fatJet2_NeutrinoE",1);

    // Leptonic W
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWPt",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWEta",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWPhi",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWM",1);
    fChain->SetBranchStatus("Lep1fatJet2_LeptonicWMt",1);

    // Jet
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepB",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepC",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepFlavC",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepFlavB",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_qgl",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_jetId",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_hadronFlavour",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_partonFlavour",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_e",1);
   
    // fatJet1
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_msoftdrop",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_jetId",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau1",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau3",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau4",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_TvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_WvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_bbvsLight",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ccvsLight",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_H",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_QCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_QCDothers",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_TvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_WvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_ZvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_QCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xbb",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xcc",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xqq",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_H4qvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_HbbvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_HccvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_QCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_TvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_WvsQCD",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_ZvsQCD",1);

    // fatJet2
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_pt_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_eta_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_phi_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_msoftdrop_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_jetId_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau1_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau2_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau3_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_tau4_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_H_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_QCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_QCDothers_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_TvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_WvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_deepTag_ZvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_QCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xbb_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xcc_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNetMD_Xqq_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_HccvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_QCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_TvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_WvsQCD_2",1);
    fChain->SetBranchStatus("Lep1fatJet2_FatJet_particleNet_ZvsQCD_2",1);

    // Gen
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_genPartIdxMother",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_mass",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_pdgId",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_status",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_statusFlags",1);
    fChain->SetBranchStatus("Lep1fatJet2_nGenPart",1);


    // weight, HLT
    fChain->SetBranchStatus("Lep1fatJet2_Pileup_nTrueInt",1);
    fChain->SetBranchStatus("Lep1fatJet2_Pileup_nPU",1);

    fChain->SetBranchStatus("Lep1fatJet2_HLT_Mu50",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_IsoMu24",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_OldMu100",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_TkMu100",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_IsoMu27",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Ele27_WPTight_Gsf",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Ele35_WPTight_Gsf",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Photon200",1);
    fChain->SetBranchStatus("Lep1fatJet2_HLT_Ele32_WPTight_Gsf",1);

    fChain->SetBranchStatus("Common_passGoodRun",1);
    fChain->SetBranchStatus("Common_noiseFlag",1);
    fChain->SetBranchStatus("Common_noiseFlagMC",1);

    fChain->SetBranchStatus("Common_event_lepSF",1);
    fChain->SetBranchStatus("Common_event_tightBtagSF",1);
    fChain->SetBranchStatus("Common_event_mediumBtagSF",1);
    fChain->SetBranchStatus("Common_event_looseBtagSF",1);
    fChain->SetBranchStatus("Common_eventweight_fatjet_SFVLoose",1);
    fChain->SetBranchStatus("Common_eventweight_fatjet_SFLoose",1);
    fChain->SetBranchStatus("Common_eventweight_fatjet_SFMedium",1);
    fChain->SetBranchStatus("Common_eventweight_fatjet_SFTight",1);

    // vector branches
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepB",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepC",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepFlavC",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_btagDeepFlavB",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_qgl",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_jetId",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_hadronFlavour",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_partonFlavour",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_Jet_e",1);

    fChain->SetBranchStatus("Common_nb_tight",1);
    fChain->SetBranchStatus("Common_nb_medium",1);
    fChain->SetBranchStatus("Common_nb_loose",1);


    fChain->SetBranchStatus("Lep1fatJet2_GenPart_eta",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_genPartIdxMother",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_mass",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_pdgId",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_phi",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_pt",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_status",1);
    fChain->SetBranchStatus("Lep1fatJet2_GenPart_statusFlags",1);

    

   fChain->SetBranchAddress("Lep1fatJet2_LeptonPt",&Lep1fatJet2_LeptonPt,&b_Lep1fatJet2_LeptonPt);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonEta",&Lep1fatJet2_LeptonEta,&b_Lep1fatJet2_LeptonEta);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonPhi",&Lep1fatJet2_LeptonPhi,&b_Lep1fatJet2_LeptonPhi);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonE",&Lep1fatJet2_LeptonE,&b_Lep1fatJet2_LeptonE);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonPDGID",&Lep1fatJet2_LeptonPDGID,&b_Lep1fatJet2_LeptonPDGID);
   fChain->SetBranchAddress("Lep1fatJet2_Muon_pfRelIso04_all",&Lep1fatJet2_Muon_pfRelIso04_all,&b_Lep1fatJet2_Muon_pfRelIso04_all);

      // MET
   fChain->SetBranchAddress("Lep1fatJet2_MET_pt",&Lep1fatJet2_MET_pt,&b_Lep1fatJet2_MET_pt);
   fChain->SetBranchAddress("Lep1fatJet2_MET_phi",&Lep1fatJet2_MET_phi,&b_Lep1fatJet2_MET_phi);
   fChain->SetBranchAddress("Common_MET_pt_JER",&Common_MET_pt_JER,&b_Common_MET_pt_JER);
   fChain->SetBranchAddress("Common_MET_phi_JER",&Common_MET_phi_JER,&b_Common_MET_phi_JER);

      // neutrino
   fChain->SetBranchAddress("Lep1fatJet2_NeutrinoPt",&Lep1fatJet2_NeutrinoPt,&b_Lep1fatJet2_NeutrinoPt);
   fChain->SetBranchAddress("Lep1fatJet2_NeutrinoEta",&Lep1fatJet2_NeutrinoEta,&b_Lep1fatJet2_NeutrinoEta);
   fChain->SetBranchAddress("Lep1fatJet2_Neutrinophi",&Lep1fatJet2_Neutrinophi,&b_Lep1fatJet2_Neutrinophi);
   fChain->SetBranchAddress("Lep1fatJet2_NeutrinoE",&Lep1fatJet2_NeutrinoE,&b_Lep1fatJet2_NeutrinoE);

      // Leptonic W
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWPt",&Lep1fatJet2_LeptonicWPt,&b_Lep1fatJet2_LeptonicWPt);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWEta",&Lep1fatJet2_LeptonicWEta,&b_Lep1fatJet2_LeptonicWEta);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWPhi",&Lep1fatJet2_LeptonicWPhi,&b_Lep1fatJet2_LeptonicWPhi);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWM",&Lep1fatJet2_LeptonicWM,&b_Lep1fatJet2_LeptonicWM);
   fChain->SetBranchAddress("Lep1fatJet2_LeptonicWMt",&Lep1fatJet2_LeptonicWMt,&b_Lep1fatJet2_LeptonicWMt);
      
   // fatJet

   fChain->SetBranchAddress("Lep1fatJet2_FatJet_pt",&Lep1fatJet2_FatJet_pt,&b_Lep1fatJet2_FatJet_pt);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_eta",&Lep1fatJet2_FatJet_eta,&b_Lep1fatJet2_FatJet_eta);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_phi",&Lep1fatJet2_FatJet_phi,&b_Lep1fatJet2_FatJet_phi);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_msoftdrop",&Lep1fatJet2_FatJet_msoftdrop,&b_Lep1fatJet2_FatJet_msoftdrop);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_jetId",&Lep1fatJet2_FatJet_jetId,&b_Lep1fatJet2_FatJet_jetId);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau1",&Lep1fatJet2_FatJet_tau1,&b_Lep1fatJet2_FatJet_tau1);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau2",&Lep1fatJet2_FatJet_tau2,&b_Lep1fatJet2_FatJet_tau2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau3",&Lep1fatJet2_FatJet_tau3,&b_Lep1fatJet2_FatJet_tau3);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau4",&Lep1fatJet2_FatJet_tau4,&b_Lep1fatJet2_FatJet_tau4);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD",&Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_TvsQCD",&Lep1fatJet2_FatJet_deepTagMD_TvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_TvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_WvsQCD",&Lep1fatJet2_FatJet_deepTagMD_WvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_WvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD",&Lep1fatJet2_FatJet_deepTagMD_ZvsQCD,&b_Lep1fatJet2_FatJet_deepTagMD_ZvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_bbvsLight",&Lep1fatJet2_FatJet_deepTagMD_bbvsLight,&b_Lep1fatJet2_FatJet_deepTagMD_bbvsLight);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ccvsLight",&Lep1fatJet2_FatJet_deepTagMD_ccvsLight,&b_Lep1fatJet2_FatJet_deepTagMD_ccvsLight);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_H",&Lep1fatJet2_FatJet_deepTag_H,&b_Lep1fatJet2_FatJet_deepTag_H);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_QCD",&Lep1fatJet2_FatJet_deepTag_QCD,&b_Lep1fatJet2_FatJet_deepTag_QCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_QCDothers",&Lep1fatJet2_FatJet_deepTag_QCDothers,&b_Lep1fatJet2_FatJet_deepTag_QCDothers);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_TvsQCD",&Lep1fatJet2_FatJet_deepTag_TvsQCD,&b_Lep1fatJet2_FatJet_deepTag_TvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_WvsQCD",&Lep1fatJet2_FatJet_deepTag_WvsQCD,&b_Lep1fatJet2_FatJet_deepTag_WvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_ZvsQCD",&Lep1fatJet2_FatJet_deepTag_ZvsQCD,&b_Lep1fatJet2_FatJet_deepTag_ZvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_QCD",&Lep1fatJet2_FatJet_particleNetMD_QCD,&b_Lep1fatJet2_FatJet_particleNetMD_QCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xbb",&Lep1fatJet2_FatJet_particleNetMD_Xbb,&b_Lep1fatJet2_FatJet_particleNetMD_Xbb);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xcc",&Lep1fatJet2_FatJet_particleNetMD_Xcc,&b_Lep1fatJet2_FatJet_particleNetMD_Xcc);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xqq",&Lep1fatJet2_FatJet_particleNetMD_Xqq,&b_Lep1fatJet2_FatJet_particleNetMD_Xqq);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_H4qvsQCD",&Lep1fatJet2_FatJet_particleNet_H4qvsQCD,&b_Lep1fatJet2_FatJet_particleNet_H4qvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_HbbvsQCD",&Lep1fatJet2_FatJet_particleNet_HbbvsQCD,&b_Lep1fatJet2_FatJet_particleNet_HbbvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_HccvsQCD",&Lep1fatJet2_FatJet_particleNet_HccvsQCD,&b_Lep1fatJet2_FatJet_particleNet_HccvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_QCD",&Lep1fatJet2_FatJet_particleNet_QCD,&b_Lep1fatJet2_FatJet_particleNet_QCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_TvsQCD",&Lep1fatJet2_FatJet_particleNet_TvsQCD,&b_Lep1fatJet2_FatJet_particleNet_TvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_WvsQCD",&Lep1fatJet2_FatJet_particleNet_WvsQCD,&b_Lep1fatJet2_FatJet_particleNet_WvsQCD);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_ZvsQCD",&Lep1fatJet2_FatJet_particleNet_ZvsQCD,&b_Lep1fatJet2_FatJet_particleNet_ZvsQCD);

   fChain->SetBranchAddress("Lep1fatJet2_FatJet_pt_2",&Lep1fatJet2_FatJet_pt_2,&b_Lep1fatJet2_FatJet_pt_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_eta_2",&Lep1fatJet2_FatJet_eta_2,&b_Lep1fatJet2_FatJet_eta_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_phi_2",&Lep1fatJet2_FatJet_phi_2,&b_Lep1fatJet2_FatJet_phi_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_msoftdrop_2",&Lep1fatJet2_FatJet_msoftdrop_2,&b_Lep1fatJet2_FatJet_msoftdrop_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_jetId_2",&Lep1fatJet2_FatJet_jetId_2,&b_Lep1fatJet2_FatJet_jetId_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau1_2",&Lep1fatJet2_FatJet_tau1_2,&b_Lep1fatJet2_FatJet_tau1_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau2_2",&Lep1fatJet2_FatJet_tau2_2,&b_Lep1fatJet2_FatJet_tau2_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau3_2",&Lep1fatJet2_FatJet_tau3_2,&b_Lep1fatJet2_FatJet_tau3_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_tau4_2",&Lep1fatJet2_FatJet_tau4_2,&b_Lep1fatJet2_FatJet_tau4_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_H4qvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_HbbvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_TvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_WvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_ZHbbvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_ZHccvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_ZbbvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2",&Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2,&b_Lep1fatJet2_FatJet_deepTagMD_ZvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2",&Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2,&b_Lep1fatJet2_FatJet_deepTagMD_bbvsLight_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2",&Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2,&b_Lep1fatJet2_FatJet_deepTagMD_ccvsLight_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_H_2",&Lep1fatJet2_FatJet_deepTag_H_2,&b_Lep1fatJet2_FatJet_deepTag_H_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_QCD_2",&Lep1fatJet2_FatJet_deepTag_QCD_2,&b_Lep1fatJet2_FatJet_deepTag_QCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_QCDothers_2",&Lep1fatJet2_FatJet_deepTag_QCDothers_2,&b_Lep1fatJet2_FatJet_deepTag_QCDothers_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_TvsQCD_2",&Lep1fatJet2_FatJet_deepTag_TvsQCD_2,&b_Lep1fatJet2_FatJet_deepTag_TvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_WvsQCD_2",&Lep1fatJet2_FatJet_deepTag_WvsQCD_2,&b_Lep1fatJet2_FatJet_deepTag_WvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_deepTag_ZvsQCD_2",&Lep1fatJet2_FatJet_deepTag_ZvsQCD_2,&b_Lep1fatJet2_FatJet_deepTag_ZvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_QCD_2",&Lep1fatJet2_FatJet_particleNetMD_QCD_2,&b_Lep1fatJet2_FatJet_particleNetMD_QCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xbb_2",&Lep1fatJet2_FatJet_particleNetMD_Xbb_2,&b_Lep1fatJet2_FatJet_particleNetMD_Xbb_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xcc_2",&Lep1fatJet2_FatJet_particleNetMD_Xcc_2,&b_Lep1fatJet2_FatJet_particleNetMD_Xcc_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNetMD_Xqq_2",&Lep1fatJet2_FatJet_particleNetMD_Xqq_2,&b_Lep1fatJet2_FatJet_particleNetMD_Xqq_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2",&Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_H4qvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2",&Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_HbbvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_HccvsQCD_2",&Lep1fatJet2_FatJet_particleNet_HccvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_HccvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_QCD_2",&Lep1fatJet2_FatJet_particleNet_QCD_2,&b_Lep1fatJet2_FatJet_particleNet_QCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_TvsQCD_2",&Lep1fatJet2_FatJet_particleNet_TvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_TvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_WvsQCD_2",&Lep1fatJet2_FatJet_particleNet_WvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_WvsQCD_2);
   fChain->SetBranchAddress("Lep1fatJet2_FatJet_particleNet_ZvsQCD_2",&Lep1fatJet2_FatJet_particleNet_ZvsQCD_2,&b_Lep1fatJet2_FatJet_particleNet_ZvsQCD_2);


   // weight, HLT
   fChain->SetBranchAddress("Lep1fatJet2_Pileup_nTrueInt",&Lep1fatJet2_Pileup_nTrueInt,&b_Lep1fatJet2_Pileup_nTrueInt);
   fChain->SetBranchAddress("Lep1fatJet2_Pileup_nPU",&Lep1fatJet2_Pileup_nPU,&b_Lep1fatJet2_Pileup_nPU);

   fChain->SetBranchAddress("Lep1fatJet2_HLT_Mu50",&Lep1fatJet2_HLT_Mu50,&b_Lep1fatJet2_HLT_Mu50);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_IsoMu24",&Lep1fatJet2_HLT_IsoMu24,&b_Lep1fatJet2_HLT_IsoMu24);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_OldMu100",&Lep1fatJet2_HLT_OldMu100,&b_Lep1fatJet2_HLT_OldMu100);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_TkMu100",&Lep1fatJet2_HLT_TkMu100,&b_Lep1fatJet2_HLT_TkMu100);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_IsoMu27",&Lep1fatJet2_HLT_IsoMu27,&b_Lep1fatJet2_HLT_IsoMu27);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Ele27_WPTight_Gsf",&Lep1fatJet2_HLT_Ele27_WPTight_Gsf,&b_Lep1fatJet2_HLT_Ele27_WPTight_Gsf);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG",&Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG,&b_Lep1fatJet2_HLT_Ele32_WPTight_Gsf_L1DoubleEG);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Ele35_WPTight_Gsf",&Lep1fatJet2_HLT_Ele35_WPTight_Gsf,&b_Lep1fatJet2_HLT_Ele35_WPTight_Gsf);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Photon200",&Lep1fatJet2_HLT_Photon200,&b_Lep1fatJet2_HLT_Photon200);
   fChain->SetBranchAddress("Lep1fatJet2_HLT_Ele32_WPTight_Gsf",&Lep1fatJet2_HLT_Ele32_WPTight_Gsf,&b_Lep1fatJet2_HLT_Ele32_WPTight_Gsf);

   fChain->SetBranchAddress("Common_passGoodRun",&Common_passGoodRun,&b_Common_passGoodRun);
   fChain->SetBranchAddress("Common_noiseFlag",&Common_noiseFlag,&b_Common_noiseFlag);
   fChain->SetBranchAddress("Common_noiseFlagMC",&Common_noiseFlagMC,&b_Common_noiseFlagMC);

   fChain->SetBranchAddress("Common_event_lepSF",&Common_event_lepSF,&b_Common_event_lepSF);
   fChain->SetBranchAddress("Common_event_tightBtagSF",&Common_event_tightBtagSF,&b_Common_event_tightBtagSF);
   fChain->SetBranchAddress("Common_event_mediumBtagSF",&Common_event_mediumBtagSF,&b_Common_event_mediumBtagSF);
   fChain->SetBranchAddress("Common_event_looseBtagSF",&Common_event_looseBtagSF,&b_Common_event_looseBtagSF);
   fChain->SetBranchAddress("Common_eventweight_fatjet_SFVLoose",&Common_eventweight_fatjet_SFVLoose,&b_Common_eventweight_fatjet_SFVLoose);
   fChain->SetBranchAddress("Common_eventweight_fatjet_SFLoose",&Common_eventweight_fatjet_SFLoose,&b_Common_eventweight_fatjet_SFLoose);
   fChain->SetBranchAddress("Common_eventweight_fatjet_SFMedium",&Common_eventweight_fatjet_SFMedium,&b_Common_eventweight_fatjet_SFMedium);
   fChain->SetBranchAddress("Common_eventweight_fatjet_SFTight",&Common_eventweight_fatjet_SFTight,&b_Common_eventweight_fatjet_SFTight);

   


   fChain->SetBranchAddress("Lep1fatJet2_Jet_btagDeepB",  &Lep1fatJet2_Jet_btagDeepB);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_btagDeepC",  &Lep1fatJet2_Jet_btagDeepC);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_btagDeepFlavC",  &Lep1fatJet2_Jet_btagDeepFlavC);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_btagDeepFlavB",  &Lep1fatJet2_Jet_btagDeepFlavB);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_qgl",  &Lep1fatJet2_Jet_qgl);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_jetId",  &Lep1fatJet2_Jet_jetId);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_hadronFlavour",  &Lep1fatJet2_Jet_hadronFlavour);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_partonFlavour",  &Lep1fatJet2_Jet_partonFlavour);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_pt",  &Lep1fatJet2_Jet_pt);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_eta",  &Lep1fatJet2_Jet_eta);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_phi",  &Lep1fatJet2_Jet_phi);
   fChain->SetBranchAddress("Lep1fatJet2_Jet_e",  &Lep1fatJet2_Jet_e);

   fChain->SetBranchAddress("Common_nb_tight",&Common_nb_tight,&b_Common_nb_tight);
   fChain->SetBranchAddress("Common_nb_medium",&Common_nb_medium,&b_Common_nb_medium);
   fChain->SetBranchAddress("Common_nb_loose",&Common_nb_loose,&b_Common_nb_loose);


   fChain->SetBranchAddress("Lep1fatJet2_GenPart_eta",  &Lep1fatJet2_GenPart_eta);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_genPartIdxMother",  &Lep1fatJet2_GenPart_genPartIdxMother);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_mass",  &Lep1fatJet2_GenPart_mass);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_pdgId",  &Lep1fatJet2_GenPart_pdgId);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_phi",  &Lep1fatJet2_GenPart_phi);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_pt",  &Lep1fatJet2_GenPart_pt);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_status",  &Lep1fatJet2_GenPart_status);
   fChain->SetBranchAddress("Lep1fatJet2_GenPart_statusFlags",  &Lep1fatJet2_GenPart_statusFlags);
}

fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);


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
   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
   fChain->SetBranchAddress("ls", &ls, &b_ls);
   fChain->SetBranchAddress("nLooseEle", &nLooseEle, &b_nLooseEle);
   fChain->SetBranchAddress("nLooseMu", &nLooseMu, &b_nLooseMu);

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
   // Notify();
}

Bool_t EDBR2PKUTree::Notify(Long64_t jentry)
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.
   loadVectorBranches();
   cout << "branches adr old :" << b_FatJet_pt_ << endl;
   cout << "branches adr new :" << fChain->GetBranch("FatJet_pt") << endl;
   // b_FatJet_pt_ = fChain->GetBranch("FatJet_pt");
   // cout << "branches adr updated :" << b_FatJet_pt_ << endl;
   // if (b_FatJet_pt_) { b_FatJet_pt_->SetAddress(&FatJet_pt_);}
   // cout << "branches before :" << b_FatJet_pt_->GetEntry(jentry) << endl;
   // b_FatJet_pt_ = nullptr;
   // fChain->SetBranchAddress("FatJet_pt",FatJet_pt_,&b_FatJet_pt_);
   // cout << "branches adr updated again :" << b_FatJet_pt_ << endl;
   // cout << "branches after :" << b_FatJet_pt_->GetEntry(jentry) << endl;
   // cout << "FatJet_pt_ adr :" << &FatJet_pt_ << endl;
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

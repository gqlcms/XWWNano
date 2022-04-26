#define EDBR2PKUTree_cxx
#include "EDBR2PKUTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#define Pi 3.141593
#include "TLorentzVector.h"
#include<ctime>


Double_t detlaR (Double_t eta1,Double_t eta2,Double_t phi1,Double_t phi2)
{
    double resultR=99.;
    resultR=sqrt(pow(eta1-eta2,2)+pow(3.1416-abs(3.1416-abs(phi1-phi2)),2));
    return resultR;
}

#include "VVVTree_HeadFile/VVVUtils.h"

#include "VVVTree_HeadFile/VVVTree_EventLevel.h"
#include "VVVTree_HeadFile/VVVTree_AK8_Mass_Order.h"
#include "VVVTree_HeadFile/VVVTree_AK8_Pt_Order.h"
#include "VVVTree_HeadFile/VVVTree_AK8_deep_W_Order.h"
#include "VVVTree_HeadFile/GenParticles.h"
#include "VVVTree_HeadFile/VVVTree_GenMatching.h"
#include "VVVTree_HeadFile/VVVNanoAODInit.h"
#include "VVVTree_HeadFile/VVVTree_signal_DECO.h"
// for VVV EFT
#include "VVVTree_HeadFile/VVV_EFT_1lepton.h"

void EDBR2PKUTree::Loop(TString channelname, Double_t XS, Int_t IsData_, Float_t Nevents,  Double_t LUMI, TString YEAR) {
    IsData = IsData_;

	if (fChain == 0) return;
	// Long64_t nentries = 4000;
	Long64_t nentries = fChain->GetEntriesFast();
    int jentryprint = std::min(int(nentries/100),50000);
    clock_t startTime,endTime;
    startTime = clock();

	Long64_t nbytes = 0, nb = 0;
    Long64_t NeventsFilled = 0 ;

    if(channelname.EqualTo("had")){
        GlobalInit(YEAR,IsData);
        loadVectorBranches();
        for (Long64_t jentry=0; jentry<nentries;jentry++) 
        {
            Long64_t ientry = LoadTree(jentry);
            if (ientry < 0) break;
            if (jentry%jentryprint==0)   {
                std::cout<<jentry<<std::endl;
                float Ratio;
                Ratio = 100*Float_t(jentry)/Float_t(nentries);
                std::cout<<"finsh : "<< Ratio << "%"<<std::endl;
            }
            nb = fChain->GetEntry(jentry); 
            nbytes += nb;
            if(event<0){event=event+pow(2,32);}

            Int_t nLooseLep=nLooseEle+nLooseMu;

            AK8_Pt_Ordered(jentry);
            METf();
            DeepAK8_Mass_Ordered_init();
            DeepAK8_Mass_Ordered_P4();
            MJJ_MJJJf();
            DeepAK8_Mass_Ordered();
            Deep_W_Ordered();
            EventLevel(jentry,YEAR,IsData);
            Weightf(XS, Nevents, LUMI);
            
            bool Fill = Filter_Events(YEAR,IsData);
            if ( !Fill ){ continue ; }

            if (IsData_ > 0){
                GenMatching(jentry);
            }
            if (IsData_ == 1000){
                Radion_Matching();
            }
            if ( Fill ){
                ExTree->Fill();
                NeventsFilled++;
            }
        }
    }


    if(channelname.Contains("VVV_EFT_1lepton")){
        for (Long64_t jentry=0; jentry<nentries;jentry++) 
        {
            Long64_t ientry = LoadTree(jentry);
            if (ientry < 0) break;
            if (jentry%jentryprint==0)   {
                float Ratio;
                Ratio = 100*Float_t(jentry)/Float_t(nentries);
                endTime = clock();
                double runtime = (double)(endTime - startTime)/CLOCKS_PER_SEC;
                double remaintime = runtime*Float_t(nentries-jentry)/Float_t(jentry);
                std::cout << "start : " << jentry << "; finsh : "<< Ratio << "%"<<std::endl;
                std::cout << "run : " << int(runtime) << "s;" << " remain : " << int(remaintime) << "s" << endl;
            }
            nb = fChain->GetEntry(jentry); 
            nbytes += nb;
            if(event<0){event=event+pow(2,32);}

            VVVEFT_process(jentry);

            bool Fill = true;
            if(YEAR.EqualTo("2016")){
                Fill = Filter_Event_1LeptonEFT(YEAR,IsData) ;
            }

            if ( !Fill ){ continue ; }

            if (IsData > 0){
                VVVEFT_weight(XS, Nevents, LUMI);
                VVVEFT_GenMatching();
            }

            if ( Fill ){ 
                ExTree->Fill(); 
                NeventsFilled++;
            }
        }
    }
	
    std::cout << NeventsFilled  <<  " Filled" << std::endl;
    std::cout << "transfertree finished" << std::endl;

}





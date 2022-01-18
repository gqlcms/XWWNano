#define EDBR2PKUTree_cxx
#include "EDBR2PKUTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#define Pi 3.141593
#include "TLorentzVector.h"

Double_t detlaR (Double_t eta1,Double_t eta2,Double_t phi1,Double_t phi2)
{
    double resultR=99.;
    resultR=sqrt(pow(eta1-eta2,2)+pow(3.1416-abs(3.1416-abs(phi1-phi2)),2));
    return resultR;
}

#include "VVVTree_HeadFile/VVVTree_EventLevel.h"
#include "VVVTree_HeadFile/VVVTree_AK8_Mass_Order.h"
#include "VVVTree_HeadFile/VVVTree_AK8_Pt_Order.h"
#include "VVVTree_HeadFile/VVVTree_AK8_deep_W_Order.h"
#include "VVVTree_HeadFile/VVVTree_GenMatching.h"
#include "VVVTree_HeadFile/VVVTree_signal_DECO.h"

void EDBR2PKUTree::Loop(TString channelname, Double_t XS, Int_t IsData_, Int_t Nevents,  Double_t LUMI) {
    IsData = IsData_;

	if (fChain == 0) return;
	Long64_t nentries = fChain->GetEntriesFast();

	Long64_t nbytes = 0, nb = 0;
	for (Long64_t jentry=0; jentry<nentries;jentry++) 
	// for (Long64_t jentry=0; jentry<1000;jentry++) 
	{
		Long64_t ientry = LoadTree(jentry);
		if (ientry < 0) break;
        if (jentry%100000==0)   {
            std::cout<<jentry<<std::endl;
            float Ratio;
            Ratio = Float_t(jentry)/Float_t(nentries);
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
        EventLevel(jentry);
        Weightf(XS, Nevents, LUMI);
        
        bool Fill = true;
        if ( !(Nj8 == 2 || Nj8 == 3 ) ){ 
            Fill = false; 
        }
        if ( !( Mj >= 40 || Mj_2 >= 40 || Mj_3 >= 40 ) ){ 
            Fill = false; 
        }
        if ( !( PTj > 400 ) ){ 
            Fill = false; 
        }
        if ( !Fill ){ continue ; }

        if (IsData_ > 0){
            GenMatching(jentry);
        }

        if (IsData_ == 1000){
            Radion_Matching();
        }

        if ( Fill ){
            ExTree->Fill();
        }
    }
    std::cout << "transfertree finished" << std::endl;

}

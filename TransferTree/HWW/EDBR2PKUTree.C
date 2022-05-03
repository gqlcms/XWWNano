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
#include "VVVTree_HeadFile/VVVTree_AK8_H4q_Order.h"
#include "VVVTree_HeadFile/GenParticles.h"
#include "VVVTree_HeadFile/VVVTree_GenMatchingH.h"
#include "VVVTree_HeadFile/VVVNanoAODInit.h"
#include "VVVTree_HeadFile/VVVTree_H_signal_DECO.h"

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
                std::cout<<"finsh is : "<< Ratio << "%"<<std::endl;
            }
           // std::cout <<"End loop"<<std::endl;
            nb = fChain->GetEntry(jentry);
            nbytes += nb;
            if(event<0){event=event+pow(2,32);}

            Int_t nLooseLep=nLooseEle+nLooseMu;
          //  std::cout<<"Next begin AK8 PT order"<<std::endl;
            AK8_Pt_Ordered(jentry);
          // std::cout<<"jetAK8puppi_V1_probHww4qvsQCD 1 ="<<jetAK8puppi_V1_probHww4qvsQCD<<std::endl;
          // std::cout<<"evqq tagger 1 ="<<V1_evqqvsQCD_1<<std::endl;
          // std::cout<<"AK8 Pt order done."<<std::endl;
            EventLevel(jentry,YEAR,IsData);
           // if(Nj8!=2){continue;}

            DeepAK8_Mass_Ordered_init();
           //   std::cout<<"jetAK8puppi_V1_probHww4qvsQCD 2 ="<<jetAK8puppi_V1_probHww4qvsQCD<<std::endl;
           //   std::cout<<"evqq tagger 2 ="<<V1_evqqvsQCD_1<<std::endl;

            DeepAK8_Mass_Ordered_P4();
            MJJ_MJJJf();
            DeepAK8_Mass_Ordered();
          //  std::cout<<"jetAK8puppi_V1_probHww4qvsQCD 3 ="<<jetAK8puppi_V1_probHww4qvsQCD<<std::endl;
          //  std::cout<<"evqq tagger 3 ="<<V1_evqqvsQCD_1<<std::endl;
          //  std::cout<<"AK8 mass order done."<<std::endl;
            Deep_H4q_Ordered();
          //  std::cout<<"AK8 H4q order done."<<std::endl;
          //  std::cout<<"jetAK8puppi_V1_probHww4qvsQCD 4 ="<<jetAK8puppi_V1_probHww4qvsQCD<<std::endl;
          //  std::cout<<"evqq tagger 4 ="<<V1_evqqvsQCD_1<<std::endl;

            // Deep_W_Ordered();
           //   std::cout<<"jetAK8puppi_V1_probHww4qvsQCD 5 ="<<jetAK8puppi_V1_probHww4qvsQCD<<std::endl;
           //   std::cout<<"evqq tagger 5 ="<<V1_evqqvsQCD_1<<std::endl;

            Weightf(XS, Nevents, LUMI);
             //   std::cout<<"jetAK8puppi_V1_probHww4qvsQCD 6 ="<<jetAK8puppi_V1_probHww4qvsQCD<<std::endl;
             //   std::cout<<"evqq tagger 6 ="<<V1_evqqvsQCD_1<<std::endl;

            bool Fill = Filter_Events(YEAR,IsData);
            if ( !Fill ){ continue ; }

            if (IsData_ > 0){
                GenMatching(jentry);
           //   std::cout<<"jetAK8puppi_V1_probHww4qvsQCD 7 ="<<jetAK8puppi_V1_probHww4qvsQCD<<std::endl;
           //   std::cout<<"evqq tagger 7 ="<<V1_evqqvsQCD_1<<std::endl;

            }
            if (IsData_ == 1000){
                Higgs_Matching();
            }
            if ( Fill ){
                //              std::cout<<"evqq tagger 8 ="<<V1_evqqvsQCD_1<<std::endl;

                     //                     std::cout<<"jetAK8puppi_V1_probHww4qvsQCD 8 ="<<jetAK8puppi_V1_probHww4qvsQCD<<std::endl;
                ExTree->Fill();
                NeventsFilled++;
            }
                        //  std::cout<<"evqq tagger 9 ="<<V1_evqqvsQCD_1<<std::endl;

                   //       std::cout<<"jetAK8puppi_V1_probHww4qvsQCD 9 ="<<jetAK8puppi_V1_probHww4qvsQCD<<std::endl;
 
        }
    }


    if(channelname.Contains("VVV_EFT_1lepton")){
      //Deleted for HWW analysis. 
    }
	
    std::cout << NeventsFilled  <<  " Filled" << std::endl;
    std::cout << "transfertree finished" << std::endl;

}





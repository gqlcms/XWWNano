#ifndef _VVVTree_MJJ_MJJJ_
#define _VVVTree_MJJ_MJJJ_

void EDBR2PKUTree::EventLevel(Long64_t jentry) {
    METf();
    AK4_init(jentry);
    Nj4_Nj8();
    MJJ_MJJJf();
    HT_ST();
    NAK4();
    Nbtagf();
}

void EDBR2PKUTree::METf() {
    MET_et  = MET_pt;
    // MET_phi = MET_phi;
}

void EDBR2PKUTree::Weightf(Double_t XS, Int_t Nevents, Double_t LUMI) {

	Double_t nn;
	Float_t Identical_lumiWeight = XS;//All the events inside a sample are same lumiweight

    trigger_eff=1.0;
    IDweight=1.0;
    IDweightISO=1.0;
    IDweighttrk=1.0;
    ToppTweight=1.0;
    if(genWeight>0) nn=1;    else nn= -1;
    lumiWeight=Identical_lumiWeight/abs(Nevents);
    lumiWeight=lumiWeight*LUMI;
    weight=lumiWeight*nn;

    if (IsData==2 ) weight = weight*1.21*1.06684;weight_deep = weight_deep*1.21*1.06684;
    if (IsData==3 ) weight = weight*1.21*1.046;weight_deep = weight_deep*1.21*1.046;
    if (IsData==4 ) weight = weight*1.21*0.99246;weight_deep = weight_deep*1.21*0.99246;
    if (IsData==5 ) weight = weight*1.21*0.9155;weight_deep = weight_deep*1.21*0.9155;
    if (IsData==6 ) weight = weight*1.21*0.8093;weight_deep = weight_deep*1.21*0.8093;
    if (IsData==7 ) weight = weight*1.21*0.6498;weight_deep = weight_deep*1.21*0.6498;
    if (IsData==8 ) weight = weight*1.21*0.4843;weight_deep = weight_deep*1.21*0.4843;
    if ( IsData==0 ) weight=1;weight_deep = 1;
}

void EDBR2PKUTree::MJJ_MJJJf() {
    
    if(Nj8==2){
        AK81.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
        AK82.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
        MJJ=(AK81+AK82).M();
        if(MJJ>100000||MJJ<-99){
            cout<<"MJJ:"<<MJJ<<endl;
        }
    }

    if(Nj8==3){
        AK81.SetPtEtaPhiM(PTj_max,Etaj_max,Phij_max,Mj_max);
        AK82.SetPtEtaPhiM(PTj_mid,Etaj_mid,Phij_mid,Mj_mid);
        AK83.SetPtEtaPhiM(PTj_min,Etaj_min,Phij_min,Mj_min);
        MJJJ=(AK81+AK82+AK83).M();
        MJJ=-99;
    }

}

void EDBR2PKUTree::HT_ST() {

    HT = (PTj>0)*PTj+(PTj_2>0)*PTj_2+(PTj_3>0)*PTj_3;

    ST=Float_t(HT+MET_et);
                
}

void EDBR2PKUTree::Nj4_Nj8() {
    Nj4=(ak4jet_pt[0]>0)+(ak4jet_pt[1]>0)+(ak4jet_pt[2]>0)+(ak4jet_pt[3]>0)+(ak4jet_pt[4]>0)+(ak4jet_pt[5]>0)+(ak4jet_pt[6]>0)+(ak4jet_pt[7]>0)+(ak4jet_pt[8]>0)+(ak4jet_pt[9]>0)+(ak4jet_pt[10]>0)+(ak4jet_pt[11]>0)+(ak4jet_pt[12]>0)+(ak4jet_pt[13]>0)+(ak4jet_pt[14]>0);

    Nj8=(PTj>0)+(PTj_2>0)+(PTj_3>0)+(PTj_4>0);
}

void EDBR2PKUTree::NAK4() {


    AK41.SetPtEtaPhiM(0,-99,-99,-99);
    AK42.SetPtEtaPhiM(0,-99,-99,-99);
    AK43.SetPtEtaPhiM(0,-99,-99,-99);
    AK44.SetPtEtaPhiM(0,-99,-99,-99);
    AK45.SetPtEtaPhiM(0,-99,-99,-99);
    AK46.SetPtEtaPhiM(0,-99,-99,-99);

for(Int_t i=0;i<15;i++){
deltaRak4sj[i]=sqrt(pow(fabs(ak4jet_eta[i]-Etaj),2)+pow(TMath::Min(fabs(ak4jet_phi[i]-Phij),2*Pi-fabs(ak4jet_phi[i]-Phij)),2));
deltaRak4sj2[i]=sqrt(pow(fabs(ak4jet_eta[i]-Etaj_2),2)+pow(TMath::Min(fabs(ak4jet_phi[i]-Phij_2),2*Pi-fabs(ak4jet_phi[i]-Phij_2)),2));
       if(Nj8==3){
deltaRak4sj3[i]=sqrt(pow(fabs(ak4jet_eta[i]-Etaj_3),2)+pow(TMath::Min(fabs(ak4jet_phi[i]-Phij_3),2*Pi-fabs(ak4jet_phi[i]-Phij_3)),2));
           }
       else{
deltaRak4sj3[i]=10000;
           }     
       if(Nj8==4){
deltaRak4sj4[i]=sqrt(pow(fabs(ak4jet_eta[i]-Etaj_4),2)+pow(TMath::Min(fabs(ak4jet_phi[i]-Phij_4),2*Pi-fabs(ak4jet_phi[i]-Phij_4)),2));
           }
       else{
deltaRak4sj4[i]=10000;
           }
}

num_ak4jetsex=0;
num_ak4jetsin=0;

Double_t DR=0.8;

for(Int_t i=0; i<15; i++) {

ex_ak4jet_pt[i]=-99;
ex_ak4jet_eta[i]=-99;

}

for(Int_t ii=0; ii<15; ii++) {
bool cutsj=0;
bool cutsj2=0;
bool cutsj3=0;
bool cutsj4=0;
bool cutsjin=0; 
bool cutsjin2=0;
bool cutsjin3=0;
bool cutsjin4=0;
bool sjout=1,sjin=0;

cutsj=(ak4jet_pt[ii]>0)&&(deltaRak4sj[ii]>DR);
cutsjin=(ak4jet_pt[ii]>0)&&(deltaRak4sj[ii]<DR);

cutsj2=(ak4jet_pt[ii]>0)&&(deltaRak4sj2[ii]>DR);
cutsjin2=(ak4jet_pt[ii]>0)&&(deltaRak4sj2[ii]<DR);

cutsj3=(ak4jet_pt[ii]>0)&&(deltaRak4sj3[ii]>DR);
cutsjin3=(ak4jet_pt[ii]>0)&&(deltaRak4sj3[ii]<DR);

cutsj4=(ak4jet_pt[ii]>0)&&(deltaRak4sj4[ii]>DR);
cutsjin4=(ak4jet_pt[ii]>0)&&(deltaRak4sj4[ii]<DR);

sjout*=cutsj*cutsj2*cutsj3*cutsj4;
sjin+=cutsjin+cutsjin2+cutsjin3+cutsjin4;

if(sjout==1) 
              {num_ak4jetsex++;
                   if(num_ak4jetsex==1) {
         AK41.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[0]=ak4jet_pt[ii];
                               ex_ak4jet_eta[0]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==2) {
         AK42.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[1]=ak4jet_pt[ii];
                               ex_ak4jet_eta[1]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==3) {
         AK43.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[2]=ak4jet_pt[ii];
                               ex_ak4jet_eta[2]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==4) {
         AK44.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[3]=ak4jet_pt[ii];
                               ex_ak4jet_eta[3]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==5) {
         AK45.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[4]=ak4jet_pt[ii];
                               ex_ak4jet_eta[4]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==6) {
         AK46.SetPtEtaPhiE(ak4jet_pt[ii],ak4jet_eta[ii],ak4jet_phi[ii],ak4jet_e[ii]);
                               ex_ak4jet_pt[5]=ak4jet_pt[ii];
                               ex_ak4jet_eta[5]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==7) {
                               ex_ak4jet_pt[6]=ak4jet_pt[ii];
                               ex_ak4jet_eta[6]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==8) {
                               ex_ak4jet_pt[7]=ak4jet_pt[ii];
                               ex_ak4jet_eta[7]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==9) {
                               ex_ak4jet_pt[8]=ak4jet_pt[ii];
                               ex_ak4jet_eta[8]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==10) {
                               ex_ak4jet_pt[9]=ak4jet_pt[ii];
                               ex_ak4jet_eta[9]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==11) {
                               ex_ak4jet_pt[10]=ak4jet_pt[ii];
                               ex_ak4jet_eta[10]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==12) {
                               ex_ak4jet_pt[11]=ak4jet_pt[ii];
                               ex_ak4jet_eta[11]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==13) {
                               ex_ak4jet_pt[12]=ak4jet_pt[ii];
                               ex_ak4jet_eta[12]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==14) {
                               ex_ak4jet_pt[13]=ak4jet_pt[ii];
                               ex_ak4jet_eta[13]=ak4jet_eta[ii];
                                        }
                   if(num_ak4jetsex==15) {
                               ex_ak4jet_pt[14]=ak4jet_pt[ii];
                               ex_ak4jet_eta[14]=ak4jet_eta[ii];
                                        }
              }
if(sjin>=1) num_ak4jetsin++;
}


}

void EDBR2PKUTree::AK4_init(Long64_t jentry) {
    
    int bytes_Jet_btagDeepB = b_Jet_btagDeepB_->GetEntry(jentry);
    v_Jet_btagDeepB_ = vector<float>(Jet_btagDeepB_,Jet_btagDeepB_+bytes_Jet_btagDeepB/sizeof(Jet_btagDeepB_[0]));
    size_t nJet_btagDeepB = v_Jet_btagDeepB_.size();
    
    int bytes_Jet_btagDeepFlavB = b_Jet_btagDeepFlavB_->GetEntry(jentry);
    v_Jet_btagDeepFlavB_ = vector<float>(Jet_btagDeepFlavB_,Jet_btagDeepFlavB_+bytes_Jet_btagDeepFlavB/sizeof(Jet_btagDeepFlavB_[0]));
    size_t nJet_btagDeepFlavB = v_Jet_btagDeepFlavB_.size();
    
    int bytes_Jet_btagDeepFlavCvB = b_Jet_btagDeepFlavCvB_->GetEntry(jentry);
    v_Jet_btagDeepFlavCvB_ = vector<float>(Jet_btagDeepFlavCvB_,Jet_btagDeepFlavCvB_+bytes_Jet_btagDeepFlavCvB/sizeof(Jet_btagDeepFlavCvB_[0]));
    size_t nJet_btagDeepFlavCvB = v_Jet_btagDeepFlavCvB_.size();
    
    int bytes_Jet_btagDeepFlavCvL = b_Jet_btagDeepFlavCvL_->GetEntry(jentry);
    v_Jet_btagDeepFlavCvL_ = vector<float>(Jet_btagDeepFlavCvL_,Jet_btagDeepFlavCvL_+bytes_Jet_btagDeepFlavCvL/sizeof(Jet_btagDeepFlavCvL_[0]));
    size_t nJet_btagDeepFlavCvL = v_Jet_btagDeepFlavCvL_.size();
    
    int bytes_Jet_btagDeepFlavQG = b_Jet_btagDeepFlavQG_->GetEntry(jentry);
    v_Jet_btagDeepFlavQG_ = vector<float>(Jet_btagDeepFlavQG_,Jet_btagDeepFlavQG_+bytes_Jet_btagDeepFlavQG/sizeof(Jet_btagDeepFlavQG_[0]));
    size_t nJet_btagDeepFlavQG = v_Jet_btagDeepFlavQG_.size();
    
    int bytes_Jet_eta = b_Jet_eta_->GetEntry(jentry);
    v_Jet_eta_ = vector<float>(Jet_eta_,Jet_eta_+bytes_Jet_eta/sizeof(Jet_eta_[0]));
    size_t nJet_eta = v_Jet_eta_.size();
    
    if (b_Jet_hadronFlavour_){
        int bytes_Jet_hadronFlavour = b_Jet_hadronFlavour_->GetEntry(jentry);
        v_Jet_hadronFlavour_ = vector<float>(Jet_hadronFlavour_,Jet_hadronFlavour_+bytes_Jet_hadronFlavour/sizeof(Jet_hadronFlavour_[0]));
        size_t nJet_hadronFlavour = v_Jet_hadronFlavour_.size();
    }
    
    int bytes_Jet_jetId = b_Jet_jetId_->GetEntry(jentry);
    v_Jet_jetId_ = vector<float>(Jet_jetId_,Jet_jetId_+bytes_Jet_jetId/sizeof(Jet_jetId_[0]));
    size_t nJet_jetId = v_Jet_jetId_.size();
    
    int bytes_Jet_mass = b_Jet_mass_->GetEntry(jentry);
    v_Jet_mass_ = vector<float>(Jet_mass_,Jet_mass_+bytes_Jet_mass/sizeof(Jet_mass_[0]));
    size_t nJet_mass = v_Jet_mass_.size();
    
    if (b_Jet_partonFlavour_){
        int bytes_Jet_partonFlavour = b_Jet_partonFlavour_->GetEntry(jentry);
        v_Jet_partonFlavour_ = vector<float>(Jet_partonFlavour_,Jet_partonFlavour_+bytes_Jet_partonFlavour/sizeof(Jet_partonFlavour_[0]));
        size_t nJet_partonFlavour = v_Jet_partonFlavour_.size();
    }
    

    
    int bytes_Jet_phi = b_Jet_phi_->GetEntry(jentry);
    v_Jet_phi_ = vector<float>(Jet_phi_,Jet_phi_+bytes_Jet_phi/sizeof(Jet_phi_[0]));
    size_t nJet_phi = v_Jet_phi_.size();
    

    
    int bytes_Jet_pt = b_Jet_pt_->GetEntry(jentry);
    v_Jet_pt_ = vector<float>(Jet_pt_,Jet_pt_+bytes_Jet_pt/sizeof(Jet_pt_[0]));
    size_t nJet_pt = v_Jet_pt_.size();
    

    
    int bytes_Jet_puId = b_Jet_puId_->GetEntry(jentry);
    v_Jet_puId_ = vector<float>(Jet_puId_,Jet_puId_+bytes_Jet_puId/sizeof(Jet_puId_[0]));
    size_t nJet_puId = v_Jet_puId_.size();
    

    
    int bytes_Jet_puIdDisc = b_Jet_puIdDisc_->GetEntry(jentry);
    v_Jet_puIdDisc_ = vector<float>(Jet_puIdDisc_,Jet_puIdDisc_+bytes_Jet_puIdDisc/sizeof(Jet_puIdDisc_[0]));
    size_t nJet_puIdDisc = v_Jet_puIdDisc_.size();
    

    
    int bytes_Jet_qgl = b_Jet_qgl_->GetEntry(jentry);
    v_Jet_qgl_ = vector<float>(Jet_qgl_,Jet_qgl_+bytes_Jet_qgl/sizeof(Jet_qgl_[0]));
    size_t nJet_qgl = v_Jet_qgl_.size();
    

    
    int bytes_Jet_rawFactor = b_Jet_rawFactor_->GetEntry(jentry);
    v_Jet_rawFactor_ = vector<float>(Jet_rawFactor_,Jet_rawFactor_+bytes_Jet_rawFactor/sizeof(Jet_rawFactor_[0]));
    size_t nJet_rawFactor = v_Jet_rawFactor_.size();

}

void EDBR2PKUTree::Nbtagf() {
    //number of bjet calculation
    num_bJet=0.;
    num_bJet_loose=0.;
    num_bJet_tight=0.;
    num_bJet_deep=0.;
    num_bJet_loose_deep=0.;
    num_bJet_tight_deep=0.;

    num_bJet_in = 0;
    num_bJet_loose_in = 0;
    num_bJet_tight_in = 0;
    num_bJet_deep_in = 0;
    num_bJet_loose_deep_in = 0;
    num_bJet_tight_deep_in = 0;
            
    for(size_t i=0; i < v_Jet_pt_.size(); i++)  {
        if ( !(v_Jet_pt_.at(i) > 30) ) { continue; }
        if ( !(fabs(Double_t(v_Jet_eta_.at(i))) < 2.4) ) { continue; }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.6324 ) {
            num_bJet_deep_in = num_bJet_deep_in+1;
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.2219 ) {
            num_bJet_loose_deep_in = num_bJet_loose_deep_in+1;
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.8958 ) {
            num_bJet_tight_deep_in = num_bJet_tight_deep_in+1;
        }
        if(Nj8>=1) {
            float DPhi1 = fabs(v_Jet_phi_.at(i) - Phij);
            float DPhi2 = 2*Pi-fabs(v_Jet_phi_.at(i)-Phij);
            float DR = sqrt(pow(fabs(Double_t(v_Jet_eta_.at(i))-Etaj),2)+pow(TMath::Min(DPhi1,DPhi2),2));
            if (DR < 0.8) {continue;}
        }
        if(Nj8>=2) {
            float DPhi1 = fabs(v_Jet_phi_.at(i) - Phij_2);
            float DPhi2 = 2*Pi-fabs(v_Jet_phi_.at(i)-Phij_2);
            float DR = sqrt(pow(fabs(Double_t(v_Jet_eta_.at(i))-Etaj_2),2)+pow(TMath::Min(DPhi1,DPhi2),2));
            if (DR < 0.8) {continue;}
        }
        if(Nj8>=3) {
            float DPhi1 = fabs(v_Jet_phi_.at(i) - Phij_3);
            float DPhi2 = 2*Pi-fabs(v_Jet_phi_.at(i)-Phij_3);
            float DR = sqrt(pow(fabs(Double_t(v_Jet_eta_.at(i))-Etaj_3),2)+pow(TMath::Min(DPhi1,DPhi2),2));
            if (DR < 0.8) {continue;}
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.6324 ) {
            num_bJet_deep = num_bJet_deep+1;
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.2219 ) {
            num_bJet_loose_deep = num_bJet_loose_deep+1;
        }
        if ( v_Jet_btagDeepFlavB_.at(i) > 0.8958 ) {
            num_bJet_tight_deep = num_bJet_tight_deep+1;
        }
    }

    nbtag=num_bJet;
    nbtag_deep=num_bJet_deep;
    nbtag_deep_loose=num_bJet_loose_deep;
    nbtag_deep_tight=num_bJet_tight_deep;

}


#endif
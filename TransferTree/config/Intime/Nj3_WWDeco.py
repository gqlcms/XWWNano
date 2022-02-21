'''
genH_pt
genH_eta
genH_phi
genH_mass
genH_w1_pt
genH_w1_eta
genH_w1_phi
genH_w1_mass
genH_w2_pt
genH_w2_eta
genH_w2_phi
genH_w2_mass
genH_w1_q1_pt
genH_w1_q1_eta
genH_w1_q1_phi
genH_w1_q1_mass
genH_w1_q1_pdg
genH_w1_q2_pt
genH_w1_q2_eta
genH_w1_q2_phi
genH_w1_q2_mass
genH_w1_q2_pdg
genH_w2_q1_pt
genH_w2_q1_eta
genH_w2_q1_phi
genH_w2_q1_mass
genH_w2_q1_pdg
genH_w2_q2_pt
genH_w2_q2_eta
genH_w2_q2_phi
genH_w2_q2_mass
genH_w2_q2_pdg
jetAK8puppi_pt
jetAK8puppi_eta
jetAK8puppi_phi
jetAK8puppi_sd
'''




AK8_Mode_Mass = '''
TLorentzVector Genpart, Genpartg,GenW1,GenW2, fJ1, fJ2, fJ3;
float pt[3]={jetAK8puppi_pt,jetAK8puppi_pt_2,jetAK8puppi_pt_3},eta[3]={jetAK8puppi_eta,jetAK8puppi_eta_2,jetAK8puppi_eta_3},phi[3]={jetAK8puppi_phi,jetAK8puppi_phi_2,jetAK8puppi_phi_3},sd[3]={jetAK8puppi_sd,jetAK8puppi_sd_2,jetAK8puppi_sd_3};
float temp1,temp2,temp3,temp4,temp5;


//---------------------------------


int AK8_Mode[4] = {-99,-99,-99,-99};

//AK8_Mode=3, the jet matched with gluon.
//AK8_Mode=1, the jet matched with Higgs.
//AK8_Mode=5, the jet matched with W.
//AK8_Mode[0],AK8_Mode[1],AK8_Mode[2] refers to the one jet decomposition. If AK8_Mode[4] ==1, refers to there are two jets matched with Ws.

//Order the 3 jets by mass order.
for(int j=0;j<2;j++){
    for(int i=0;i<2-j;i++){
        if(sd[i]<sd[i+1]){

            temp2=pt[i];
            pt[i]=pt[i+1];
            pt[i+1]=temp2;

            temp3=eta[i];
            eta[i]=eta[i+1];
            eta[i+1]=temp3;

            temp4=phi[i];
            phi[i]=phi[i+1];
            phi[i+1]=temp4;

            temp5=sd[i];
            sd[i]=sd[i+1];
            sd[i+1]=temp5;

        }
    }
}


fJ1.SetPtEtaPhiM( pt[0], eta[0], phi[0], sd[0]);
fJ2.SetPtEtaPhiM( pt[1], eta[1], phi[1], sd[1] );
fJ3.SetPtEtaPhiM( pt[2], eta[2], phi[2], sd[2] );




Genpart.SetPtEtaPhiM( genH_pt, genH_eta, genH_phi, genH_mass );
GenW1.SetPtEtaPhiM(genH_w1_pt,genH_w1_eta,genH_w1_phi,genH_w1_mass);
GenW2.SetPtEtaPhiM(genH_w2_pt,genH_w2_eta,genH_w2_phi,genH_w2_mass);




//Count the first AK8 jet.
for(int i =0;i<10;i++){
Genpartg.SetPtEtaPhiM(ptgengl[i], etagengl[i], phigengl[i], massgengl[i]);
if(fabs(Genpartg.DeltaR(fJ1))<0.6){
    AK8_Mode[0] = 3;
}
}
if( fabs(Genpart.DeltaR(fJ1)) < 0.6 ){
    AK8_Mode[0] = 1;
}

else if(fabs(GenW1.DeltaR(fJ1)) < 0.6 || fabs(GenW2.DeltaR(fJ1)) < 0.6){
    AK8_Mode[0] = 5;
}



//Count the second AK8 jet.


for(int i =0;i<10;i++){
Genpartg.SetPtEtaPhiM(ptgengl[i], etagengl[i], phigengl[i], massgengl[i]);

if(fabs(Genpartg.DeltaR(fJ2))<0.6){
    AK8_Mode[1] = 3;
}
}


if( fabs(Genpart.DeltaR(fJ2)) < 0.6 ){
    AK8_Mode[1] = 1;
}


else if(fabs(GenW1.DeltaR(fJ2)) < 0.6 || fabs(GenW2.DeltaR(fJ2)) < 0.6){
    AK8_Mode[1] = 5;
}


//Count the third AK8 jet.


for(int i =0;i<10;i++){
Genpartg.SetPtEtaPhiM(ptgengl[i], etagengl[i], phigengl[i], massgengl[i]);

if(fabs(Genpartg.DeltaR(fJ3))<0.6){
    AK8_Mode[2] = 3;
}
}


if( fabs(Genpart.DeltaR(fJ3)) < 0.6 ){
    AK8_Mode[2] = 1;
}

else if(fabs(GenW1.DeltaR(fJ3)) < 0.6 || fabs(GenW2.DeltaR(fJ3)) < 0.6){
    AK8_Mode[2] = 5;
}


if((AK8_Mode[0]==5)+(AK8_Mode[1]==5)+(AK8_Mode[2]==5)==2){
   AK8_Mode[3]=1 ; // There are 2 jets matched with Ws within all 3 jets.

}

std::array <float, 4> AK8_Mode_arr;
for(size_t ik=0; ik<4;ik++){
    AK8_Mode_arr.at(ik) = AK8_Mode[ik];
}

return AK8_Mode_arr;



'''
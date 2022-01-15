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




deepWH = '''

float deepWH;


float deepWH_1;
deepWH_1=(jetAK8puppi_dnnDecorrH4q+jetAK8puppi_dnnDecorrW-2*jetAK8puppi_dnnDecorrH4q*jetAK8puppi_dnnDecorrW)/(1-jetAK8puppi_dnnDecorrH4q*jetAK8puppi_dnnDecorrW);
float deepWH_2;
deepWH_2=(jetAK8puppi_dnnDecorrH4q_2+jetAK8puppi_dnnDecorrW_2-2*jetAK8puppi_dnnDecorrH4q_2*jetAK8puppi_dnnDecorrW_2)/(1-jetAK8puppi_dnnDecorrH4q_2*jetAK8puppi_dnnDecorrW_2);

if(deepWH_1>deepWH_2){
  deepWH=deepWH_1;
}
else{
  deepWH=deepWH_2;
}

return deepWH;

'''
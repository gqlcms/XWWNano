import math

def r(x):
    return x + (-x) % 1#0
#def r(x):return (math.ceil(int(x)/10.0))*10

HPT=[100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000]
MW2=35
PW10=[]
PW20=[]
EW10=[]
EW20=[]
PW1_lab=[]
PW2_lab=[]
gH=[]
bH=[]
DR1=[]
DR2=[]
DRqq1=[]
DRqq2=[]
EW1=[]
EW2=[]
gW1=[]
gW2=[]
bW1=[]
bW2=[]
DR4q=[]
for i in range(1,20):
    PW10.append(0.0)
    gH.append(0.0)
    bH.append(0.0)
    PW20.append(0.0)
    EW10.append(0.0)
    EW20.append(0.0)
    PW1_lab.append(0.0)
    PW2_lab.append(0.0)
    DR1.append(0)
    DR2.append(0)
    EW1.append(0)
    EW2.append(0)
    DRqq1.append(0)
    DRqq2.append(0)
    gW1.append(0)
    gW2.append(0)
    bW1.append(0)
    bW2.append(0)
    DR4q.append(0)
print ("W2 mass is",MW2)
print("Higgs pt","   DPhiW1","  DPhiW2","    W1_P","     W2_P","   DPhi(qq1)","    Dphi(qq2)","  Dphi")
for i in range(0,19):
    PW10[i]=((125*125+80*80-MW2*MW2)**2-4*125*125*80*80)**0.5/ (2*125)
    # Set W1 mass =80, Calculate W1 pt in the rest frame of H
    PW20[i]=((125*125+MW2*MW2-80*80)**2-4*125*125*MW2*MW2)**0.5/ (2*125)
    # Set W2 mass =35, Calculate W2 pt in the rest frame of H
    EW10[i]=(125*125+80*80-MW2*MW2)/(2*125)
    # Calculate W1 Energy in the rest frame of H
    EW20[i]=(125*125+MW2*MW2-80*80)/(2*125)
    # Calculate W2 Energy in the rest frame of H
    gH[i]=(HPT[i]**2+125*125)**0.5/125
    # Calculate Gamma of Higgs
    bH[i]=HPT[i]/((HPT[i]**2+125*125)**0.5)
    # Calculate beta of Higgs
    PW1_lab[i]=(PW10[i]**2+(gH[i]*bH[i]*EW10[i])**2)**0.5
    # Calculate W1 pt in lab frame using (px^2+pz^2)^0.5 (assuming no z component in the rest frame of H)
    # PTW1_lab[i]=PW1_lab[i]*(4/(3*3.141592653589))
    
    PW2_lab[i]=(PW20[i]**2+(gH[i]*bH[i]*EW20[i])**2)**0.5
    # Calculate W1 pt in lab frame using (px^2+pz^2)^0.5 (assuming no z component in the rest frame of H)
    # PTW2_lab[i]=PW2_lab[i]*(4/(3*3.141592653589))
    
    DR1[i]=math.atan((PW10[i])/(gH[i]*bH[i]*EW10[i]))
    # Calculate delta R of W1 using arctan(px/pz)
    DR2[i]=math.atan((PW20[i])/(gH[i]*bH[i]*EW20[i]))
    # Calculate delta R of W1 using arctan(px/pz) 
    EW1[i]=((PW1_lab[i])**2+(80)**2)**0.5
    EW2[i]=((PW2_lab[i])**2+(MW2)**2)**0.5
    gW1[i]=EW1[i]/80
    gW2[i]=EW2[i]/MW2
    bW1[i]=PW1_lab[i]/EW1[i]
    bW2[i]=PW2_lab[i]/EW2[i]
    DRqq1[i]=2*math.atan(1/(gW1[i]*bW1[i]))
    DRqq2[i]=2*math.atan(1/(gW2[i]*bW2[i]))
    DR4q[i]=((DRqq1[i]**2+DRqq2[i]**2))**0.5
    print("    ",HPT[i],"  ",'%.4f'%DR1[i],"  ",'%.4f'%DR2[i],"   ",'%.2f'%PW1_lab[i],"  ",'%.2f'%PW2_lab[i]," ",'%.4f'%DRqq1[i],"      ",'%.4f'%DRqq2[i],"    ",'%.4f'%DR4q[i])

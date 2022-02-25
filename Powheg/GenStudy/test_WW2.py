import math

def r(x):
    return x + (-x) % 1#0
#def r(x):return (math.ceil(int(x)/10.0))*10


HPT=[150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200]
#Mphi=[1000,1000,1000,1000,   180,200,200,180]
MW2=35
PTW1=[]
PTW2=[]
EW1=[]
EW2=[]
PTW1_lab=[]
PTW2_lab=[]
gH=[]
bH=[]
DR1=[]
DR2=[]
for i in range(1,23):
    PTW1.append(0.0)
    gH.append(0.0)
    bH.append(0.0)
    PTW2.append(0.0)
    EW1.append(0.0)
    EW2.append(0.0)
    PTW1_lab.append(0.0)
    PTW2_lab.append(0.0)
    DR1.append(0)
    DR2.append(0)
print("Higgs pt","   deltaR1","  deltaR2","    W1Pt","    W2Pt")
for i in range(1,22):
    PTW1[i]=((125*125+80*80-MW2*MW2)**2-4*125*125*80*80)**0.5/ (2*125)
    # Set W1 mass =80, Calculate W1 pt in the rest frame of H
    PTW2[i]=((125*125+MW2*MW2-80*80)**2-4*125*125*MW2*MW2)**0.5/ (2*125)
    # Set W2 mass =35, Calculate W2 pt in the rest frame of H
    EW1[i]=(125*125+80*80-MW2*MW2)/(2*125)
    # Calculate W1 Energy in the rest frame of H
    EW2[i]=(125*125+MW2*MW2-80*80)/(2*125)
    # Calculate W2 Energy in the rest frame of H
    gH[i]=(HPT[i]**2+125*125)**0.5/125
    # Calculate Gamma of Higgs
    bH[i]=HPT[i]/((HPT[i]**2+125*125)**0.5)
    # Calculate beta of Higgs
    PTW1_lab[i]=(PTW1[i]**2+(gH[i]*bH[i]*EW1[i])**2)**0.5
    # Calculate W1 pt in lab frame using (px^2+pz^2)^0.5 (assuming no z component in the rest frame of H)
    PTW2_lab[i]=(PTW2[i]**2+(gH[i]*bH[i]*EW2[i])**2)**0.5
    # Calculate W1 pt in lab frame using (px^2+pz^2)^0.5 (assuming no z component in the rest frame of H)
    DR1[i]=math.atan(PTW1[i])/(gH[i]*bH[i]*EW1[i])
    # Calculate delta R of W1 using arctan(px/pz)
    DR2[i]=math.atan(PTW2[i])/(gH[i]*bH[i]*EW2[i])
    # Calculate delta R of W1 using arctan(px/pz) 
    
    print("    ",HPT[i],"  ",'%.4f'%DR1[i],"  ",'%.4f'%DR2[i],"   ",'%.2f'%PTW1_lab[i],"  ",'%.2f'%PTW2_lab[i])

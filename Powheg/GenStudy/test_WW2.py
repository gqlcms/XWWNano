import math

def r(x):
    return x + (-x) % 1#0
#def r(x):return (math.ceil(int(x)/10.0))*10

MW  =[1500,2000,2500,3000,   1500,1500,2500,2500,3500,3500]
Mphi=[750,1000,1250,1500,     180, 300, 200, 250, 210, 350]
HPT=[150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200]
MW2=45
#Mphi=[1000,1000,1000,1000,   180,200,200,180]
PTW1=[]
PTW2=[]
EW1=[]
EW2=[]
PW1_lab=[]
PW2_lab=[]
gH=[]
bH=[]
DR1=[]
DR2=[]
DRqq1=[]
DRqq2=[]
PTW1_lab=[]
PTW2_lab=[]
for i in range(1,23):
    PTW1.append(0.0)
    gH.append(0.0)
    bH.append(0.0)
    PTW2.append(0.0)
    EW1.append(0.0)
    EW2.append(0.0)
    PW1_lab.append(0.0)
    PTW1_lab.append(0)
    PTW2_lab.append(0)
    PW2_lab.append(0.0)
    DR1.append(0)
    DR2.append(0)
    DRqq1.append(0)
    DRqq2.append(0)
print("Higgs pt","   deltaR1","  deltaR2","    W1_P","    W2_P","  deltaR(qq1)","  deltaR(qq2)")
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
    PW1_lab[i]=(PTW1[i]**2+(gH[i]*bH[i]*EW1[i])**2)**0.5
    # Calculate W1 pt in lab frame using (px^2+pz^2)^0.5 (assuming no z component in the rest frame of H)
    PTW1_lab[i]=PW1_lab[i]*(4/(3*3.141592653589))
    DRqq1[i]=2*80/PW1_lab[i]
    PW2_lab[i]=(PTW2[i]**2+(gH[i]*bH[i]*EW2[i])**2)**0.5
    # Calculate W1 pt in lab frame using (px^2+pz^2)^0.5 (assuming no z component in the rest frame of H)
    PTW2_lab[i]=PW2_lab[i]*(4/(3*3.141592653589))
    DRqq2[i]=2*MW2/PW2_lab[i] 
    DR1[i]=math.atan(PTW1[i])/(gH[i]*bH[i]*EW1[i])
    # Calculate delta R of W1 using arctan(px/pz)
    DR2[i]=math.atan(PTW2[i])/(gH[i]*bH[i]*EW2[i])
    # Calculate delta R of W1 using arctan(px/pz) 
    
    print("    ",HPT[i],"  ",'%.4f'%DR1[i],"  ",'%.4f'%DR2[i],"   ",'%.2f'%PW1_lab[i],"  ",'%.2f'%PW2_lab[i]," ",'%.2f'%DRqq1[i],"      ",'%.2f'%DRqq2[i])








# PTphi         =[0,0,0,0,  0,0,0,0,0,0]
# gphi          =[0,0,0,0,  0,0,0,0,0,0]
# bphi          =[0,0,0,0,  0,0,0,0,0,0]
# gw_pr         =[0,0,0,0,  0,0,0,0,0,0]
# PTw_np_rest   =[0,0,0,0,  0,0,0,0,0,0]
# PTw_np_lab_max=[0,0,0,0,  0,0,0,0,0,0]
# PTw_np_lab_min=[0,0,0,0,  0,0,0,0,0,0]
# PTw_np_BAL    =[0,0,0,0,  0,0,0,0,0,0]
# DR            =[0,0,0,0,  0,0,0,0,0,0]
# gw_np         =[0,0,0,0,  0,0,0,0,0,0]
# bw_np         =[0,0,0,0,  0,0,0,0,0,0]
# DRqq          =[0,0,0,0,  0,0,0,0,0,0]
# PTq_BAL       =[0,0,0,0,  0,0,0,0,0,0]
# PTq_np_lab_max=[0,0,0,0,  0,0,0,0,0,0]
# PTq_np_lab_min=[0,0,0,0,  0,0,0,0,0,0]
# print(  "( MWkk" , ", MR )" , " DR " ,  " DRqq " , "DR_radion")
# for i in range(4,10):
#     PTphi[i] = ( Mphi[i]**4 - 2*Mphi[i]**2*MW[i]**2 - 2*Mphi[i]**2*80**2 + MW[i]**4 -2*MW[i]**2*80**2 + 80**4 )**0.5 / (2*MW[i])
#     # Pt of the radion.
#     gphi[i]  = ( PTphi[i]**2 + Mphi[i]**2 )**0.5/Mphi[i]
#     # Gamma of radion.

#     bphi[i]  = ( 1 - 1/(gphi[i])**2  )**0.5
#     # Beta of radion(v/c).
#     gw_pr[i] = ( PTphi[i]**2 + 80**2 )**0.5/80

#     PTw_np_rest[i] = ( Mphi[i]**2 -4*80**2 )**0.5 / 2
#     PTw_np_lab_min[i] = gphi[i]*( PTw_np_rest[i] + bphi[i]*(80**2 + PTw_np_rest[i]**2)**0.5  )
#     PTw_np_lab_max[i] = gphi[i]*( PTw_np_rest[i] - bphi[i]*(80**2 + PTw_np_rest[i]**2)**0.5  )

#     PTw_np_BAL[i] =  (  (gphi[i]**2)*(bphi[i]**2)*(80**2 + PTw_np_rest[i]**2) + PTw_np_rest[i]**2 )**0.5

#     DR[i]         = 2 * atan(  PTw_np_rest[i] / ( 0.5*PTphi[i] )  )
#     gw_np[i]      = ( 1 + PTw_np_BAL[i]**2/80**2  )**0.5
#     bw_np[i]      = ( 1 - 1/(gw_np[i])**2  )**0.5
#     PTq_BAL[i]    = (  (gw_np[i]**2)*(bw_np[i]**2)*(40**2) + 40**2 )**0.5
#     PTq_np_lab_min[i] = gw_np[i]*( 40 + bw_np[i]*( 40**2)**0.5 )
#     PTq_np_lab_max[i] = gw_np[i]*( 40 - bw_np[i]*( 40**2)**0.5 )
#     DRqq[i]       = 2 * atan(  40 / ( 0.5*PTw_np_BAL[i] )  )
#     #print( i+1 , ") MW'=" , MW[i] , ", Mphi=" , Mphi[i] , "P_phi=" , '%.0f'%r(PTphi[i]) , "gamma_phi= " , '%.3f'% gphi[i] , "gamma_w_pr= " , '%.1f'% gw_pr[i] , "PTw_np_rest=" , '%.0f'% r(PTw_np_rest[i]) , "PTw_np_lab: [" , '%2.f'%max(0,r(PTw_np_lab_max[i])) , "," , '%2.f'%r(PTw_np_lab_min[i]) , "] , PTw_np_BAL=" , '%.0f'% r(PTw_np_BAL[i]) , " DR=" , '%.2f'% DR[i] , " , gw_np=" , '%.1f'% gw_np[i] , " , Pq_BAL=" , '%.0f'%r(PTq_BAL[i]) , ", DRqq=" , '%.2f'% DRqq[i], "PT...")

#     print(  MW[i] ,  Mphi[i] , '%.2f'% DR[i] , '%.2f'% DRqq[i],  '%.2f'%(DRqq[i]+DR[i]) )


# #MWkk=[ 3., 3.5, 4., 4.5, 5. ]
# #R_MWkk=[ 0.06, 0.08, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6,  0.7, 0.9] # = 10 points
# #for i in range(0, len(MWkk)): 
# #    for j in range(0, len(R_MWkk)):
# #         print( "(" '%2.f'%r( MWkk[i]*1000),",", '%2.f'%r( R_MWkk[j]*MWkk[i]*1000), "), "  )


# #2wkk =2.5 TeV = 1 points

# # R = 0.08, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6,  0.7, 0.9 = 9 points  

# # R = 0.1, 0.2, 0.3, 0.4, 0.5, 0.6,  0.7, 0.9 = 

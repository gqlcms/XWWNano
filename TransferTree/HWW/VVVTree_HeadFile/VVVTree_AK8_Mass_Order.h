#ifndef _VVVTree_AK8_Mass_Order_
#define _VVVTree_AK8_Mass_Order_

/*
PTjJEC_2
*/

void EDBR2PKUTree::DeepAK8_Mass_Ordered() {
    DeepAK8_Mass_Ordered_deepAK8RawScore();
    // DeepAK8_Mass_Ordered_deepAK8CombineScore();
}

void EDBR2PKUTree::DeepAK8_Mass_Ordered_deepAK8CombineScore() {
    if(Nj8==2||Nj8>=3){
        Double_t M[3], AK8puppi_dnnTop[3], AK8puppi_dnnW[3], AK8puppi_dnnH4q[3], AK8puppi_dnnZ[3], AK8puppi_dnnZbb[3], AK8puppi_dnnHbb[3], AK8puppi_dnnDecorrTop[3], AK8puppi_dnnDecorrW[3], AK8puppi_dnnDecorrH4q[3], AK8puppi_dnnDecorrZ[3], AK8puppi_dnnDecorrZbb[3], AK8puppi_dnnDecorrHbb[3], AK8puppi_dnnDecorrbb[3], AK8puppi_dnnDecorrcc[3], AK8puppi_dnnDecorrbbnog[3], AK8puppi_dnnDecorrccnog[3], AK8puppi_dnnqcd[3], AK8puppi_dnntop[3], AK8puppi_dnnw[3], AK8puppi_dnnz[3], AK8puppi_dnnzbb[3], AK8puppi_dnnhbb[3], AK8puppi_dnnh4q[3], AK8puppi_dnnDecorrqcd[3], AK8puppi_dnnDecorrtop[3], AK8puppi_dnnDecorrw[3], AK8puppi_dnnDecorrz[3], AK8puppi_dnnDecorrzbb[3], AK8puppi_dnnDecorrhbb[3], AK8puppi_dnnDecorrh4q[3];
        
        M[0]=Mj;M[1]=Mj_2;M[2]=Mj_3;
        AK8puppi_dnnTop[0]=jetAK8puppi_dnnTop;AK8puppi_dnnTop[1]=jetAK8puppi_dnnTop_2;AK8puppi_dnnTop[2]=jetAK8puppi_dnnTop_3;
        AK8puppi_dnnW[0]=jetAK8puppi_dnnW;AK8puppi_dnnW[1]=jetAK8puppi_dnnW_2;AK8puppi_dnnW[2]=jetAK8puppi_dnnW_3;
        AK8puppi_dnnH4q[0]=jetAK8puppi_dnnH4q;AK8puppi_dnnH4q[1]=jetAK8puppi_dnnH4q_2;AK8puppi_dnnH4q[2]=jetAK8puppi_dnnH4q_3;
        AK8puppi_dnnZ[0]=jetAK8puppi_dnnZ;AK8puppi_dnnZ[1]=jetAK8puppi_dnnZ_2;AK8puppi_dnnZ[2]=jetAK8puppi_dnnZ_3;
        AK8puppi_dnnZbb[0]=jetAK8puppi_dnnZbb;AK8puppi_dnnZbb[1]=jetAK8puppi_dnnZbb_2;AK8puppi_dnnZbb[2]=jetAK8puppi_dnnZbb_3;
        AK8puppi_dnnHbb[0]=jetAK8puppi_dnnHbb;AK8puppi_dnnHbb[1]=jetAK8puppi_dnnHbb_2;AK8puppi_dnnHbb[2]=jetAK8puppi_dnnHbb_3;
        AK8puppi_dnnDecorrTop[0]=jetAK8puppi_dnnDecorrTop;AK8puppi_dnnDecorrTop[1]=jetAK8puppi_dnnDecorrTop_2;AK8puppi_dnnDecorrTop[2]=jetAK8puppi_dnnDecorrTop_3;
        AK8puppi_dnnDecorrW[0]=jetAK8puppi_dnnDecorrW;AK8puppi_dnnDecorrW[1]=jetAK8puppi_dnnDecorrW_2;AK8puppi_dnnDecorrW[2]=jetAK8puppi_dnnDecorrW_3;
        AK8puppi_dnnDecorrH4q[0]=jetAK8puppi_dnnDecorrH4q;AK8puppi_dnnDecorrH4q[1]=jetAK8puppi_dnnDecorrH4q_2;AK8puppi_dnnDecorrH4q[2]=jetAK8puppi_dnnDecorrH4q_3;
        AK8puppi_dnnDecorrZ[0]=jetAK8puppi_dnnDecorrZ;AK8puppi_dnnDecorrZ[1]=jetAK8puppi_dnnDecorrZ_2;AK8puppi_dnnDecorrZ[2]=jetAK8puppi_dnnDecorrZ_3;
        AK8puppi_dnnDecorrZbb[0]=jetAK8puppi_dnnDecorrZbb;AK8puppi_dnnDecorrZbb[1]=jetAK8puppi_dnnDecorrZbb_2;AK8puppi_dnnDecorrZbb[2]=jetAK8puppi_dnnDecorrZbb_3;
        AK8puppi_dnnDecorrHbb[0]=jetAK8puppi_dnnDecorrHbb;AK8puppi_dnnDecorrHbb[1]=jetAK8puppi_dnnDecorrHbb_2;AK8puppi_dnnDecorrHbb[2]=jetAK8puppi_dnnDecorrHbb_3;
        AK8puppi_dnnDecorrbb[0]=jetAK8puppi_dnnDecorrbb;AK8puppi_dnnDecorrbb[1]=jetAK8puppi_dnnDecorrbb_2;AK8puppi_dnnDecorrbb[2]=jetAK8puppi_dnnDecorrbb_3;
        AK8puppi_dnnDecorrcc[0]=jetAK8puppi_dnnDecorrcc;AK8puppi_dnnDecorrcc[1]=jetAK8puppi_dnnDecorrcc_2;AK8puppi_dnnDecorrcc[2]=jetAK8puppi_dnnDecorrcc_3;
        AK8puppi_dnnDecorrbbnog[0]=jetAK8puppi_dnnDecorrbbnog;AK8puppi_dnnDecorrbbnog[1]=jetAK8puppi_dnnDecorrbbnog_2;AK8puppi_dnnDecorrbbnog[2]=jetAK8puppi_dnnDecorrbbnog_3;
        AK8puppi_dnnDecorrccnog[0]=jetAK8puppi_dnnDecorrccnog;AK8puppi_dnnDecorrccnog[1]=jetAK8puppi_dnnDecorrccnog_2;AK8puppi_dnnDecorrccnog[2]=jetAK8puppi_dnnDecorrccnog_3;
        AK8puppi_dnnqcd[0]=jetAK8puppi_dnnqcd;AK8puppi_dnnqcd[1]=jetAK8puppi_dnnqcd_2;AK8puppi_dnnqcd[2]=jetAK8puppi_dnnqcd_3;
        AK8puppi_dnntop[0]=jetAK8puppi_dnntop;AK8puppi_dnntop[1]=jetAK8puppi_dnntop_2;AK8puppi_dnntop[2]=jetAK8puppi_dnntop_3;
        AK8puppi_dnnw[0]=jetAK8puppi_dnnw;AK8puppi_dnnw[1]=jetAK8puppi_dnnw_2;AK8puppi_dnnw[2]=jetAK8puppi_dnnw_3;
        AK8puppi_dnnz[0]=jetAK8puppi_dnnz;AK8puppi_dnnz[1]=jetAK8puppi_dnnz_2;AK8puppi_dnnz[2]=jetAK8puppi_dnnz_3;
        AK8puppi_dnnzbb[0]=jetAK8puppi_dnnzbb;AK8puppi_dnnzbb[1]=jetAK8puppi_dnnzbb_2;AK8puppi_dnnzbb[2]=jetAK8puppi_dnnzbb_3;
        AK8puppi_dnnhbb[0]=jetAK8puppi_dnnhbb;AK8puppi_dnnhbb[1]=jetAK8puppi_dnnhbb_2;AK8puppi_dnnhbb[2]=jetAK8puppi_dnnhbb_3;
        AK8puppi_dnnh4q[0]=jetAK8puppi_dnnh4q;AK8puppi_dnnh4q[1]=jetAK8puppi_dnnh4q_2;AK8puppi_dnnh4q[2]=jetAK8puppi_dnnh4q_3;
        AK8puppi_dnnDecorrqcd[0]=jetAK8puppi_dnnDecorrqcd;AK8puppi_dnnDecorrqcd[1]=jetAK8puppi_dnnDecorrqcd_2;AK8puppi_dnnDecorrqcd[2]=jetAK8puppi_dnnDecorrqcd_3;
        AK8puppi_dnnDecorrtop[0]=jetAK8puppi_dnnDecorrtop;AK8puppi_dnnDecorrtop[1]=jetAK8puppi_dnnDecorrtop_2;AK8puppi_dnnDecorrtop[2]=jetAK8puppi_dnnDecorrtop_3;
        AK8puppi_dnnDecorrw[0]=jetAK8puppi_dnnDecorrw;AK8puppi_dnnDecorrw[1]=jetAK8puppi_dnnDecorrw_2;AK8puppi_dnnDecorrw[2]=jetAK8puppi_dnnDecorrw_3;
        AK8puppi_dnnDecorrz[0]=jetAK8puppi_dnnDecorrz;AK8puppi_dnnDecorrz[1]=jetAK8puppi_dnnDecorrz_2;AK8puppi_dnnDecorrz[2]=jetAK8puppi_dnnDecorrz_3;
        AK8puppi_dnnDecorrzbb[0]=jetAK8puppi_dnnDecorrzbb;AK8puppi_dnnDecorrzbb[1]=jetAK8puppi_dnnDecorrzbb_2;AK8puppi_dnnDecorrzbb[2]=jetAK8puppi_dnnDecorrzbb_3;
        AK8puppi_dnnDecorrhbb[0]=jetAK8puppi_dnnDecorrhbb;AK8puppi_dnnDecorrhbb[1]=jetAK8puppi_dnnDecorrhbb_2;AK8puppi_dnnDecorrhbb[2]=jetAK8puppi_dnnDecorrhbb_3;
        AK8puppi_dnnDecorrh4q[0]=jetAK8puppi_dnnDecorrh4q;AK8puppi_dnnDecorrh4q[1]=jetAK8puppi_dnnDecorrh4q_2;AK8puppi_dnnDecorrh4q[2]=jetAK8puppi_dnnDecorrh4q_3;

Int_t *indexx=new Int_t[3];
TMath::Sort(3,M,indexx,1);
jetAK8puppi_dnnTop_max=AK8puppi_dnnTop[indexx[0]];jetAK8puppi_dnnTop_mid=AK8puppi_dnnTop[indexx[1]];jetAK8puppi_dnnTop_min=AK8puppi_dnnTop[indexx[2]];
jetAK8puppi_dnnW_max=AK8puppi_dnnW[indexx[0]];jetAK8puppi_dnnW_mid=AK8puppi_dnnW[indexx[1]];jetAK8puppi_dnnW_min=AK8puppi_dnnW[indexx[2]];
jetAK8puppi_dnnH4q_max=AK8puppi_dnnH4q[indexx[0]];jetAK8puppi_dnnH4q_mid=AK8puppi_dnnH4q[indexx[1]];jetAK8puppi_dnnH4q_min=AK8puppi_dnnH4q[indexx[2]];
jetAK8puppi_dnnZ_max=AK8puppi_dnnZ[indexx[0]];jetAK8puppi_dnnZ_mid=AK8puppi_dnnZ[indexx[1]];jetAK8puppi_dnnZ_min=AK8puppi_dnnZ[indexx[2]];
jetAK8puppi_dnnZbb_max=AK8puppi_dnnZbb[indexx[0]];jetAK8puppi_dnnZbb_mid=AK8puppi_dnnZbb[indexx[1]];jetAK8puppi_dnnZbb_min=AK8puppi_dnnZbb[indexx[2]];
jetAK8puppi_dnnHbb_max=AK8puppi_dnnHbb[indexx[0]];jetAK8puppi_dnnHbb_mid=AK8puppi_dnnHbb[indexx[1]];jetAK8puppi_dnnHbb_min=AK8puppi_dnnHbb[indexx[2]];
jetAK8puppi_dnnDecorrTop_max=AK8puppi_dnnDecorrTop[indexx[0]];jetAK8puppi_dnnDecorrTop_mid=AK8puppi_dnnDecorrTop[indexx[1]];jetAK8puppi_dnnDecorrTop_min=AK8puppi_dnnDecorrTop[indexx[2]];
jetAK8puppi_dnnDecorrW_max=AK8puppi_dnnDecorrW[indexx[0]];jetAK8puppi_dnnDecorrW_mid=AK8puppi_dnnDecorrW[indexx[1]];jetAK8puppi_dnnDecorrW_min=AK8puppi_dnnDecorrW[indexx[2]];
jetAK8puppi_dnnDecorrH4q_max=AK8puppi_dnnDecorrH4q[indexx[0]];jetAK8puppi_dnnDecorrH4q_mid=AK8puppi_dnnDecorrH4q[indexx[1]];jetAK8puppi_dnnDecorrH4q_min=AK8puppi_dnnDecorrH4q[indexx[2]];
jetAK8puppi_dnnDecorrZ_max=AK8puppi_dnnDecorrZ[indexx[0]];jetAK8puppi_dnnDecorrZ_mid=AK8puppi_dnnDecorrZ[indexx[1]];jetAK8puppi_dnnDecorrZ_min=AK8puppi_dnnDecorrZ[indexx[2]];
jetAK8puppi_dnnDecorrZbb_max=AK8puppi_dnnDecorrZbb[indexx[0]];jetAK8puppi_dnnDecorrZbb_mid=AK8puppi_dnnDecorrZbb[indexx[1]];jetAK8puppi_dnnDecorrZbb_min=AK8puppi_dnnDecorrZbb[indexx[2]];
jetAK8puppi_dnnDecorrHbb_max=AK8puppi_dnnDecorrHbb[indexx[0]];jetAK8puppi_dnnDecorrHbb_mid=AK8puppi_dnnDecorrHbb[indexx[1]];jetAK8puppi_dnnDecorrHbb_min=AK8puppi_dnnDecorrHbb[indexx[2]];
jetAK8puppi_dnnDecorrbb_max=AK8puppi_dnnDecorrbb[indexx[0]];jetAK8puppi_dnnDecorrbb_mid=AK8puppi_dnnDecorrbb[indexx[1]];jetAK8puppi_dnnDecorrbb_min=AK8puppi_dnnDecorrbb[indexx[2]];
jetAK8puppi_dnnDecorrcc_max=AK8puppi_dnnDecorrcc[indexx[0]];jetAK8puppi_dnnDecorrcc_mid=AK8puppi_dnnDecorrcc[indexx[1]];jetAK8puppi_dnnDecorrcc_min=AK8puppi_dnnDecorrcc[indexx[2]];
jetAK8puppi_dnnDecorrbbnog_max=AK8puppi_dnnDecorrbbnog[indexx[0]];jetAK8puppi_dnnDecorrbbnog_mid=AK8puppi_dnnDecorrbbnog[indexx[1]];jetAK8puppi_dnnDecorrbbnog_min=AK8puppi_dnnDecorrbbnog[indexx[2]];
jetAK8puppi_dnnDecorrccnog_max=AK8puppi_dnnDecorrccnog[indexx[0]];jetAK8puppi_dnnDecorrccnog_mid=AK8puppi_dnnDecorrccnog[indexx[1]];jetAK8puppi_dnnDecorrccnog_min=AK8puppi_dnnDecorrccnog[indexx[2]];
jetAK8puppi_dnnqcd_max=AK8puppi_dnnqcd[indexx[0]];jetAK8puppi_dnnqcd_mid=AK8puppi_dnnqcd[indexx[1]];jetAK8puppi_dnnqcd_min=AK8puppi_dnnqcd[indexx[2]];
jetAK8puppi_dnntop_max=AK8puppi_dnntop[indexx[0]];jetAK8puppi_dnntop_mid=AK8puppi_dnntop[indexx[1]];jetAK8puppi_dnntop_min=AK8puppi_dnntop[indexx[2]];
jetAK8puppi_dnnw_max=AK8puppi_dnnw[indexx[0]];jetAK8puppi_dnnw_mid=AK8puppi_dnnw[indexx[1]];jetAK8puppi_dnnw_min=AK8puppi_dnnw[indexx[2]];
jetAK8puppi_dnnz_max=AK8puppi_dnnz[indexx[0]];jetAK8puppi_dnnz_mid=AK8puppi_dnnz[indexx[1]];jetAK8puppi_dnnz_min=AK8puppi_dnnz[indexx[2]];
jetAK8puppi_dnnzbb_max=AK8puppi_dnnzbb[indexx[0]];jetAK8puppi_dnnzbb_mid=AK8puppi_dnnzbb[indexx[1]];jetAK8puppi_dnnzbb_min=AK8puppi_dnnzbb[indexx[2]];
jetAK8puppi_dnnhbb_max=AK8puppi_dnnhbb[indexx[0]];jetAK8puppi_dnnhbb_mid=AK8puppi_dnnhbb[indexx[1]];jetAK8puppi_dnnhbb_min=AK8puppi_dnnhbb[indexx[2]];
jetAK8puppi_dnnh4q_max=AK8puppi_dnnh4q[indexx[0]];jetAK8puppi_dnnh4q_mid=AK8puppi_dnnh4q[indexx[1]];jetAK8puppi_dnnh4q_min=AK8puppi_dnnh4q[indexx[2]];
jetAK8puppi_dnnDecorrqcd_max=AK8puppi_dnnDecorrqcd[indexx[0]];jetAK8puppi_dnnDecorrqcd_mid=AK8puppi_dnnDecorrqcd[indexx[1]];jetAK8puppi_dnnDecorrqcd_min=AK8puppi_dnnDecorrqcd[indexx[2]];
jetAK8puppi_dnnDecorrtop_max=AK8puppi_dnnDecorrtop[indexx[0]];jetAK8puppi_dnnDecorrtop_mid=AK8puppi_dnnDecorrtop[indexx[1]];jetAK8puppi_dnnDecorrtop_min=AK8puppi_dnnDecorrtop[indexx[2]];
jetAK8puppi_dnnDecorrw_max=AK8puppi_dnnDecorrw[indexx[0]];jetAK8puppi_dnnDecorrw_mid=AK8puppi_dnnDecorrw[indexx[1]];jetAK8puppi_dnnDecorrw_min=AK8puppi_dnnDecorrw[indexx[2]];
jetAK8puppi_dnnDecorrz_max=AK8puppi_dnnDecorrz[indexx[0]];jetAK8puppi_dnnDecorrz_mid=AK8puppi_dnnDecorrz[indexx[1]];jetAK8puppi_dnnDecorrz_min=AK8puppi_dnnDecorrz[indexx[2]];
jetAK8puppi_dnnDecorrzbb_max=AK8puppi_dnnDecorrzbb[indexx[0]];jetAK8puppi_dnnDecorrzbb_mid=AK8puppi_dnnDecorrzbb[indexx[1]];jetAK8puppi_dnnDecorrzbb_min=AK8puppi_dnnDecorrzbb[indexx[2]];
jetAK8puppi_dnnDecorrhbb_max=AK8puppi_dnnDecorrhbb[indexx[0]];jetAK8puppi_dnnDecorrhbb_mid=AK8puppi_dnnDecorrhbb[indexx[1]];jetAK8puppi_dnnDecorrhbb_min=AK8puppi_dnnDecorrhbb[indexx[2]];
jetAK8puppi_dnnDecorrh4q_max=AK8puppi_dnnDecorrh4q[indexx[0]];jetAK8puppi_dnnDecorrh4q_mid=AK8puppi_dnnDecorrh4q[indexx[1]];jetAK8puppi_dnnDecorrh4q_min=AK8puppi_dnnDecorrh4q[indexx[2]];
         }
double dnn_temp;
if(Nj8==2){
dnn_temp=jetAK8puppi_dnnTop_mid;jetAK8puppi_dnnTop_mid=jetAK8puppi_dnnTop_min;jetAK8puppi_dnnTop_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnW_mid;jetAK8puppi_dnnW_mid=jetAK8puppi_dnnW_min;jetAK8puppi_dnnW_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnH4q_mid;jetAK8puppi_dnnH4q_mid=jetAK8puppi_dnnH4q_min;jetAK8puppi_dnnH4q_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnZ_mid;jetAK8puppi_dnnZ_mid=jetAK8puppi_dnnZ_min;jetAK8puppi_dnnZ_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnZbb_mid;jetAK8puppi_dnnZbb_mid=jetAK8puppi_dnnZbb_min;jetAK8puppi_dnnZbb_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnHbb_mid;jetAK8puppi_dnnHbb_mid=jetAK8puppi_dnnHbb_min;jetAK8puppi_dnnHbb_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrTop_mid;jetAK8puppi_dnnDecorrTop_mid=jetAK8puppi_dnnDecorrTop_min;jetAK8puppi_dnnDecorrTop_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrW_mid;jetAK8puppi_dnnDecorrW_mid=jetAK8puppi_dnnDecorrW_min;jetAK8puppi_dnnDecorrW_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrH4q_mid;jetAK8puppi_dnnDecorrH4q_mid=jetAK8puppi_dnnDecorrH4q_min;jetAK8puppi_dnnDecorrH4q_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrZ_mid;jetAK8puppi_dnnDecorrZ_mid=jetAK8puppi_dnnDecorrZ_min;jetAK8puppi_dnnDecorrZ_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrZbb_mid;jetAK8puppi_dnnDecorrZbb_mid=jetAK8puppi_dnnDecorrZbb_min;jetAK8puppi_dnnDecorrZbb_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrHbb_mid;jetAK8puppi_dnnDecorrHbb_mid=jetAK8puppi_dnnDecorrHbb_min;jetAK8puppi_dnnDecorrHbb_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrbb_mid;jetAK8puppi_dnnDecorrbb_mid=jetAK8puppi_dnnDecorrbb_min;jetAK8puppi_dnnDecorrbb_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrcc_mid;jetAK8puppi_dnnDecorrcc_mid=jetAK8puppi_dnnDecorrcc_min;jetAK8puppi_dnnDecorrcc_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrbbnog_mid;jetAK8puppi_dnnDecorrbbnog_mid=jetAK8puppi_dnnDecorrbbnog_min;jetAK8puppi_dnnDecorrbbnog_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrccnog_mid;jetAK8puppi_dnnDecorrccnog_mid=jetAK8puppi_dnnDecorrccnog_min;jetAK8puppi_dnnDecorrccnog_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnqcd_mid;jetAK8puppi_dnnqcd_mid=jetAK8puppi_dnnqcd_min;jetAK8puppi_dnnqcd_min=dnn_temp;
dnn_temp=jetAK8puppi_dnntop_mid;jetAK8puppi_dnntop_mid=jetAK8puppi_dnntop_min;jetAK8puppi_dnntop_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnw_mid;jetAK8puppi_dnnw_mid=jetAK8puppi_dnnw_min;jetAK8puppi_dnnw_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnz_mid;jetAK8puppi_dnnz_mid=jetAK8puppi_dnnz_min;jetAK8puppi_dnnz_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnzbb_mid;jetAK8puppi_dnnzbb_mid=jetAK8puppi_dnnzbb_min;jetAK8puppi_dnnzbb_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnhbb_mid;jetAK8puppi_dnnhbb_mid=jetAK8puppi_dnnhbb_min;jetAK8puppi_dnnhbb_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnh4q_mid;jetAK8puppi_dnnh4q_mid=jetAK8puppi_dnnh4q_min;jetAK8puppi_dnnh4q_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrqcd_mid;jetAK8puppi_dnnDecorrqcd_mid=jetAK8puppi_dnnDecorrqcd_min;jetAK8puppi_dnnDecorrqcd_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrtop_mid;jetAK8puppi_dnnDecorrtop_mid=jetAK8puppi_dnnDecorrtop_min;jetAK8puppi_dnnDecorrtop_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrw_mid;jetAK8puppi_dnnDecorrw_mid=jetAK8puppi_dnnDecorrw_min;jetAK8puppi_dnnDecorrw_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrz_mid;jetAK8puppi_dnnDecorrz_mid=jetAK8puppi_dnnDecorrz_min;jetAK8puppi_dnnDecorrz_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrzbb_mid;jetAK8puppi_dnnDecorrzbb_mid=jetAK8puppi_dnnDecorrzbb_min;jetAK8puppi_dnnDecorrzbb_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrhbb_mid;jetAK8puppi_dnnDecorrhbb_mid=jetAK8puppi_dnnDecorrhbb_min;jetAK8puppi_dnnDecorrhbb_min=dnn_temp;
dnn_temp=jetAK8puppi_dnnDecorrh4q_mid;jetAK8puppi_dnnDecorrh4q_mid=jetAK8puppi_dnnDecorrh4q_min;jetAK8puppi_dnnDecorrh4q_min=dnn_temp;
}
}

void EDBR2PKUTree::DeepAK8_Mass_Ordered_init() {
    if(PTj_2<0)
    {
        Mj_min=-99;
        Mj_mid=-99;
        Mj_max=-99;
        PTj_max=-99;
        PTj_mid=-99;
        PTj_min=-99;
        Etaj_max=-99;
        Etaj_mid=-99;
        Etaj_min=-99;
        Phij_max=-99;
        Phij_mid=-99;
        Phij_min=-99;
    }
}

void EDBR2PKUTree::DeepAK8_Mass_Ordered_P4() {
    if(PTj_3<0&&PTj_2>0){
        if(Mj_2>Mj){
            Mj_min=Float_t(Mj);
            Mj_mid=-99;
            Mj_max=Float_t(Mj_2);

            PTj_min=Float_t(PTj);
            PTj_mid=-99;
            PTj_max=Float_t(PTj_2);
            Etaj_min=Float_t(Etaj);
            Etaj_mid=-99;
            Etaj_max=Float_t(Etaj_2);
            Phij_min=Float_t(Phij);
            Phij_mid=-99;
            Phij_max=Float_t(Phij_2);
        }
        if(Mj_2<Mj){
            Mj_min=Float_t(Mj_2);
            Mj_mid=-99;
            Mj_max=Float_t(Mj);

            PTj_min=Float_t(PTj_2);
            PTj_mid=-99;
            PTj_max=Float_t(PTj);
            Etaj_min=Float_t(Etaj_2);
            Etaj_mid=-99;
            Etaj_max=Float_t(Etaj);
            Phij_min=Float_t(Phij_2);
            Phij_mid=-99;
            Phij_max=Float_t(Phij);
        } 
    }

    if(PTj_3>0)
{
 if(Mj_3>Mj_2&&Mj_2>Mj)
 {
Mj_min=Float_t(Mj);
Mj_mid=Float_t(Mj_2);
Mj_max=Float_t(Mj_3);

PTj_min=Float_t(PTj);
PTj_mid=Float_t(PTj_2);
PTj_max=Float_t(PTj_3);
Etaj_min=Float_t(Etaj);
Etaj_mid=Float_t(Etaj_2);
Etaj_max=Float_t(Etaj_3);
Phij_min=Float_t(Phij);
Phij_mid=Float_t(Phij_2);
Phij_max=Float_t(Phij_3);

 }           
 if(Mj_3>Mj&&Mj>Mj_2)
 {
Mj_min=Float_t(Mj_2);
Mj_mid=Float_t(Mj);
Mj_max=Float_t(Mj_3);

PTj_min=Float_t(PTj_2);
PTj_mid=Float_t(PTj);
PTj_max=Float_t(PTj_3);
Etaj_min=Float_t(Etaj_2);
Etaj_mid=Float_t(Etaj);
Etaj_max=Float_t(Etaj_3);
Phij_min=Float_t(Phij_2);
Phij_mid=Float_t(Phij);
Phij_max=Float_t(Phij_3);

 }
 if(Mj_2>Mj&&Mj>Mj_3)
 {
Mj_min=Float_t(Mj_3);
Mj_mid=Float_t(Mj);
Mj_max=Float_t(Mj_2);

PTj_min=Float_t(PTj_3);
PTj_mid=Float_t(PTj);
PTj_max=Float_t(PTj_2);
Etaj_min=Float_t(Etaj_3);
Etaj_mid=Float_t(Etaj);
Etaj_max=Float_t(Etaj_2);
Phij_min=Float_t(Phij_3);
Phij_mid=Float_t(Phij);
Phij_max=Float_t(Phij_2);

 }
 if(Mj_2>Mj_3&&Mj_3>Mj)
 {
Mj_min=Float_t(Mj);
Mj_mid=Float_t(Mj_3);
Mj_max=Float_t(Mj_2);

PTj_min=Float_t(PTj);
PTj_mid=Float_t(PTj_3);
PTj_max=Float_t(PTj_2);
Etaj_min=Float_t(Etaj);
Etaj_mid=Float_t(Etaj_3);
Etaj_max=Float_t(Etaj_2);
Phij_min=Float_t(Phij);
Phij_mid=Float_t(Phij_3);
Phij_max=Float_t(Phij_2);

 }
 if(Mj>Mj_2&&Mj_2>Mj_3)
 {
Mj_min=Float_t(Mj_3);
Mj_mid=Float_t(Mj_2);
Mj_max=Float_t(Mj);

PTj_min=Float_t(PTj_3);
PTj_mid=Float_t(PTj_2);
PTj_max=Float_t(PTj);
Etaj_min=Float_t(Etaj_3);
Etaj_mid=Float_t(Etaj_2);
Etaj_max=Float_t(Etaj);
Phij_min=Float_t(Phij_3);
Phij_mid=Float_t(Phij_2);
Phij_max=Float_t(Phij);

 }
 if(Mj>Mj_3&&Mj_3>Mj_2)
 {
Mj_min=Float_t(Mj_2);
Mj_mid=Float_t(Mj_3);
Mj_max=Float_t(Mj);

PTj_min=Float_t(PTj_2);
PTj_mid=Float_t(PTj_3);
PTj_max=Float_t(PTj);
Etaj_min=Float_t(Etaj_2);
Etaj_mid=Float_t(Etaj_3);
Etaj_max=Float_t(Etaj);
Phij_min=Float_t(Phij_2);
Phij_mid=Float_t(Phij_3);
Phij_max=Float_t(Phij);

 }
}

}


void EDBR2PKUTree::DeepAK8_Mass_Ordered_deepAK8RawScore() {

    jetAK8puppi_dnn_probTbcq_max = -99;
    jetAK8puppi_dnn_probTbcq_mid = -99;
    jetAK8puppi_dnn_probTbcq_min = -99;
    jetAK8puppi_dnn_probTbqq_max = -99;
    jetAK8puppi_dnn_probTbqq_mid = -99;
    jetAK8puppi_dnn_probTbqq_min = -99;
    jetAK8puppi_dnn_probTbc_max = -99;
    jetAK8puppi_dnn_probTbc_mid = -99;
    jetAK8puppi_dnn_probTbc_min = -99;
    jetAK8puppi_dnn_probTbq_max = -99;
    jetAK8puppi_dnn_probTbq_mid = -99;
    jetAK8puppi_dnn_probTbq_min = -99;
    jetAK8puppi_dnn_probWcq_max = -99;
    jetAK8puppi_dnn_probWcq_mid = -99;
    jetAK8puppi_dnn_probWcq_min = -99;
    jetAK8puppi_dnn_probWqq_max = -99;
    jetAK8puppi_dnn_probWqq_mid = -99;
    jetAK8puppi_dnn_probWqq_min = -99;
    jetAK8puppi_dnn_probZbb_max = -99;
    jetAK8puppi_dnn_probZbb_mid = -99;
    jetAK8puppi_dnn_probZbb_min = -99;
    jetAK8puppi_dnn_probZcc_max = -99;
    jetAK8puppi_dnn_probZcc_mid = -99;
    jetAK8puppi_dnn_probZcc_min = -99;
    jetAK8puppi_dnn_probZqq_max = -99;
    jetAK8puppi_dnn_probZqq_mid = -99;
    jetAK8puppi_dnn_probZqq_min = -99;
    jetAK8puppi_dnn_probHbb_max = -99;
    jetAK8puppi_dnn_probHbb_mid = -99;
    jetAK8puppi_dnn_probHbb_min = -99;
    jetAK8puppi_dnn_probHcc_max = -99;
    jetAK8puppi_dnn_probHcc_mid = -99;
    jetAK8puppi_dnn_probHcc_min = -99;
    jetAK8puppi_dnn_probHqqqq_max = -99;
    jetAK8puppi_dnn_probHqqqq_mid = -99;
    jetAK8puppi_dnn_probHqqqq_min = -99;
    jetAK8puppi_dnn_probQCDbb_max = -99;
    jetAK8puppi_dnn_probQCDbb_mid = -99;
    jetAK8puppi_dnn_probQCDbb_min = -99;
    jetAK8puppi_dnn_probQCDcc_max = -99;
    jetAK8puppi_dnn_probQCDcc_mid = -99;
    jetAK8puppi_dnn_probQCDcc_min = -99;
    jetAK8puppi_dnn_probQCDb_max = -99;
    jetAK8puppi_dnn_probQCDb_mid = -99;
    jetAK8puppi_dnn_probQCDb_min = -99;
    jetAK8puppi_dnn_probQCDc_max = -99;
    jetAK8puppi_dnn_probQCDc_mid = -99;
    jetAK8puppi_dnn_probQCDc_min = -99;
    jetAK8puppi_dnn_probQCDothers_max = -99;
    jetAK8puppi_dnn_probQCDothers_mid = -99;
    jetAK8puppi_dnn_probQCDothers_min = -99;
    jetAK8puppi_dnnDecorr_probTbcq_max = -99;
    jetAK8puppi_dnnDecorr_probTbcq_mid = -99;
    jetAK8puppi_dnnDecorr_probTbcq_min = -99;
    jetAK8puppi_dnnDecorr_probTbqq_max = -99;
    jetAK8puppi_dnnDecorr_probTbqq_mid = -99;
    jetAK8puppi_dnnDecorr_probTbqq_min = -99;
    jetAK8puppi_dnnDecorr_probTbc_max = -99;
    jetAK8puppi_dnnDecorr_probTbc_mid = -99;
    jetAK8puppi_dnnDecorr_probTbc_min = -99;
    jetAK8puppi_dnnDecorr_probTbq_max = -99;
    jetAK8puppi_dnnDecorr_probTbq_mid = -99;
    jetAK8puppi_dnnDecorr_probTbq_min = -99;
    jetAK8puppi_dnnDecorr_probWcq_max = -99;
    jetAK8puppi_dnnDecorr_probWcq_mid = -99;
    jetAK8puppi_dnnDecorr_probWcq_min = -99;
    jetAK8puppi_dnnDecorr_probWqq_max = -99;
    jetAK8puppi_dnnDecorr_probWqq_mid = -99;
    jetAK8puppi_dnnDecorr_probWqq_min = -99;
    jetAK8puppi_dnnDecorr_probZbb_max = -99;
    jetAK8puppi_dnnDecorr_probZbb_mid = -99;
    jetAK8puppi_dnnDecorr_probZbb_min = -99;
    jetAK8puppi_dnnDecorr_probZcc_max = -99;
    jetAK8puppi_dnnDecorr_probZcc_mid = -99;
    jetAK8puppi_dnnDecorr_probZcc_min = -99;
    jetAK8puppi_dnnDecorr_probZqq_max = -99;
    jetAK8puppi_dnnDecorr_probZqq_mid = -99;
    jetAK8puppi_dnnDecorr_probZqq_min = -99;
    jetAK8puppi_dnnDecorr_probHbb_max = -99;
    jetAK8puppi_dnnDecorr_probHbb_mid = -99;
    jetAK8puppi_dnnDecorr_probHbb_min = -99;
    jetAK8puppi_dnnDecorr_probHcc_max = -99;
    jetAK8puppi_dnnDecorr_probHcc_mid = -99;
    jetAK8puppi_dnnDecorr_probHcc_min = -99;
    jetAK8puppi_dnnDecorr_probHqqqq_max = -99;
    jetAK8puppi_dnnDecorr_probHqqqq_mid = -99;
    jetAK8puppi_dnnDecorr_probHqqqq_min = -99;
    jetAK8puppi_dnnDecorr_probQCDbb_max = -99;
    jetAK8puppi_dnnDecorr_probQCDbb_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDbb_min = -99;
    jetAK8puppi_dnnDecorr_probQCDcc_max = -99;
    jetAK8puppi_dnnDecorr_probQCDcc_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDcc_min = -99;
    jetAK8puppi_dnnDecorr_probQCDb_max = -99;
    jetAK8puppi_dnnDecorr_probQCDb_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDb_min = -99;
    jetAK8puppi_dnnDecorr_probQCDc_max = -99;
    jetAK8puppi_dnnDecorr_probQCDc_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDc_min = -99;
    jetAK8puppi_dnnDecorr_probQCDothers_max = -99;
    jetAK8puppi_dnnDecorr_probQCDothers_mid = -99;
    jetAK8puppi_dnnDecorr_probQCDothers_min = -99;

    // Nj8 == 2
    if( PTj_2 > 0 && PTj_3 < 0){
        Int_t *indexTag=new Int_t[2];
        Double_t jetAK8puppi_Mass_sort[2] = { Mj , Mj_2 };
        TMath::Sort(2, jetAK8puppi_Mass_sort, indexTag, 1);

        Double_t jetAK8puppi_dnn_probTbcq_sort[2] = { jetAK8puppi_dnn_probTbcq , jetAK8puppi_dnn_probTbcq_2 };
        Double_t jetAK8puppi_dnn_probTbqq_sort[2] = { jetAK8puppi_dnn_probTbqq , jetAK8puppi_dnn_probTbqq_2 };
        Double_t jetAK8puppi_dnn_probTbc_sort[2] = { jetAK8puppi_dnn_probTbc , jetAK8puppi_dnn_probTbc_2 };
        Double_t jetAK8puppi_dnn_probTbq_sort[2] = { jetAK8puppi_dnn_probTbq , jetAK8puppi_dnn_probTbq_2 };
        Double_t jetAK8puppi_dnn_probWcq_sort[2] = { jetAK8puppi_dnn_probWcq , jetAK8puppi_dnn_probWcq_2 };
        Double_t jetAK8puppi_dnn_probWqq_sort[2] = { jetAK8puppi_dnn_probWqq , jetAK8puppi_dnn_probWqq_2 };
        Double_t jetAK8puppi_dnn_probZbb_sort[2] = { jetAK8puppi_dnn_probZbb , jetAK8puppi_dnn_probZbb_2 };
        Double_t jetAK8puppi_dnn_probZcc_sort[2] = { jetAK8puppi_dnn_probZcc , jetAK8puppi_dnn_probZcc_2 };
        Double_t jetAK8puppi_dnn_probZqq_sort[2] = { jetAK8puppi_dnn_probZqq , jetAK8puppi_dnn_probZqq_2 };
        Double_t jetAK8puppi_dnn_probHbb_sort[2] = { jetAK8puppi_dnn_probHbb , jetAK8puppi_dnn_probHbb_2 };
        Double_t jetAK8puppi_dnn_probHcc_sort[2] = { jetAK8puppi_dnn_probHcc , jetAK8puppi_dnn_probHcc_2 };
        Double_t jetAK8puppi_dnn_probHqqqq_sort[2] = { jetAK8puppi_dnn_probHqqqq , jetAK8puppi_dnn_probHqqqq_2 };
        Double_t jetAK8puppi_dnn_probQCDbb_sort[2] = { jetAK8puppi_dnn_probQCDbb , jetAK8puppi_dnn_probQCDbb_2 };
        Double_t jetAK8puppi_dnn_probQCDcc_sort[2] = { jetAK8puppi_dnn_probQCDcc , jetAK8puppi_dnn_probQCDcc_2 };
        Double_t jetAK8puppi_dnn_probQCDb_sort[2] = { jetAK8puppi_dnn_probQCDb , jetAK8puppi_dnn_probQCDb_2 };
        Double_t jetAK8puppi_dnn_probQCDc_sort[2] = { jetAK8puppi_dnn_probQCDc , jetAK8puppi_dnn_probQCDc_2 };
        Double_t jetAK8puppi_dnn_probQCDothers_sort[2] = { jetAK8puppi_dnn_probQCDothers , jetAK8puppi_dnn_probQCDothers_2 };
        Double_t jetAK8puppi_dnnDecorr_probTbcq_sort[2] = { jetAK8puppi_dnnDecorr_probTbcq , jetAK8puppi_dnnDecorr_probTbcq_2 };
        Double_t jetAK8puppi_dnnDecorr_probTbqq_sort[2] = { jetAK8puppi_dnnDecorr_probTbqq , jetAK8puppi_dnnDecorr_probTbqq_2 };
        Double_t jetAK8puppi_dnnDecorr_probTbc_sort[2] = { jetAK8puppi_dnnDecorr_probTbc , jetAK8puppi_dnnDecorr_probTbc_2 };
        Double_t jetAK8puppi_dnnDecorr_probTbq_sort[2] = { jetAK8puppi_dnnDecorr_probTbq , jetAK8puppi_dnnDecorr_probTbq_2 };
        Double_t jetAK8puppi_dnnDecorr_probWcq_sort[2] = { jetAK8puppi_dnnDecorr_probWcq , jetAK8puppi_dnnDecorr_probWcq_2 };
        Double_t jetAK8puppi_dnnDecorr_probWqq_sort[2] = { jetAK8puppi_dnnDecorr_probWqq , jetAK8puppi_dnnDecorr_probWqq_2 };
        Double_t jetAK8puppi_dnnDecorr_probZbb_sort[2] = { jetAK8puppi_dnnDecorr_probZbb , jetAK8puppi_dnnDecorr_probZbb_2 };
        Double_t jetAK8puppi_dnnDecorr_probZcc_sort[2] = { jetAK8puppi_dnnDecorr_probZcc , jetAK8puppi_dnnDecorr_probZcc_2 };
        Double_t jetAK8puppi_dnnDecorr_probZqq_sort[2] = { jetAK8puppi_dnnDecorr_probZqq , jetAK8puppi_dnnDecorr_probZqq_2 };
        Double_t jetAK8puppi_dnnDecorr_probHbb_sort[2] = { jetAK8puppi_dnnDecorr_probHbb , jetAK8puppi_dnnDecorr_probHbb_2 };
        Double_t jetAK8puppi_dnnDecorr_probHcc_sort[2] = { jetAK8puppi_dnnDecorr_probHcc , jetAK8puppi_dnnDecorr_probHcc_2 };
        Double_t jetAK8puppi_dnnDecorr_probHqqqq_sort[2] = { jetAK8puppi_dnnDecorr_probHqqqq , jetAK8puppi_dnnDecorr_probHqqqq_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDbb_sort[2] = { jetAK8puppi_dnnDecorr_probQCDbb , jetAK8puppi_dnnDecorr_probQCDbb_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDcc_sort[2] = { jetAK8puppi_dnnDecorr_probQCDcc , jetAK8puppi_dnnDecorr_probQCDcc_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDb_sort[2] = { jetAK8puppi_dnnDecorr_probQCDb , jetAK8puppi_dnnDecorr_probQCDb_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDc_sort[2] = { jetAK8puppi_dnnDecorr_probQCDc , jetAK8puppi_dnnDecorr_probQCDc_2 };
        Double_t jetAK8puppi_dnnDecorr_probQCDothers_sort[2] = { jetAK8puppi_dnnDecorr_probQCDothers , jetAK8puppi_dnnDecorr_probQCDothers_2 };

        jetAK8puppi_dnn_probTbcq_max = jetAK8puppi_dnn_probTbcq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbcq_min = jetAK8puppi_dnn_probTbcq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbqq_max = jetAK8puppi_dnn_probTbqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbqq_min = jetAK8puppi_dnn_probTbqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbc_max = jetAK8puppi_dnn_probTbc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbc_min = jetAK8puppi_dnn_probTbc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbq_max = jetAK8puppi_dnn_probTbq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbq_min = jetAK8puppi_dnn_probTbq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probWcq_max = jetAK8puppi_dnn_probWcq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probWcq_min = jetAK8puppi_dnn_probWcq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probWqq_max = jetAK8puppi_dnn_probWqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probWqq_min = jetAK8puppi_dnn_probWqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZbb_max = jetAK8puppi_dnn_probZbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZbb_min = jetAK8puppi_dnn_probZbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZcc_max = jetAK8puppi_dnn_probZcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZcc_min = jetAK8puppi_dnn_probZcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZqq_max = jetAK8puppi_dnn_probZqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZqq_min = jetAK8puppi_dnn_probZqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHbb_max = jetAK8puppi_dnn_probHbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHbb_min = jetAK8puppi_dnn_probHbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHcc_max = jetAK8puppi_dnn_probHcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHcc_min = jetAK8puppi_dnn_probHcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHqqqq_max = jetAK8puppi_dnn_probHqqqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHqqqq_min = jetAK8puppi_dnn_probHqqqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDbb_max = jetAK8puppi_dnn_probQCDbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDbb_min = jetAK8puppi_dnn_probQCDbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDcc_max = jetAK8puppi_dnn_probQCDcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDcc_min = jetAK8puppi_dnn_probQCDcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDb_max = jetAK8puppi_dnn_probQCDb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDb_min = jetAK8puppi_dnn_probQCDb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDc_max = jetAK8puppi_dnn_probQCDc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDc_min = jetAK8puppi_dnn_probQCDc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDothers_max = jetAK8puppi_dnn_probQCDothers_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDothers_min = jetAK8puppi_dnn_probQCDothers_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbcq_max = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbcq_min = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbqq_max = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbqq_min = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbc_max = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbc_min = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbq_max = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbq_min = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probWcq_max = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probWcq_min = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probWqq_max = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probWqq_min = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZbb_max = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZbb_min = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZcc_max = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZcc_min = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZqq_max = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZqq_min = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHbb_max = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHbb_min = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHcc_max = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHcc_min = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_max = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_min = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_max = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_min = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_max = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_min = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDb_max = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDb_min = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDc_max = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDc_min = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_max = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_min = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[1]] ;


        
    }

    if( PTj_3 > 0 && PTj_4 < 0){
        Int_t *indexTag=new Int_t[3];
        Double_t jetAK8puppi_Mass_sort[3] = { Mj , Mj_2, Mj_3 };
        TMath::Sort(3, jetAK8puppi_Mass_sort, indexTag, 1);
        Double_t jetAK8puppi_dnn_probTbcq_sort[3] = { jetAK8puppi_dnn_probTbcq , jetAK8puppi_dnn_probTbcq_2 , jetAK8puppi_dnn_probTbcq_3 };
        Double_t jetAK8puppi_dnn_probTbqq_sort[3] = { jetAK8puppi_dnn_probTbqq , jetAK8puppi_dnn_probTbqq_2 , jetAK8puppi_dnn_probTbqq_3 };
        Double_t jetAK8puppi_dnn_probTbc_sort[3] = { jetAK8puppi_dnn_probTbc , jetAK8puppi_dnn_probTbc_2 , jetAK8puppi_dnn_probTbc_3 };
        Double_t jetAK8puppi_dnn_probTbq_sort[3] = { jetAK8puppi_dnn_probTbq , jetAK8puppi_dnn_probTbq_2 , jetAK8puppi_dnn_probTbq_3 };
        Double_t jetAK8puppi_dnn_probWcq_sort[3] = { jetAK8puppi_dnn_probWcq , jetAK8puppi_dnn_probWcq_2 , jetAK8puppi_dnn_probWcq_3 };
        Double_t jetAK8puppi_dnn_probWqq_sort[3] = { jetAK8puppi_dnn_probWqq , jetAK8puppi_dnn_probWqq_2 , jetAK8puppi_dnn_probWqq_3 };
        Double_t jetAK8puppi_dnn_probZbb_sort[3] = { jetAK8puppi_dnn_probZbb , jetAK8puppi_dnn_probZbb_2 , jetAK8puppi_dnn_probZbb_3 };
        Double_t jetAK8puppi_dnn_probZcc_sort[3] = { jetAK8puppi_dnn_probZcc , jetAK8puppi_dnn_probZcc_2 , jetAK8puppi_dnn_probZcc_3 };
        Double_t jetAK8puppi_dnn_probZqq_sort[3] = { jetAK8puppi_dnn_probZqq , jetAK8puppi_dnn_probZqq_2 , jetAK8puppi_dnn_probZqq_3 };
        Double_t jetAK8puppi_dnn_probHbb_sort[3] = { jetAK8puppi_dnn_probHbb , jetAK8puppi_dnn_probHbb_2 , jetAK8puppi_dnn_probHbb_3 };
        Double_t jetAK8puppi_dnn_probHcc_sort[3] = { jetAK8puppi_dnn_probHcc , jetAK8puppi_dnn_probHcc_2 , jetAK8puppi_dnn_probHcc_3 };
        Double_t jetAK8puppi_dnn_probHqqqq_sort[3] = { jetAK8puppi_dnn_probHqqqq , jetAK8puppi_dnn_probHqqqq_2 , jetAK8puppi_dnn_probHqqqq_3 };
        Double_t jetAK8puppi_dnn_probQCDbb_sort[3] = { jetAK8puppi_dnn_probQCDbb , jetAK8puppi_dnn_probQCDbb_2 , jetAK8puppi_dnn_probQCDbb_3 };
        Double_t jetAK8puppi_dnn_probQCDcc_sort[3] = { jetAK8puppi_dnn_probQCDcc , jetAK8puppi_dnn_probQCDcc_2 , jetAK8puppi_dnn_probQCDcc_3 };
        Double_t jetAK8puppi_dnn_probQCDb_sort[3] = { jetAK8puppi_dnn_probQCDb , jetAK8puppi_dnn_probQCDb_2 , jetAK8puppi_dnn_probQCDb_3 };
        Double_t jetAK8puppi_dnn_probQCDc_sort[3] = { jetAK8puppi_dnn_probQCDc , jetAK8puppi_dnn_probQCDc_2 , jetAK8puppi_dnn_probQCDc_3 };
        Double_t jetAK8puppi_dnn_probQCDothers_sort[3] = { jetAK8puppi_dnn_probQCDothers , jetAK8puppi_dnn_probQCDothers_2 , jetAK8puppi_dnn_probQCDothers_3 };
        Double_t jetAK8puppi_dnnDecorr_probTbcq_sort[3] = { jetAK8puppi_dnnDecorr_probTbcq , jetAK8puppi_dnnDecorr_probTbcq_2 , jetAK8puppi_dnnDecorr_probTbcq_3 };
        Double_t jetAK8puppi_dnnDecorr_probTbqq_sort[3] = { jetAK8puppi_dnnDecorr_probTbqq , jetAK8puppi_dnnDecorr_probTbqq_2 , jetAK8puppi_dnnDecorr_probTbqq_3 };
        Double_t jetAK8puppi_dnnDecorr_probTbc_sort[3] = { jetAK8puppi_dnnDecorr_probTbc , jetAK8puppi_dnnDecorr_probTbc_2 , jetAK8puppi_dnnDecorr_probTbc_3 };
        Double_t jetAK8puppi_dnnDecorr_probTbq_sort[3] = { jetAK8puppi_dnnDecorr_probTbq , jetAK8puppi_dnnDecorr_probTbq_2 , jetAK8puppi_dnnDecorr_probTbq_3 };
        Double_t jetAK8puppi_dnnDecorr_probWcq_sort[3] = { jetAK8puppi_dnnDecorr_probWcq , jetAK8puppi_dnnDecorr_probWcq_2 , jetAK8puppi_dnnDecorr_probWcq_3 };
        Double_t jetAK8puppi_dnnDecorr_probWqq_sort[3] = { jetAK8puppi_dnnDecorr_probWqq , jetAK8puppi_dnnDecorr_probWqq_2 , jetAK8puppi_dnnDecorr_probWqq_3 };
        Double_t jetAK8puppi_dnnDecorr_probZbb_sort[3] = { jetAK8puppi_dnnDecorr_probZbb , jetAK8puppi_dnnDecorr_probZbb_2 , jetAK8puppi_dnnDecorr_probZbb_3 };
        Double_t jetAK8puppi_dnnDecorr_probZcc_sort[3] = { jetAK8puppi_dnnDecorr_probZcc , jetAK8puppi_dnnDecorr_probZcc_2 , jetAK8puppi_dnnDecorr_probZcc_3 };
        Double_t jetAK8puppi_dnnDecorr_probZqq_sort[3] = { jetAK8puppi_dnnDecorr_probZqq , jetAK8puppi_dnnDecorr_probZqq_2 , jetAK8puppi_dnnDecorr_probZqq_3 };
        Double_t jetAK8puppi_dnnDecorr_probHbb_sort[3] = { jetAK8puppi_dnnDecorr_probHbb , jetAK8puppi_dnnDecorr_probHbb_2 , jetAK8puppi_dnnDecorr_probHbb_3 };
        Double_t jetAK8puppi_dnnDecorr_probHcc_sort[3] = { jetAK8puppi_dnnDecorr_probHcc , jetAK8puppi_dnnDecorr_probHcc_2 , jetAK8puppi_dnnDecorr_probHcc_3 };
        Double_t jetAK8puppi_dnnDecorr_probHqqqq_sort[3] = { jetAK8puppi_dnnDecorr_probHqqqq , jetAK8puppi_dnnDecorr_probHqqqq_2 , jetAK8puppi_dnnDecorr_probHqqqq_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDbb_sort[3] = { jetAK8puppi_dnnDecorr_probQCDbb , jetAK8puppi_dnnDecorr_probQCDbb_2 , jetAK8puppi_dnnDecorr_probQCDbb_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDcc_sort[3] = { jetAK8puppi_dnnDecorr_probQCDcc , jetAK8puppi_dnnDecorr_probQCDcc_2 , jetAK8puppi_dnnDecorr_probQCDcc_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDb_sort[3] = { jetAK8puppi_dnnDecorr_probQCDb , jetAK8puppi_dnnDecorr_probQCDb_2 , jetAK8puppi_dnnDecorr_probQCDb_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDc_sort[3] = { jetAK8puppi_dnnDecorr_probQCDc , jetAK8puppi_dnnDecorr_probQCDc_2 , jetAK8puppi_dnnDecorr_probQCDc_3 };
        Double_t jetAK8puppi_dnnDecorr_probQCDothers_sort[3] = { jetAK8puppi_dnnDecorr_probQCDothers , jetAK8puppi_dnnDecorr_probQCDothers_2 , jetAK8puppi_dnnDecorr_probQCDothers_3 };


        
        jetAK8puppi_dnn_probTbcq_max = jetAK8puppi_dnn_probTbcq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbcq_mid = jetAK8puppi_dnn_probTbcq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbcq_min = jetAK8puppi_dnn_probTbcq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probTbqq_max = jetAK8puppi_dnn_probTbqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbqq_mid = jetAK8puppi_dnn_probTbqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbqq_min = jetAK8puppi_dnn_probTbqq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probTbc_max = jetAK8puppi_dnn_probTbc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbc_mid = jetAK8puppi_dnn_probTbc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbc_min = jetAK8puppi_dnn_probTbc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probTbq_max = jetAK8puppi_dnn_probTbq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probTbq_mid = jetAK8puppi_dnn_probTbq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probTbq_min = jetAK8puppi_dnn_probTbq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probWcq_max = jetAK8puppi_dnn_probWcq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probWcq_mid = jetAK8puppi_dnn_probWcq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probWcq_min = jetAK8puppi_dnn_probWcq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probWqq_max = jetAK8puppi_dnn_probWqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probWqq_mid = jetAK8puppi_dnn_probWqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probWqq_min = jetAK8puppi_dnn_probWqq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probZbb_max = jetAK8puppi_dnn_probZbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZbb_mid = jetAK8puppi_dnn_probZbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZbb_min = jetAK8puppi_dnn_probZbb_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probZcc_max = jetAK8puppi_dnn_probZcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZcc_mid = jetAK8puppi_dnn_probZcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZcc_min = jetAK8puppi_dnn_probZcc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probZqq_max = jetAK8puppi_dnn_probZqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probZqq_mid = jetAK8puppi_dnn_probZqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probZqq_min = jetAK8puppi_dnn_probZqq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probHbb_max = jetAK8puppi_dnn_probHbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHbb_mid = jetAK8puppi_dnn_probHbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHbb_min = jetAK8puppi_dnn_probHbb_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probHcc_max = jetAK8puppi_dnn_probHcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHcc_mid = jetAK8puppi_dnn_probHcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHcc_min = jetAK8puppi_dnn_probHcc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probHqqqq_max = jetAK8puppi_dnn_probHqqqq_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probHqqqq_mid = jetAK8puppi_dnn_probHqqqq_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probHqqqq_min = jetAK8puppi_dnn_probHqqqq_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDbb_max = jetAK8puppi_dnn_probQCDbb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDbb_mid = jetAK8puppi_dnn_probQCDbb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDbb_min = jetAK8puppi_dnn_probQCDbb_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDcc_max = jetAK8puppi_dnn_probQCDcc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDcc_mid = jetAK8puppi_dnn_probQCDcc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDcc_min = jetAK8puppi_dnn_probQCDcc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDb_max = jetAK8puppi_dnn_probQCDb_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDb_mid = jetAK8puppi_dnn_probQCDb_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDb_min = jetAK8puppi_dnn_probQCDb_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDc_max = jetAK8puppi_dnn_probQCDc_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDc_mid = jetAK8puppi_dnn_probQCDc_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDc_min = jetAK8puppi_dnn_probQCDc_sort[indexTag[2]] ;
        jetAK8puppi_dnn_probQCDothers_max = jetAK8puppi_dnn_probQCDothers_sort[indexTag[0]] ;
        jetAK8puppi_dnn_probQCDothers_mid = jetAK8puppi_dnn_probQCDothers_sort[indexTag[1]] ;
        jetAK8puppi_dnn_probQCDothers_min = jetAK8puppi_dnn_probQCDothers_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probTbcq_max = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbcq_mid = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbcq_min = jetAK8puppi_dnnDecorr_probTbcq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probTbqq_max = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbqq_mid = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbqq_min = jetAK8puppi_dnnDecorr_probTbqq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probTbc_max = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbc_mid = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbc_min = jetAK8puppi_dnnDecorr_probTbc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probTbq_max = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probTbq_mid = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probTbq_min = jetAK8puppi_dnnDecorr_probTbq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probWcq_max = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probWcq_mid = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probWcq_min = jetAK8puppi_dnnDecorr_probWcq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probWqq_max = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probWqq_mid = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probWqq_min = jetAK8puppi_dnnDecorr_probWqq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probZbb_max = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZbb_mid = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZbb_min = jetAK8puppi_dnnDecorr_probZbb_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probZcc_max = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZcc_mid = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZcc_min = jetAK8puppi_dnnDecorr_probZcc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probZqq_max = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probZqq_mid = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probZqq_min = jetAK8puppi_dnnDecorr_probZqq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probHbb_max = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHbb_mid = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHbb_min = jetAK8puppi_dnnDecorr_probHbb_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probHcc_max = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHcc_mid = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHcc_min = jetAK8puppi_dnnDecorr_probHcc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_max = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_mid = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probHqqqq_min = jetAK8puppi_dnnDecorr_probHqqqq_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_max = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_mid = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDbb_min = jetAK8puppi_dnnDecorr_probQCDbb_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_max = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_mid = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDcc_min = jetAK8puppi_dnnDecorr_probQCDcc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDb_max = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDb_mid = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDb_min = jetAK8puppi_dnnDecorr_probQCDb_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDc_max = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDc_mid = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDc_min = jetAK8puppi_dnnDecorr_probQCDc_sort[indexTag[2]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_max = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[0]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_mid = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[1]] ;
        jetAK8puppi_dnnDecorr_probQCDothers_min = jetAK8puppi_dnnDecorr_probQCDothers_sort[indexTag[2]] ;


    }


    
}


#endif
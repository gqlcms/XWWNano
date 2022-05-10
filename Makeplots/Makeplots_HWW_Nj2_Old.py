#!usr/bin/env python
import os
import glob
import math
import datetime
import array
import ROOT
import ntpath
import sys
import subprocess
from subprocess import Popen
from optparse   import OptionParser
from time       import gmtime, strftime
from array import array
from ROOT import gROOT, TPaveLabel, TPie, gStyle, gSystem, TGaxis, TStyle, TLatex, TString, TF1,TFile,TLine, TLegend, TH1D,TH2D,THStack, TGraph, TGraphErrors,TChain, TCanvas, TMatrixDSym, TMath, TLorentzVector, TText, TPad, TVectorD, RooFit, RooArgSet, RooArgList, RooArgSet, RooAbsData, RooAbsPdf, RooAddPdf, RooWorkspace, RooExtendPdf,RooCBShape, RooLandau, RooFFTConvPdf, RooGaussian, RooBifurGauss, RooArgusBG,RooDataSet, RooExponential,RooBreitWigner, RooVoigtian, RooNovosibirsk, RooRealVar,RooFormulaVar, RooDataHist, RooHist,RooCategory, RooChebychev, RooSimultaneous, RooGenericPdf,RooConstVar, RooKeysPdf, RooHistPdf, RooEffProd, RooProdPdf, TIter, kTRUE, kFALSE, kGray, kRed, kDashed, kGreen,kAzure, kOrange, kBlack,kBlue,kYellow,kCyan, kMagenta, kWhite

parser = OptionParser()
parser.add_option('--channel',    action="store",type="string",dest="channel"    ,default="had")
parser.add_option('--MODE',       action="store",type="string",dest="MODE"       ,default="MC" )
parser.add_option('--REGION',     action="store",type="string",dest="REGION"     ,default="PS" )
parser.add_option('--TAG',        action="store",type="string",dest="TAG"        ,default=""   )
parser.add_option('--SFs',        action="store",type="int"   ,dest="SFs"        ,default=0    )
parser.add_option('--piechart',   action="store",type="int"   ,dest="piechart"   ,default=0    )
parser.add_option('--tau',        action="store",type="float" ,dest="tau"        ,default=0.4  )
parser.add_option('--y',          action="store",type="string",dest="y"          ,default="16,17,18")
parser.add_option('--FBT',        action="store",type="int"   ,dest="FBT"        ,default=0    )
(options, args) = parser.parse_args()

def UnderOverFlow1D(h):
    Bins=h.GetNbinsX();
    h.SetBinContent( 1,  h.GetBinContent(1)+h.GetBinContent(0) );  h.SetBinError(   1,  math.sqrt( h.GetBinError(1)*h.GetBinError(1) + h.GetBinError(0)*h.GetBinError(0)) );
    h.SetBinContent( Bins,  h.GetBinContent(Bins)+h.GetBinContent(Bins+1) );  h.SetBinError(   Bins,  math.sqrt( h.GetBinError(Bins)*h.GetBinError(Bins) + h.GetBinError(Bins+1)*h.GetBinError(Bins+1)) );
    return h;

def Integerization(h):
    Bins=h.GetNbinsX();
    for i in range(1,Bins+1):
        if (h.GetBinContent(i)-int(h.GetBinContent(i)))>0.5 : value=int(h.GetBinContent(i))+1;
        else : value=int(h.GetBinContent(i));
        h.SetBinContent( i, value          );
        h.SetBinError(   i, math.sqrt(value) );
    return h;

def FBT_(total, h):
    Bins = h.GetNbinsX(); I = total.Integral();
    for i in range(1, Bins + 1):
        valTotal = total.GetBinContent(i); ErrorTotal = total.GetBinError(i); 
        if valTotal==0: continue;
        value = h.GetBinContent(i); Error = h.GetBinError(i);
        h.SetBinContent( i, value*(I/Bins)/valTotal );  h.SetBinError(   i, Error*(I/Bins)/valTotal );
    return h;

def OptimalCut(B,S,NORM_s1):
    Bins = B.GetNbinsX(); B0=B.Integral(); S0=S.Integral(); SigMax=0; InitialSig=S0/((B0+1)**0.5);
    for RightEnd in range(Bins,0,-1):
        for LeftEnd in range(1,RightEnd+1):            #print LeftEnd,RightEnd;
            sig = S.Integral( LeftEnd , RightEnd )/((B.Integral( LeftEnd , RightEnd )+1)**0.5);
            if sig>SigMax: 
                SigMax=sig; LeftCutBin=LeftEnd; RightCutBin=RightEnd; 
                BKGrjc  = float(round(100*(1-B.Integral(LeftCutBin,RightCutBin)/(B0+0.000001)),2) );
                Sig_Eff = float(round(100*   S.Integral(LeftCutBin,RightCutBin)/(S0+0.000001) ,1) );
                SigMax_Print=float(round(100*(SigMax-InitialSig)/InitialSig,1));
                S_o_sqrtB=float(round(  S.Integral(LeftCutBin,RightCutBin)/( NORM_s1*B.Integral(LeftCutBin,RightCutBin)+1) ,3) )
    ResultList = [ LeftCutBin , RightCutBin , S.GetBinLowEdge(LeftCutBin) , S.GetBinLowEdge(RightCutBin+1), str(BKGrjc), str(Sig_Eff), str(SigMax_Print),str(S_o_sqrtB) ];   #print ResultList;
    #L_balance = (S.GetBinContent(LeftCutBin-1)+S.GetBinContent(LeftCutBin))  /(B.GetBinContent(LeftCutBin-1)+(B.GetBinContent(LeftCutBin)))   - 0.5*S.Integral(LeftCutBin , RightCutBin)/B.Integral(LeftCutBin , RightCutBin) ;
    #R_balance = (S.GetBinContent(RightCutBin-1)+S.GetBinContent(RightCutBin))/(B.GetBinContent(RightCutBin-1)+(B.GetBinContent(RightCutBin))) - 0.5*S.Integral(LeftCutBin , RightCutBin)/B.Integral(LeftCutBin , RightCutBin) ;
    #print "bin L",LeftCutBin,L_balance,"   -----    bin R",RightCutBin,R_balance; 
    return ResultList; 
     
def RationUnc(h_data,h_TotalMC,h_Ratio,MaxY):
    for i in range(1,h_Ratio.GetNbinsX()+1,1):
        D  = h_data.GetBinContent(i);    eD = h_data.GetBinError(i);
        if D==0: eD=0.92;
        B  = h_TotalMC.GetBinContent(i); eB = h_TotalMC.GetBinError(i);
        if B<0.1 and eB>=B : eB=0.92; Err= 0.;
        if B!=0.        :Err=TMath.Sqrt( (eD*eD)/(B*B)  +(D*D*eB*eB)/(B*B*B*B)     ); h_Ratio.SetBinContent(i, D/B   );  h_Ratio.SetBinError(i, Err); #print i,")",h_Ratio.GetNbinsX()+1,")   data:",D," pm ",eD,"     Bkg:",B," pm ",eB,"   R:",D/B," pm ", Err
        if B==0.        :Err=TMath.Sqrt( (eD*eD)/(eB*eB)+(D*D*eB*eB)/(eB*eB*eB*eB) ); h_Ratio.SetBinContent(i, D/0.92);  h_Ratio.SetBinError(i, Err);
        if D==0 and B==0:                                                             h_Ratio.SetBinContent(i, -1);      h_Ratio.SetBinError(i, 0  );
        if h_Ratio.GetBinContent(i)>MaxY:h_Ratio.SetBinContent(i,MaxY); ### To visualise the points above axis... #h_Ratio.Fit("pol1");
    return h_Ratio;

def FourVectors( A_pt,A_eta,A_phi,A_mass,  B_pt,B_eta,B_phi,B_mass ):
    #A=TLorentzVector.SetPtEtaPhiM(A_pt,A_eta,A_phi,A_mass);  B=TLorentzVector.SetPtEtaPhiM(B_pt,B_eta,B_phi,B_mass);  C=A+B; D=A-B;
    #M="";
    List_of_scalars=[];
    #print A, B, C, D;
    return List_of_scalars;

class ANALYSIS:
    def __init__(self, channel , fit_model="ErfExp_v1", fit_model_alter="ErfPow_v1", input_workspace=None):
        self.setTDRStyle();
        self.channel    =channel;
        self.color_palet={'data':1, 'QCD':2,  'Rest':62,  'VV':62, 'STop':8, 'TTbar':80, 'ZJets':6, 'WJets':90, 'Signal':1, 'Uncertainty':1, }
        self.Signal_Scale1 = 1000000;
        self.Signal_Scale2 = 100000;

    #================ SETTINGS FOR Canvas/pads/histos and more ==================
    def setTDRStyle(self):
        self.tdrStyle =TStyle("tdrStyle","Style for P-TDR");  self.tdrStyle.SetCanvasBorderMode(0);        self.tdrStyle.SetCanvasColor(kWhite);        self.tdrStyle.SetCanvasDefH(700);        self.tdrStyle.SetCanvasDefW(700);        self.tdrStyle.SetCanvasDefX(0);          self.tdrStyle.SetCanvasDefY(0);
        self.tdrStyle.SetPadBorderMode(0);             self.tdrStyle.SetPadColor(kWhite);        self.tdrStyle.SetPadGridX(False);        self.tdrStyle.SetPadGridY(False);        self.tdrStyle.SetGridColor(0);        self.tdrStyle.SetGridStyle(3);        self.tdrStyle.SetGridWidth(1);      
        self.tdrStyle.SetFrameBorderMode(0);        self.tdrStyle.SetFrameBorderSize(1);        self.tdrStyle.SetFrameFillColor(0);        self.tdrStyle.SetFrameFillStyle(0);        self.tdrStyle.SetFrameLineColor(1);        self.tdrStyle.SetFrameLineStyle(1);        self.tdrStyle.SetFrameLineWidth(1);
        self.tdrStyle.SetHistLineColor(1);        self.tdrStyle.SetHistLineStyle(0);        self.tdrStyle.SetHistLineWidth(1);        self.tdrStyle.SetEndErrorSize(2);              self.tdrStyle.SetMarkerStyle(20);      self.tdrStyle.SetErrorX(0.);
        self.tdrStyle.SetOptFit(1);        self.tdrStyle.SetFitFormat("5.4g");        self.tdrStyle.SetFuncColor(2);        self.tdrStyle.SetFuncStyle(1);        self.tdrStyle.SetFuncWidth(1);      self.tdrStyle.SetOptDate(0);      
        self.tdrStyle.SetOptFile(0); self.tdrStyle.SetOptStat(0); self.tdrStyle.SetStatColor(kWhite); self.tdrStyle.SetStatFont(42); self.tdrStyle.SetStatFontSize(0.025); self.tdrStyle.SetStatTextColor(1); self.tdrStyle.SetStatFormat("6.4g"); self.tdrStyle.SetStatBorderSize(1); self.tdrStyle.SetStatH(0.1); self.tdrStyle.SetStatW(0.15);
        self.tdrStyle.SetPadTopMargin(0.05);        self.tdrStyle.SetPadBottomMargin(0.13);        self.tdrStyle.SetPadLeftMargin(0.18);        self.tdrStyle.SetPadRightMargin(0.06);      
        self.tdrStyle.SetOptTitle(0);        self.tdrStyle.SetTitleFont(42);        self.tdrStyle.SetTitleColor(1);        self.tdrStyle.SetTitleTextColor(1);        self.tdrStyle.SetTitleFillColor(10);        self.tdrStyle.SetTitleFontSize(0.05);
        self.tdrStyle.SetTitleColor(1, "XYZ");        self.tdrStyle.SetTitleFont(42, "XYZ");        self.tdrStyle.SetTitleSize(0.06, "XYZ");  
        self.tdrStyle.SetTitleXOffset(0.8);        self.tdrStyle.SetTitleYOffset(0.8);      
        self.tdrStyle.SetLabelColor(1, "XYZ");        self.tdrStyle.SetLabelFont(42, "XYZ");        self.tdrStyle.SetLabelOffset(0.007, "XYZ");        self.tdrStyle.SetLabelSize(0.04, "XYZ");
        self.tdrStyle.SetAxisColor(1, "XYZ");        self.tdrStyle.SetStripDecimals(kTRUE);        self.tdrStyle.SetTickLength(0.03, "XYZ");        self.tdrStyle.SetNdivisions(510, "XYZ");        self.tdrStyle.SetPadTickX(1);       self.tdrStyle.SetPadTickY(1);      
        self.tdrStyle.SetOptLogx(0); self.tdrStyle.SetOptLogy(0); self.tdrStyle.SetOptLogz(0);
        self.tdrStyle.SetPaperSize(20.,20.); self.tdrStyle.cd();


    def DefineSelection_0lep(self):#==========[ 0lep REGIONS & SELECTION ]===========================================
        REGION=options.REGION; MODE=options.MODE;

        #-------------------------- PRE/SELECTION -----------------------------------------------------
        PS = "HT>1100 && ( (Nj8==2 && MJJ>900 ) || (Nj8==3 && MJJJ>900 ) || (Nj8==4 && MJJJ>900 ) ) && PTj>550 && PTj_2>200 && Mj_max>50";
        PS2="("+PS+")&& Nj8==2 && nbtag_deep>=0 && HT>1400 ";
        PS3="("+PS+")&& Nj8==3";
        PS4 = " 1 ";
        PS5=" deepWH_Nj2_a == 1 ";
        MET1="Nj8==2 && MET_et/PTj_a_<0.3";
        MET2="Nj8==2 && MET_et/PTj_a>=0.3 && MET_et/PTj_a < 0.6";
        MET3="Nj8==2 && MET_et/PTj_a>0.6";
        PS6=" Nj8==2 && JetMass_Nj2_a>50 && JetMass_Nj2_a<150 && JetMass_Nj2_c<50 && deepWH_Nj2_a>0.8 ";
        #SR1 = PS2+"";
        if MODE in ["MC","MCvsDATA","DECO"]: self.Make_Controlplots_for_0lep(eval(REGION),"","");
        if MODE in ["COMP"]                : self.Make_Controlplots_for_0lep(eval("C"+options.COMP),eval("S"+(options.COMP)[0:2]),"");


    def Make_Controlplots_for_0lep(self,selection,selection2,tag,CR=0):
        REGION=options.REGION; Nj=234; MODE=options.MODE; logy=0; tag="";
        t41max = "tau41_max"; t41mid = "tau41_mid"; t41min = "tau41_min"; t31max = "tau31_max"; t31mid = "tau31_mid"; t31min = "tau31_min"; t21max = "tau21_max"; t21mid = "tau21_mid"; t21min = "tau21_min"; t42max = "tau42_max"; t42mid = "tau42_mid"; t42min = "tau42_min";
        Nb="nbtag_deep"; Nj4="num_ak4jetsex"; NbT="nbtag_deep_tight"; NbL="nbtag_deep_loose";
        # deep_WH_max="(jetAK8puppi_dnnDecorrh4q_max+jetAK8puppi_dnnDecorrw_max)/(jetAK8puppi_dnnDecorrh4q_max+jetAK8puppi_dnnDecorrw_max+jetAK8puppi_dnnDecorrqcd_max)";
        deep_H_max ="jetAK8puppi_dnnDecorrH4q_max";deep_H_mid="jetAK8puppi_dnnDecorrH4q_mid";deep_H_min="jetAK8puppi_dnnDecorrH4q_min";
        deep_W_max ="jetAK8puppi_dnnDecorrW_max";  deep_W_mid="jetAK8puppi_dnnDecorrW_mid";  deep_W_min="jetAK8puppi_dnnDecorrW_min";
        deep_t_max ="jetAK8puppi_dnnDecorrTop_max";deep_t_mid="jetAK8puppi_dnnDecorrTop_mid";deep_t_min="jetAK8puppi_dnnDecorrTopmin";

        if MODE in ["MC","MCvsDATA","DECO"]:
            logy=0;

            FLIP=" (Mass_tag1<70 && deepW_tag1-deepW_tag3<0.5 && (Pt_tag3-Pt_tag1)<300 && (Mass_tag3-Mass_tag1)>20) "
            RadionMass="Mass_tag1*(!"+FLIP+")+Mass_tag3*("+FLIP+")";

            #self.construct_plot(Nj, "TMath::Max(Pt_tag1,Pt_tag3)  " ,selection ,"" ,tag ,20 ,0 , 1000 ,"PT" ,"Events" ,logy ,CR );

            #For g : " &&Mass_tag1<Mass_tag3 && (deepW_tag3/deepW_tag1)**0.25>0.8 && deepW_tag1-deepW_tag3<0.3"#
            #selection = selection+" && MET_et/(Pt_tag1**0.5)>20 && MET_et/(Pt_tag1**0.5)>20 && (Pt_tag3-Pt_tag1)/(Pt_tag1**0.5)>0  && deepW_tag1>0.7 "
            #selection = selection+" && Mass_tag1<70  && deepW_tag1-deepW_tag3<0.5 && (Pt_tag3-Pt_tag1)<300 && Mass_tag3-Mass_tag1>20 ";#&& deepW_tag1-deepW_tag3<0.5";#( (deepW_tag1-deepW_tag3)<0.3 && (Mass_tag1-Mass_tag3)<40 &&  (Pt_tag3-Pt_tag1)<200 )";  #" (2*MET_et/(Pt_tag1**0.5) + (Pt_tag3-Pt_tag1)/(Pt_tag1**0.5))>50 && Mass_tag1>60 && nbtag_deep_loose==0 && (deepW_tag1>0.7 && deepW_tag3<0.5) ";  #" && 70<Mass_tag1 && 5<Mass_tag3 &&"+NbL+"==0 &&"+K+">45 && deepW_tag1>0.8 && deepW_tag3<0.3 && MET_et>300 && Pt_tag3>Pt_tag1";
            
            #self.construct_plot(Nj,"nbtag_deep"              ,selection          ,"",tag  , 4,-0.5, 3.5,"Nb (b-jets at deepCSV-Medium)"    ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"nbtag_deep_tight"        ,selection          ,"",tag  , 4,-0.5, 3.5,"Nb jets(deepCSV-Tight)"           ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"nbtag_deep_loose"        ,selection          ,"",tag  , 4,-0.5, 3.5,"Nb jets(deepCSV-Loose)"           ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"MJJ"    ,selection          ,"",tag  ,27, 900,3600,"Mjj (GeV)"                        ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"Nj8"    ,selection          ,"",tag  ,5,  0.5, 5.5,"Nj8(Number of AK8 jets) for Nj=3"                        ,"Events" ,logy,CR);  
            # self.construct_plot(Nj,"Nb_mid"    ,selection          ,"",tag  ,4,  -0.5, 3.5,"Nb(b-jets at deepCSV-Medium) for Nj=3"                        ,"Events" ,logy,CR); 
            # self.construct_plot(Nj,"Nj4"    ,selection          ,"",tag  ,10,  0, 10,"Nj-AK4(exclusive CHS AK4 jets) for Nj=3"                        ,"Events" ,logy,CR); 
            # self.construct_plot(Nj,"MET_pt"    ,selection          ,"",tag  ,40,  0, 400,"MET(GeV) for Nj=3"                        ,"Events" ,logy,CR); 
            # self.construct_plot(Nj,"HT"    ,selection          ,"",tag  ,40,  0, 4000,"HT(GeV) for Nj=3"                        ,"Events" ,logy,CR); 
            # self.construct_plot(Nj,"ST_new"    ,selection          ,"",tag  ,40,  0, 4000,"ST(GeV) for Nj=3"                        ,"Events" ,logy,CR); 
            # self.construct_plot(Nj,"Mj_max"    ,selection          ,"",tag  ,45,  0, 450,"Mj_max(GeV) for Nj=3"                        ,"Events" ,logy,CR); 
            # self.construct_plot(Nj,"Mj_min"    ,selection          ,"",tag  ,40,  0, 450,"Mj_min(GeV) for Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj,"Mj_mid"    ,selection          ,"",tag  ,40,  0, 450,"Mj_mid(GeV) for Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj,"jetAK8puppi_sd"    ,selection          ,"",tag  ,40,  0, 450,"Mj1(GeV) for Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj,"jetAK8puppi_sd_2"    ,selection          ,"",tag  ,40,  0, 450,"Mj2(GeV) for Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj,"deepWH_Mjmax"    ,selection          ,"",tag  ,40,  0, 1,"deepWH for Mjmax ,Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj,"deepWH_Mjmid"    ,selection          ,"",tag  ,40,  0, 1,"deepWH for Mjmid ,Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj,"deepWH_Mjmin"    ,selection          ,"",tag  ,40,  0, 1,"deepWH for Mjmin ,Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj,"deepW_Mjmax"    ,selection          ,"",tag  ,40,  0, 1,"deepW for Mjmax ,Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj,"deepW_Mjmid"    ,selection          ,"",tag  ,40,  0, 1,"deepW for Mjmid ,Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj,"deepW_Mjmin"    ,selection          ,"",tag  ,40,  0, 1,"deepW for Mjmin ,Nj=3"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "JetMass_Nj2_c"    ,selection          ,"",tag  ,50, 0 ,250,"Mj_c, genH_pt>800, Nj=2"                        ,"Events" ,logy,CR);             






            #self.construct_plot(Nj, "JetMass_Nj2_a"    ,selection          ,"",tag  ,50, 40 ,160,"Mj_a, Nj=2"                        ,"Events" ,logy,CR);             
            #self.construct_plot(Nj, "JetMass_Nj2_c"    ,selection          ,"",tag  ,50, 0 ,60,"Mj_c, Nj=2"                        ,"Events" ,logy,CR);             
            #self.construct_plot(Nj, "JetMass_Nj2_a"    ,selection          ,"",tag  ,50, 0 ,250,"Mj_a, Nj=2"                        ,"Events" ,logy,CR);             
            #self.construct_plot(Nj, "JetMass_Nj2_c"    ,selection          ,"",tag  ,50, 0 ,250,"Mj_c, Nj=2"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "JetMass_Nj2_a_new"    ,selection          ,"",tag  ,50, 0 ,250,"Mj_a, using new H4q tagger,Nj=2"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "JetMass_Nj2_c_new"    ,selection          ,"",tag  ,50, 0 ,250,"Mj_c, using new H4q tagger,Nj=2"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "MET_pt/Pt_Nj2_a_new"    ,selection          ,"",tag  ,50, 0 ,1,"MET/PT_Higgs, using new H4q tagger order,Nj=2"                        ,"Events" ,logy,CR);                       
            # # self.construct_plot(Nj, "MET_pt"    ,selection          ,"",tag  ,50, 0 ,800,"MET, Nj=2,deepWH_a=1"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "Pt_Nj2_a_new"    ,selection          ,"",tag  ,50,100,2200,"P_T for ja,using new H4q tagger, Nj=2"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "Pt_Nj2_c_new"    ,selection          ,"",tag  ,50, 100 ,2200,"P_T for jc,using new H4q tagger, Nj=2"                        ,"Events" ,logy,CR);             
            #self.construct_plot(Nj, "Pt_Nj2_a"    ,selection          ,"",tag  ,50,100,2200,"P_T for ja, Nj=2"                        ,"Events" ,logy,CR);             
            #self.construct_plot(Nj, "Pt_Nj2_c"    ,selection          ,"",tag  ,50, 100 ,2200,"P_T for jc, Nj=2"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "MET_pt/Pt_Nj2_a"    ,selection          ,"",tag  ,52, -0.05 ,1.05,"MET/P_T for ja, Nj=2,deepWH_a=1"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "Pt_Nj2_a"    ,selection          ,"",tag  ,50, 100 ,800,"P_T for ja, Nj=2"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "Pt_Nj2_c"    ,selection          ,"",tag  ,50, 100 ,800,"P_T for jc, Nj=2"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "MET_pt/Pt_Nj2_a"    ,selection          ,"",tag  ,52, -0.05 ,1.05,"MET/P_T for ja, Nj=2"                        ,"Events" ,logy,CR);             
            # self.construct_plot(Nj, "m_pt"    ,selection          ,"",tag  ,50, 0 ,1,"2m/p_T for ja,p_T of ja>500, Nj=2"                        ,"Events" ,logy,CR);             
            #self.construct_plot(Nj,"H_pt"     ,selection          ,"",tag  ,40, 200,2200,"PT(j-max) (GeV)"                  ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"deepWH", selection                    ,"",tag  ,40,   0,  1    ,"deep-WH_max"           ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"deepH", selection                    ,"",tag  ,40,   0,  1    ,"deep-H_max"           ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"deepW", selection                    ,"",tag  ,40,   0,  1    ,"deep-W_max"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"Tau21_Nj2_a", selection                    ,"",tag  ,50,   -0.05,  1.01    ,"Tau21_a, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"Tau21_Nj2_c", selection                    ,"",tag  ,50,   -0.05,  1.01    ,"Tau21_c, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"Tau31_Nj2_a", selection                    ,"",tag  ,50,   -0.05,  1.01    ,"Tau31_a, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"Tau31_Nj2_c", selection                    ,"",tag  ,50,   -0.05,  1.01    ,"Tau31_c, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"Tau41_Nj2_a/Tau21_Nj2_a", selection                    ,"",tag  ,50,   -0.05,  1.01    ,"Tau42_a, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"Tau41_Nj2_c/Tau21_Nj2_c", selection                    ,"",tag  ,50,   -0.05,  1.01    ,"Tau42_c, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepWH_Nj2_a", selection                    ,"",tag  ,42,   0.75,  1.05    ,"deep-WH_a, Nj=2"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepWH_Nj2_c", selection                    ,"",tag  ,42,   -0.05,  1.05    ,"deep-WH_c, Nj=2"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepWH_Nj2_a", selection                    ,"",tag  ,50,   0.99,  1.01    ,"deep-WH_a, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepWH_Nj2_c", selection                    ,"",tag  ,50,   -0.05,  1.55    ,"deep-WH_c, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepH", selection                    ,"",tag  ,40,   0,  1    ,"deep-H_max"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepWH_Nj2_a", selection ,"",tag,42,-0.05,1.05    ,"deep-WH_a, Nj=2"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepWH_Nj2_c", selection ,"",tag,42,-0.05,1.05   ,"deep-WH_c, Nj=2"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepW_Nj2_a", selection                    ,"",tag  ,50,  0.5 , 1.5    ,"deep-W_a, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepW_Nj2_c", selection                    ,"",tag  ,50,  -0.05,  1.55   ,"deep-W_c, Nj=2, deepWH_a=1"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepH_Nj2_a", selection                    ,"",tag  ,20,  -0.05 , 1.05    ,"deep-H_a, Nj=2"           ,"Events" ,logy,CR);
            # self.construct_plot(Nj,"deepH_Nj2_c", selection                    ,"",tag  ,20,  -0.05,  1.05   ,"deep-H_c, Nj=2"           ,"Events" ,logy,CR);
            self.construct_plot(Nj,"jetAK8puppi_V1_probHww4qvsQCD_a", selection                    ,"",tag  ,30,  -0.05 , 1.05    ,"Hww4qvsQCD_a , Nj=2"           ,"Events" ,logy,CR);
            self.construct_plot(Nj,"jetAK8puppi_V1_probHww4q3qvsQCD_a", selection                    ,"",tag  ,30,  -0.05 , 1.05    ,"Hww4q3qvsQCD_a , Nj=2"           ,"Events" ,logy,CR);
            self.construct_plot(Nj,"V1_evqqvsQCD_a", selection                    ,"",tag  ,30,  -0.05 , 1.05    ,"HwwevqqvsQCD_a , Nj=2"           ,"Events" ,logy,CR);
            self.construct_plot(Nj,"V1_mvqqvsQCD_a", selection                    ,"",tag  ,30,  -0.05 , 1.05    ,"HwwmvqqvsQCD_a , Nj=2"           ,"Events" ,logy,CR);
            self.construct_plot(Nj,"V1_emvqqvsQCD_a", selection                    ,"",tag  ,30,  -0.05 , 1.05    ,"HwwemvqqvsQCD_a(new combined) , Nj=2"           ,"Events" ,logy,CR);
            self.construct_plot(Nj,"V1_hadtauvqqvsQCD_a", selection                    ,"",tag  ,30,  -0.05 , 1.05    ,"HwwhadtauvqqvsQCD_a , Nj=2"           ,"Events" ,logy,CR);
            self.construct_plot(Nj,"V1_leptaumvqqvsQCD_a", selection                    ,"",tag  ,30,  -0.05 , 1.05    ,"HwwleptauevqqvsQCD_a , Nj=2"           ,"Events" ,logy,CR);
            self.construct_plot(Nj,"V1_leptauevqqvsQCD_a", selection                    ,"",tag  ,30,  -0.05 , 1.05    ,"HwwleptaumvqqvsQCD_a , Nj=2"           ,"Events" ,logy,CR);







            #self.construct_plot(Nj,deep_WH_max , selection                    ,"",tag  ,40,   0,  1    ,"deep-WH_max"           ,"Events" ,logy,CR);
            #self.construct_plot(Nj,deep_W_max  , selection                    ,"",tag  ,22, -0.05, 1.05,"deep-W_max"            ,"Events" ,logy,CR);

            #self.construct_plot(Nj,"jetAK8puppi_dnnDecorrH4q_max/(jetAK8puppi_dnnDecorrqcd_max+jetAK8puppi_dnnDecorrH4q_max)"+  , selection   ,"",tag  ,22, -0.05, 1.05,"deep-H_max"            ,"Events" ,logy,CR);

            #deep_W_tag1="( jetAK8puppi_dnn_probWcq_tag1 + jetAK8puppi_dnn_probWcq_tag2 )/( )";
            #self.construct_plot(Nj,deep_WH_tag1 , selection                    ,"",tag  ,40,   0,  1    ,"deep-WH (R)"           ,"Events" ,logy,CR);

            #self.construct_plot(Nj,deep_W_tag1  , selection                    ,"",tag  ,22, -0.05, 1.05,"deep-W (R)"            ,"Events" ,logy,CR);
            #self.construct_plot(Nj,deep_WH_tag3 , selection                    ,"",tag  ,40,   0,  1    ,"deep-WH (g)"           ,"Events" ,logy,CR);
            #self.construct_plot(Nj,deep_W_tag3  , selection                    ,"",tag  ,22, -0.05, 1.05,"deep-W (g)"            ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"!("+FLIP+")*1+("+FLIP+")*2",selection           ,"",tag  ,10,-0.5, 9.5,"BOOLEAN"  ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"MJJ"    ,selection+"&& 60<"+K+"&&"+K+"<999 && 0.7<deepW_tag1&&deepW_tag1<=0.95 "           ,"","HM"  ,27, 900,3600,"Mjj (GeV)"                        ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"MJJ"    ,selection+"&& 60<"+K+"&&"+K+"<999 && 0.95<deepW_tag1&&deepW_tag1<=1.0 "           ,"","HH"  ,27, 900,3600,"Mjj (GeV)"                        ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Nj8"    ,selection           ,"",tag  , 5, 0.5, 5.5,"Nj (Number of AK8 jets)"          ,"Events" ,logy,CR);
            #self.construct_plot(Nj,Nj4      ,selection           ,"",tag  ,10,-0.5, 9.5,"Nj-ak4 (exclusive CHS AK4 jets)"  ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"nPV"    ,selection           ,"",tag  ,65,  0,  66,"nPV"                               ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"HT"     ,selection           ,"",tag  ,25,1100,3600,"HT (GeV)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"ST"     ,selection           ,"",tag  ,25,1100,3600,"ST (GeV)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"PTj_max",selection           ,"",tag  ,40, 200,2200,"PT(j-max) (GeV)"                  ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"PTj_mid",selection           ,"",tag  ,40, 200,2200,"PT(j-mid) (GeV)"                  ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"PTj_min",selection           ,"",tag  ,40, 200,2200,"PT(j-min) (GeV)"                  ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"PTj"    ,selection           ,"",tag  ,40, 200,2200,"PT(j1) (GeV)"                     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"PTj_2"  ,selection           ,"",tag  ,40, 200,2200,"PT(j2) (GeV)"                     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"PTj_3"  ,selection           ,"",tag  ,40, 200,2200,"PT(j3) (GeV)"                     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Mj_max" ,selection           ,"",tag  ,45,  0, 450,"Mj-max (GeV)"                     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Mj_mid" ,selection           ,"",tag  ,45,   0, 450,"Mj-mid (GeV)"                     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Mj_min" ,selection           ,"",tag  ,50,   0, 250,"Mj-min (GeV) "                    ,"Events" ,logy,CR);
            #self.construct_plot(Nj,RadionMass ,selection        ,"",tag  ,45,   0, 450,"Mj_R* (GeV)"                     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Mass_tag1" ,selection        ,"",tag  ,45,   0, 450,"Mj(Radion) (GeV)"                     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Mass_tag2" ,selection        ,"",tag  ,45,   0, 450,"Mj_b (GeV)"                     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Mass_tag3" ,selection        ,"",tag  ,45,   0, 450,"Mj(gluon) (GeV) "                    ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Mj"     ,selection           ,"",tag,  45,   0, 450,"Mj1 (GeV)"                        ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Mj_2"   ,selection           ,"",tag,  45,   0, 450,"Mj2 (GeV)"                        ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Mj_3"   ,selection           ,"",tag,  45,   0, 450,"Mj3 (GeV)"                        ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"DPhi_j1j2"                              ,selection,"",tag  ,20,2.2, 3.2, "#Delta#phi_{jj}" ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"DR_j1j2"                                ,selection,"",tag  ,20,2.5, 4.5, "#DeltaR_{jj}"    ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"jetAK8puppi_dnnqcd_max"                  ,selection,"",tag ,22,-0.05, 1.05, "deep-QCD_MCo_max" ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"jetAK8puppi_dnnDecorrqcd_max"            ,selection,"",tag ,22,-0.05, 1.05, "deep-QCD_max"     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"jetAK8puppi_dnnqcd_min"                  ,selection,"",tag ,22,-0.05, 1.05, "deep-QCD_MCo_min" ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"jetAK8puppi_dnnDecorrqcd_min"            ,selection,"",tag ,22,-0.05, 1.05, "deep-QCD_min"     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"jetAK8puppi_dnnDecorrh4q_tag1**0.25"     ,selection,"",tag ,22,-0.05, 1.05, "deep-H4q_R^0.25"     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"jetAK8puppi_dnnDecorrh4q_tag3**0.25"     ,selection,"",tag ,22,-0.05, 1.05, "deep-H4q_g^0.25"     ,"Events" ,logy,CR);
            # N/A self.construct_plot(Nj,"jetAK8puppi_dnnH4q_tag1"                ,selection,"",tag ,22,-0.05, 1.05, "deep-H4q_Co_R"  ,"Events" ,logy,CR);
            # N/A self.construct_plot(Nj,"jetAK8puppi_dnnH4q_tag3"                ,selection,"",tag ,22,-0.05, 1.05, "deep-H4q_Co_g"     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"deepW_tag1"                             ,selection,"",tag ,22,-0.05, 1.05, "deep-W_R"        ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"deepW_tag3"                             ,selection,"",tag ,22,-0.05, 1.05, "deep-W_g"        ,"Events" ,logy,CR);
            #self.construct_plot(Nj,deep_WH_max,selection                    ,"",tag  ,40,   0,  1,"deep-WH_max"                ,"Events" ,logy,CR);
            #self.construct_plot(Nj,deep_W_max,selection                     ,"",tag  ,22,   -0.05,  1.05,"deep-W_max"            ,"Events" ,logy,CR);
            #self.construct_plot(Nj,deep_W_mid,selection                    ,"",tag  ,40,   0,  1,"deep-W_mid"                    ,"Events" ,logy,CR);
            #self.construct_plot(Nj,deep_W_min,selection                     ,"",tag  ,22,   -0.05,  1.05,"deep-W_min"             ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"jetAK8puppi_dnnDecorrTop_max"           ,selection,"",tag ,44,-0.05, 1.05, "deep-t_max"        ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"jetAK8puppi_dnnTop_max"                 ,selection,"",tag ,44,-0.05, 1.05, "deep-t_MCo_max"    ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"deepW_tag1-deepW_tag3"                  ,selection,"",tag ,10,0., 1.0, "deepW_R-deepW_g"  ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"deepW_tag3/deepW_tag1"                  ,selection,"",tag ,10,0, 1.0, "deepW_R/deepW_g"  ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"(Pt_tag3-Pt_tag1)/MET_et"               ,selection,"",tag ,20,  -4, 4, "PTI/MET (GeV)"        , "Events" ,logy,CR);
            #self.construct_plot(Nj,"MET_et"                                 ,selection,"",tag ,25, 0,500, "MET (GeV)"             , "Events" ,logy,CR);
            #self.construct_plot(Nj,"MET_et/Pt_tag1"                         ,selection,"",tag ,20,  0, 0.5, "MET/PT_R"            , "Events" ,logy,CR);
            #self.construct_plot(Nj,"MET_et/(Pt_tag1**0.5)"                  ,selection,"",tag ,40,0,  20, "MET/PT_R^0.5"        , "Events" ,logy,CR);
            #self.construct_plot(Nj,"Pt_tag3-Pt_tag1"                        ,selection,"",tag ,35, -350,350, "PT_g-PT_R"           , "Events" ,logy,CR);
            #self.construct_plot(Nj,"Pt_tag3-Pt_tag1-MET_et"                 ,selection,"",tag ,35, -350,350, "PTI==PT_g-PT_R-MET"  , "Events" ,logy,CR);
            #self.construct_plot(Nj,"Pt_tag3-Pt_tag1+MET_et"                 ,selection,"",tag ,35, -350,350, "PT_g-PT_R+MET"       , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(Pt_tag3-Pt_tag1)/Pt_tag1"              ,selection,"",tag ,20,-.2, 0.8, "(PT_g-PT_R)/PT_R"    , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(Pt_tag3-Pt_tag1)/(Pt_tag1**0.5)"       ,selection,"",tag ,50,-9,  41, "(PT_g-PT_R)/PT_R^0.5", "Events" ,logy,CR);
            #self.construct_plot(Nj,"PTj-PTj_2"                              ,selection,"",tag ,20,  0, 500, "PTj1-PTj2"           , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(PTj-PTj_2)/Pt_tag1"                    ,selection,"",tag ,20,  0,   1, "(PTj1-PTj2)/PT_R"    , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(PTj-PTj_2)/(Pt_tag1**0.5)"             ,selection,"",tag ,20,  0,  20, "(PTj1-PTj2)/PT_R^0.5", "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et+Pt_tag3-Pt_tag1)/2"             ,selection,"",tag ,50, -100, 400, "(MET+PT_g-PT_R)/2"    , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et**2+(Pt_tag3-Pt_tag1)**2)**0.5/2**0.5",selection,"",tag,40,0, 400, "(MET^2+#DeltaPT^2)^0.5/2^0.5", "Events" ,logy,CR);
            #self.construct_plot(Nj,"MET_et/Pt_tag1"                         ,selection,"",tag ,25,    0, 0.5, "MET/PT_R"              , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(Pt_tag3-Pt_tag1)/Pt_tag1"              ,selection,"",tag ,40, -0.4, 0.6, "(PT_g-PT_R)/PT_R"      , "Events" ,logy,CR);
            #self.construct_plot(Nj,"Pt_tag3/Pt_tag1"                        ,selection,"",tag ,20, 0.5, 1.5, "PT_g/PT_R"            , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et+Pt_tag3-Pt_tag1)/Pt_tag1"       ,selection,"",tag ,35,-0.25, 1.5, "(MET+#DeltaPT)/PT_R"  , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et+Pt_tag3-Pt_tag1)/ST"            ,selection,"",tag ,35,-0.1, 0.6, "(MET+#DeltaPT)/ST"    , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et+Pt_tag3-Pt_tag1)/(ST**0.5)"     ,selection,"",tag ,25, -5, 20, "(MET+#DeltaPT)/ST^0.5"  , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et+Pt_tag3-Pt_tag1)/(Pt_tag1**0.5)",selection,"",tag ,40,-10, 30, "(MET+#DeltaPT)/PT_R^0.5", "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et+Pt_tag3)/Pt_tag1"               ,selection,"",tag ,25,  1,2.5,"(MET+PT_g)/PT_R"       , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et+Pt_tag3)/(Pt_tag1**0.5)"        ,selection,"",tag ,30, 25, 55, "(MET+PT_g)/PT_R^0.5"   , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et+PTj)/(PTj_2**0.5)"              ,selection,"",tag ,30, 25, 55, "(MET+PTj1)/PTj2^0.5"    , "Events" ,logy,CR);
            #self.construct_plot(Nj,"(MET_et+PTj+fabs(Mass_tag1-Mass_tag3-70))/(PTj_2**0.5)",selection,"",tag ,40,  30,70, "K == (MET+PTj1+#DeltaM*)/PTj2^0.5"    , "Events" ,logy,CR);
            #self.construct_plot(Nj,"Mass_tag1-Mass_tag3"                    ,selection,"",tag ,30,-300,300, "Mj_R-Mj_g"             , "Events" ,logy,CR);
            #self.construct_plot(Nj,"Mj_max-Mj_min"                          ,selection           ,"",tag  ,45,  0, 450,"Mjmax-Mjmin (GeV)"                     ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"(Mass_tag1-Mass_tag3)/Mass_tag1"        ,selection,"",tag ,40,-2 , 2, "MR-Mg/MR"       , "Events" ,logy,CR);
            #self.construct_plot(Nj,"fabs(Mass_tag1-Mass_tag3-80)"           ,selection,"",tag ,30,0,300, " #DeltaM* == |Mj_R-Mj_g-m*|"       , "Events" ,logy,CR);
            #self.construct_plot(Nj,"tau21_max"                              ,selection,"",tag  ,40,  0,   1, "tau21_max"       ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"tau21_min"                              ,selection,"",tag  ,40,  0,   1, "tau21_min"       ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"tau31_max"                              ,selection,"",tag  ,40,  0,   1, "tau31_max"       ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"tau31_min"                              ,selection,"",tag  ,40,  0,   1, "tau31_min"       ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"tau41_max"                              ,selection,"",tag  ,40,  0,  1, "tau41_max"       ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"tau41_min"                              ,selection,"",tag  ,40,  0,   1, "tau41_min"       ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"MJJJ"   ,selection           ,"",tag  ,62, 900,4000,"Mjjj (GeV)"                       ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"MET_phi"  ,selection         ,"",tag  ,32,-3.2,3.2,"#phi(MET)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Etaj"     ,selection         ,"",tag  ,52,-2.6,2.6, "#eta(j1)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Etaj_2"   ,selection         ,"",tag  ,52,-2.6,2.6, "#eta(j2)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Etaj"     ,selection         ,"",tag  ,52,-2.6,2.6, "#eta(j1)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Etaj_2"   ,selection         ,"",tag  ,52,-2.6,2.6, "#eta(j2)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Etaj_3"   ,selection         ,"",tag  ,52,-2.6,2.6, "#eta(j3)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Phij"     ,selection         ,"",tag  ,32,-3.2,3.2, "#phi(j1)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Phij_2"   ,selection         ,"",tag  ,34,-3.4,3.4, "#phi(j2)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Phij"     ,selection         ,"",tag  ,34,-3.4,3.4, "#phi(j1)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Phij_2"   ,selection         ,"",tag  ,34,-3.4,3.4, "#phi(j2)"                         ,"Events" ,logy,CR);
            #self.construct_plot(Nj,"Phij_3"   ,selection         ,"",tag  ,34,-3.4,3.4, "#phi(j3)"                         ,"Events" ,logy,CR);


        if MODE=="COMP": 
            self.construct_plot(Nj,"Mj_max"           ,selection_SR,selection_CR,tag,24, 0, 120,"Mjmax (GeV)" ,"Events",0 );


    def construct_plot(self,Nj,variable,cut,cut1,tag,nbin,min,max,xtitle="",ytitle="",logy=1,CR=0):
        
        SFs=options.SFs; channel=options.channel; MODE=options.MODE;  REGION=options.REGION; 
        print " -->  MODE:",MODE," variable:",variable,"\n       { "+cut+" }\n";

        #----------------- paths to root files -------------------
        #if options.y=="16"      :path="/eos/cms/store/user/.........;  lumi=36.3;
        #if options.y=="17"      :path="/eos/user/y/yusong/qilong/NTuple_Output/17/all/Tree/mu";  lumi= 41.5;
        if options.y=="18"      :path="/eos/user/y/yuzhe/HWW/frame/Custom/Tree/newTree/";  lumi=59.81;
        #if options.y=="16,17,18":path="/eos/cms/store/user/.........;  lumi=138;

        #====== DEFINE CANVAS ==========================
        if MODE in ["MC","MCvsDATA","COMP"]:
            canvas_controlplot = TCanvas(REGION+"_"+variable, REGION+"_"+variable, 700,700);
            fPads1 = TPad("pad1", "", 0.0, 0.29, 1.00, 1.00);
            fPads2 = TPad("pad2", "", 0.0, 0.00, 1.00, 0.29);
            fPads1.SetBottomMargin(0.007);fPads1.SetLeftMargin( 0.10);fPads1.SetRightMargin( 0.03);
            fPads2.SetLeftMargin(  0.10 );fPads2.SetRightMargin(0.03);fPads2.SetBottomMargin(0.25);
            fPads1.Draw(); fPads2.Draw(); fPads1.cd();
        if MODE in ["DECO"]:
            canvas_controlplot = TCanvas(REGION+"_"+variable, REGION+"_"+variable, 700,565);
            canvas_controlplot.SetLeftMargin(0.1); canvas_controlplot.SetRightMargin(0.03);  


        #====================== DEFINE TREES AND HISTOS ======================================
        if MODE in ["MCvsDATA"]:
            t_data  = TChain("PKUTree");t_data.Add(path+"JetHT_Nj2/18.root");
        h_data    = TH1D("h_data"  ,"h_DATA"  +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_data.Sumw2();  c_data=h_data.Clone("c_data");
        # t_Signal1 = TChain("NewTree");  t_Signal1.Add(path+ "NewTagger_Nj2_2q.root");  h_Signal1=TH1D("h_Signal1","h_Signal1"+";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_Signal1.Sumw2();
        t_Signal1 = TChain("PKUTree");  t_Signal1.Add(path+ "Signal/HWWTree_2q.root");  h_Signal1=TH1D("h_Signal1","h_Signal1"+";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_Signal1.Sumw2();

        # t_Signal1 = TChain("NewTree");  t_Signal1.Add(path+"Signal/HWW2q_PS.root");  h_Signal1=TH1D("h_Signal1","h_Signal1"+";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_Signal1.Sumw2();
        t_Signal2 = TChain("PKUTree"); t_Signal2.Add(path + "Signal/HWWTree_4q.root"); h_Signal2 = TH1D("h_Signal2", "h_Signal2" + ";%s;%s" % (xtitle, ytitle), nbin, min, max); h_Signal2.Sumw2();
        #t_Signal3 = TChain("PKUTree");  t_Signal3.Add(path+"_out_M2000-R0-5.root" );h_Signal3=TH1D("h_Signal3","h_Signal3"+";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_Signal3.Sumw2();
        #t_Signal4 = TChain("PKUTree");  t_Signal4.Add(path+"_out_M3500-R0-06.root");h_Signal4=TH1D("h_Signal4","h_Signal4"+";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_Signal4.Sumw2();
        t_QCD     = TChain("PKUTree");  t_QCD.Add(    path+"BKG/QCD.root"  );  h_QCD    =TH1D("h_QCD"    ,"h_QCD"    +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_QCD.Sumw2();   
        t_TTbar   = TChain("PKUTree");  t_TTbar.Add(  path+"BKG/TT.root"   );  h_TTbar  =TH1D("h_TTbar"  ,"h_TTbar"  +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_TTbar.Sumw2(); 
        t_STop    = TChain("PKUTree");  t_STop.Add(   path+"BKG/ST.root"   );  h_STop   =TH1D("h_STop"   ,"h_STop"   +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_STop.Sumw2();  
        t_WJets   = TChain("PKUTree");  t_WJets.Add(  path+"BKG/WJ.root");  h_WJets  =TH1D("h_WJets"  ,"h_WJets"  +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_WJets.Sumw2(); 
        t_Rest    = TChain("PKUTree");  t_Rest.Add(   path+"BKG/Rest.root" );  h_Rest   =TH1D("h_Rest"   ,"h_Rest"   +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_Rest.Sumw2();   

        if MODE in ["DECO"]:
            for c in ["H4q","H3q","H2q","W","Hlqq","Hlq","g",   "Rest"]:
                exec('h_Signal1_%s = TH1D("h_Signal1_%s","h_Signal1_%s"'%(c,c,c)+'";%s;%s"'%(xtitle,ytitle)+',nbin,min,max); h_Signal1_%s.Sumw2();'%(c));


        if MODE in ["COMP"]:
            h_DMR      =TH1D("h_DMR"    ,"h_DMR"    +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_DMR.Sumw2();         print "1.5";   
            h_QCD_S    =TH1D("h_QCD_S"  ,"h_QCD_S"  +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_QCD_S.Sumw2();
            h_TTbar_S  =TH1D("h_TTbar_S","h_TTbar_S"+";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_TTbar_S.Sumw2();
            h_STop_S   =TH1D("h_STop_S" ,"h_STop_S" +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_STop_S.Sumw2();
            h_T_S      =TH1D("h_T_S"    ,"h_T_S"    +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_T_S.Sumw2();
            h_T        =TH1D("h_T"      ,"h_T"      +";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_T.Sumw2();           #h_VV.Add(h_ZJets);
            h_TotalMC  =TH1D("h_TotalMC","h_TotalMC"+";%s;%s"%(xtitle,ytitle),nbin,min,max);  h_TotalMC.Sumw2();
            c_data=h_data.Clone("c_data");  c_Signal1=h_Signal1.Clone("c_Signal1");  c_Signal2=h_Signal2.Clone("c_Signal2");  #c_Signal3=h_Signal3.Clone("c_Signal3");  c_Signal4=h_Signal4.Clone("c_Signal4");
            c_QCD=h_QCD.Clone("c_QCD");  c_WJets=h_WJets.Clone("c_WJets");  c_TTbar=h_TTbar.Clone("c_TTbar");  c_STop=h_STop.Clone("c_STop");  c_Rest=h_Rest.Clone("c_Rest"); c_TotalMC=h_TotalMC.Clone("c_TotalMC");

        hstack_TotalMC= THStack("hstack_TotalMC","hstack_TotalMC"+";%s;%s"%(xtitle,ytitle));                


        #=================== SET WEIGHTS, SCALE TREES, DEFINE TOTAL AND STACK  =================================================
        weight="weight";
        if SFs==1: weight="weight_center";

        for region in ["h_"]:
            if MODE=="DECO":self.Signal_Scale1=1;
            for sample in ["data","Signal1","Signal2","QCD","TTbar","STop","WJets","Rest"]:
                if MODE in ["MCvsDATA"]:
                    if sample in ["data"]                         : eval("t_"+sample).Draw("(%s) >> %s%s"%(variable,region,sample),                                       cut  );   # No weights on data
                #if sample in ["Signal1","Signal2"]                : eval("t_"+sample).Draw("(%s) >> %s%s"%(variable,region,sample), "(%s*%s)*(%s)"%(weight,self.Signal_Scale,cut) );   # Extra scaling on signal
                eval(                                                    "t_Signal1").Draw("(%s) >> %s%s"%(variable,region,"Signal1"), "(%s*%s)*(%s)"%(weight,self.Signal_Scale1,cut) );   # Extra scaling on signal
                eval(                                                    "t_Signal2").Draw("(%s) >> %s%s"%(variable,region,"Signal2"), "(%s*%s)*(%s)"%(weight,self.Signal_Scale2,cut) );   # Extra scaling on signal
                if sample in ["QCD","TTbar","STop","WJets","Rest"]: eval("t_"+sample).Draw("(%s) >> %s%s"%(variable,region,sample), "(%s*%s)*(%s)"%(weight,1             ,cut) );   # MC only weights on MC BKG
        #    if MODE=="COMP":
        #        eval("t_QCD").Draw("(%s) >> %s%s"%(variable,region,"QCD_S"), "(%s*%s)*(%s)"%(weight,1  ,cut1) );
        print "2"; 

        if MODE in ["DECO"]:            #comp = ["R4q","R3q","R2q","W","Rlqq","Rlq","Rest"];
            self.Signal_Scale1=1;
            # R4q =" && (( R4q_max  ==1 && Wa_MO_AK8==1) || ( R4q_min ==1 && Wa_MO_AK8==3) )";
            # R3q =" && (( R3q_max  ==1 && Wa_MO_AK8==1) || ( R3q_min ==1 && Wa_MO_AK8==3) )";
            # R2q =" && (( R2q_max  ==1 && Wa_MO_AK8==1) || ( R2q_min ==1 && Wa_MO_AK8==3) )";
            # W   =" && (( w_max    ==1 && Wa_MO_AK8==1) || (   w_min ==1 && Wa_MO_AK8==3) )";
            # Rlqq=" && (( Rlqq_max ==1 && Wa_MO_AK8==1) || (Rlqq_min ==1 && Wa_MO_AK8==3) )";
            # Rlq =" && (( Rlq_max  ==1 && Wa_MO_AK8==1) || ( Rlq_min ==1 && Wa_MO_AK8==3) )";
            # g   =" && (( gKK_g_max==1 && Wa_MO_AK8==1) || (gKK_g_min==1 && Wa_MO_AK8==3) )";
            # Rest=" && (( u_max    ==1 && Wa_MO_AK8==1) || (   u_min ==1 && Wa_MO_AK8==3) )";
            H4q =" &&  (AK8_Mode_Nj2_a_new==4)";
            H3q =" && (AK8_Mode_Nj2_a_new==5)";
            H2q =" && (AK8_Mode_Nj2_a_new==6)";
            W   =" && (AK8_Mode_Nj2_a_new==7)";
            Hlqq =" && (AK8_Mode_Nj2_a_new==8)";
            Hlq =" && (AK8_Mode_Nj2_a_new==9)";
            g   =" && (AK8_Mode_Nj2_a_new==3)";
            Rest=" && (AK8_Mode_Nj2_a_new==-99)";
            eval("t_Signal1").Draw("(%s) >> %s"%(variable,"h_Signal1_H4q") ,"(%s*%s)*(%s)"%(weight,self.Signal_Scale1,cut+H4q ) );
            eval("t_Signal1").Draw("(%s) >> %s"%(variable,"h_Signal1_H3q") ,"(%s*%s)*(%s)"%(weight,self.Signal_Scale1,cut+H3q ) );
            eval("t_Signal1").Draw("(%s) >> %s"%(variable,"h_Signal1_H2q") ,"(%s*%s)*(%s)"%(weight,self.Signal_Scale1,cut+H2q ) );
            eval("t_Signal1").Draw("(%s) >> %s"%(variable,"h_Signal1_W")   ,"(%s*%s)*(%s)"%(weight,self.Signal_Scale1,cut+W   ) );
            eval("t_Signal1").Draw("(%s) >> %s"%(variable,"h_Signal1_Hlqq"),"(%s*%s)*(%s)"%(weight,self.Signal_Scale1,cut+Hlqq) );
            eval("t_Signal1").Draw("(%s) >> %s"%(variable,"h_Signal1_Hlq" ),"(%s*%s)*(%s)"%(weight,self.Signal_Scale1,cut+Hlq ) );
            eval("t_Signal1").Draw("(%s) >> %s"%(variable,"h_Signal1_g")   ,"(%s*%s)*(%s)"%(weight,self.Signal_Scale1,cut+g   ) );
            eval("t_Signal1").Draw("(%s) >> %s"%(variable,"h_Signal1_Rest"),"(%s*%s)*(%s)"%(weight,self.Signal_Scale1,cut+Rest) );
            h_TotalS1=TH1D("h_TotalS1","h_TotalS1"+";%s;%s"%(xtitle,ytitle),nbin,min,max); h_TotalS1.Sumw2();
            for h in [           h_Signal1_H4q, h_Signal1_H3q, h_Signal1_H2q, h_Signal1_W, h_Signal1_Hlqq, h_Signal1_Hlq, h_Signal1_g,   h_Signal1_Rest]: h_TotalS1.Add(h);
            for h in [h_TotalS1, h_Signal1_H4q, h_Signal1_H3q, h_Signal1_H2q, h_Signal1_W, h_Signal1_Hlqq, h_Signal1_Hlq, h_Signal1_g,   h_Signal1_Rest]: h=UnderOverFlow1D(h);


        hstack_TotalMC.Add(h_Rest);hstack_TotalMC.Add(h_WJets);hstack_TotalMC.Add(h_STop);hstack_TotalMC.Add(h_TTbar);hstack_TotalMC.Add(h_QCD);
        h_TotalMC = TH1D("h_TotalMC","h_TotalMC"+";%s;%s"%(xtitle,ytitle),nbin,min,max); h_TotalMC.Sumw2(); h_TotalMC.Add(h_QCD);  h_TotalMC.Add(h_TTbar); h_TotalMC.Add(h_STop); h_TotalMC.Add(h_WJets);h_TotalMC.Add(h_Rest);
        h_data.SetBinErrorOption(TH1D.kPoisson);

        for h in [h_data,h_Signal1,h_Signal2,h_QCD,h_TotalMC ]:h=UnderOverFlow1D(h);

        print "3";

        if MODE=="COMP":
            c_TotalMC = TH1D("c_TotalMC","c_TotalMC"+";%s;%s"%(xtitle,ytitle),nbin,min,max);c_TotalMC.Sumw2(); c_TotalMC.Add(c_QCD);c_TotalMC.Add(c_WJets);c_TotalMC.Add(c_TTbar);c_TotalMC.Add(c_STop);c_TotalMC.Add(c_Rest);#c_TotalMC.Add(c_VV);c_TotalMC.Add(c_ZJets);
            c_REST    = TH1D("c_REST","c_REST"+";%s;%s"%(xtitle,ytitle),nbin,min,max);c_REST.Sumw2(); c_REST.Add(c_WJets);c_REST.Add(c_TTbar);c_REST.Add(c_STop);c_REST.Add(c_Rest); #c_Rest.Add(c_VV);c_Rest.Add(c_ZJets);
            c_data.SetBinErrorOption(TH1D.kPoisson);
            for h in [ c_data,c_Signal1,c_Signal2,c_QCD,c_WJets,c_TTbar,c_STop,c_TotalMC, c_Rest ]:h=UnderOverFlow1D(h);   # UNDEROVERFLOWS for All histos used after reweighting
            #h_TotalMC.Scale(norm); h_QCD.Scale(norm);  h_WJets.Scale(norm);  h_TTbar.Scale(norm);  h_STop.Scale(norm);  h_Rest.Scale(norm);

        if options.FBT:  # Transformes the spectra in such a way where BKG is flat!
            for h in [h_data,h_Signal1,h_Signal2,h_QCD,h_WJets,h_TTbar,h_STop,h_Rest,h_TotalMC ]: h=FBT_(h_TotalMC, h);

        norm=h_data.Integral()/(h_TotalMC.Integral()+0.00001); 
        print "  norm=",norm;

        if MODE=="COMP":
            h_DMR=h_data.Clone("h_data");
            for h in [h_DMR,h_QCD_S,h_data,h_Signal1,h_Signal2,h_QCD,h_WJets,h_TTbar,h_STop,h_Rest,h_TotalMC]:h=UnderOverFlow1D(h);   # UNDEROVERFLOWS for All histos used after reweighting
            h_DMR.Add(h_WJets,-1);h_DMR.Add(h_TTbar,-1);h_DMR.Add(h_Rest,-1);h_DMR.Add(h_STop,-1);
            Norm =h_QCD_S.Integral()/h_QCD.Integral();print "Norm=",Norm;
            Norm2=h_QCD_S.Integral()/h_DMR.Integral();print "Norm2=",Norm2;
            NORM =h_DMR.Integral()/h_QCD.Integral();  print "NORM=",NORM;
            h_QCD.Scale(Norm*NORM);
            h_DMR.Scale(Norm2*NORM);
            h_DMR.SetLineColor(1);   h_DMR.SetFillStyle(0); h_DMR.SetLineWidth(3); h_DMR.SetLineStyle(0);
            h_QCD_S.SetLineColor(2);   h_QCD_S.SetFillStyle(0); h_QCD_S.SetLineWidth(3); h_QCD_S.SetLineStyle(0);
            h_QCD.SetLineColor(kBlue);   h_QCD.SetFillStyle(0); h_QCD.SetLineWidth(3); h_QCD.SetLineStyle(0);

        if MODE in ["MC","MCvsDATA"]: #---------- histogram cosmetics ---------------------
            print "4"; 
            h_data.SetLineColor(self.color_palet["data"]); h_data.SetFillColor(self.color_palet["data"]);
            h_Signal1.SetLineColor(4);       h_Signal1.SetFillStyle(0); h_Signal1.SetLineWidth(3); h_Signal1.SetLineStyle(7);
            h_Signal2.SetLineColor(kGreen+2);h_Signal2.SetFillStyle(0); h_Signal2.SetLineWidth(3); h_Signal2.SetLineStyle(7);
            #h_Signal3.SetLineColor(1);       h_Signal3.SetFillStyle(0); h_Signal3.SetLineWidth(3); h_Signal3.SetLineStyle(7);
            #h_Signal4.SetLineColor(93);      h_Signal4.SetFillStyle(0); h_Signal4.SetLineWidth(3); h_Signal4.SetLineStyle(7);
            h_QCD.SetLineColor(0);     h_QCD.SetFillColor(  self.color_palet["QCD"]  ); h_QCD.SetLineWidth(0);
            h_TTbar.SetLineColor(0);   h_TTbar.SetFillColor(self.color_palet["TTbar"]); h_TTbar.SetLineWidth(0);
            h_STop.SetLineColor(0);    h_STop.SetFillColor( self.color_palet["STop"] ); h_STop.SetLineWidth(0);
            h_WJets.SetLineColor(0);   h_WJets.SetFillColor(self.color_palet["WJets"]); h_WJets.SetLineWidth(0);
            h_Rest.SetLineColor(0);    h_Rest.SetFillColor( self.color_palet["Rest"]);  h_Rest.SetLineWidth(0);
            h_TotalMC.SetLineStyle(3); h_TotalMC.SetMarkerStyle(0); h_TotalMC.SetLineWidth(5); h_TotalMC.SetLineColor(15);
        if MODE in ["DECO"]:
            h_TotalMC.SetLineStyle(1);      h_TotalMC.SetMarkerStyle(0);   h_TotalMC.SetLineWidth(3);     h_TotalMC.SetLineColor(1);
            h_Signal1.SetLineColor(1);      h_Signal1.SetFillStyle(0);     h_Signal1.SetLineWidth(3);     h_Signal1.SetLineStyle(7);
            h_TotalS1.SetLineColor(1);      h_TotalS1.SetFillStyle(0);     h_TotalS1.SetLineWidth(3);     h_TotalS1.SetLineStyle(3);
            h_Signal1_H4q.SetLineColor(8);  h_Signal1_H4q.SetFillStyle(0); h_Signal1_H4q.SetLineWidth(3); h_Signal1_H4q.SetLineStyle(7);
            h_Signal1_H3q.SetLineColor(92); h_Signal1_H3q.SetFillStyle(0); h_Signal1_H3q.SetLineWidth(3); h_Signal1_H3q.SetLineStyle(7);
            h_Signal1_H2q.SetLineColor(46); h_Signal1_H2q.SetFillStyle(0); h_Signal1_H2q.SetLineWidth(3); h_Signal1_H2q.SetLineStyle(7);
            h_Signal1_W.SetLineColor(4);    h_Signal1_W.SetFillStyle(0);   h_Signal1_W.SetLineWidth(3);   h_Signal1_W.SetLineStyle(7);
            h_Signal1_Hlqq.SetLineColor(65);h_Signal1_Hlqq.SetFillStyle(0);h_Signal1_Hlqq.SetLineWidth(3);h_Signal1_Hlqq.SetLineStyle(7);
            h_Signal1_Hlq.SetLineColor(15); h_Signal1_Hlq.SetFillStyle(0); h_Signal1_Hlq.SetLineWidth(3); h_Signal1_Hlq.SetLineStyle(7);
            h_Signal1_g.SetLineColor(2);    h_Signal1_g.SetFillStyle(0);   h_Signal1_g.SetLineWidth(3);   h_Signal1_g.SetLineStyle(7);
            h_Signal1_Rest.SetLineColor(18);h_Signal1_Rest.SetFillStyle(0);h_Signal1_Rest.SetLineWidth(3);h_Signal1_Rest.SetLineStyle(7);


        if MODE in ["COMP"]:
            h_Signal1.SetLineColor(1); 
    

        #============ DRAW TOP PAD =====================
        if MODE in ["MC"]:
            print "5"; 
            h_TotalMC.Draw("e"); h_TotalMC.GetXaxis().SetNdivisions(509);
            hstack_TotalMC.Draw("same HIST"); # For unc-bars
            h_TotalMC.Draw("same e"   ); print "last bin",h_TotalMC.GetBinContent(27);
            h_Signal1.Draw("same HIST");
            h_Signal2.Draw("same HIST");
            #h_Signal3.Draw("same HIST");
            #h_Signal4.Draw("same HIST");
            #canvas_controlplot.Update(); 

        if MODE in ["MCvsDATA"]:
            h_TotalMC.Draw("e"); h_TotalMC.GetXaxis().SetNdivisions(509);   
            h_data.Draw("e same"); h_data.GetXaxis().SetNdivisions(509);
            hstack_TotalMC.Draw("same HIST"); # For unc-bars
            h_data.Draw("same e");  #!needed 2nd time to draw data
            h_TotalMC.Draw("same e"   );
            h_Signal1.Draw("same HIST");
            h_Signal2.Draw("same HIST");
            #h_Signal3.Draw("same HIST");
            #h_Signal4.Draw("same HIST");
            canvas_controlplot.Update(); 

        if MODE in ["COMP"]:
            h_QCD_S.Scale(NORM);
            h_QCD_S.SetMarkerStyle(0); h_QCD_S.SetMarkerSize(0);
            h_QCD_S.Draw("HIST,e");
            h_QCD.Draw("same HIST,e");
            h_DMR.Draw("same HIST,e");

        if MODE in ["DECO"]:
            h_Signal1.Scale( 1/self.Signal_Scale1);
            h_TotalMC.Scale( h_Signal1.Integral()/(h_TotalMC.Integral() +0.001));
            if logy==0:h_Signal1.GetYaxis().SetRangeUser(0  ,1.3*h_Signal1.GetMaximum());
            if logy==1:h_Signal1.GetYaxis().SetRangeUser(0.1, 30*h_Signal1.GetMaximum());
            h_Signal1.Draw("HIST");
            #h_TotalMC.Draw("same HIST");
            h_TotalS1.Draw("same HIST");
            h_Signal1_H4q.Draw("same HIST");
            h_Signal1_H3q.Draw("same HIST");
            h_Signal1_H2q.Draw("same HIST");
            h_Signal1_W.Draw("same HIST");
            h_Signal1_Hlqq.Draw("same HIST");
            h_Signal1_Hlq.Draw("same HIST");
            h_Signal1_Rest.Draw("same HIST");
            h_Signal1_g.Draw("same HIST");
            if logy==1:canvas_controlplot.SetLogy();
            canvas_controlplot.Update(); 

        if logy and MODE!="DECO":
            fPads1.SetLogy();
            fPads1.Update();
            canvas_controlplot.Update(); 
            #if MODE =="MC":
            #    fPads2.SetLogy();
            #    fPads2.Update();
            #    canvas_controlplot.Update(); 


        #---------------- Add text in top pad -----------------------
        banner          = TLatex(0.96,0.96,str(lumi)+" fb^{-1} (13 TeV)");   banner.SetNDC();   banner.SetTextSize(0.034);     banner.SetTextFont(42);    banner.SetTextAlign(31);    banner.SetLineWidth(2);    banner.Draw();
        CMS             = TLatex(0.22,0.96,"CMS"                        );      CMS.SetNDC();      CMS.SetTextSize(0.042);        CMS.SetTextFont(42);       CMS.SetTextAlign(31);       CMS.SetLineWidth(2);       CMS.Draw();
        if MODE=="MCvsData":
            Extratext   = TLatex(0.24,0.96,"Preliminary"                );Extratext.SetNDC();Extratext.SetTextSize(0.034);  Extratext.SetTextFont(52); Extratext.SetTextAlign(11); Extratext.SetLineWidth(2); Extratext.Draw();
        if MODE=="DECO" or MODE=="MC":
            Extratext   = TLatex(0.24,0.96,"Simulation"                 );Extratext.SetNDC();Extratext.SetTextSize(0.034);  Extratext.SetTextFont(52); Extratext.SetTextAlign(11); Extratext.SetLineWidth(2); Extratext.Draw();
        RegionTxt       = TLatex(0.15,0.88,"%s"%(REGION)                );RegionTxt.SetNDC();RegionTxt.SetTextSize(0.042);  RegionTxt.SetTextFont(42);    RegionTxt.SetLineWidth(2); RegionTxt.Draw();
        if MODE in ["MCvsDATA"]:
            D_o_MC_txt  = TLatex(0.15,0.83,"Data / MC = %.2f"%(norm)    );D_o_MC_txt.SetNDC();D_o_MC_txt.SetTextSize(0.042);D_o_MC_txt.SetTextFont(42);   D_o_MC_txt.SetLineWidth(2);D_o_MC_txt.Draw();
        if SFs :
            SFsCorr     = TLatex(0.55, 0.96, "SFs corrected"            );   SFsCorr.SetNDC();   SFsCorr.SetTextSize(0.034);   SFsCorr.SetTextFont(52);   SFsCorr.SetTextAlign(11);   SFsCorr.SetLineWidth(2);   SFsCorr.Draw();
        #canvas_controlplot.Update(); 


        #========== DRAW BOTTOM PAD ============================================
        if MODE in ["MCvsDATA"]: #--------- Data / MC on 2nd pad ---------------------
            fPads2.cd(); 
            h_Ratio = h_data.Clone("h_Ratio"); h_Ratio.Divide( h_TotalMC ); MaxY=2; #TMath.Max( 2,  TMath.Min(3,h_Ratio.GetMaximum()*1.1) );
            h_Ratio.SetLineColor(1); h_Ratio.SetLineWidth(2); h_Ratio.SetMarkerStyle(8); h_Ratio.SetMarkerSize(0.7); h_Ratio.GetYaxis().SetRangeUser( 0 , MaxY );  h_Ratio.GetYaxis().SetNdivisions(504,0);
            h_Ratio.GetYaxis().SetTitle("Data / MC  ");  h_Ratio.GetYaxis().SetTitleOffset(0.35);  h_Ratio.GetYaxis().SetTitleSize(0.13);  h_Ratio.GetYaxis().SetTitleSize(0.13);  h_Ratio.GetYaxis().SetLabelSize(0.11); h_Ratio.GetXaxis().SetLabelSize(0.1); h_Ratio.GetXaxis().SetTitleOffset(0.7); h_Ratio.GetXaxis().SetTitleSize(0.14); 
            axis1=TGaxis( min,1,max,1, 0,0,0, "L"); axis1.SetLineColor(1); axis1.SetLineWidth(1);  #axis1->SetLabelColor(16); #fPads2.SetGridx(); #fPads2.SetGridy();
            h_Ratio=RationUnc(h_data,h_TotalMC,h_Ratio,MaxY);
            h_Ratio.Draw("e0"); axis1.Draw();
            fPads2.RedrawAxis(); fPads2.Update();
            fPads1.RedrawAxis(); fPads1.Update();

        if MODE in ["MC"]:  #--------- Significances on 2nd pad ---------------------
            fPads2.cd();  fPads2.SetLogy(); MaxY=7;
            axis2=TGaxis( min,2,max,2, 0,0,0, "L"); axis2.SetLineColor(2); axis2.SetLineWidth(1);
            axis3=TGaxis( min,5,max,5, 0,0,0, "L"); axis3.SetLineColor(3); axis3.SetLineWidth(1);
            #-------- build denominator of significance ------------
            h_SqrtTotalMC=h_TotalMC.Clone("h_SqrtTotalMC"); h_SqrtTotalMC.Sumw2();
            for i in range(1,h_SqrtTotalMC.GetNbinsX()+1,1): h_SqrtTotalMC.SetBinContent(i, TMath.Sqrt( 1.0*h_SqrtTotalMC.GetBinContent(i)+1 ) ); h_SqrtTotalMC.SetBinError( i, TMath.Sqrt( 1.0*h_SqrtTotalMC.GetBinError(i) ) );

            h_Signif1=h_Signal1.Clone("h_Signif1"); h_Signif1.Divide( h_SqrtTotalMC );
            h_Signif2=h_Signal2.Clone("h_Signif2"); h_Signif2.Divide( h_SqrtTotalMC );

            h_Signif1.GetYaxis().SetTitle(" S / #sqrt{B+1} "); h_Signif1.GetYaxis().SetTitleOffset(0.38); h_Signif1.GetYaxis().SetTitleSize(0.13); h_Signif1.GetYaxis().SetTitleSize(0.13); h_Signif1.GetYaxis().SetLabelSize(0.11);h_Signif1.GetXaxis().SetLabelSize(0.1);h_Signif1.GetXaxis().SetTitleOffset(0.7);h_Signif1.GetXaxis().SetTitleSize(0.14);
            MaxY = TMath.Max(MaxY, h_Signif1.GetMaximum()); MaxY = TMath.Max(MaxY, h_Signif2.GetMaximum()); #MaxY=TMath.Max(MaxY,h_Signif3.GetMaximum());  MaxY=TMath.Max(MaxY,h_Signif4.GetMaximum());  
            MaxY=MaxY*1.5; MinY=0.01;
            h_Signif1.GetYaxis().SetRangeUser(MinY,MaxY);
            h_Signif1.Draw("hist"); 
            h_Signif2.Draw("hist,same"); #h_Signif2.Draw("hist,same"); #h_Signif3.Draw("hist,same");h_Signif4.Draw("hist,same"); 
            axis2.Draw();axis3.Draw();

            V1 = OptimalCut(h_TotalMC, h_Signal1); #print V1;
            sig1_Leftcut =TGaxis( V1[2], MinY, V1[2],MaxY, 0,0,0, "L"); sig1_Leftcut.SetLineColor(4);   sig1_Leftcut.SetLineWidth(1);  sig1_Leftcut.Draw();
            sig1_Rightcut=TGaxis( V1[3], MinY, V1[3],MaxY, 0,0,0, "L"); sig1_Rightcut.SetLineColor(4);  sig1_Rightcut.SetLineWidth(1); sig1_Rightcut.Draw();
            PrintValus1 = TLatex( h_TotalMC.GetBinLowEdge(2), 0.25,"  r"+V1[4]+"%  e"+V1[5]+"%  s"+V1[6]); PrintValus1.SetTextColor(4); PrintValus1.SetTextSize(0.09); PrintValus1.Draw();
            V2 = OptimalCut(h_TotalMC, h_Signal2);
            sig2_Leftcut =TGaxis( V2[2], MinY, V2[2],MaxY, 0,0,0, "L"); sig2_Leftcut.SetLineColor(kGreen+2);  sig2_Leftcut.SetLineWidth(1);  sig2_Leftcut.Draw();
            sig2_Rightcut=TGaxis( V2[3], MinY, V2[3],MaxY, 0,0,0, "L"); sig2_Rightcut.SetLineColor(kGreen+2); sig2_Rightcut.SetLineWidth(1); sig2_Rightcut.Draw();
            PrintValus2 = TLatex( h_TotalMC.GetBinLowEdge(2), 0.05,"  r"+V2[4]+"%  e"+V2[5]+"%  s"+V2[6]); PrintValus2.SetTextColor(kGreen+2); PrintValus2.SetTextSize(0.09); PrintValus2.Draw();
            fPads2.RedrawAxis(); fPads2.Update();
            fPads1.RedrawAxis(); fPads1.Update();

        #ODE is "COMP":
        #h_Ratio=TH1D("h_Ratio",""+";%s;%s"%(xtitle,ytitle),nbin,min,max)
        #h_Ratio.SetLineColor(1)
        #h_Ratio.SetLineWidth(2)
        #h_Ratio.SetMarkerColor(1)
        #h_Ratio.SetMarkerStyle(8)
        #h_Ratio.SetMarkerSize(0.7)
        #h_Ratio.SetStats(0)
        #maxY=2
        #axis1=TGaxis( min,1,max,1, 0,0,0, "L"); axis1.SetLineColor(1); axis1.SetLineWidth(1);  #axis1->SetLabelColor(16);

        #for i in range(1,h_Ratio.GetNbinsX()+1,1):
        #        D  = h_DMR.GetBinContent(i);    eD = h_DMR.GetBinError(i);
        #        if D==0: eD=0.92;
        #        if options.COMP!="None":
        #            B  = h_QCD.GetBinContent(i); eB = h_QCD.GetBinError(i);
        #        #if options.COMP[2]=="t":
        #        #      B  = h_T.GetBinContent(i); eB = h_T.GetBinError(i);
        #        if B<0.1 and eB>=B : eB=0.92; Err= 0.;
        #        if B!=0.        :Err=TMath.Sqrt( (eD*eD)/(B*B)  +(D*D*eB*eB)/(B*B*B*B)     ); h_Ratio.SetBinContent(i, D/B   );  h_Ratio.SetBinError(i, Err); #print i,")",h_Ratio.GetNbinsX()+1,")   data:",D," pm ",eD,"     Bkg:",B," pm ",eB,"   R:",D/B," pm ", Err
        #        if B==0.        :Err=TMath.Sqrt( (eD*eD)/(eB*eB)+(D*D*eB*eB)/(eB*eB*eB*eB) ); h_Ratio.SetBinContent(i, D/0.92);  h_Ratio.SetBinError(i, Err);
        #        if D==0 and B==0:                                                             h_Ratio.SetBinContent(i, -1);      h_Ratio.SetBinError(i, 0  );
        #        if h_Ratio.GetBinContent(i)>maxY:h_Ratio.SetBinContent(i, maxY); ### To visualise the points above axis... #h_Ratio.Fit("pol1");
        #h_Ratio2=TH1D("h_Ratio2",""+";%s;%s"%(xtitle,ytitle),nbin,min,max)
        #h_Ratio2.SetLineColor(2)
        #h_Ratio2.SetLineWidth(2)
        #h_Ratio2.SetMarkerColor(2)
        #h_Ratio2.SetMarkerStyle(8)
        #h_Ratio2.SetMarkerSize(0.7)
        #h_Ratio2.GetYaxis().SetRangeUser( 0 , maxY )
        #h_Ratio2.GetYaxis().SetNdivisions(504,0)
        #h_Ratio2.GetYaxis().SetTitle("Ratio")
        #h_Ratio2.GetYaxis().SetTitleOffset(0.35)
        #h_Ratio2.GetYaxis().SetTitleSize(0.13)
        #h_Ratio2.GetYaxis().SetTitleSize(0.13)
        #h_Ratio2.GetYaxis().SetLabelSize(0.11)
        #h_Ratio2.GetXaxis().SetLabelSize(0.1)
        #h_Ratio2.GetXaxis().SetTitleOffset(1.0)
        #h_Ratio2.GetXaxis().SetTitleSize(0.1)
        #h_Ratio2.SetStats(0)
        #for i in range(1,h_Ratio2.GetNbinsX()+1,1):
        #        if options.COMP!="None":
        #            D  = h_QCD_S.GetBinContent(i);    eD = h_QCD_S.GetBinError(i);
        #            B  = h_QCD.GetBinContent(i); eB = h_QCD.GetBinError(i);
        #        #if options.COMP[2]=="t":
        #        #    D  = h_T_S.GetBinContent(i);    eD = h_T_S.GetBinError(i);
        #        #    B  = h_T.GetBinContent(i); eB = h_T.GetBinError(i);
        #        if D==0: eD=0.92;
        #        if B<0.1 and eB>=B : eB=0.92; Err= 0.;
        #        if B!=0.        :Err=TMath.Sqrt( (eD*eD)/(B*B)  +(D*D*eB*eB)/(B*B*B*B)     ); h_Ratio2.SetBinContent(i, D/B   );  h_Ratio2.SetBinError(i, Err);
        #        if B==0.        :Err=TMath.Sqrt( (eD*eD)/(eB*eB)+(D*D*eB*eB)/(eB*eB*eB*eB) ); h_Ratio2.SetBinContent(i, D/0.92);  h_Ratio2.SetBinError(i, Err);
        #        if D==0 and B==0:                                                             h_Ratio2.SetBinContent(i, -1);      h_Ratio2.SetBinError(i, 0  );
        #        if h_Ratio2.GetBinContent(i)>maxY:h_Ratio2.SetBinContent(i, maxY); ### To visualise the points above axis... #h_Ratio.Fit("pol1");
        #axis1=TGaxis( min,1,max,1, 0,0,0, "L")
        #axis1.SetLineColor(1)
        #axis1.SetLineWidth(1)
        #h_Ratio2.Draw("e0")
        #h_Ratio.Draw("same e0")
        #axis1.Draw()
        #theLeg2 = TLegend(0.23, 0.23, 0.4, 0.5,"","NDC"); theLeg2.SetName("theLegend2"); theLeg2.SetBorderSize(0); theLeg2.SetLineColor(0); theLeg2.SetFillColor(0);theLeg2.SetFillStyle(0); theLeg2.SetLineWidth(0); theLeg2.SetLineStyle(0); theLeg2.SetTextFont(42);theLeg2.SetTextSize(.1);
        #theLeg2.SetFillColor(0);theLeg2.SetBorderSize(0);theLeg2.SetLineColor(0);theLeg2.SetLineWidth(0);theLeg2.SetLineStyle(0);theLeg2.SetTextFont(42);
        #if options.COMP!="None":
        #        theLeg2.AddEntry(h_Ratio, "[Data-Rest]_CR / QCD_CR","ape");
        #        theLeg2.AddEntry(h_Ratio2, "QCD_SR / QCD_CR","ape");
        ##if options.COMP[2]=="t":
        ##         theLeg2.AddEntry(h_Ratio, "CR(Data-Rest)/CR(Top)","ape");
        ##         theLeg2.AddEntry(h_Ratio2, "SR(Top)/CR(Top)","ape");
        #theLeg2.Draw();




        #============= THE LEGEND SESSION =======================
        if MODE in ["MC","MCvsDATA"]:
            theLeg = TLegend(0.62, 0.7, 0.9, 0.9, "", "NDC");theLeg.SetName("theLegend"); theLeg.SetBorderSize(0); theLeg.SetLineColor(0); theLeg.SetFillColor(0);theLeg.SetFillStyle(0); theLeg.SetLineWidth(0); theLeg.SetLineStyle(0); theLeg.SetTextFont(42);theLeg.SetTextSize(.05);
            theLeg.SetFillColor(0);theLeg.SetBorderSize(0);theLeg.SetLineColor(0);theLeg.SetLineWidth(0);theLeg.SetLineStyle(0);theLeg.SetTextFont(42);#theLeg.SetNColumns(2);
            if MODE=="MCvsDATA":theLeg.AddEntry(h_data, "Data "+options.y,"ep");
            theLeg.AddEntry(h_QCD    , "QCD"             ,"F");
            theLeg.AddEntry(h_TTbar  , "t#bar{t}"        ,"F");
            theLeg.AddEntry(h_STop   , "single t"        ,"F");
            theLeg.AddEntry(h_WJets  , "W+jets "         ,"F");
            theLeg.AddEntry(h_Rest   , "Rest (VV)","F"); #end1=""; end2="";
            theLeg.AddEntry(h_Signal1,"qqlnu #times %s "%(self.Signal_Scale1),"L");
            theLeg.AddEntry(h_Signal2,"qqqq #times %s "%(self.Signal_Scale2),"L");
            # theLeg.AddEntry(h_Signal1,"(2500,  250) #times %s "%(self.Signal_Scale1),"L");
            # theLeg.AddEntry(h_Signal2,"(3000, 1500) #times %s "%(self.Signal_Scale2),"L");
            theLeg.SetY1NDC(0.9-0.08*6-0.005);
            theLeg.SetY1(theLeg.GetY1NDC()); fPads1.cd(); theLeg.Draw(); #theLeg.AddEntry(gr_MCStat, "Sys.","F");
            #============ SET MAX Y-AXIS FOR PLOTS ==================
            histsigmax = TMath.Max( h_Signal1.GetMaximum(), h_Signal2.GetMaximum() );            histsigmin = TMath.Min( h_Signal1.GetMinimum(), h_Signal2.GetMinimum() );
            #histsigmax = TMath.Max( histsigmax, h_Signal3.GetMaximum() );
            #histsigmax = TMath.Max( histsigmax, h_Signal4.GetMaximum() );
            histsigmax = TMath.Max( histsigmax, h_data.GetMaximum() );            histsigmin = TMath.Min( histsigmin, h_data.GetMinimum() );
            histsigmax = TMath.Max( histsigmax, h_TotalMC.GetMaximum() );         histsigmin = TMath.Min( histsigmin, h_TotalMC.GetMinimum() );
            h_Signal1.GetYaxis().SetRangeUser(0, histsigmax*1.3 );
            h_TotalMC.GetYaxis().SetRangeUser(0, histsigmax*1.3 );
            h_data.GetYaxis().SetRangeUser(   0, histsigmax*1.3 );
            if logy == 1:
                if histsigmin<=0: histsigmin=1;
                h_Signal1.GetYaxis().SetRangeUser(0.5*histsigmin, histsigmax*100. );
                h_TotalMC.GetYaxis().SetRangeUser(0.5*histsigmin, histsigmax*100. );
                h_data.GetYaxis().SetRangeUser(   0.5*histsigmin, histsigmax*100. );
        if MODE in ["DECO"]:
            theLeg = TLegend(0.68, 0.65, 0.9, 0.92, "", "NDC");theLeg.SetName("theLegend"); theLeg.SetBorderSize(0); theLeg.SetLineColor(0); theLeg.SetFillColor(0);theLeg.SetFillStyle(0); theLeg.SetLineWidth(0); theLeg.SetLineStyle(0); theLeg.SetTextFont(42);theLeg.SetTextSize(.04);
            theLeg.SetFillColor(0);theLeg.SetBorderSize(0);theLeg.SetLineColor(0);theLeg.SetLineWidth(0);theLeg.SetLineStyle(0);theLeg.SetTextFont(42);#theLeg.SetNColumns(2);
            # theLeg.AddEntry(h_TotalMC,"Total BKG shape","L");
            theLeg.AddEntry(h_Signal1,"qqqq,qqlnu","L");
            #theLeg.AddEntry(h_TotalS1,"Signal as sum of comp.","L");
            print "Non-Closure of the sum of components:",(h_TotalS1.Integral()-h_Signal1.Integral())/h_Signal1.Integral();
            theLeg.AddEntry(h_Signal1_H4q ,"H^{4q}  %.0f"%(  h_Signal1_H4q.Integral()/h_TotalS1.Integral()*100)+"%" ,"L");
            theLeg.AddEntry(h_Signal1_H3q ,"H^{3q}  %.0f"%(  h_Signal1_H3q.Integral()/h_TotalS1.Integral()*100)+"%" ,"L");
            theLeg.AddEntry(h_Signal1_H2q ,"H^{2q}  %.0f"%(  h_Signal1_H2q.Integral()/h_TotalS1.Integral()*100)+"%" ,"L");
            theLeg.AddEntry(h_Signal1_W   ,"W       %.0f"%(    h_Signal1_W.Integral()/h_TotalS1.Integral()*100)+"%" ,"L");
            theLeg.AddEntry(h_Signal1_Hlqq,"H^{lqq} %.0f"%( h_Signal1_Hlqq.Integral()/h_TotalS1.Integral()*100)+"%" ,"L");
            theLeg.AddEntry(h_Signal1_Hlq ,"H^{lq}  %.0f"%(  h_Signal1_Hlq.Integral()/h_TotalS1.Integral()*100)+"%" ,"L");
            theLeg.AddEntry(h_Signal1_g   ,"g,q       %.0f"%(    h_Signal1_g.Integral()/h_TotalS1.Integral()*100)+"%" ,"L");
            theLeg.AddEntry(h_Signal1_Rest,"Rest    %.0f"%( h_Signal1_Rest.Integral()/h_TotalS1.Integral()*100)+"%" ,"L");
            theLeg.SetY1NDC(0.9-0.08*6-0.005);
            theLeg.SetY1(theLeg.GetY1NDC()); theLeg.Draw();

        if MODE =="COMP":
            theLeg = TLegend(0.45, 0.8, 0.6, 0.6, "", "NDC");theLeg.SetName("theLegend"); theLeg.SetBorderSize(0); theLeg.SetLineColor(0); theLeg.SetFillColor(0);theLeg.SetFillStyle(0); theLeg.SetLineWidth(0); theLeg.SetLineStyle(0); theLeg.SetTextFont(42);theLeg.SetTextSize(.05);
            theLeg.SetFillColor(0);theLeg.SetBorderSize(0);theLeg.SetLineColor(0);theLeg.SetLineWidth(0);theLeg.SetLineStyle(0);theLeg.SetTextFont(42);#theLeg.SetNColumns(2);
            theLeg.AddEntry(h_QCD_S, "QCD at S"+options.COMP[0:2]+" scaled by "+str(round(NORM,2))  ,"L");
            theLeg.AddEntry(h_QCD  , "QCD at C"+options.COMP[0:2]+" norm. at S"+options.COMP[0:2]  ,"L");
            theLeg.AddEntry(h_DMR  , "Data-Rest_MC norm. at S"+options.COMP[0:2],"L");
            histsigmax = TMath.Max(h_QCD_S.GetMaximum(), h_QCD.GetMaximum() );
            histsigmax = TMath.Max( histsigmax, h_DMR.GetMaximum() );
            h_QCD_S.GetYaxis().SetRangeUser(0, histsigmax*1.3 );
            h_QCD.GetYaxis().SetRangeUser(  0, histsigmax*1.3 );
            h_DMR.GetYaxis().SetRangeUser(  0, histsigmax*1.3 );
            theLeg.SetY1NDC(0.9-0.08*6-0.005);
            theLeg.SetY1(theLeg.GetY1NDC()); fPads1.cd(); theLeg.Draw(); #theLeg.AddEntry(gr_MCStat, "Sys.","F");

            
        #============ SAVE PLOTS IN A DIRECTORY ============================
        extension   = "";
        if tag    !=  "": extension = extension + "_"+tag;
        if logy         : extension = extension + "_log";
        if options.FBT  : extension = extension + "_FBT";
        if SFs          : extension = extension + "_SFsCorr";
        #----------- Rename variables to a shorter name -----------------
        for c in [".","/","(",")","[","]","*","+",">","<"," ","!","&","=",",","deep","dnn","Decorr","jetAK8puppi","ass_tag","t_tag","_tag"]:variable=variable.replace(c,"_");
        for c in ["__","___","____","_____","______","_"]:variable=variable.replace(c,"");
        #for c in ["__","___","____","_____","______","_"]:variable=variable.replace(c,"_");
        #----------------- Save and open the plot -----------------------
        Name=REGION+"_"+variable+"_"+MODE+"_"+options.y+extension+".png"
        file=TString(Name); canvas_controlplot.SaveAs( file.Data() );
        os.system("display %s &"%(Name) ); print "\n --> display %s &"%(Name);


        if options.piechart:#============== PIE CHARTS =================================
            num_events, colors = array('d'), array('i');   gStyle.SetOptStat(000000000);            
            piecanvas=TCanvas("PIES","PIES",400,400);  piecanvas.SetTickx(1); piecanvas.SetTicky(1); piecanvas.SetRightMargin(-0.5); piecanvas.SetTopMargin(-0.5); piecanvas.SetLeftMargin(-0.5); piecanvas.SetBottomMargin(-0.5);gStyle.SetOptStat(000000000);
            num_events.append(h_QCD.Integral());   num_events.append(h_WJets.Integral());  num_events.append(h_TTbar.Integral()); num_events.append(h_STop.Integral()); num_events.append(h_Rest.Integral());
            colors.append(self.color_palet["QCD"]);   colors.append(self.color_palet["WJets"]);  colors.append(self.color_palet["TTbar"]); colors.append(self.color_palet["STop"]); colors.append(self.color_palet["Rest"]);
            pieplot=TPie("PIE","",5,num_events,colors);
            pieplot.SetEntryLabel(0,"QCD");pieplot.SetEntryLabel(1,"W+jets"); pieplot.SetEntryLabel(2,"t#bar{t}");pieplot.SetEntryLabel(3,"single t");pieplot.SetEntryLabel(4,"Rest VV,Z+jets");
            pieplot.SetTextSize(.045); pieplot.SetAngularOffset(30); pieplot.SetLabelFormat("%val (%perc) %txt"); pieplot.SetRadius(.4); pieplot.SetLabelsOffset(-.33); piecanvas.cd(1);pieplot.Draw("nol <");RegionTxt.Draw();
            file2=TString("PIE_%s_%s.png"%(REGION,options.y)); piecanvas.SaveAs(file2.Data());
            os.system("display PIE_%s_%s.png &"%(REGION,options.y) );




################# Main Code ################################
def Draw_Control_Plot( channel ) :
    if channel in ["had"]           : Instance_ANALYSIS = ANALYSIS( channel ); Instance_ANALYSIS.DefineSelection_0lep();
    #if channel in ["mu","el","lep"] : Instance_ANALYSIS = ANALYSIS( channel ); Instance_ANALYSIS.DefineSelection_1lep();

if __name__ == '__main__' : 
    Beginning = strftime("%H:%M:%S",gmtime())
    print '\n----RUN--------------channel:[',options.channel,']----------Region:[',options.REGION,']----------------[',Beginning,']--------'
    Draw_Control_Plot( options.channel );
    Finishing = strftime("%H:%M:%S",gmtime());
    #========== CALCULATE DURATION OF THE RUN ===========
    MIN=int(Finishing[3:5])-int(Beginning[3:5]); SEC=int(Finishing[6:8])-int(Beginning[6:8]); 
    if SEC<0 and MIN>0 : SEC=60+SEC; MIN=MIN-1;
    if SEC>0 and MIN<0 : MIN=60+MIN;
    if SEC<0 and MIN<0 : SEC=60+SEC; MIN=60+MIN-1;
    print '----END-----------------------------------------------[time:',Finishing,', duration:',MIN,':',SEC,']---------\n'

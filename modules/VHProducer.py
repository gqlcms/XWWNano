import ROOT
from ROOT import TLorentzVector
ROOT.PyConfig.IgnoreCommandLineOptions = True

from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection 
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

import math
import os
import numpy as np

class VHProducer(Module):
    def __init__(self , year, MODE = "VH" ):
        self.year = year
        self.MODE = MODE
        self.eta_cut = 2.4


    def beginJob(self):
        print('***** Begin processing *****')

    def endJob(self):
        print('***** End processing *****')

    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        print("***** Begin processing file: {} *****".format(inputFile.GetName()))
        self.is_mc = bool(inputTree.GetBranch("GenJet_pt"))
        self.out = wrappedOutputTree

        if self.is_mc and self.MODE == "VH":
            for Boson in ['Z', 'W', 'H']:
                ## add branches for Boson
                for var in ['pt', 'eta', 'phi', 'mass', 'pdg', 'count']:
                    self.out.branch('gen'+Boson+'_'+var, 'F' if (var not in ['pdf', 'count']) else 'I')
                    
                ## add branches for children of Boson
                for child in ['child1', 'child2']:
                    for var in ['pt', 'eta', 'phi', 'mass', 'pdg']:
                        self.out.branch('gen'+Boson+'_'+child+'_'+var, 'F' if var!='pdg' else 'I')

                ## in the case of H->WW, continue to process children of W
                for sign in ['+', '-']:
                    for child in ['child1', 'child2']:
                        for var in ['pt', 'eta', 'phi', 'mass', 'pdg']:
                            self.out.branch('gen'+Boson+'_W'+sign+'_'+child+'_'+var, 'F' if var!='pdg' else 'I')


        ## add reco-level branches
        self.out.branch('leading_index', 'I')
        self.out.branch('nextLeading_index', 'I')
        for jetname in ['fj1', 'fj2']:
            ## Jet ID flags bit1 is loose (always false in 2017 since it does not exist), bit2 is tight, bit3 is tightLepVeto
            self.out.branch(f'AK8_{jetname}_IDLoose"', 'I')
            
            ## elementary vatriables
            for var in ['pt', 'eat', 'phi', 'msoftdrop', 'tau1', 'tau2', 'tau3', 'tau4']:
                self.out.branch(f'AK8_{jetname}_{var}', 'F')
 
            ## variables based on elementary vatriables
            self.out.branch(f'AK8_{jetname}_tau21', 'F')
            self.out.branch(f'AK8_{jetname}_tau42', 'F')
            self.out.branch(f'AK8_{jetname}_msoftdrop_NoJEC', 'F')
            ## to be checked, whether to use sd or sd_NoJEC
            
            
            ## scores by deepTag and deepTagMD
            for var in ['deepTag_TvsQCD', 'deepTag_WvsQCD', 'deepTag_ZvsQCD', 'deepTagMD_TvsQCD', 'deepTagMD_WvsQCD', 
                        'deepTagMD_ZvsQCD', 'deepTagMD_H4qvsQCD', 'deepTagMD_ZbbvsQCD', 'deepTagMD_HbbvsQCD']:
                self.out.branch(f'AK8_{jetname}_{var}', 'F')
                
            ## scores by particleNet and particleNetMD
            for var in ['particleNet_QCD', 'particleNet_TvsQCD', 'particleNet_WvsQCD', 'particleNet_ZvsQCD', 
                        'particleNet_H4qvsQCD', 'particleNet_HbbvsQCD', 'particleNet_HccvsQCD', 
                        'particleNetMD_QCD', 'particleNetMD_Xbb', 'particleNetMD_Xcc', 'particleNetMD_Xqq']:
                self.out.branch(f'AK8_{jetname}_{var}', 'F')


        self.out.branch("nLooseMu", "I")
        self.out.branch("nLooseEle", "I")
        self.out.branch("MET_et", "F")
        self.out.branch("N_AK8_jets", 'I')

        self.out.branch("ak4jet_hf", "F",lenVar="nJet")
        self.out.branch("ak4jet_pf", "F",lenVar="nJet")
        self.out.branch("ak4jet_pt", "F",lenVar="nJet")
        self.out.branch("ak4jet_eta", "F",lenVar="nJet")
        self.out.branch("ak4jet_phi", "F",lenVar="nJet")
        self.out.branch("ak4jet_mass", "F",lenVar="nJet")
        self.out.branch("ak4jet_icsv", "F",lenVar="nJet")
        self.out.branch("ak4jet_deepcsvb", "F",lenVar="nJet")
        self.out.branch("ak4jet_deepcsvc", "F",lenVar="nJet")
        self.out.branch("ak4jet_IDTight", "I",lenVar="nJet")

        

    def endFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        print('***** End processing file: {} *****'.format(inputFile.GetName()))


    def analyze(self, event):
        # number of good reconstructed primary vertices
        if event.PV_npvsGood<1: 
            return False

        if self.is_mc:
            self.process_Genlevel_VH(event)

        lep_pt,lep_eta,lep_phi,lep_m,trackIso,muisolation=-99,-99,-99,-99,-99,-99

        # What's trackIso and muisolation???
        # Muon selection: Highpt ID
        muons = Collection(event, 'Muon')

        muon_v4_temp=TLorentzVector()
        looseMuons = []
        for i in range(0, event.nMuon): ## or len(muons)
        #print("h",i,event.Muon_highPtId[i],type(event.Muon_highPtId[i]),event.Muon_highPtId[i]==2,event.Muon_corrected_pt[i])
            if muons[i].highPtId=='\x02' and muons[i].tkRelIso<0.1 and abs(muons[i].eta)<self.eta_cut and muons[i].corrected_pt>20:
                trackIso, muisolation = muons[i].tkRelIso, muons[i].pfRelIso04_all
                muon_v4_temp.SetPtEtaPhiM(muons[i].corrected_pt, muons[i].eta, muons[i].phi, muons[i].mass)
                lep_pt, lep_eta, lep_phi, lep_m=muons[i].corrected_pt, muons[i].eta, muons[i].phi, muons[i].mass
                looseMuons.append(muon_v4_temp.Clone())
                
        nLooseMu = len(looseMuons)
        self.out.fillBranch("nLooseMu", nLooseMu)

        # electron selection: HEEPv7 id
        electrons = Collection(event, 'Electron')
        electron_v4_temp=TLorentzVector()
        looseElectrons = []
        for i in range(0, event.nElectron):
            if electrons[i].cutBased_HEEP and abs(electrons[i].eta)<2.5 and electrons[i].pt>35:
                electron_v4_temp.SetPtEtaPhiM(electrons[i].pt, electrons[i].eta, electrons[i].phi, electrons[i].mass)
                lep_pt,lep_eta,lep_phi,lep_m=electrons[i].pt, electrons[i].eta, electrons[i].phi, electrons[i].mass
                looseElectrons.append(electron_v4_temp.Clone())
                
        nLooseEle = len(looseElectrons)
        self.out.fillBranch("nLooseEle", nLooseEle)
        
        ## leptonic V needs at least 1 lepton
        if nLooseEle+nLooseMu<1:
            return False
        
        # MET and leptonicW
        MET_et=event.MET_pt
        self.out.fillBranch("MET_et", MET_et)
        
        fj1, fj2=self.process_Recolevel_VH(event)
        self.process_1Lepton_Jets(event)

        Nj8 = (fj1.Pt()>200) + (fj2.Pt()>200)
        
        if Nj8 != 2: 
            return False
        if not ((fj1.M()>40 ) | (fj2.M()>40)): 
            return False
        if fj1.Pt()<400: 
            return False
        self.out.fillBranch("N_AK8_jets", Nj8)

        return True


    def process_Genlevel_VH(self, event):
        for i in range(0, event.nGenPart):
            ###########################################################    
            ## process the Boson in the case of Z,W,H 
            ###########################################################
            if not (event.GenPart_statusFlags[i]&(1<<13)): ## if is not lastCopy
                continue
            primeID=abs(event.GenPart_pdgId[i])
            if not 23<=abs(primeID)<=25: ## Z: 23, W: 24, H: 25
                continue
            if primeID==23:
                Boson='Z'
            elif abs(primeID)==24:
                Boson='W'
            elif primeID==25:
                Boson='H'
            else:
                print("ERROR!!! Something wrong with primary particle")

            # Only select boosted Higgs.
            # if(event.GenPart_pt[ik]<450): break
            
            for var in ['pt', 'eta', 'phi', 'mass', 'pdg']:
                self.out.fillBranch(f'gen{Boson}_{var}', getattr(event, 'GenPart_'+var)[i])
            ###########################################################    
            ## continue to process the children of Boson
            ###########################################################    
            child_index = self.find_Genlevel_Children(event, i)
            if len(child_index) != 2:
                continue
            
            for j in range(0, len(child_index)):
                child_ID = event.GenPart_pdgId[child_index[j]]
                child_LastCopy = self.find_Genlevel_LastCopy(event, child_index[j])

                for var in ['pt', 'eta', 'phi', 'mass', 'pdg']:
                    self.out.fillBranch(f'gen{Boson}_child{j+1}_{var}', getattr(event, 'GenPart_'+var)[child_LastCopy])

                ###########################################################    
                ## continue to process H->WW components 
                ###########################################################    
                if not (Boson=='H' and abs(child_ID)==24): ## ensure it's H->WW
                    continue
                H_W_child_index = self.find_Genlevel_Children(event, child_LastCopy)
                if len(H_W_child_index) != 2: ## ensure W has two children
                    continue
                
                H_W_child0_pdgID = event.GenPart_pdgId[H_W_child_index[0]]
                if abs(H_W_child0_pdgID)<=6:
                    genH_W_tag = 4 ## 4 means W->qq
                elif 11<=abs(H_W_child0_pdgID)<=12: 
                    genH_W_tag = 1 ## 1 means W->enu_e
                elif 13<=abs(H_W_child0_pdgID)<=14:
                    genH_W_tag = 2 ## 2 means W->munu_mu
                elif 15<=abs(H_W_child0_pdgID)<=16:
                    genH_W_tag = 3 ## 3 means W->taunu_tau
                sign = '+' if child_ID > 0 else '-'
                self.out.fillBranch(f"genH_W{sign}_tag", genH_W_tag)
                
                for k in range(len(H_W_child_index)):
                    for var in ['pt', 'eta', 'phi', 'mass', 'pdg']:
                        self.out.fillBranch(f"gen{Boson}_W{sign}_child{k+1}_{var}", getattr(event, f"GenPart_{var}")[H_W_child_index[k]])
                        

    def process_Recolevel_VH(self, event):
        pt_index_tuples=zip(event.FatJet_pt, [i for i in range(event.nFatJet)])
        sorted_pt, ptsorted_index = zip(*sorted(pt_index_tuples), key=lambda x : x[0], reverse = True)
        first = ptsorted_index[0]
        second = ptsorted_index[1]
        
        fj1=TLorentzVector()
        fj2=TLorentzVector()
        # jets = Collection(event, 'FatJet')
        
        for fj, jetname, index in [(fj1, 'fj1', first), (fj2, 'fj2', second)]:
            ## Jet ID flags bit1 is loose (always false in 2017 since it does not exist), bit2 is tight, bit3 is tightLepVeto
            self.out.fillBranch("IDLoose", event.FatJet_jetId[first]&2) 
            
            ## elementary vatriables
            for var in ['pt', 'eat', 'phi', 'msoftdrop', 'tau1', 'tau2', 'tau3', 'tau4']:
                self.out.fillBranch(f'AK8_{jetname}_{var}', getattr(event, f'FatJet_{var}')[index])
 
            ## variables based on elementary vatriables
            self.out.fillBranch(f'AK8_{jetname}_tau21', event.FatJet_tau2[index]/(event.FatJet_tau1[index]+1e-10))
            self.out.fillBranch(f'AK8_{jetname}_tau42', event.FatJet_tau4[index]/(event.FatJet_tau2[index]+1e-10))
            self.out.fillBranch(f'AK8_{jetname}_msoftdrop_NoJEC', self.process_1Lepton_Fatjet_SoftdropMass_NoJEC(event, index))
            ## to be checked, whether to use sd or sd_NoJEC
            
            
            ## scores by deepTag and deepTagMD
            for var in ['deepTag_TvsQCD', 'deepTag_WvsQCD', 'deepTag_ZvsQCD', 'deepTagMD_TvsQCD', 'deepTagMD_WvsQCD', 
                        'deepTagMD_ZvsQCD', 'deepTagMD_H4qvsQCD', 'deepTagMD_ZbbvsQCD', 'deepTagMD_HbbvsQCD']:
                self.out.fillBranch(f'AK8_{jetname}_{var}', getattr(event, f'FatJet_{var}')[index])
                
            ## scores by particleNet and particleNetMD
            for var in ['particleNet_QCD', 'particleNet_TvsQCD', 'particleNet_WvsQCD', 'particleNet_ZvsQCD', 
                        'particleNet_H4qvsQCD', 'particleNet_HbbvsQCD', 'particleNet_HccvsQCD', 
                        'particleNetMD_QCD', 'particleNetMD_Xbb', 'particleNetMD_Xcc', 'particleNetMD_Xqq']:
                self.out.fillBranch(f'AK8_{jetname}_{var}', getattr(event, f'FatJet_{var}')[index])
                  
            fj.SetPtEtaPhiM(event.FatJet_pt[index], event.FatJet_eta[index], event.FatJet_phi[index], event.FatJet_msoftdrop[index])    
            

        self.out.fillBranch("leading_index", first)
        self.out.fillBranch("nextLeading_index", second)

        
        return fj1, fj2

    def getNeutrinoP4(self, MetPt, MetPhi, lep, lepType):
        MW_=80.385;

        leppt = lep.Pt();
        lepphi = lep.Phi();
        lepeta = lep.Eta();
        lepenergy = lep.Energy();

        metpt = MetPt;
        metphi = MetPhi;

        px = metpt*math.cos(metphi);
        py = metpt*math.sin(metphi);
        pz = 0;
        pxl= leppt*math.cos(lepphi);
        pyl= leppt*math.sin(lepphi);
        pzl= leppt*math.sinh(lepeta);
        El = lepenergy;
        a = pow(MW_,2) + pow(px+pxl,2) + pow(py+pyl,2) - px*px - py*py - El*El + pzl*pzl;
        b = 2.*pzl;
        A = b*b -4.*El*El;
        B = 2.*a*b;
        C = a*a-4.*(px*px+py*py)*El*El;

        #///////////////////////////pz for fnal
        M_mu =  0;

        #//if(lepType==1)M_mu=0.105658367;//mu
        #//if(lepType==0)M_mu=0.00051099891;//electron

        type=2; # use the small abs real root

        a = MW_*MW_ - M_mu*M_mu + 2.0*pxl*px + 2.0*pyl*py;
        A = 4.0*(El*El - pzl*pzl);
        B = -4.0*a*pzl;
        C = 4.0*El*El*(px*px + py*py) - a*a;

        tmproot = B*B - 4.0*A*C;

        if (tmproot<0):
            #print("Complex root detected, taking real part...");
            pz = - B/(2*A); # take real part of complex roots
        
        else:
            tmpsol1 = (-B + math.sqrt(tmproot))/(2.0*A);
            tmpsol2 = (-B - math.sqrt(tmproot))/(2.0*A);
            #print(" Neutrino Solutions: ",tmpsol1,tmpsol2);

            if (type == 0 ) :
                # two real roots, pick the one closest to pz of muon
                if (abs(tmpsol2-pzl) < abs(tmpsol1-pzl)):
                    pz = tmpsol2; 
                else:
                    pz = tmpsol1; 
                #if pz is > 300 pick the most central root
                if ( abs(pz) > 300. ) :
                    if (abs(tmpsol1)<abs(tmpsol2) ):
                        pz = tmpsol1; 
                    else:
                        pz = tmpsol2; 
            if (type == 1 ):
                # two real roots, pick the one closest to pz of muon
                if (abs(tmpsol2-pzl) < abs(tmpsol1-pzl)):
                    pz = tmpsol2; 
                else:
                    pz = tmpsol1; 
            if (type == 2 ) :
                # pick the most central root.
                if (abs(tmpsol1)<abs(tmpsol2) ): 
                    pz = tmpsol1; 
                else: 
                    pz = tmpsol2;
        outP4=TLorentzVector()
        outP4.SetPxPyPzE(px,py,pz,math.sqrt(px*px+py*py+pz*pz));
        return outP4;

    def find_Genlevel_LastCopy(self, event, index):
        lastCopyIndex = None
        pdgID = event.GenPart_pdgId[index]
        for i in range(0, event.nGenPart):
            if not (event.GenPart_statusFlags[i]&(1<<13) and event.GenPart_pdgId[i] == pdgID): 
                continue    # ensure the i_th particle is a last copy and has the same pdgID as the index_th particle
            if i == index:
                lastCopyIndex = i
            else:
                j = i
                while event.GenPart_pdgId[j] == pdgID:
                    j = event.GenPart_genPartIdxMother[j]
                    if j == index:
                        lastCopyIndex = i
                        break
            if lastCopyIndex is not None:
                break
        return lastCopyIndex

    def find_Genlevel_Children(self, event, parent): ## parent means the index of parent-particle.
        children=[]
        for index in range(0, event.nGenPart):
            if event.GenPart_genPartIdxMother[index] == parent:
                children.append(index)
        return children

    def find_Genlevel_FirstCopy(self, event, index):
        firstCopyIndex = None
        pdgID = event.GenPart_pdgId[index]
        i = index
        
        while event.GenPart_pdgId[i] == pdgID:
            if (event.GenPart_statusFlags[i]&(1<<12)):
                firstCopyIndex = i
                break
            if event.GenPart_genPartIdxMother[i] < 0: # need to be checked more carefully
                firstCopyIndex = i
                break
            i = event.GenPart_genPartIdxMother[i]
            
        if firstCopyIndex<0:    ## restart loop
            i = index
            while(event.GenPart_pdgId[i] == pdgID):
                firstCopyIndex = i
                i = event.GenPart_genPartIdxMother[i]
                
        return firstCopyIndex

    def process_1Lepton_Fatjet_SoftdropMass_NoJEC(self, event, fj_index):
        fj_subJetIdx1 = event.FatJet_subJetIdx1[fj_index]
        fj_subJetIdx2 = event.FatJet_subJetIdx2[fj_index]
        subjet1, subjet2, sum_p4 = TLorentzVector(), TLorentzVector(), TLorentzVector(0,0,0,0)
        
        if not (fj_subJetIdx1>=0 and fj_subJetIdx2>=0):
            return None
        else:
            for subjet, sj_index in [(subjet1, fj_subJetIdx1), (subjet2, fj_subJetIdx2)]:
                pt=event.SubJet_pt[sj_index]*(1-event.SubJet_rawFactor[sj_index])
                mass=event.SubJet_mass[sj_index]*(1-event.SubJet_rawFactor[sj_index])
                subjet.SetPtEtaPhiM(pt, event.SubJet_eta[sj_index], event.SubJet_phi[sj_index], mass)
                sum_p4 += subjet

            return sum_p4.M()


    # def Process_1Lepton_Jets(self,event,glepton,dR):
    def process_1Lepton_Jets(self, event):
        ak4jet_hf=[]
        ak4jet_pf=[]
        ak4jet_pt=[]
        ak4jet_eta=[]
        ak4jet_phi=[]
        ak4jet_mass=[]
        ak4jet_icsv=[]
        ak4jet_deepcsvb=[]
        ak4jet_deepcsvc=[]
        ak4jet_IDTight=[]
        for i in range(0,event.nJet):
            jet_tmp=TLorentzVector()
            jet_tmp.SetPtEtaPhiM(event.Jet_pt[i],event.Jet_eta[i],event.Jet_phi[i],event.Jet_mass[i])
            # if jet_tmp.DeltaR(glepton)<dR:continue
            if event.Jet_pt[i]>20 and abs(event.Jet_eta[i])<5.0 and event.Jet_jetId[i]&2>0 and i<8:
                if self.is_mc:  
                    ak4jet_hf.append(event.Jet_hadronFlavour[i])
                    ak4jet_pf.append(event.Jet_partonFlavour[i])
                ak4jet_pt.append(event.Jet_pt[i])
                ak4jet_eta.append(event.Jet_eta[i])
                ak4jet_phi.append(event.Jet_phi[i])
                ak4jet_mass.append(event.Jet_mass[i])
                ak4jet_icsv.append(event.Jet_btagCSVV2[i])
                ak4jet_deepcsvb.append(event.Jet_btagDeepB[i])
                ak4jet_deepcsvc.append(event.Jet_btagDeepCvL[i]) #DeepCSV c vs b+bb discriminator
        ak4jet_hf.extend(np.zeros(event.nJet-len(ak4jet_hf),int))
        ak4jet_pf.extend(np.zeros(event.nJet-len(ak4jet_pf),int))
        ak4jet_pt.extend(np.zeros(event.nJet-len(ak4jet_pt),int))
        ak4jet_eta.extend(np.zeros(event.nJet-len(ak4jet_eta),int))
        ak4jet_phi.extend(np.zeros(event.nJet-len(ak4jet_phi),int))
        ak4jet_mass.extend(np.zeros(event.nJet-len(ak4jet_mass),int))
        ak4jet_icsv.extend(np.zeros(event.nJet-len(ak4jet_icsv),int))
        ak4jet_deepcsvb.extend(np.zeros(event.nJet-len(ak4jet_deepcsvb),int))
        ak4jet_deepcsvc.extend(np.zeros(event.nJet-len(ak4jet_deepcsvc),int))
        ak4jet_IDTight.extend(np.zeros(event.nJet-len(ak4jet_IDTight),int))
        self.out.fillBranch("ak4jet_hf", ak4jet_hf)
        self.out.fillBranch("ak4jet_pf", ak4jet_pf)
        self.out.fillBranch("ak4jet_pt", ak4jet_pt)
        self.out.fillBranch("ak4jet_eta", ak4jet_eta)
        self.out.fillBranch("ak4jet_phi", ak4jet_phi)
        self.out.fillBranch("ak4jet_mass", ak4jet_mass)
        self.out.fillBranch("ak4jet_icsv", ak4jet_icsv)
        self.out.fillBranch("ak4jet_deepcsvb", ak4jet_deepcsvb)
        self.out.fillBranch("ak4jet_deepcsvc", ak4jet_deepcsvc)
        self.out.fillBranch("ak4jet_IDTight", ak4jet_IDTight)


VH2016 = lambda MODE="inclusive": VHProducer("2016",MODE)
VH2017 = lambda MODE="inclusive": VHProducer("2017",MODE)
VH2018 = lambda MODE="inclusive": VHProducer("2018",MODE)

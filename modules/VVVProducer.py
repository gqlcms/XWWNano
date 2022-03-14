import ROOT
from ROOT import TLorentzVector
ROOT.PyConfig.IgnoreCommandLineOptions = True

from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection 
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

import math
import os
import numpy as np
from numpy import sign

class VVVProducer(Module):
    def __init__(self , year, MODE = "inclusive" ):
        self.year = year
        self.MODE = MODE
        self.Process_Genparticles = False

    def beginJob(self):
        pass

    def endJob(self):
        pass

    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree

        if self.MODE == "HWW":
            self.out.branch("genH_pt","F")
            self.out.branch("genH_eta","F")
            self.out.branch("genH_phi","F")
            self.out.branch("genH_mass","F")

            self.out.branch("genH_w1_pt","F")
            self.out.branch("genH_w1_eta","F")
            self.out.branch("genH_w1_phi","F")
            self.out.branch("genH_w1_mass","F")

            self.out.branch("genH_w2_pt","F")
            self.out.branch("genH_w2_eta","F")
            self.out.branch("genH_w2_phi","F")
            self.out.branch("genH_w2_mass","F")

            self.out.branch("genH_b1_pt","F")
            self.out.branch("genH_b1_eta","F")
            self.out.branch("genH_b1_phi","F")
            self.out.branch("genH_b1_mass","F")

            self.out.branch("genH_b2_pt","F")
            self.out.branch("genH_b2_eta","F")
            self.out.branch("genH_b2_phi","F")
            self.out.branch("genH_b2_mass","F")


            self.out.branch("genH_w1_tag","F") 
            self.out.branch("genH_w2_tag","F")

            self.out.branch("genH_w1_q1_pt","F")
            self.out.branch("genH_w1_q1_eta","F")
            self.out.branch("genH_w1_q1_phi","F")
            self.out.branch("genH_w1_q1_mass","F")
            self.out.branch("genH_w1_q1_pdg","F")

            self.out.branch("genH_w1_q2_pt","F")
            self.out.branch("genH_w1_q2_eta","F")
            self.out.branch("genH_w1_q2_phi","F")
            self.out.branch("genH_w1_q2_mass","F")
            self.out.branch("genH_w1_q2_pdg","F")

            self.out.branch("genH_w2_q1_pt","F")
            self.out.branch("genH_w2_q1_eta","F")
            self.out.branch("genH_w2_q1_phi","F")
            self.out.branch("genH_w2_q1_mass","F")
            self.out.branch("genH_w2_q1_pdg","F")

            self.out.branch("genH_w2_q2_pt","F")
            self.out.branch("genH_w2_q2_eta","F")
            self.out.branch("genH_w2_q2_phi","F")
            self.out.branch("genH_w2_q2_mass","F")
            self.out.branch("genH_w2_q2_pdg","F")

            self.out.branch("genH_b1_tag","F") 
            self.out.branch("genH_b2_tag","F")

            self.out.branch("genH_b1_q1_pt","F")
            self.out.branch("genH_b1_q1_eta","F")
            self.out.branch("genH_b1_q1_phi","F")
            self.out.branch("genH_b1_q1_mass","F")
            self.out.branch("genH_b1_q1_pdg","F")

            self.out.branch("genH_b1_q2_pt","F")
            self.out.branch("genH_b1_q2_eta","F")
            self.out.branch("genH_b1_q2_phi","F")
            self.out.branch("genH_b1_q2_mass","F")
            self.out.branch("genH_b1_q2_pdg","F")

            self.out.branch("genH_b2_q1_pt","F")
            self.out.branch("genH_b2_q1_eta","F")
            self.out.branch("genH_b2_q1_phi","F")
            self.out.branch("genH_b2_q1_mass","F")
            self.out.branch("genH_b2_q1_pdg","F")

            self.out.branch("genH_b2_q2_pt","F")
            self.out.branch("genH_b2_q2_eta","F")
            self.out.branch("genH_b2_q2_phi","F")
            self.out.branch("genH_b2_q2_mass","F")
            self.out.branch("genH_b2_q2_pdg","F")

        if self.Process_Genparticles : 
            self.out.branch("gentop_pt", "F")
            self.out.branch("gentop_eta", "F")
            self.out.branch("gentop_phi", "F")
            self.out.branch("gentop_mass", "F")
            self.out.branch("gent_w_pt", "F")
            self.out.branch("gent_w_eta", "F")
            self.out.branch("gent_w_phi", "F")
            self.out.branch("gent_w_mass", "F")
            self.out.branch("gent_w_tag", "I")
            self.out.branch("gent_w_q1_pt", "F")
            self.out.branch("gent_w_q1_eta", "F")
            self.out.branch("gent_w_q1_phi", "F")
            self.out.branch("gent_w_q1_mass", "F")
            self.out.branch("gent_w_q1_pdg", "F")
            self.out.branch("gent_w_q2_pt", "F")
            self.out.branch("gent_w_q2_eta", "F")
            self.out.branch("gent_w_q2_phi", "F")
            self.out.branch("gent_w_q2_mass", "F")
            self.out.branch("gent_w_q2_pdg", "F")

            self.out.branch("gent_b_pt", "F")
            self.out.branch("gent_b_eta", "F")
            self.out.branch("gent_b_phi", "F")
            self.out.branch("gent_b_mass", "F")

            self.out.branch("genantitop_pt", "F")
            self.out.branch("genantitop_eta", "F")
            self.out.branch("genantitop_phi", "F")
            self.out.branch("genantitop_mass", "F")
            self.out.branch("genantit_w_pt", "F")
            self.out.branch("genantit_w_eta", "F")
            self.out.branch("genantit_w_phi", "F")
            self.out.branch("genantit_w_mass", "F")
            self.out.branch("genantit_w_tag", "I")
            self.out.branch("genantit_w_q1_pt", "F")
            self.out.branch("genantit_w_q1_eta", "F")
            self.out.branch("genantit_w_q1_phi", "F")
            self.out.branch("genantit_w_q1_mass", "F")
            self.out.branch("genantit_w_q1_pdg", "F")
            self.out.branch("genantit_w_q2_pt", "F")
            self.out.branch("genantit_w_q2_eta", "F")
            self.out.branch("genantit_w_q2_phi", "F")
            self.out.branch("genantit_w_q2_mass", "F")
            self.out.branch("genantit_w_q2_pdg", "F")
            self.out.branch("genantit_b_pt", "F")
            self.out.branch("genantit_b_eta", "F")
            self.out.branch("genantit_b_phi", "F")
            self.out.branch("genantit_b_mass", "F")

            self.out.branch("genw_q1_eta", "F",5)
            self.out.branch("phigenwl", "F",5)
            self.out.branch("etagenwl", "F",5)
            self.out.branch("massgenwl", "F",5)
            self.out.branch("genw_q2_pdg", "F",5)
            self.out.branch("genw_q2_pt", "F",5)
            self.out.branch("ptgenwl", "F",5)
            self.out.branch("genw_q2_mass", "F",5)
            self.out.branch("genw_q2_eta", "F",5)
            self.out.branch("massgenwf", "F",5)
            self.out.branch("etagenwf", "F",5)
            self.out.branch("genw_q2_phi", "F",5)
            self.out.branch("taggenwl", "F",5)
            self.out.branch("ptgenwf", "F",5)
            self.out.branch("genw_q1_phi", "F",5)
            self.out.branch("genw_q1_mass", "F",5)
            self.out.branch("genw_q1_pt", "F",5)
            self.out.branch("genw_q1_pdg", "F",5)
            self.out.branch("phigenwf", "F",5)
            self.out.branch("phigenzl", "F",5)
            self.out.branch("etagenzl", "F",5)
            self.out.branch("massgenzl", "F",5)
            self.out.branch("ptgenzl", "F",5)
            self.out.branch("massgenzf", "F",5)
            self.out.branch("etagenzf", "F",5)
            self.out.branch("taggenzl", "F",5)
            self.out.branch("ptgenzf", "F",5)
            self.out.branch("phigenzf", "F",5)
            self.out.branch("phigengf", "F",10)
            self.out.branch("phigengl", "F",10)
            self.out.branch("etagengf", "F",10)
            self.out.branch("massgengl", "F",10)
            self.out.branch("ptgengl", "F",10)
            self.out.branch("mothergengf", "F",10)
            self.out.branch("massgengf", "F",10)
            self.out.branch("ptgengf", "F",10)
            self.out.branch("etagengl", "F",10)
            self.out.branch("ptgenq1f", "F",10)
            self.out.branch("massgenq1l", "F",10)
            self.out.branch("etagenq1f", "F",10)
            self.out.branch("phigenq1f", "F",10)
            self.out.branch("mothergenq1f", "F",10)
            self.out.branch("etagenq1l", "F",10)
            self.out.branch("phigenq1l", "F",10)
            self.out.branch("massgenq1f", "F",10)
            self.out.branch("ptgenq1l", "F",10)
            self.out.branch("ptgenq2f", "F",10)
            self.out.branch("massgenq2l", "F",10)
            self.out.branch("etagenq2f", "F",10)
            self.out.branch("phigenq2f", "F",10)
            self.out.branch("mothergenq2f", "F",10)
            self.out.branch("etagenq2l", "F",10)
            self.out.branch("phigenq2l", "F",10)
            self.out.branch("massgenq2f", "F",10)
            self.out.branch("ptgenq2l", "F",10)
            self.out.branch("ptgenq3f", "F",10)
            self.out.branch("massgenq3l", "F",10)
            self.out.branch("etagenq3f", "F",10)
            self.out.branch("phigenq3f", "F",10)
            self.out.branch("mothergenq3f", "F",10)
            self.out.branch("etagenq3l", "F",10)
            self.out.branch("phigenq3l", "F",10)
            self.out.branch("massgenq3f", "F",10)
            self.out.branch("ptgenq3l", "F",10)
            self.out.branch("ptgenq4f", "F",10)
            self.out.branch("massgenq4l", "F",10)
            self.out.branch("etagenq4f", "F",10)
            self.out.branch("phigenq4f", "F",10)
            self.out.branch("mothergenq4f", "F",10)
            self.out.branch("etagenq4l", "F",10)
            self.out.branch("phigenq4l", "F",10)
            self.out.branch("massgenq4f", "F",10)
            self.out.branch("ptgenq4l", "F",10)
            self.out.branch("ptgenq5f", "F",10)
            self.out.branch("massgenq5l", "F",10)
            self.out.branch("etagenq5f", "F",10)
            self.out.branch("phigenq5f", "F",10)
            self.out.branch("mothergenq5f", "F",10)
            self.out.branch("etagenq5l", "F",10)
            self.out.branch("phigenq5l", "F",10)
            self.out.branch("massgenq5f", "F",10)
            self.out.branch("ptgenq5l", "F",10)


        self.out.branch("nLooseMu", "I")
        self.out.branch("nLooseEle", "I")
        self.out.branch("MET_et", "F")

        self.out.branch("usenumber1", "I")
        self.out.branch("usenumber2", "I")
        self.out.branch("usenumber3", "I")
        self.out.branch("IDLoose", "I")
        self.out.branch("jetAK8puppi_dnnTop", "F")
        self.out.branch("jetAK8puppi_dnnW", "F")
        self.out.branch("jetAK8puppi_dnnZ", "F")
        self.out.branch("jetAK8puppi_dnnDecorrTop", "F")
        self.out.branch("jetAK8puppi_dnnDecorrW", "F")
        self.out.branch("jetAK8puppi_dnnDecorrH4q", "F")
        self.out.branch("jetAK8puppi_dnnDecorrZ", "F")
        self.out.branch("jetAK8puppi_dnnDecorrZbb", "F")
        self.out.branch("jetAK8puppi_dnnDecorrHbb", "F")
        self.out.branch("jetAK8puppi_pt", "F")
        self.out.branch("jetAK8puppi_eta", "F")
        self.out.branch("jetAK8puppi_phi", "F")
        self.out.branch("jetAK8puppi_tau1", "F")
        self.out.branch("jetAK8puppi_tau2", "F")
        self.out.branch("jetAK8puppi_tau3", "F")
        self.out.branch("jetAK8puppi_tau21", "F")
        self.out.branch("jetAK8puppi_tau4", "F")
        self.out.branch("jetAK8puppi_tau42", "F")
        self.out.branch("jetAK8puppi_sd", "F")
        self.out.branch("jetAK8puppi_sd_NoJEC", "F")
        self.out.branch("IDLoose_2", "I")
        self.out.branch("jetAK8puppi_dnnTop_2", "F")
        self.out.branch("jetAK8puppi_dnnW_2", "F")
        self.out.branch("jetAK8puppi_dnnZ_2", "F")
        self.out.branch("jetAK8puppi_dnnDecorrTop_2", "F")
        self.out.branch("jetAK8puppi_dnnDecorrW_2", "F")
        self.out.branch("jetAK8puppi_dnnDecorrH4q_2", "F")
        self.out.branch("jetAK8puppi_dnnDecorrZ_2", "F")
        self.out.branch("jetAK8puppi_dnnDecorrZbb_2", "F")
        self.out.branch("jetAK8puppi_dnnDecorrHbb_2", "F")
        self.out.branch("jetAK8puppi_pt_2", "F")
        self.out.branch("jetAK8puppi_eta_2", "F")
        self.out.branch("jetAK8puppi_phi_2", "F")
        self.out.branch("jetAK8puppi_tau1_2", "F")
        self.out.branch("jetAK8puppi_tau2_2", "F")
        self.out.branch("jetAK8puppi_tau3_2", "F")
        self.out.branch("jetAK8puppi_tau21_2", "F")
        self.out.branch("jetAK8puppi_tau4_2", "F")
        self.out.branch("jetAK8puppi_tau42_2", "F")
        self.out.branch("jetAK8puppi_sd_2", "F")
        self.out.branch("jetAK8puppi_sd_NoJEC_2", "F")
        self.out.branch("IDLoose_3", "I")
        self.out.branch("jetAK8puppi_dnnTop_3", "F")
        self.out.branch("jetAK8puppi_dnnW_3", "F")
        self.out.branch("jetAK8puppi_dnnZ_3", "F")
        self.out.branch("jetAK8puppi_dnnDecorrTop_3", "F")
        self.out.branch("jetAK8puppi_dnnDecorrW_3", "F")
        self.out.branch("jetAK8puppi_dnnDecorrH4q_3", "F")
        self.out.branch("jetAK8puppi_dnnDecorrZ_3", "F")
        self.out.branch("jetAK8puppi_dnnDecorrZbb_3", "F")
        self.out.branch("jetAK8puppi_dnnDecorrHbb_3", "F")
        self.out.branch("jetAK8puppi_pt_3", "F")
        self.out.branch("jetAK8puppi_eta_3", "F")
        self.out.branch("jetAK8puppi_phi_3", "F")
        self.out.branch("jetAK8puppi_tau1_3", "F")
        self.out.branch("jetAK8puppi_tau2_3", "F")
        self.out.branch("jetAK8puppi_tau3_3", "F")
        self.out.branch("jetAK8puppi_tau21_3", "F")
        self.out.branch("jetAK8puppi_tau4_3", "F")
        self.out.branch("jetAK8puppi_tau42_3", "F")
        self.out.branch("jetAK8puppi_sd_3", "F")
        self.out.branch("jetAK8puppi_sd_NoJEC_3", "F")

        self.out.branch("FatJetAK8_particleNetMD_QCD", "F")
        self.out.branch("FatJetAK8_particleNetMD_Xbb", "F")
        self.out.branch("FatJetAK8_particleNetMD_Xcc", "F")
        self.out.branch("FatJetAK8_particleNetMD_Xqq", "F")
        self.out.branch("FatJetAK8_particleNet_H4qvsQCD", "F")
        self.out.branch("FatJetAK8_particleNet_HbbvsQCD", "F")
        self.out.branch("FatJetAK8_particleNet_HccvsQCD", "F")
        self.out.branch("FatJetAK8_particleNet_QCD", "F")
        self.out.branch("FatJetAK8_particleNet_TvsQCD", "F")
        self.out.branch("FatJetAK8_particleNet_WvsQCD", "F")
        self.out.branch("FatJetAK8_particleNet_ZvsQCD", "F")
        self.out.branch("FatJetAK8_particleNetMD_QCD_2", "F")
        self.out.branch("FatJetAK8_particleNetMD_Xbb_2", "F")
        self.out.branch("FatJetAK8_particleNetMD_Xcc_2", "F")
        self.out.branch("FatJetAK8_particleNetMD_Xqq_2", "F")
        self.out.branch("FatJetAK8_particleNet_H4qvsQCD_2", "F")
        self.out.branch("FatJetAK8_particleNet_HbbvsQCD_2", "F")
        self.out.branch("FatJetAK8_particleNet_HccvsQCD_2", "F")
        self.out.branch("FatJetAK8_particleNet_QCD_2", "F")
        self.out.branch("FatJetAK8_particleNet_TvsQCD_2", "F")
        self.out.branch("FatJetAK8_particleNet_WvsQCD_2", "F")
        self.out.branch("FatJetAK8_particleNet_ZvsQCD_2", "F")
        self.out.branch("FatJetAK8_particleNetMD_QCD_3", "F")
        self.out.branch("FatJetAK8_particleNetMD_Xbb_3", "F")
        self.out.branch("FatJetAK8_particleNetMD_Xcc_3", "F")
        self.out.branch("FatJetAK8_particleNetMD_Xqq_3", "F")
        self.out.branch("FatJetAK8_particleNet_H4qvsQCD_3", "F")
        self.out.branch("FatJetAK8_particleNet_HbbvsQCD_3", "F")
        self.out.branch("FatJetAK8_particleNet_HccvsQCD_3", "F")
        self.out.branch("FatJetAK8_particleNet_QCD_3", "F")
        self.out.branch("FatJetAK8_particleNet_TvsQCD_3", "F")
        self.out.branch("FatJetAK8_particleNet_WvsQCD_3", "F")
        self.out.branch("FatJetAK8_particleNet_ZvsQCD_3", "F")

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

        self.out.branch("Nj8", "I")
        self.out.branch("m_Jlv", "F")
        self.out.branch("m_JJlv", "F")
        self.out.branch("ST", "F")

        self.is_mc = bool(inputTree.GetBranch("GenJet_pt"))

    def endFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        pass

    def analyze(self, event):

        # PV selection
        if (event.PV_npvsGood<1): return False

        if self.is_mc:
            if self.Process_Genparticles :
                Process_1Lepton_GenMatching_Top(self,event);
                Process_1Lepton_GenMatching_H(self,event);
                Process_1Lepton_GenMatching_W(self,event);
                Process_1Lepton_GenMatching_Z(self,event);
                Process_1Lepton_GenMatching_g(self,event);
                Process_1Lepton_GenMatching_q(self,event);

        lep_pt,lep_eta,lep_phi,lep_m,trackIso,muisolation=-99,-99,-99,-99,-99,-99

        # What's trackIso and muisolation???
        # Muon selection: Highpt ID
        muons = Collection(event, 'Muon')
        # The definition of Collection???
        muon_v4_temp=TLorentzVector()
        looseMuons = []
        for imu in range(0, event.nMuon):
        #print("h",imu,event.Muon_highPtId[imu],type(event.Muon_highPtId[imu]),event.Muon_highPtId[imu]==2,event.Muon_corrected_pt[imu])
            if (event.Muon_highPtId[imu]=='\x02' and event.Muon_tkRelIso[imu] <0.1 and abs(muons[imu].eta)<2.4 and event.Muon_corrected_pt[imu]>20):# to be checked
                trackIso,muisolation=event.Muon_tkRelIso[imu],event.Muon_pfRelIso04_all[imu]
                muon_v4_temp.SetPtEtaPhiM(event.Muon_corrected_pt[imu], muons[imu].eta, muons[imu].phi, muons[imu].mass)
                lep_pt,lep_eta,lep_phi,lep_m=event.Muon_corrected_pt[imu], muons[imu].eta, muons[imu].phi, muons[imu].mass
                looseMuons.append(muon_v4_temp.Clone())
        nLooseMu = len(looseMuons)
        # self.out.fillBranch("nLooseMu", nLooseMu)

        # electron selection: HEEPv7 id
        electrons = Collection(event, 'Electron')
        electron_v4_temp=TLorentzVector()
        looseElectrons = []
        for iele in range(0, event.nElectron):
            if (event.Electron_cutBased_HEEP[iele] and abs(electrons[iele].eta)<2.5 and electrons[iele].pt>35):
                electron_v4_temp.SetPtEtaPhiM(electrons[iele].pt, electrons[iele].eta, electrons[iele].phi, electrons[iele].mass)
                lep_pt,lep_eta,lep_phi,lep_m=electrons[iele].pt, electrons[iele].eta, electrons[iele].phi, electrons[iele].mass
                looseElectrons.append(electron_v4_temp.Clone())
        nLooseEle = len(looseElectrons)

        # require exact 1 lepton and pt > 55 GeV
        # require 0 lepton now

        if not ((nLooseEle+nLooseMu)==0): return False
        
        # MET and leptonicW
        MET_et=event.MET_pt 
        fatjet1,fatjet2,fatjet3=Process_fatJets(self,event)
        Process_1Lepton_Jets(self,event)

        Nj8 = ( fatjet1.Pt()>200 ) + ( fatjet2.Pt()>200 ) + ( fatjet3.Pt()>200 )
        if not ( Nj8 >= 2 ) : return False
        if not ( ( fatjet1.M()>40 ) | (fatjet2.M()>40) | (fatjet3.M()>40) ): return False
        if not ( fatjet1.Pt()>400 ): return False
        self.out.fillBranch("Nj8", Nj8)

        return True

#   PID is the id of events, not PDGID!!!
def Process_1Lepton_GenMatching_LastCopy(nt,PID):
    LastCopyID = -99;
    PGDID = nt.GenPart_pdgId[PID];
    for id in range(0,nt.nGenPart):
        if(nt.GenPart_pdgId[id] == PGDID):#The id'th particle is as same as PID'th particle.!!!
            if (not (nt.GenPart_statusFlags[id]&(1<<13)) ): continue;#Delete middle state particle.!!!
            if(id == PID):
                LastCopyID = PID;
                break;
            else:
                LoopID = id;
                while(nt.GenPart_pdgId[LoopID] == PGDID):
                    LoopID = nt.GenPart_genPartIdxMother[LoopID];
                    if(LoopID == PID):
                        LastCopyID = id;
                        break;
    return LastCopyID;

def Process_1Lepton_GenMatching_daughterindex(nt,MotherId):
    daughter_index=[];
    for id in range(0,nt.nGenPart):
        if (nt.GenPart_genPartIdxMother[id] == MotherId):
            daughter_index.append(id);
    return daughter_index;

def Process_1Lepton_GenMatching_FirstCopy(nt, PID):
    FirstCopyID = -99;
    PGDID = nt.GenPart_pdgId[PID];
    LoopID = PID;
    
    while(nt.GenPart_pdgId[LoopID] == PGDID):
        if((nt.GenPart_statusFlags[LoopID]&(1<<12))>0):
            FirstCopyID = LoopID;
            break;
        if(nt.GenPart_genPartIdxMother[LoopID]) < 0: # need to be checked more carefully
            FirstCopyID = LoopID;
            break;
        LoopID = nt.GenPart_genPartIdxMother[LoopID];
        
    if(FirstCopyID<0):
        LoopID = PID;
        while(nt.GenPart_pdgId[LoopID] == PGDID):
            FirstCopyID = LoopID;
            LoopID = nt.GenPart_genPartIdxMother[LoopID];
    return FirstCopyID;

def Process_1Lepton_GenMatching_Top(self,nt):
    for ik in range(0,nt.nGenPart):
        if (nt.GenPart_pdgId[ik] == 6):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; # isLastCopy

            self.out.fillBranch("gentop_pt", nt.GenPart_pt[ik]);
            self.out.fillBranch("gentop_eta", nt.GenPart_eta[ik]);
            self.out.fillBranch("gentop_phi", nt.GenPart_phi[ik]);
            self.out.fillBranch("gentop_mass", nt.GenPart_mass[ik]);
            
            Top_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,ik);
            NTop_daughter = len(Top_daughter_index)
            if ( NTop_daughter == 2):
                for itopd in range(0,2):
                    if(abs(nt.GenPart_pdgId[Top_daughter_index[itopd]])==24):
                        LastCopyWid = Process_1Lepton_GenMatching_LastCopy(nt,Top_daughter_index[itopd]);

                        self.out.fillBranch("gent_w_pt", nt.GenPart_pt[LastCopyWid]);
                        self.out.fillBranch("gent_w_eta", nt.GenPart_eta[LastCopyWid]);
                        self.out.fillBranch("gent_w_phi", nt.GenPart_phi[LastCopyWid]);
                        self.out.fillBranch("gent_w_mass", nt.GenPart_mass[LastCopyWid]);

                        Top_W_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,LastCopyWid);
                        NW_daughter = len(Top_W_daughter_index)
                        if ( NW_daughter == 2):
                            if( abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])<=6 ): gent_w_tag=4
                            if( abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==11 or abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==12 ): gent_w_tag=1
                            if( abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==13 or abs(nt.GenPart_pdgId[Top_W_daughter_index[1]])==14 ): gent_w_tag=2
                            if( abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==15 or abs(nt.GenPart_pdgId[Top_W_daughter_index[1]])==16 ): gent_w_tag=3
                            self.out.fillBranch("gent_w_tag", gent_w_tag);
                            self.out.fillBranch("gent_w_q1_pt", nt.GenPart_pt[Top_W_daughter_index[0]]);
                            self.out.fillBranch("gent_w_q1_eta", nt.GenPart_eta[Top_W_daughter_index[0]]);
                            self.out.fillBranch("gent_w_q1_phi", nt.GenPart_phi[Top_W_daughter_index[0]]);
                            self.out.fillBranch("gent_w_q1_mass", nt.GenPart_mass[Top_W_daughter_index[0]]);
                            self.out.fillBranch("gent_w_q1_pdg", nt.GenPart_pdgId[Top_W_daughter_index[0]]);
                            self.out.fillBranch("gent_w_q2_pt", nt.GenPart_pt[Top_W_daughter_index[1]]);
                            self.out.fillBranch("gent_w_q2_eta", nt.GenPart_eta[Top_W_daughter_index[1]]);
                            self.out.fillBranch("gent_w_q2_phi", nt.GenPart_phi[Top_W_daughter_index[1]]);
                            self.out.fillBranch("gent_w_q2_mass", nt.GenPart_mass[Top_W_daughter_index[1]]);
                            self.out.fillBranch("gent_w_q2_pdg", nt.GenPart_pdgId[Top_W_daughter_index[1]]);

                    if(abs(nt.GenPart_pdgId[Top_daughter_index[itopd]])==5):
                        self.out.fillBranch("gent_b_pt", nt.GenPart_pt[Top_daughter_index[itopd]]);
                        self.out.fillBranch("gent_b_eta", nt.GenPart_eta[Top_daughter_index[itopd]]);
                        self.out.fillBranch("gent_b_phi", nt.GenPart_phi[Top_daughter_index[itopd]]);
                        self.out.fillBranch("gent_b_mass", nt.GenPart_mass[Top_daughter_index[itopd]]);
        if nt.GenPart_pdgId[ik] == -6 :
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; 

            self.out.fillBranch("genantitop_pt", nt.GenPart_pt[ik]);
            self.out.fillBranch("genantitop_eta", nt.GenPart_eta[ik]);
            self.out.fillBranch("genantitop_phi", nt.GenPart_phi[ik]);
            self.out.fillBranch("genantitop_mass", nt.GenPart_mass[ik]);
            
            Top_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,ik);
            NTop_daughter = len(Top_daughter_index)
            if ( NTop_daughter == 2):
                for itopd in range(0,2):
                    if(abs(nt.GenPart_pdgId[Top_daughter_index[itopd]])==24):
                        LastCopyWid = Process_1Lepton_GenMatching_LastCopy(nt,Top_daughter_index[itopd]);

                        self.out.fillBranch("genantit_w_pt", nt.GenPart_pt[LastCopyWid]);
                        self.out.fillBranch("genantit_w_eta", nt.GenPart_eta[LastCopyWid]);
                        self.out.fillBranch("genantit_w_phi", nt.GenPart_phi[LastCopyWid]);
                        self.out.fillBranch("genantit_w_mass", nt.GenPart_mass[LastCopyWid]);

                        Top_W_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,LastCopyWid);
                        NW_daughter = len(Top_W_daughter_index)
                        if ( NW_daughter == 2):
                            # print("W's daughter 0's pdgId is",nt.GenPart_pdgId[Top_W_daughter_index[0]])
                            if( abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])<=6 ): genantit_w_tag=4
                            if( abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==11 or abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==12 ): genantit_w_tag=1
                            if( abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==13 or abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==14 ): genantit_w_tag=2
                            if( abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==15 or abs(nt.GenPart_pdgId[Top_W_daughter_index[0]])==16 ): genantit_w_tag=3
                            
                            self.out.fillBranch("genantit_w_tag", genantit_w_tag);
                            self.out.fillBranch("genantit_w_q1_pt", nt.GenPart_pt[Top_W_daughter_index[0]]);
                            self.out.fillBranch("genantit_w_q1_eta", nt.GenPart_eta[Top_W_daughter_index[0]]);
                            self.out.fillBranch("genantit_w_q1_phi", nt.GenPart_phi[Top_W_daughter_index[0]]);
                            self.out.fillBranch("genantit_w_q1_mass", nt.GenPart_mass[Top_W_daughter_index[0]]);
                            self.out.fillBranch("genantit_w_q1_pdg", nt.GenPart_pdgId[Top_W_daughter_index[0]]);
                            self.out.fillBranch("genantit_w_q2_pt", nt.GenPart_pt[Top_W_daughter_index[1]]);
                            self.out.fillBranch("genantit_w_q2_eta", nt.GenPart_eta[Top_W_daughter_index[1]]);
                            self.out.fillBranch("genantit_w_q2_phi", nt.GenPart_phi[Top_W_daughter_index[1]]);
                            self.out.fillBranch("genantit_w_q2_mass", nt.GenPart_mass[Top_W_daughter_index[1]]);
                            self.out.fillBranch("genantit_w_q2_pdg", nt.GenPart_pdgId[Top_W_daughter_index[1]]);

                    if(abs(nt.GenPart_pdgId[Top_daughter_index[itopd]])==5):
                        self.out.fillBranch("genantit_b_pt", nt.GenPart_pt[Top_daughter_index[itopd]]);
                        self.out.fillBranch("genantit_b_eta", nt.GenPart_eta[Top_daughter_index[itopd]]);
                        self.out.fillBranch("genantit_b_phi", nt.GenPart_phi[Top_daughter_index[itopd]]);
                        self.out.fillBranch("genantit_b_mass", nt.GenPart_mass[Top_daughter_index[itopd]]);

def Process_1Lepton_GenMatching_H(self,nt):
    for ik in range(0,nt.nGenPart):
        if (nt.GenPart_pdgId[ik] == 25 ):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue;# isLastCopy
            # print("Higgs's pt is",nt.GenPart_pt[ik]);
            # Select only boosted Higgs.
#                if(nt.GenPart_pt[ik]<450):break
            self.out.fillBranch("genH_pt", nt.GenPart_pt[ik]);
            self.out.fillBranch("genH_eta", nt.GenPart_eta[ik]);
            self.out.fillBranch("genH_phi", nt.GenPart_phi[ik]);
            self.out.fillBranch("genH_mass", nt.GenPart_mass[ik]);
            
            H_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,ik);
            NH_daughter = len(H_daughter_index)
            # print(NH_daughter)
            #For test!!!
            if ( NH_daughter == 2):
                for itopd in range(0,2):
                    if(nt.GenPart_pdgId[H_daughter_index[itopd]]==5):
                        LastCopyb1id = H_daughter_index[itopd];
                        self.out.fillBranch("genH_b1_pt", nt.GenPart_pt[LastCopyb1id]);
                        self.out.fillBranch("genH_b1_eta", nt.GenPart_eta[LastCopyb1id]);
                        self.out.fillBranch("genH_b1_phi", nt.GenPart_phi[LastCopyb1id]);
                        self.out.fillBranch("genH_b1_mass", nt.GenPart_mass[LastCopyb1id]);

                        H_b1_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,LastCopyb1id);
                        Nb1_daughter = len(H_b1_daughter_index)
                        #For test!!!
                        # print(NW1_daughter)
                        if ( Nb1_daughter == 2):
                            genH_b1_tag=-99
                            # print("W1's daughter 0's pdgId is",nt.GenPart_pdgId[H_W1_daughter_index[0]])
                            if( abs(nt.GenPart_pdgId[H_b1_daughter_index[0]])<=6 ): genH_b1_tag=4
                            if( abs(nt.GenPart_pdgId[H_b1_daughter_index[0]])==11 or abs(nt.GenPart_pdgId[H_b1_daughter_index[0]])==12 ): genH_b1_tag=1
                            if( abs(nt.GenPart_pdgId[H_b1_daughter_index[0]])==13 or abs(nt.GenPart_pdgId[H_b1_daughter_index[0]])==14 ): genH_b1_tag=2
                            if( abs(nt.GenPart_pdgId[H_b1_daughter_index[0]])==15 or abs(nt.GenPart_pdgId[H_b1_daughter_index[0]])==16 ): genH_b1_tag=3
                            
            #print("b's daughter is",nt.GenPart_pdgId[H_b1_daughter_index[0]])
                            
                            self.out.fillBranch("genH_b1_tag", genH_b1_tag);
                            self.out.fillBranch("genH_b1_q1_pt", nt.GenPart_pt[H_b1_daughter_index[0]]);
                            self.out.fillBranch("genH_b1_q1_eta", nt.GenPart_eta[H_b1_daughter_index[0]]);
                            self.out.fillBranch("genH_b1_q1_phi", nt.GenPart_phi[H_b1_daughter_index[0]]);
                            self.out.fillBranch("genH_b1_q1_mass", nt.GenPart_mass[H_b1_daughter_index[0]]);
                            self.out.fillBranch("genH_b1_q1_pdg", nt.GenPart_pdgId[H_b1_daughter_index[0]]);
                            self.out.fillBranch("genH_b1_q2_pt", nt.GenPart_pt[H_b1_daughter_index[1]]);
                            self.out.fillBranch("genH_b1_q2_eta", nt.GenPart_eta[H_b1_daughter_index[1]]);
                            self.out.fillBranch("genH_b1_q2_phi", nt.GenPart_phi[H_b1_daughter_index[1]]);
                            self.out.fillBranch("genH_b1_q2_mass", nt.GenPart_mass[H_b1_daughter_index[1]]);
                            self.out.fillBranch("genH_b1_q2_pdg", nt.GenPart_pdgId[H_b1_daughter_index[1]]);
                    if(nt.GenPart_pdgId[H_daughter_index[itopd]]==-5):
                        LastCopyb2id = H_daughter_index[itopd];
                        # print("Last copy b2 id is ",LastCopyb2id)
                        self.out.fillBranch("genH_b2_pt", nt.GenPart_pt[LastCopyb2id]);
                        self.out.fillBranch("genH_b2_eta", nt.GenPart_eta[LastCopyb2id]);
                        self.out.fillBranch("genH_b2_phi", nt.GenPart_phi[LastCopyb2id]);
                        self.out.fillBranch("genH_b2_mass", nt.GenPart_mass[LastCopyb2id]);

                        H_b2_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,LastCopyb2id);
                        Nb2_daughter = len(H_b2_daughter_index)
                        #For test!!!
                        # print(NW1_daughter)
                        if ( Nb2_daughter == 2):
                            genH_b2_tag=-99
                            # print("W1's daughter 0's pdgId is",nt.GenPart_pdgId[H_W1_daughter_index[0]])
                            if( abs(nt.GenPart_pdgId[H_b2_daughter_index[0]])<=6 ): genH_b2_tag=4
                            if( abs(nt.GenPart_pdgId[H_b2_daughter_index[0]])==11 or abs(nt.GenPart_pdgId[H_b2_daughter_index[0]])==12 ): genH_b2_tag=1
                            if( abs(nt.GenPart_pdgId[H_b2_daughter_index[0]])==13 or abs(nt.GenPart_pdgId[H_b2_daughter_index[0]])==14 ): genH_b2_tag=2
                            if( abs(nt.GenPart_pdgId[H_b2_daughter_index[0]])==15 or abs(nt.GenPart_pdgId[H_b2_daughter_index[0]])==16 ): genH_b2_tag=3
                            # print(genH_w1_tag)
                            self.out.fillBranch("genH_b2_tag", genH_b2_tag);
                            self.out.fillBranch("genH_b2_q1_pt", nt.GenPart_pt[H_b2_daughter_index[0]]);
                            self.out.fillBranch("genH_b2_q1_eta", nt.GenPart_eta[H_b2_daughter_index[0]]);
                            self.out.fillBranch("genH_b2_q1_phi", nt.GenPart_phi[H_b2_daughter_index[0]]);
                            self.out.fillBranch("genH_b2_q1_mass", nt.GenPart_mass[H_b2_daughter_index[0]]);
                            self.out.fillBranch("genH_b2_q1_pdg", nt.GenPart_pdgId[H_b2_daughter_index[0]]);
                            self.out.fillBranch("genH_b2_q2_pt", nt.GenPart_pt[H_b2_daughter_index[1]]);
                            self.out.fillBranch("genH_b2_q2_eta", nt.GenPart_eta[H_b2_daughter_index[1]]);
                            self.out.fillBranch("genH_b2_q2_phi", nt.GenPart_phi[H_b2_daughter_index[1]]);
                            self.out.fillBranch("genH_b2_q2_mass", nt.GenPart_mass[H_b2_daughter_index[1]]);
                            self.out.fillBranch("genH_b2_q2_pdg", nt.GenPart_pdgId[H_b2_daughter_index[1]]);
                    if(nt.GenPart_pdgId[H_daughter_index[itopd]]==24):
                        LastCopyW1id = Process_1Lepton_GenMatching_LastCopy(nt,H_daughter_index[itopd]);

                        self.out.fillBranch("genH_w1_pt", nt.GenPart_pt[LastCopyW1id]);
                        self.out.fillBranch("genH_w1_eta", nt.GenPart_eta[LastCopyW1id]);
                        self.out.fillBranch("genH_w1_phi", nt.GenPart_phi[LastCopyW1id]);
                        self.out.fillBranch("genH_w1_mass", nt.GenPart_mass[LastCopyW1id]);

                        H_W1_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,LastCopyW1id);
                        NW1_daughter = len(H_W1_daughter_index)
                        #For test!!!
                        # print(NW1_daughter)
                        if ( NW1_daughter == 2):
                            # genH_w1_tag=-99
                            # print("W1's daughter 0's pdgId is",nt.GenPart_pdgId[H_W1_daughter_index[0]])
                            if( abs(nt.GenPart_pdgId[H_W1_daughter_index[0]])<=6 ): genH_w1_tag=4
                            if( abs(nt.GenPart_pdgId[H_W1_daughter_index[0]])==11 or abs(nt.GenPart_pdgId[H_W1_daughter_index[0]])==12 ): genH_w1_tag=1
                            if( abs(nt.GenPart_pdgId[H_W1_daughter_index[0]])==13 or abs(nt.GenPart_pdgId[H_W1_daughter_index[0]])==14 ): genH_w1_tag=2
                            if( abs(nt.GenPart_pdgId[H_W1_daughter_index[0]])==15 or abs(nt.GenPart_pdgId[H_W1_daughter_index[0]])==16 ): genH_w1_tag=3
                            # print(genH_w1_tag)
                            self.out.fillBranch("genH_w1_tag", genH_w1_tag);
                            self.out.fillBranch("genH_w1_q1_pt", nt.GenPart_pt[H_W1_daughter_index[0]]);
                            self.out.fillBranch("genH_w1_q1_eta", nt.GenPart_eta[H_W1_daughter_index[0]]);
                            self.out.fillBranch("genH_w1_q1_phi", nt.GenPart_phi[H_W1_daughter_index[0]]);
                            self.out.fillBranch("genH_w1_q1_mass", nt.GenPart_mass[H_W1_daughter_index[0]]);
                            self.out.fillBranch("genH_w1_q1_pdg", nt.GenPart_pdgId[H_W1_daughter_index[0]]);
                            self.out.fillBranch("genH_w1_q2_pt", nt.GenPart_pt[H_W1_daughter_index[1]]);
                            self.out.fillBranch("genH_w1_q2_eta", nt.GenPart_eta[H_W1_daughter_index[1]]);
                            self.out.fillBranch("genH_w1_q2_phi", nt.GenPart_phi[H_W1_daughter_index[1]]);
                            self.out.fillBranch("genH_w1_q2_mass", nt.GenPart_mass[H_W1_daughter_index[1]]);
                            self.out.fillBranch("genH_w1_q2_pdg", nt.GenPart_pdgId[H_W1_daughter_index[1]]);
                

                    if(nt.GenPart_pdgId[H_daughter_index[itopd]]==-24):
                        LastCopyW2id = Process_1Lepton_GenMatching_LastCopy(nt,H_daughter_index[itopd]);

                        self.out.fillBranch("genH_w2_pt", nt.GenPart_pt[LastCopyW2id]);
                        self.out.fillBranch("genH_w2_eta", nt.GenPart_eta[LastCopyW2id]);
                        self.out.fillBranch("genH_w2_phi", nt.GenPart_phi[LastCopyW2id]);
                        self.out.fillBranch("genH_w2_mass", nt.GenPart_mass[LastCopyW2id]);

                        H_W2_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,LastCopyW2id);
                        NW2_daughter = len(H_W2_daughter_index)
                        if ( NW2_daughter == 2):
                            if( abs(nt.GenPart_pdgId[H_W2_daughter_index[0]])<=6 ): genH_w2_tag=4
                            if( abs(nt.GenPart_pdgId[H_W2_daughter_index[0]])==11 or abs(nt.GenPart_pdgId[H_W2_daughter_index[0]])==12 ): genH_w2_tag=1
                            if( abs(nt.GenPart_pdgId[H_W2_daughter_index[0]])==13 or abs(nt.GenPart_pdgId[H_W2_daughter_index[0]])==14 ): genH_w2_tag=2
                            if( abs(nt.GenPart_pdgId[H_W2_daughter_index[0]])==15 or abs(nt.GenPart_pdgId[H_W2_daughter_index[0]])==16 ): genH_w2_tag=3
            
            
                            self.out.fillBranch("genH_w2_tag", genH_w2_tag);
                            self.out.fillBranch("genH_w2_q1_pt", nt.GenPart_pt[H_W2_daughter_index[0]]);
                            self.out.fillBranch("genH_w2_q1_eta", nt.GenPart_eta[H_W2_daughter_index[0]]);
                            self.out.fillBranch("genH_w2_q1_phi", nt.GenPart_phi[H_W2_daughter_index[0]]);
                            self.out.fillBranch("genH_w2_q1_mass", nt.GenPart_mass[H_W2_daughter_index[0]]);
                            self.out.fillBranch("genH_w2_q1_pdg", nt.GenPart_pdgId[H_W2_daughter_index[0]]);
                            self.out.fillBranch("genH_w2_q2_pt", nt.GenPart_pt[H_W2_daughter_index[1]]);
                            self.out.fillBranch("genH_w2_q2_eta", nt.GenPart_eta[H_W2_daughter_index[1]]);
                            self.out.fillBranch("genH_w2_q2_phi", nt.GenPart_phi[H_W2_daughter_index[1]]);
                            self.out.fillBranch("genH_w2_q2_mass", nt.GenPart_mass[H_W2_daughter_index[1]]);
                            self.out.fillBranch("genH_w2_q2_pdg", nt.GenPart_pdgId[H_W2_daughter_index[1]]);                

def Process_1Lepton_GenMatching_W(self,nt):
    genw_q1_eta=[]
    phigenwl=[]
    etagenwl=[]
    massgenwl=[]
    genw_q2_pdg=[]
    genw_q2_pt=[]
    ptgenwl=[]
    genw_q2_mass=[]
    genw_q2_eta=[]
    massgenwf=[]
    etagenwf=[]
    genw_q2_phi=[]
    taggenwl=[]
    ptgenwf=[]
    genw_q1_phi=[]
    genw_q1_mass=[]
    genw_q1_pt=[]
    genw_q1_pdg=[]
    phigenwf=[]
    for ik in range(0,nt.nGenPart):
        if (abs(nt.GenPart_pdgId[ik]) == 24):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; 
            ptgenwl.append(nt.GenPart_pt[ik]);
            etagenwl.append(nt.GenPart_eta[ik]);
            phigenwl.append(nt.GenPart_phi[ik]);
            massgenwl.append(nt.GenPart_mass[ik]);

            FirstCopy = Process_1Lepton_GenMatching_FirstCopy(nt,ik);
            ptgenwf.append(nt.GenPart_pt[FirstCopy]);
            etagenwf.append(nt.GenPart_eta[FirstCopy]);
            phigenwf.append(nt.GenPart_phi[FirstCopy]);
            massgenwf.append(nt.GenPart_mass[FirstCopy]);

            W_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,ik);
            NW_daughter = len(W_daughter_index)
            if ( NW_daughter == 2):
                if( abs(nt.GenPart_pdgId[W_daughter_index[0]])<=6 ):  taggenwl.append(4)
                if( abs(nt.GenPart_pdgId[W_daughter_index[0]])==11 or abs(nt.GenPart_pdgId[W_daughter_index[0]])==12 ):taggenwl.append(1)
                if( abs(nt.GenPart_pdgId[W_daughter_index[0]])==13 or abs(nt.GenPart_pdgId[W_daughter_index[0]])==14 ):taggenwl.append(2)
                if( abs(nt.GenPart_pdgId[W_daughter_index[0]])==15 or abs(nt.GenPart_pdgId[W_daughter_index[0]])==16 ):taggenwl.append(3)
                genw_q1_pt.append(nt.GenPart_pt[W_daughter_index[0]]);
                genw_q1_eta.append(nt.GenPart_eta[W_daughter_index[0]]);
                genw_q1_phi.append(nt.GenPart_phi[W_daughter_index[0]]);
                genw_q1_mass.append(nt.GenPart_mass[W_daughter_index[0]]);
                genw_q1_pdg.append(nt.GenPart_pdgId[W_daughter_index[0]]);
                genw_q2_pt.append(nt.GenPart_pt[W_daughter_index[1]]);
                genw_q2_eta.append(nt.GenPart_eta[W_daughter_index[1]]);
                genw_q2_phi.append(nt.GenPart_phi[W_daughter_index[1]]);
                genw_q2_mass.append(nt.GenPart_mass[W_daughter_index[1]]);
                genw_q2_pdg.append(nt.GenPart_pdgId[W_daughter_index[1]]);
    genw_q1_phi.extend(np.zeros(5-len(genw_q1_phi),int))
    genw_q2_pt.extend(np.zeros(5-len(genw_q2_pt),int))
    genw_q1_pt.extend(np.zeros(5-len(genw_q1_pt),int))
    genw_q2_phi.extend(np.zeros(5-len(genw_q2_phi),int))
    genw_q1_mass.extend(np.zeros(5-len(genw_q1_mass),int))
    massgenwl.extend(np.zeros(5-len(massgenwl),int))
    etagenwf.extend(np.zeros(5-len(etagenwf),int))
    phigenwf.extend(np.zeros(5-len(phigenwf),int))
    genw_q1_pdg.extend(np.zeros(5-len(genw_q1_pdg),int))
    ptgenwl.extend(np.zeros(5-len(ptgenwl),int))
    genw_q2_mass.extend(np.zeros(5-len(genw_q2_mass),int))
    taggenwl.extend(np.zeros(5-len(taggenwl),int))
    etagenwl.extend(np.zeros(5-len(etagenwl),int))
    ptgenwf.extend(np.zeros(5-len(ptgenwf),int))
    genw_q1_eta.extend(np.zeros(5-len(genw_q1_eta),int))
    massgenwf.extend(np.zeros(5-len(massgenwf),int))
    genw_q2_eta.extend(np.zeros(5-len(genw_q2_eta),int))
    phigenwl.extend(np.zeros(5-len(phigenwl),int))
    genw_q2_pdg.extend(np.zeros(5-len(genw_q2_pdg),int))
    self.out.fillBranch("genw_q1_phi", genw_q1_phi)
    self.out.fillBranch("genw_q2_pt", genw_q2_pt)
    self.out.fillBranch("genw_q1_pt", genw_q1_pt)
    self.out.fillBranch("genw_q2_phi", genw_q2_phi)
    self.out.fillBranch("genw_q1_mass", genw_q1_mass)
    self.out.fillBranch("massgenwl", massgenwl)
    self.out.fillBranch("etagenwf", etagenwf)
    self.out.fillBranch("phigenwf", phigenwf)
    self.out.fillBranch("genw_q1_pdg", genw_q1_pdg)
    self.out.fillBranch("ptgenwl", ptgenwl)
    self.out.fillBranch("genw_q2_mass", genw_q2_mass)
    self.out.fillBranch("taggenwl", taggenwl)
    self.out.fillBranch("etagenwl", etagenwl)
    self.out.fillBranch("ptgenwf", ptgenwf)
    self.out.fillBranch("genw_q1_eta", genw_q1_eta)
    self.out.fillBranch("massgenwf", massgenwf)
    self.out.fillBranch("genw_q2_eta", genw_q2_eta)
    self.out.fillBranch("phigenwl", phigenwl)
    self.out.fillBranch("genw_q2_pdg", genw_q2_pdg)


def Process_1Lepton_GenMatching_Z(self,nt):
    phigenzl=[]
    etagenzl=[]
    massgenzl=[]
    ptgenzl=[]
    massgenzf=[]
    etagenzf=[]
    taggenzl=[]
    ptgenzf=[]
    phigenzf=[]
    for ik in range(0,nt.nGenPart):
        if (abs(nt.GenPart_pdgId[ik]) == 23):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; 
            ptgenzl.append(nt.GenPart_pt[ik]);
            etagenzl.append(nt.GenPart_eta[ik]);
            phigenzl.append(nt.GenPart_phi[ik]);
            massgenzl.append(nt.GenPart_mass[ik]);

            FirstCopy = Process_1Lepton_GenMatching_FirstCopy(nt,ik);
            ptgenzf.append(nt.GenPart_pt[FirstCopy]);
            etagenzf.append(nt.GenPart_eta[FirstCopy]);
            phigenzf.append(nt.GenPart_phi[FirstCopy]);
            massgenzf.append(nt.GenPart_mass[FirstCopy]);

            Z_daughter_index = Process_1Lepton_GenMatching_daughterindex(nt,ik);
            NZ_daughter = len(Z_daughter_index)
            if ( NZ_daughter == 2):
                if( abs(nt.GenPart_pdgId[Z_daughter_index[0]])<=6 ):  taggenzl.append(4)
                if( abs(nt.GenPart_pdgId[Z_daughter_index[0]])==11 or abs(nt.GenPart_pdgId[Z_daughter_index[1]])==12 ):taggenzl.append(1)
                if( abs(nt.GenPart_pdgId[Z_daughter_index[0]])==12 or abs(nt.GenPart_pdgId[Z_daughter_index[1]])==13 ):taggenzl.append(2)
                if( abs(nt.GenPart_pdgId[Z_daughter_index[0]])==14 or abs(nt.GenPart_pdgId[Z_daughter_index[1]])==15 ):taggenzl.append(3)
                # genz_q1_pt.append(nt.GenPart_pt[Z_daughter_index[0]]);
    phigenzl.extend(np.zeros(5-len(phigenzl),int))
    etagenzl.extend(np.zeros(5-len(etagenzl),int))
    massgenzl.extend(np.zeros(5-len(massgenzl),int))
    ptgenzl.extend(np.zeros(5-len(ptgenzl),int))
    massgenzf.extend(np.zeros(5-len(massgenzf),int))
    etagenzf.extend(np.zeros(5-len(etagenzf),int))
    taggenzl.extend(np.zeros(5-len(taggenzl),int))
    ptgenzf.extend(np.zeros(5-len(ptgenzf),int))
    phigenzf.extend(np.zeros(5-len(phigenzf),int))
    self.out.fillBranch("phigenzl", phigenzl)
    self.out.fillBranch("etagenzl", etagenzl)
    self.out.fillBranch("massgenzl", massgenzl)
    self.out.fillBranch("ptgenzl", ptgenzl)
    self.out.fillBranch("massgenzf", massgenzf)
    self.out.fillBranch("etagenzf", etagenzf)
    self.out.fillBranch("taggenzl", taggenzl)
    self.out.fillBranch("ptgenzf", ptgenzf)
    self.out.fillBranch("phigenzf", phigenzf)


def Process_1Lepton_GenMatching_g(self,nt):
    phigengl=[]
    etagengl=[]
    massgengl=[]
    ptgengl=[]
    massgengf=[]
    etagengf=[]
    taggengl=[]
    ptgengf=[]
    phigengf=[]
    mothergengf=[]
    for ik in range(0,nt.nGenPart):
        if (abs(nt.GenPart_pdgId[ik]) == 21):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; 
            if( nt.GenPart_pt[ik] > 50 ):
                if len(phigengl)==10 : break
                ptgengl.append(nt.GenPart_pt[ik]);
                etagengl.append(nt.GenPart_eta[ik]);
                phigengl.append(nt.GenPart_phi[ik]);
                massgengl.append(nt.GenPart_mass[ik]);

                FirstCopy = Process_1Lepton_GenMatching_FirstCopy(nt,ik);
                ptgengf.append(nt.GenPart_pt[FirstCopy]);
                etagengf.append(nt.GenPart_eta[FirstCopy]);
                phigengf.append(nt.GenPart_phi[FirstCopy]);
                massgengf.append(nt.GenPart_mass[FirstCopy]);
                if(nt.GenPart_genPartIdxMother[FirstCopy]>0):
                    mothergengf.append(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]);

    phigengl.extend(np.zeros(10-len(phigengl),int))
    etagengl.extend(np.zeros(10-len(etagengl),int))
    massgengl.extend(np.zeros(10-len(massgengl),int))
    ptgengl.extend(np.zeros(10-len(ptgengl),int))
    massgengf.extend(np.zeros(10-len(massgengf),int))
    etagengf.extend(np.zeros(10-len(etagengf),int))
    mothergengf.extend(np.zeros(10-len(mothergengf),int))
    ptgengf.extend(np.zeros(10-len(ptgengf),int))
    phigengf.extend(np.zeros(10-len(phigengf),int))
    self.out.fillBranch("phigengl", phigengl)
    self.out.fillBranch("etagengl", etagengl)
    self.out.fillBranch("massgengl", massgengl)
    self.out.fillBranch("ptgengl", ptgengl)
    self.out.fillBranch("massgengf", massgengf)
    self.out.fillBranch("etagengf", etagengf)
    self.out.fillBranch("mothergengf", mothergengf)
    self.out.fillBranch("ptgengf", ptgengf)
    self.out.fillBranch("phigengf", phigengf)


def Process_1Lepton_GenMatching_q(self,nt):
    ptgenq1f=[]
    massgenq1l=[]
    etagenq1f=[]
    phigenq1f=[]
    mothergenq1f=[]
    etagenq1l=[]
    phigenq1l=[]
    massgenq1f=[]
    ptgenq1l=[]
    for ik in range(0,nt.nGenPart):
        if (abs(nt.GenPart_pdgId[ik]) == 1):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; 
            if( nt.GenPart_pt[ik] > 50 ):
                if len(phigenq1l)==10 : break
                FirstCopy = Process_1Lepton_GenMatching_FirstCopy(nt,ik)
                Fill_Quark = False
                if (nt.GenPart_genPartIdxMother[FirstCopy] < 0):
                    Fill_Quark = True # need to be checked more carefully
                if(nt.GenPart_genPartIdxMother[FirstCopy] >= 0):
                    if(abs(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]) != 24):
                        Fill_Quark = True
                if Fill_Quark:
                    ptgenq1l.append(nt.GenPart_pt[ik]);
                    etagenq1l.append(nt.GenPart_eta[ik]);
                    phigenq1l.append(nt.GenPart_phi[ik]);
                    massgenq1l.append(nt.GenPart_mass[ik]);

                    ptgenq1f.append(nt.GenPart_pt[FirstCopy]);
                    etagenq1f.append(nt.GenPart_eta[FirstCopy]);
                    phigenq1f.append(nt.GenPart_phi[FirstCopy]);
                    massgenq1f.append(nt.GenPart_mass[FirstCopy]);
                    if nt.GenPart_genPartIdxMother[FirstCopy]<0: # need to be checked more carefully
                        mothergenq1f.append(-99);
                    else:
                        mothergenq1f.append(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]);
    ptgenq1f.extend(np.zeros(10-len(ptgenq1f),int))
    massgenq1l.extend(np.zeros(10-len(massgenq1l),int))
    etagenq1f.extend(np.zeros(10-len(etagenq1f),int))
    phigenq1f.extend(np.zeros(10-len(phigenq1f),int))
    mothergenq1f.extend(np.zeros(10-len(mothergenq1f),int))
    etagenq1l.extend(np.zeros(10-len(etagenq1l),int))
    phigenq1l.extend(np.zeros(10-len(phigenq1l),int))
    massgenq1f.extend(np.zeros(10-len(massgenq1f),int))
    ptgenq1l.extend(np.zeros(10-len(ptgenq1l),int))
    self.out.fillBranch("ptgenq1f", ptgenq1f)
    self.out.fillBranch("massgenq1l", massgenq1l)
    self.out.fillBranch("etagenq1f", etagenq1f)
    self.out.fillBranch("phigenq1f", phigenq1f)
    self.out.fillBranch("mothergenq1f", mothergenq1f)
    self.out.fillBranch("etagenq1l", etagenq1l)
    self.out.fillBranch("phigenq1l", phigenq1l)
    self.out.fillBranch("massgenq1f", massgenq1f)
    self.out.fillBranch("ptgenq1l", ptgenq1l)

    ptgenq2f=[]
    massgenq2l=[]
    etagenq2f=[]
    phigenq2f=[]
    mothergenq2f=[]
    etagenq2l=[]
    phigenq2l=[]
    massgenq2f=[]
    ptgenq2l=[]
    for ik in range(0,nt.nGenPart):
        if (abs(nt.GenPart_pdgId[ik]) == 2):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; 
            if( nt.GenPart_pt[ik] > 50 ):
                if len(phigenq2l)==10 : break
                FirstCopy = Process_1Lepton_GenMatching_FirstCopy(nt,ik);
                Fill_Quark = False
                if (nt.GenPart_genPartIdxMother[FirstCopy] < 0):
                    Fill_Quark = True # need to be checked more carefully
                if(nt.GenPart_genPartIdxMother[FirstCopy] >= 0):
                    if(abs(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]) != 24):
                        Fill_Quark = True
                if Fill_Quark:
                    ptgenq2l.append(nt.GenPart_pt[ik]);
                    etagenq2l.append(nt.GenPart_eta[ik]);
                    phigenq2l.append(nt.GenPart_phi[ik]);
                    massgenq2l.append(nt.GenPart_mass[ik]);

                    ptgenq2f.append(nt.GenPart_pt[FirstCopy]);
                    etagenq2f.append(nt.GenPart_eta[FirstCopy]);
                    phigenq2f.append(nt.GenPart_phi[FirstCopy]);
                    massgenq2f.append(nt.GenPart_mass[FirstCopy]);
                    if nt.GenPart_genPartIdxMother[FirstCopy]<0: # need to be checked more carefully
                        mothergenq2f.append(-99);
                    else:
                        mothergenq2f.append(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]);
    ptgenq2f.extend(np.zeros(10-len(ptgenq2f),int))
    massgenq2l.extend(np.zeros(10-len(massgenq2l),int))
    etagenq2f.extend(np.zeros(10-len(etagenq2f),int))
    phigenq2f.extend(np.zeros(10-len(phigenq2f),int))
    mothergenq2f.extend(np.zeros(10-len(mothergenq2f),int))
    etagenq2l.extend(np.zeros(10-len(etagenq2l),int))
    phigenq2l.extend(np.zeros(10-len(phigenq2l),int))
    massgenq2f.extend(np.zeros(10-len(massgenq2f),int))
    ptgenq2l.extend(np.zeros(10-len(ptgenq2l),int))
    self.out.fillBranch("ptgenq2f", ptgenq2f)
    self.out.fillBranch("massgenq2l", massgenq2l)
    self.out.fillBranch("etagenq2f", etagenq2f)
    self.out.fillBranch("phigenq2f", phigenq2f)
    self.out.fillBranch("mothergenq2f", mothergenq2f)
    self.out.fillBranch("etagenq2l", etagenq2l)
    self.out.fillBranch("phigenq2l", phigenq2l)
    self.out.fillBranch("massgenq2f", massgenq2f)
    self.out.fillBranch("ptgenq2l", ptgenq2l)

    ptgenq3f=[]
    massgenq3l=[]
    etagenq3f=[]
    phigenq3f=[]
    mothergenq3f=[]
    etagenq3l=[]
    phigenq3l=[]
    massgenq3f=[]
    ptgenq3l=[]
    for ik in range(0,nt.nGenPart):
        if (abs(nt.GenPart_pdgId[ik]) == 3):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; 
            if( nt.GenPart_pt[ik] > 50 ):
                if len(phigenq3l)==10 : break
                FirstCopy = Process_1Lepton_GenMatching_FirstCopy(nt,ik);
                Fill_Quark = False
                if (nt.GenPart_genPartIdxMother[FirstCopy] < 0):
                    Fill_Quark = True # need to be checked more carefully
                if(nt.GenPart_genPartIdxMother[FirstCopy] >= 0):
                    if(abs(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]) != 24):
                        Fill_Quark = True
                if Fill_Quark:
                    ptgenq3l.append(nt.GenPart_pt[ik]);
                    etagenq3l.append(nt.GenPart_eta[ik]);
                    phigenq3l.append(nt.GenPart_phi[ik]);
                    massgenq3l.append(nt.GenPart_mass[ik]);

                    ptgenq3f.append(nt.GenPart_pt[FirstCopy]);
                    etagenq3f.append(nt.GenPart_eta[FirstCopy]);
                    phigenq3f.append(nt.GenPart_phi[FirstCopy]);
                    massgenq3f.append(nt.GenPart_mass[FirstCopy]);
                    if nt.GenPart_genPartIdxMother[FirstCopy]<0: # need to be checked more carefully
                        mothergenq3f.append(-99);
                    else:
                        mothergenq3f.append(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]);
    ptgenq3f.extend(np.zeros(10-len(ptgenq3f),int))
    massgenq3l.extend(np.zeros(10-len(massgenq3l),int))
    etagenq3f.extend(np.zeros(10-len(etagenq3f),int))
    phigenq3f.extend(np.zeros(10-len(phigenq3f),int))
    mothergenq3f.extend(np.zeros(10-len(mothergenq3f),int))
    etagenq3l.extend(np.zeros(10-len(etagenq3l),int))
    phigenq3l.extend(np.zeros(10-len(phigenq3l),int))
    massgenq3f.extend(np.zeros(10-len(massgenq3f),int))
    ptgenq3l.extend(np.zeros(10-len(ptgenq3l),int))
    self.out.fillBranch("ptgenq3f", ptgenq3f)
    self.out.fillBranch("massgenq3l", massgenq3l)
    self.out.fillBranch("etagenq3f", etagenq3f)
    self.out.fillBranch("phigenq3f", phigenq3f)
    self.out.fillBranch("mothergenq3f", mothergenq3f)
    self.out.fillBranch("etagenq3l", etagenq3l)
    self.out.fillBranch("phigenq3l", phigenq3l)
    self.out.fillBranch("massgenq3f", massgenq3f)
    self.out.fillBranch("ptgenq3l", ptgenq3l)

    ptgenq4f=[]
    massgenq4l=[]
    etagenq4f=[]
    phigenq4f=[]
    mothergenq4f=[]
    etagenq4l=[]
    phigenq4l=[]
    massgenq4f=[]
    ptgenq4l=[]
    for ik in range(0,nt.nGenPart):
        if (abs(nt.GenPart_pdgId[ik]) == 4):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; 
            if( nt.GenPart_pt[ik] > 50 ):
                if len(phigenq4l)==10 : break
                FirstCopy = Process_1Lepton_GenMatching_FirstCopy(nt,ik);
                Fill_Quark = False
                if (nt.GenPart_genPartIdxMother[FirstCopy] < 0):
                    Fill_Quark = True # need to be checked more carefully
                if(nt.GenPart_genPartIdxMother[FirstCopy] >= 0):
                    if(abs(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]) != 24):
                        Fill_Quark = True
                if Fill_Quark:
                    ptgenq4l.append(nt.GenPart_pt[ik]);
                    etagenq4l.append(nt.GenPart_eta[ik]);
                    phigenq4l.append(nt.GenPart_phi[ik]);
                    massgenq4l.append(nt.GenPart_mass[ik]);

                    ptgenq4f.append(nt.GenPart_pt[FirstCopy]);
                    etagenq4f.append(nt.GenPart_eta[FirstCopy]);
                    phigenq4f.append(nt.GenPart_phi[FirstCopy]);
                    massgenq4f.append(nt.GenPart_mass[FirstCopy]);
                    if nt.GenPart_genPartIdxMother[FirstCopy]<0: # need to be checked more carefully
                        mothergenq4f.append(-99);
                    else:
                        mothergenq4f.append(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]);
    ptgenq4f.extend(np.zeros(10-len(ptgenq4f),int))
    massgenq4l.extend(np.zeros(10-len(massgenq4l),int))
    etagenq4f.extend(np.zeros(10-len(etagenq4f),int))
    phigenq4f.extend(np.zeros(10-len(phigenq4f),int))
    mothergenq4f.extend(np.zeros(10-len(mothergenq4f),int))
    etagenq4l.extend(np.zeros(10-len(etagenq4l),int))
    phigenq4l.extend(np.zeros(10-len(phigenq4l),int))
    massgenq4f.extend(np.zeros(10-len(massgenq4f),int))
    ptgenq4l.extend(np.zeros(10-len(ptgenq4l),int))
    self.out.fillBranch("ptgenq4f", ptgenq4f)
    self.out.fillBranch("massgenq4l", massgenq4l)
    self.out.fillBranch("etagenq4f", etagenq4f)
    self.out.fillBranch("phigenq4f", phigenq4f)
    self.out.fillBranch("mothergenq4f", mothergenq4f)
    self.out.fillBranch("etagenq4l", etagenq4l)
    self.out.fillBranch("phigenq4l", phigenq4l)
    self.out.fillBranch("massgenq4f", massgenq4f)
    self.out.fillBranch("ptgenq4l", ptgenq4l)

    ptgenq5f=[]
    massgenq5l=[]
    etagenq5f=[]
    phigenq5f=[]
    mothergenq5f=[]
    etagenq5l=[]
    phigenq5l=[]
    massgenq5f=[]
    ptgenq5l=[]
    for ik in range(0,nt.nGenPart):
        if (abs(nt.GenPart_pdgId[ik]) == 5):
            if (not (nt.GenPart_statusFlags[ik]&(1<<13))): continue; 
            if( nt.GenPart_pt[ik] > 50 ):
                if len(phigenq5l)==10 : break
                FirstCopy = Process_1Lepton_GenMatching_FirstCopy(nt,ik);
                Fill_Quark = False
                if (nt.GenPart_genPartIdxMother[FirstCopy] < 0):
                    Fill_Quark = True # need to be checked more carefully
                if(nt.GenPart_genPartIdxMother[FirstCopy] >= 0):
                    if(abs(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]) != 24):
                        Fill_Quark = True
                if Fill_Quark:
                    ptgenq5l.append(nt.GenPart_pt[ik]);
                    etagenq5l.append(nt.GenPart_eta[ik]);
                    phigenq5l.append(nt.GenPart_phi[ik]);
                    massgenq5l.append(nt.GenPart_mass[ik]);

                    ptgenq5f.append(nt.GenPart_pt[FirstCopy]);
                    etagenq5f.append(nt.GenPart_eta[FirstCopy]);
                    phigenq5f.append(nt.GenPart_phi[FirstCopy]);
                    massgenq5f.append(nt.GenPart_mass[FirstCopy]);
                    if nt.GenPart_genPartIdxMother[FirstCopy]<0: # need to be checked more carefully
                        mothergenq5f.append(-99);
                    else:
                        mothergenq5f.append(nt.GenPart_pdgId[nt.GenPart_genPartIdxMother[FirstCopy]]);
    ptgenq5f.extend(np.zeros(10-len(ptgenq5f),int))
    massgenq5l.extend(np.zeros(10-len(massgenq5l),int))
    etagenq5f.extend(np.zeros(10-len(etagenq5f),int))
    phigenq5f.extend(np.zeros(10-len(phigenq5f),int))
    mothergenq5f.extend(np.zeros(10-len(mothergenq5f),int))
    etagenq5l.extend(np.zeros(10-len(etagenq5l),int))
    phigenq5l.extend(np.zeros(10-len(phigenq5l),int))
    massgenq5f.extend(np.zeros(10-len(massgenq5f),int))
    ptgenq5l.extend(np.zeros(10-len(ptgenq5l),int))
    self.out.fillBranch("ptgenq5f", ptgenq5f)
    self.out.fillBranch("massgenq5l", massgenq5l)
    self.out.fillBranch("etagenq5f", etagenq5f)
    self.out.fillBranch("phigenq5f", phigenq5f)
    self.out.fillBranch("mothergenq5f", mothergenq5f)
    self.out.fillBranch("etagenq5l", etagenq5l)
    self.out.fillBranch("phigenq5l", phigenq5l)
    self.out.fillBranch("massgenq5f", massgenq5f)
    self.out.fillBranch("ptgenq5l", ptgenq5l)



def getNeutrinoP4(MetPt,MetPhi,lep,lepType):
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

def Process_fatJets(self,nt):
    fatjet1,fatjet2,fatjet3=TLorentzVector(),TLorentzVector(),TLorentzVector()
    usenumber3 = -1;pt_larger=0;
    jets = Collection(nt, 'FatJet')
    for inum in range(0,nt.nFatJet):
        jet_tmp=TLorentzVector()
        jet_tmp.SetPtEtaPhiM(nt.FatJet_pt[inum],nt.FatJet_eta[inum],nt.FatJet_phi[inum],nt.FatJet_msoftdrop[inum])
        # if jet_tmp.DeltaR(glepton)<dR:continue # jet cleaning for HWW analysis it can be deleted.
        # jets[inum].pt and nt.FatJet_pt[inum] are the same
        if(nt.FatJet_pt[inum] > pt_larger and abs(nt.FatJet_eta[inum])<2.4 and inum<5) :
            pt_larger = nt.FatJet_pt[inum]; 
            usenumber3 = inum; 
    if (usenumber3>-1) :
        self.out.fillBranch("IDLoose", nt.FatJet_jetId[usenumber3]&2);# to be checked; (bit2 is tight?)
        self.out.fillBranch("jetAK8puppi_dnnTop", nt.FatJet_deepTag_TvsQCD[usenumber3]);
        self.out.fillBranch("jetAK8puppi_dnnW", nt.FatJet_deepTag_WvsQCD[usenumber3]);
        self.out.fillBranch("jetAK8puppi_dnnZ", nt.FatJet_deepTag_ZvsQCD[usenumber3]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrTop", nt.FatJet_deepTagMD_TvsQCD[usenumber3]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrW", nt.FatJet_deepTagMD_WvsQCD[usenumber3]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrH4q", nt.FatJet_deepTagMD_H4qvsQCD[usenumber3]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrZ", nt.FatJet_deepTagMD_ZvsQCD[usenumber3]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrZbb", nt.FatJet_deepTagMD_ZbbvsQCD[usenumber3]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrHbb", nt.FatJet_deepTagMD_HbbvsQCD[usenumber3]);
        self.out.fillBranch("jetAK8puppi_pt", nt.FatJet_pt[usenumber3]);
        self.out.fillBranch("jetAK8puppi_eta", nt.FatJet_eta[usenumber3]);
        self.out.fillBranch("jetAK8puppi_phi", nt.FatJet_phi[usenumber3]);
        self.out.fillBranch("jetAK8puppi_tau1", nt.FatJet_tau1[usenumber3]);
        self.out.fillBranch("jetAK8puppi_tau2", nt.FatJet_tau2[usenumber3]);
        self.out.fillBranch("jetAK8puppi_tau3", nt.FatJet_tau3[usenumber3]);
        self.out.fillBranch("jetAK8puppi_tau21", nt.FatJet_tau2[usenumber3]/(nt.FatJet_tau1[usenumber3]+1e-10));
        self.out.fillBranch("jetAK8puppi_tau4", nt.FatJet_tau4[usenumber3]);
        self.out.fillBranch("jetAK8puppi_tau42", nt.FatJet_tau4[usenumber3]/(nt.FatJet_tau2[usenumber3]+1e-10));
        self.out.fillBranch("jetAK8puppi_sd", nt.FatJet_msoftdrop[usenumber3]);
        self.out.fillBranch("jetAK8puppi_sd_NoJEC", Process_1Lepton_Fatjet_SoftdropMass_NoJEC(nt,usenumber3));
        self.out.fillBranch("FatJetAK8_particleNetMD_QCD", nt.FatJet_particleNetMD_QCD[usenumber3])
        self.out.fillBranch("FatJetAK8_particleNetMD_Xbb", nt.FatJet_particleNetMD_Xbb[usenumber3])
        self.out.fillBranch("FatJetAK8_particleNetMD_Xcc", nt.FatJet_particleNetMD_Xcc[usenumber3])
        self.out.fillBranch("FatJetAK8_particleNetMD_Xqq", nt.FatJet_particleNetMD_Xqq[usenumber3])
        self.out.fillBranch("FatJetAK8_particleNet_H4qvsQCD", nt.FatJet_particleNet_H4qvsQCD[usenumber3]) #to be checked, MD or not
        self.out.fillBranch("FatJetAK8_particleNet_HbbvsQCD", nt.FatJet_particleNet_HbbvsQCD[usenumber3])
        self.out.fillBranch("FatJetAK8_particleNet_HccvsQCD", nt.FatJet_particleNet_HccvsQCD[usenumber3])
        self.out.fillBranch("FatJetAK8_particleNet_QCD", nt.FatJet_particleNet_QCD[usenumber3])
        self.out.fillBranch("FatJetAK8_particleNet_TvsQCD", nt.FatJet_particleNet_TvsQCD[usenumber3])
        self.out.fillBranch("FatJetAK8_particleNet_WvsQCD", nt.FatJet_particleNet_WvsQCD[usenumber3])
        self.out.fillBranch("FatJetAK8_particleNet_ZvsQCD", nt.FatJet_particleNet_ZvsQCD[usenumber3])
        fatjet1.SetPtEtaPhiM(nt.FatJet_pt[usenumber3],nt.FatJet_eta[usenumber3],nt.FatJet_phi[usenumber3],nt.FatJet_msoftdrop[usenumber3])# to be checked, whether to use sd or sd_NoJEC
        
    usenumber2 = -1; pt_larger=0;
    for inum in range(0,nt.nFatJet):
        jet_tmp=TLorentzVector()
        jet_tmp.SetPtEtaPhiM(nt.FatJet_pt[inum],nt.FatJet_eta[inum],nt.FatJet_phi[inum],nt.FatJet_msoftdrop[inum])
        # if jet_tmp.DeltaR(glepton)<dR:continue
        if(nt.FatJet_pt[inum] > pt_larger and abs(nt.FatJet_eta[inum])<2.4 and inum<5 and inum!= usenumber3) :
            pt_larger = nt.FatJet_pt[inum]; 
            usenumber2 = inum; 
    if (usenumber2>-1):
        self.out.fillBranch("IDLoose_2", nt.FatJet_jetId[usenumber2]&2);
        self.out.fillBranch("jetAK8puppi_dnnTop_2", nt.FatJet_deepTag_TvsQCD[usenumber2]);
        self.out.fillBranch("jetAK8puppi_dnnW_2", nt.FatJet_deepTag_WvsQCD[usenumber2]);
        self.out.fillBranch("jetAK8puppi_dnnZ_2", nt.FatJet_deepTag_ZvsQCD[usenumber2]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrTop_2", nt.FatJet_deepTagMD_TvsQCD[usenumber2]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrW_2", nt.FatJet_deepTagMD_WvsQCD[usenumber2]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrH4q_2", nt.FatJet_deepTagMD_H4qvsQCD[usenumber2]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrZ_2", nt.FatJet_deepTagMD_ZvsQCD[usenumber2]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrZbb_2", nt.FatJet_deepTagMD_ZbbvsQCD[usenumber2]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrHbb_2", nt.FatJet_deepTagMD_HbbvsQCD[usenumber2]);
        self.out.fillBranch("jetAK8puppi_pt_2", nt.FatJet_pt[usenumber2]);
        self.out.fillBranch("jetAK8puppi_eta_2", nt.FatJet_eta[usenumber2]);
        self.out.fillBranch("jetAK8puppi_phi_2", nt.FatJet_phi[usenumber2]);
        self.out.fillBranch("jetAK8puppi_tau1_2", nt.FatJet_tau1[usenumber2]);
        self.out.fillBranch("jetAK8puppi_tau2_2", nt.FatJet_tau2[usenumber2]);
        self.out.fillBranch("jetAK8puppi_tau3_2", nt.FatJet_tau3[usenumber2]);
        self.out.fillBranch("jetAK8puppi_tau21_2", nt.FatJet_tau2[usenumber2]/(nt.FatJet_tau1[usenumber2]+1e-10));
        self.out.fillBranch("jetAK8puppi_tau4_2", nt.FatJet_tau4[usenumber2]);
        self.out.fillBranch("jetAK8puppi_tau42_2", nt.FatJet_tau4[usenumber2]/(nt.FatJet_tau2[usenumber2]+1e-10));
        self.out.fillBranch("jetAK8puppi_sd_2", nt.FatJet_msoftdrop[usenumber2]);
        self.out.fillBranch("jetAK8puppi_sd_NoJEC_2", Process_1Lepton_Fatjet_SoftdropMass_NoJEC(nt,usenumber2));
        self.out.fillBranch("FatJetAK8_particleNetMD_QCD_2", nt.FatJet_particleNetMD_QCD[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNetMD_Xbb_2", nt.FatJet_particleNetMD_Xbb[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNetMD_Xcc_2", nt.FatJet_particleNetMD_Xcc[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNetMD_Xqq_2", nt.FatJet_particleNetMD_Xqq[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNet_H4qvsQCD_2", nt.FatJet_particleNet_H4qvsQCD[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNet_HbbvsQCD_2", nt.FatJet_particleNet_HbbvsQCD[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNet_HccvsQCD_2", nt.FatJet_particleNet_HccvsQCD[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNet_QCD_2", nt.FatJet_particleNet_QCD[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNet_TvsQCD_2", nt.FatJet_particleNet_TvsQCD[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNet_WvsQCD_2", nt.FatJet_particleNet_WvsQCD[usenumber2])
        self.out.fillBranch("FatJetAK8_particleNet_ZvsQCD_2", nt.FatJet_particleNet_ZvsQCD[usenumber2])
        fatjet2.SetPtEtaPhiM(nt.FatJet_pt[usenumber2],nt.FatJet_eta[usenumber2],nt.FatJet_phi[usenumber2],nt.FatJet_msoftdrop[usenumber2])# to be checked, whether to use sd or sd_NoJEC

    usenumber1 = int(-1); pt_larger=0;
    for inum in range(0,nt.nFatJet):
        jet_tmp=TLorentzVector()
        jet_tmp.SetPtEtaPhiM(nt.FatJet_pt[inum],nt.FatJet_eta[inum],nt.FatJet_phi[inum],nt.FatJet_msoftdrop[inum])
        # if jet_tmp.DeltaR(glepton)<dR:continue
        if(nt.FatJet_pt[inum] > pt_larger and abs(nt.FatJet_eta[inum])<2.4 and inum<5 and inum!= usenumber3 and inum!= usenumber2) :
            pt_larger = nt.FatJet_pt[inum]; 
            usenumber1 = inum; 
    
    if (usenumber1>-1):
        self.out.fillBranch("IDLoose_3", nt.FatJet_jetId[usenumber1]&2);
        self.out.fillBranch("jetAK8puppi_dnnTop_3", nt.FatJet_deepTag_TvsQCD[usenumber1]);
        self.out.fillBranch("jetAK8puppi_dnnW_3", nt.FatJet_deepTag_WvsQCD[usenumber1]);
        self.out.fillBranch("jetAK8puppi_dnnZ_3", nt.FatJet_deepTag_ZvsQCD[usenumber1]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrTop_3", nt.FatJet_deepTagMD_TvsQCD[usenumber1]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrW_3", nt.FatJet_deepTagMD_WvsQCD[usenumber1]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrH4q_3", nt.FatJet_deepTagMD_H4qvsQCD[usenumber1]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrZ_3", nt.FatJet_deepTagMD_ZvsQCD[usenumber1]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrZbb_3", nt.FatJet_deepTagMD_ZbbvsQCD[usenumber1]);
        self.out.fillBranch("jetAK8puppi_dnnDecorrHbb_3", nt.FatJet_deepTagMD_HbbvsQCD[usenumber1]);
        self.out.fillBranch("jetAK8puppi_pt_3", nt.FatJet_pt[usenumber1]);
        self.out.fillBranch("jetAK8puppi_eta_3", nt.FatJet_eta[usenumber1]);
        self.out.fillBranch("jetAK8puppi_phi_3", nt.FatJet_phi[usenumber1]);
        self.out.fillBranch("jetAK8puppi_tau1_3", nt.FatJet_tau1[usenumber1]);
        self.out.fillBranch("jetAK8puppi_tau2_3", nt.FatJet_tau2[usenumber1]);
        self.out.fillBranch("jetAK8puppi_tau3_3", nt.FatJet_tau3[usenumber1]);
        self.out.fillBranch("jetAK8puppi_tau21_3", nt.FatJet_tau2[usenumber1]/(nt.FatJet_tau1[usenumber1]+1e-10));
        self.out.fillBranch("jetAK8puppi_tau4_3", nt.FatJet_tau4[usenumber1]);
        self.out.fillBranch("jetAK8puppi_tau42_3", nt.FatJet_tau4[usenumber1]/(nt.FatJet_tau2[usenumber1]+1e-10));
        self.out.fillBranch("jetAK8puppi_sd_3", nt.FatJet_msoftdrop[usenumber1]);
        self.out.fillBranch("jetAK8puppi_sd_NoJEC_3", Process_1Lepton_Fatjet_SoftdropMass_NoJEC(nt,usenumber1));
        self.out.fillBranch("FatJetAK8_particleNetMD_QCD_3", nt.FatJet_particleNetMD_QCD[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNetMD_Xbb_3", nt.FatJet_particleNetMD_Xbb[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNetMD_Xcc_3", nt.FatJet_particleNetMD_Xcc[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNetMD_Xqq_3", nt.FatJet_particleNetMD_Xqq[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNet_H4qvsQCD_3", nt.FatJet_particleNet_H4qvsQCD[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNet_HbbvsQCD_3", nt.FatJet_particleNet_HbbvsQCD[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNet_HccvsQCD_3", nt.FatJet_particleNet_HccvsQCD[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNet_QCD_3", nt.FatJet_particleNet_QCD[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNet_TvsQCD_3", nt.FatJet_particleNet_TvsQCD[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNet_WvsQCD_3", nt.FatJet_particleNet_WvsQCD[usenumber1])
        self.out.fillBranch("FatJetAK8_particleNet_ZvsQCD_3", nt.FatJet_particleNet_ZvsQCD[usenumber1])
        fatjet3.SetPtEtaPhiM(nt.FatJet_pt[usenumber1],nt.FatJet_eta[usenumber1],nt.FatJet_phi[usenumber1],nt.FatJet_msoftdrop[usenumber1])# to be checked, whether to use sd or sd_NoJEC
    else :
        self.out.fillBranch("IDLoose_3", -99)
        self.out.fillBranch("jetAK8puppi_dnnTop_3", -99)
        self.out.fillBranch("jetAK8puppi_dnnW_3", -99)
        self.out.fillBranch("jetAK8puppi_dnnZ_3", -99)
        self.out.fillBranch("jetAK8puppi_dnnDecorrTop_3", -99)
        self.out.fillBranch("jetAK8puppi_dnnDecorrW_3", -99)
        self.out.fillBranch("jetAK8puppi_dnnDecorrH4q_3", -99)
        self.out.fillBranch("jetAK8puppi_dnnDecorrZ_3", -99)
        self.out.fillBranch("jetAK8puppi_dnnDecorrZbb_3", -99)
        self.out.fillBranch("jetAK8puppi_dnnDecorrHbb_3", -99)
        self.out.fillBranch("jetAK8puppi_pt_3", -99)
        self.out.fillBranch("jetAK8puppi_eta_3", -99)
        self.out.fillBranch("jetAK8puppi_phi_3", -99)
        self.out.fillBranch("jetAK8puppi_tau1_3", -99)
        self.out.fillBranch("jetAK8puppi_tau2_3", -99)
        self.out.fillBranch("jetAK8puppi_tau3_3", -99)
        self.out.fillBranch("jetAK8puppi_tau21_3", -99)
        self.out.fillBranch("jetAK8puppi_tau4_3", -99)
        self.out.fillBranch("jetAK8puppi_tau42_3", -99)
        self.out.fillBranch("jetAK8puppi_sd_3", -99)
        self.out.fillBranch("jetAK8puppi_sd_NoJEC_3", -99)
        self.out.fillBranch("FatJetAK8_particleNetMD_QCD_3", -99)
        self.out.fillBranch("FatJetAK8_particleNetMD_Xbb_3", -99)
        self.out.fillBranch("FatJetAK8_particleNetMD_Xcc_3", -99)
        self.out.fillBranch("FatJetAK8_particleNetMD_Xqq_3", -99)
        self.out.fillBranch("FatJetAK8_particleNet_H4qvsQCD_3", -99)
        self.out.fillBranch("FatJetAK8_particleNet_HbbvsQCD_3", -99)
        self.out.fillBranch("FatJetAK8_particleNet_HccvsQCD_3", -99)
        self.out.fillBranch("FatJetAK8_particleNet_QCD_3", -99)
        self.out.fillBranch("FatJetAK8_particleNet_TvsQCD_3", -99)
        self.out.fillBranch("FatJetAK8_particleNet_WvsQCD_3", -99)
        self.out.fillBranch("FatJetAK8_particleNet_ZvsQCD_3", -99)

    self.out.fillBranch("usenumber1", usenumber1);
    self.out.fillBranch("usenumber2", usenumber2);
    self.out.fillBranch("usenumber3", usenumber3);
    
    return fatjet1,fatjet2,fatjet3

def Process_1Lepton_Fatjet_SoftdropMass_NoJEC(nt,FatJetindex ):
    FatJet_subJetIdx1 = nt.FatJet_subJetIdx1[FatJetindex];
    FatJet_subJetIdx2 = nt.FatJet_subJetIdx2[FatJetindex];
    subjet1,subjet2,sum_p4=TLorentzVector(),TLorentzVector(),TLorentzVector()
    if(FatJet_subJetIdx1>=0 and FatJet_subJetIdx2>=0):
        pt1 = nt.SubJet_pt[FatJet_subJetIdx1]*(1-nt.SubJet_rawFactor[FatJet_subJetIdx1]);
        pt2 = nt.SubJet_pt[FatJet_subJetIdx2]*(1-nt.SubJet_rawFactor[FatJet_subJetIdx2]);
        mass1 = nt.SubJet_mass[FatJet_subJetIdx1]*(1-nt.SubJet_rawFactor[FatJet_subJetIdx1]);
        mass2 = nt.SubJet_mass[FatJet_subJetIdx2]*(1-nt.SubJet_rawFactor[FatJet_subJetIdx2]);
        subjet1.SetPtEtaPhiM(pt1,nt.SubJet_eta[FatJet_subJetIdx1],nt.SubJet_phi[FatJet_subJetIdx1],mass1);
        subjet2.SetPtEtaPhiM(pt2,nt.SubJet_eta[FatJet_subJetIdx2],nt.SubJet_phi[FatJet_subJetIdx2],mass2);
        sum_p4 = subjet1+subjet2;
        return sum_p4.M();
    else:
        return -99;

# def Process_1Lepton_Jets(self,nt,glepton,dR):
def Process_1Lepton_Jets(self,nt):
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
    for inum in range(0,nt.nJet):
        jet_tmp=TLorentzVector()
        jet_tmp.SetPtEtaPhiM(nt.Jet_pt[inum],nt.Jet_eta[inum],nt.Jet_phi[inum],nt.Jet_mass[inum])
        # if jet_tmp.DeltaR(glepton)<dR:continue
        if nt.Jet_pt[inum]>20 and abs(nt.Jet_eta[inum])<5.0 and nt.Jet_jetId[inum]&2>0 and inum<8:
            if self.is_mc:  
                ak4jet_hf.append(nt.Jet_hadronFlavour[inum])
                ak4jet_pf.append(nt.Jet_partonFlavour[inum])
            ak4jet_pt.append(nt.Jet_pt[inum])
            ak4jet_eta.append(nt.Jet_eta[inum])
            ak4jet_phi.append(nt.Jet_phi[inum])
            ak4jet_mass.append(nt.Jet_mass[inum])
            ak4jet_icsv.append(nt.Jet_btagCSVV2[inum])
            ak4jet_deepcsvb.append(nt.Jet_btagDeepB[inum])
            ak4jet_deepcsvc.append(nt.Jet_btagDeepCvL[inum]) #DeepCSV c vs b+bb discriminator
    ak4jet_hf.extend(np.zeros(nt.nJet-len(ak4jet_hf),int))
    ak4jet_pf.extend(np.zeros(nt.nJet-len(ak4jet_pf),int))
    ak4jet_pt.extend(np.zeros(nt.nJet-len(ak4jet_pt),int))
    ak4jet_eta.extend(np.zeros(nt.nJet-len(ak4jet_eta),int))
    ak4jet_phi.extend(np.zeros(nt.nJet-len(ak4jet_phi),int))
    ak4jet_mass.extend(np.zeros(nt.nJet-len(ak4jet_mass),int))
    ak4jet_icsv.extend(np.zeros(nt.nJet-len(ak4jet_icsv),int))
    ak4jet_deepcsvb.extend(np.zeros(nt.nJet-len(ak4jet_deepcsvb),int))
    ak4jet_deepcsvc.extend(np.zeros(nt.nJet-len(ak4jet_deepcsvc),int))
    ak4jet_IDTight.extend(np.zeros(nt.nJet-len(ak4jet_IDTight),int))
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


VVV2016 = lambda MODE="inclusive": VVVProducer("2016",MODE)
VVV2017 = lambda MODE="inclusive": VVVProducer("2017",MODE)
VVV2018 = lambda MODE="inclusive": VVVProducer("2018",MODE)


# std::vector<float> *vpx = 0;
# TBranch *bvpx = 0;
# t->SetBranchAddress("vpx",&vpx,&bvpx);

# float LHEWeight_mg_reweighting_[NLHEWEIGHT_MAX];
#     vector<float> v_LHEWeight_mg_reweighting_;
#     TBranch *b_LHEWeight_mg_reweighting_;
#     bool loaded_LHEWeight_mg_reweighting_;

# const vector<float> &Nano::LHEWeight_mg_reweighting() {
#     if (!loaded_LHEWeight_mg_reweighting_) {
#         if (!b_LHEWeight_mg_reweighting_) throw std::runtime_error("LHEWeight_mg_reweighting branch doesn't exist");
#         int bytes = b_LHEWeight_mg_reweighting_->GetEntry(index);
#         v_LHEWeight_mg_reweighting_ = vector<float>(LHEWeight_mg_reweighting_,LHEWeight_mg_reweighting_+bytes/sizeof(LHEWeight_mg_reweighting_[0]));
#         loaded_LHEWeight_mg_reweighting_ = true;
#     }
#     return v_LHEWeight_mg_reweighting_;
# }

# b_LHEWeight_mg_reweighting_ = tree->GetBranch("LHEWeight_mg_reweighting");
#     if (b_LHEWeight_mg_reweighting_) { b_LHEWeight_mg_reweighting_->SetAddress(&LHEWeight_mg_reweighting_);

branches_text = '''
FatJet_deepTagMD_probHbb
FatJet_deepTagMD_probHcc
FatJet_deepTagMD_probHqqqq
FatJet_deepTagMD_probQCDb
FatJet_deepTagMD_probQCDbb
FatJet_deepTagMD_probQCDc
FatJet_deepTagMD_probQCDcc
FatJet_deepTagMD_probQCDothers
FatJet_deepTagMD_probTbc
FatJet_deepTagMD_probTbcq
FatJet_deepTagMD_probTbq
FatJet_deepTagMD_probTbqq
FatJet_deepTagMD_probWcq
FatJet_deepTagMD_probWqq
FatJet_deepTagMD_probZbb
FatJet_deepTagMD_probZcc
FatJet_deepTagMD_probZqq
FatJet_deepTag_probHbb
FatJet_deepTag_probHcc
FatJet_deepTag_probHqqqq
FatJet_deepTag_probQCDb
FatJet_deepTag_probQCDbb
FatJet_deepTag_probQCDc
FatJet_deepTag_probQCDcc
FatJet_deepTag_probQCDothers
FatJet_deepTag_probTbc
FatJet_deepTag_probTbcq
FatJet_deepTag_probTbq
FatJet_deepTag_probTbqq
FatJet_deepTag_probWcq
FatJet_deepTag_probWqq
FatJet_deepTag_probZbb
FatJet_deepTag_probZcc
FatJet_deepTag_probZqq
'''

branches_text = '''
FatJet_particleNetMD_QCD
FatJet_particleNetMD_Xbb
FatJet_particleNetMD_Xcc
FatJet_particleNetMD_Xqq
FatJet_particleNet_H4qvsQCD
FatJet_particleNet_HbbvsQCD
FatJet_particleNet_HccvsQCD
FatJet_particleNet_QCD
FatJet_particleNet_TvsQCD
FatJet_particleNet_WvsQCD
FatJet_particleNet_ZvsQCD
FatJet_particleNet_mass
'''

branches_text = '''
Jet_area
Jet_bRegCorr
Jet_bRegRes
Jet_btagCSVV2
Jet_btagDeepB
Jet_btagDeepCvB
Jet_btagDeepCvL
Jet_btagDeepFlavB
Jet_btagDeepFlavCvB
Jet_btagDeepFlavCvL
Jet_btagDeepFlavQG
Jet_cRegCorr
Jet_cRegRes
Jet_chEmEF
Jet_chFPV0EF
Jet_chHEF
Jet_cleanmask
Jet_electronIdx1
Jet_electronIdx2
Jet_eta
Jet_genJetIdx
Jet_hadronFlavour
Jet_hfadjacentEtaStripsSize
Jet_hfcentralEtaStripSize
Jet_hfsigmaEtaEta
Jet_hfsigmaPhiPhi
Jet_jetId
Jet_mass
Jet_muEF
Jet_muonIdx1
Jet_muonIdx2
Jet_muonSubtrFactor
Jet_nConstituents
Jet_nElectrons
Jet_nMuons
Jet_neEmEF
Jet_neHEF
Jet_partonFlavour
Jet_phi
Jet_pt
Jet_puId
Jet_puIdDisc
Jet_qgl
Jet_rawFactor
'''

branches_text = '''
Jet_btagDeepB
Jet_btagDeepFlavB
Jet_btagDeepFlavCvB
Jet_btagDeepFlavCvL
Jet_btagDeepFlavQG
Jet_eta
Jet_hadronFlavour
Jet_jetId
Jet_mass
Jet_partonFlavour
Jet_phi
Jet_pt
Jet_puId
Jet_puIdDisc
Jet_qgl
Jet_rawFactor
'''

branches_text = '''
FatJet_pt
FatJet_eta
FatJet_phi
FatJet_msoftdrop
'''

branches_text = '''
GenPart_eta
GenPart_genPartIdxMother
GenPart_mass
GenPart_pdgId
GenPart_phi
GenPart_pt
GenPart_status
GenPart_statusFlags
'''



branches = [i for i in branches_text.split("\n") if len(i.replace(" ","").replace("\n","")) > 0]

Var_map = {
    "FatJet_deepTagMD_probHbb" : "probHbb",
    "FatJet_deepTagMD_probHcc" : "probHcc",
    "FatJet_deepTagMD_probHqqqq" : "probHqqqq",
    "FatJet_deepTagMD_probQCDb" : "probQCDb",
    "FatJet_deepTagMD_probQCDbb" : "probQCDbb",
    "FatJet_deepTagMD_probQCDc" : "probQCDc",
    "FatJet_deepTagMD_probQCDcc" : "probQCDcc",
    "FatJet_deepTagMD_probQCDothers" : "probQCDothers",
    "FatJet_deepTagMD_probTbc" : "probTbc",
    "FatJet_deepTagMD_probTbcq" : "probTbcq",
    "FatJet_deepTagMD_probTbq" : "probTbq",
    "FatJet_deepTagMD_probTbqq" : "probTbqq",
    "FatJet_deepTagMD_probWcq" : "probWcq",
    "FatJet_deepTagMD_probWqq" : "probWqq",
    "FatJet_deepTagMD_probZbb" : "probZbb",
    "FatJet_deepTagMD_probZcc" : "probZcc",
    "FatJet_deepTagMD_probZqq" : "probZqq",
    # 
    "FatJet_deepTag_probHbb" : "probHbb",
    "FatJet_deepTag_probHcc" : "probHcc",
    "FatJet_deepTag_probHqqqq" : "probHqqqq",
    "FatJet_deepTag_probQCDb" : "probQCDb",
    "FatJet_deepTag_probQCDbb" : "probQCDbb",
    "FatJet_deepTag_probQCDc" : "probQCDc",
    "FatJet_deepTag_probQCDcc" : "probQCDcc",
    "FatJet_deepTag_probQCDothers" : "probQCDothers",
    "FatJet_deepTag_probTbc" : "probTbc",
    "FatJet_deepTag_probTbcq" : "probTbcq",
    "FatJet_deepTag_probTbq" : "probTbq",
    "FatJet_deepTag_probTbqq" : "probTbqq",
    "FatJet_deepTag_probWcq" : "probWcq",
    "FatJet_deepTag_probWqq" : "probWqq",
    "FatJet_deepTag_probZbb" : "probZbb",
    "FatJet_deepTag_probZcc" : "probZcc",
    "FatJet_deepTag_probZqq" : "probZqq",
}

# for fatJets
code = {
    "1":'''
float {ibranch}_[NFATJET_MAX];
vector<float> v_{ibranch}_;
TBranch *b_{ibranch}_;
    ''',
    "2":'''
b_{ibranch}_ = fChain->GetBranch("{ibranch}");
if (b_{ibranch}_) {{ b_{ibranch}_->SetAddress(&{ibranch}_);}}
    ''',
    "3":'''
    int bytes_{ibranch} = b_{ibranch}_->GetEntry(jentry);
    v_{ibranch}_ = vector<float>({ibranch}_,{ibranch}_+bytes_{ibranch}/sizeof({ibranch}_[0]));
    size_t n{ibranch} = v_{ibranch}_.size();
    if(n{ibranch} > size_t(0)){{
        {ibranch}_1 = v_{ibranch}_.at(0);
    }}
    else{{
        {ibranch}_1 = -99;
    }}
    if(n{ibranch} > size_t(1)){{
        {ibranch}_2 = v_{ibranch}_.at(1);
    }}
    else{{
        {ibranch}_2 = -99;
    }}
    if(n{ibranch} > size_t(2)){{
        {ibranch}_3 = v_{ibranch}_.at(2);
    }}
    else{{
        {ibranch}_3 = -99;
    }}
    if(n{ibranch} > size_t(3)){{
        {ibranch}_4 = v_{ibranch}_.at(3);
    }}
    else{{
        {ibranch}_4 = -99;
    }}\n
    ''',
    "4" : '''
ExTree->Branch("{ibranch}_1",&{ibranch}_1,"{ibranch}_1/F");
ExTree->Branch("{ibranch}_2",&{ibranch}_2,"{ibranch}_2/F");
ExTree->Branch("{ibranch}_3",&{ibranch}_3,"{ibranch}_3/F");
ExTree->Branch("{ibranch}_4",&{ibranch}_4,"{ibranch}_4/F");
    ''',
    "5" : '''
float {ibranch}_1;
float {ibranch}_2;
float {ibranch}_3;
float {ibranch}_4;
    ''',
}


# for GenPartciles
code = {
    "1":'''
float {ibranch}_[NGENPART_MAX];
vector<float> v_{ibranch}_;
TBranch *b_{ibranch}_;
    ''',
    "2":'''
b_{ibranch}_ = fChain->GetBranch("{ibranch}");
if (b_{ibranch}_) {{ b_{ibranch}_->SetAddress(&{ibranch}_);}}
    ''',
    "3":'''
    if (b_{ibranch}_) {{
        int bytes_{ibranch} = b_{ibranch}_->GetEntry(jentry);
        v_{ibranch}_ = vector<float>({ibranch}_,{ibranch}_+bytes_{ibranch}/sizeof({ibranch}_[0]));
    }}
    ''',
}

# code = {
#     "1":'''
# float {ibranch}_[NJET_MAX];
# vector<float> v_{ibranch}_;
# TBranch *b_{ibranch}_;
#     ''',
#     "2":'''
# b_{ibranch}_ = fChain->GetBranch("{ibranch}");
# if (b_{ibranch}_) {{ b_{ibranch}_->SetAddress(&{ibranch}_);}}
#     ''',
#     "3":'''
#     int bytes_{ibranch} = b_{ibranch}_->GetEntry(jentry);
#     v_{ibranch}_ = vector<float>({ibranch}_,{ibranch}_+bytes_{ibranch}/sizeof({ibranch}_[0]));
#     size_t n{ibranch} = v_{ibranch}_.size();
#     \n
#     ''',
# }


Path = "/home/gql/tutorial/lib/gKK/transfer_tree/UL/Code/V1/Temp/"
for icode in code:
    with open("%s/code%s.txt"%(Path,icode),"w") as f:
        for ibranch in branches:
            # replace = {
            #     "ibranch" : ibranch,
            #     "tag"     : Var_map[ibranch],
            # }
            replace = {
                "ibranch" : ibranch,
            }
            f.write(code[icode].format(**replace))



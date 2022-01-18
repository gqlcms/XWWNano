hadd QCD_HT1000to1500.root QCD_HT1000to1500/*.root
hadd ST_t-channel_antitop.root ST_t-channel_antitop/*.root
hadd TTToSemiLeptonic.root TTToSemiLeptonic/*.root
hadd WZ.root WZ/*.root
hadd ZZ.root ZZ/*.root
hadd QCD_HT1500to2000.root QCD_HT1500to2000/*.root
hadd ST_tW_top.root ST_tW_top/*.root
hadd WWW.root WWW/*.root
hadd ST_t-channel_top.root ST_t-channel_top/*.root
hadd WJetsToQQ_HT-800toInf.root WJetsToQQ_HT-800toInf/*.root
hadd WZZ.root WZZ/*.root
hadd ZZZ.root ZZZ/*.root
hadd QCD_HT2000toInf.root QCD_HT2000toInf/*.root
hadd TTToHadronic.root TTToHadronic/*.root
hadd WWZ.root WWZ/*.root
hadd ST_tW_antitop.root ST_tW_antitop/*.root
hadd WW.root WW/*.root
hadd ZJetsToQQ_HT-800toInf.root ZJetsToQQ_HT-800toInf/*.root

hadd mu_PKUTree_Rest.root WZZ.root WZ.root WWZ.root WWW.root WW.root ZZZ.root ZZ.root &
hadd mu_PKUTree_TT.root TTToSemiLeptonic.root TTToHadronic.root &
hadd mu_PKUTree_ST.root ST_tW_top.root ST_tW_antitop.root ST_t-channel_top.root ST_t-channel_antitop.root &
mv WJetsToQQ_HT-800toInf.root mu_out_WJetsToQQ.root &





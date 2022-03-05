# test fetch file scripts

# ============= condor test ================
# ============= condor test ================
python Condor.py --DAS DAS_2016_Common --Filesjson "/stash/user/qilongguo/work/B2G_SF/Condor/V1/production/1lepton/2016/V1/Files_MC_debug.json" --createfilejson --debugkeepN 2 --debug

python Condor.py --DAS DAS_2016_Common --Filesjson "/stash/user/qilongguo/work/B2G_SF/Condor/V1/production/1lepton/2016/V1/Files_MC_debug.json" --outputPath "/stash/user/qilongguo/public/gKK/private_NanoAOD/2016/V2/MC/" --year 2016 --excutable "exe_CUSTNANO.sh" --TaskFolder "production/Task_UL2016_1lepton_MC_22_3_2_test" --submitsh "submit_test.sh" --Condor 
# ============= condor test small set ================
# ============= condor test small set ================

# check output


# generate json files
python Condor.py --DAS DAS_2016_1lepton --Filesjson "/stash/user/qilongguo/work/B2G_SF/Condor/V1/production/1lepton/2016/V1/Files_MC_1lepton.json" --createfilejson

# submit for UL2016 for 1lepton mc
python Condor.py --DAS DAS_2016_1lepton --Filesjson "/stash/user/qilongguo/work/B2G_SF/Condor/V1/production/1lepton/2016/V1/Files_MC_1lepton.json" --outputPath "/stash/user/qilongguo/public/gKK/private_NanoAOD/2016/V2/MC/" --year 2016 --excutable "exe_CUSTNANO.sh" --TaskFolder "production/Task_UL2016_1lepton_MC_22_3_4" --submitsh "submit_1lepton_MC_22_3_4.sh" --Condor 

# submit
sh submit_1lepton_MC_22_3_3.sh

# resubmit
condor_release user qilongguo



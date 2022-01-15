'''
1. git clone https://github.com/cms-sw/xsecdb.git
2. cd xsecdb/scripts/example_wrapp_usage/
3. python XSBD_search.py > results.txt
'''



from request_wrapper import RequestWrapper
import sys 

samples = [
    # "WW_TuneCP5_13TeV-pythia8",
    # "WZ_TuneCP5_13TeV-pythia8",
    # "ZZ_TuneCP5_13TeV-pythia8",
    "/TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8",
    "/TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8",
    "/TTWJetsToQQ_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8",
    "/TTWJetsToQQ_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8",
]

for sample in samples:
    xsdb_req = RequestWrapper()
    query = {
        'process_name': sample.replace("\n","").replace(" ","")
    }
    xsdb_req.simple_search(query)



voms-proxy-init -voms cms

env -i X509_USER_PROXY=x509up_u123238 gfal-mkdir root://eoscms//store/group/phys_b2g/xulyu/gKK/2016/mc/WWW

xrdcp WWW/*.root root://eoscms.cern.ch//eos/cms/store/group/phys_b2g/xulyu/gKK/2016/mc/WWW/

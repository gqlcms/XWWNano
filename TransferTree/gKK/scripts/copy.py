copy = '''rsync -r -v --info=progress2 cmsc:/stash/user/qilongguo/public/gKK/Ntuple/2016/MC/V2/{dir} /data/pubfs/guoql/ULNtuple/2016/MC/V1/{dir} -e 'ssh -o StrictHostKeyChecking=no -o "ProxyCommand ssh -A -o StrictHostKeyChecking=no -i ~/.ssh/cmsc/id_rsa guoql@lxslc{lxslc}.ihep.ac.cn nc %h %p "' >{dir}.debug 2>&1 &\n'''


copy = '''rsync -r -v --info=progress2 {sample} qiguo@lxplus.cern.ch:/eos/user/y/yusong/qilong/ROOTFILE/Tree/UL2016/data/V1/{sample} -e 'ssh -o StrictHostKeyChecking=no -o "ProxyCommand ssh -A -o StrictHostKeyChecking=no -i ~/.ssh/cmsc/id_rsa guoql@lxslc{lxslc}.ihep.ac.cn nc %h %p "' >{sample}.debug 2>&1 &\n'''

dir_ = [
    "Run2016B-ver1_HIPM.root",
    "Run2016B-ver2_HIPM.root",
    "Run2016C-HIPM.root",
    "Run2016D-HIPM.root",
    "Run2016E-HIPM.root",
    "Run2016F-HIPM.root",
    "Run2016F.root",
    "Run2016G.root",
    "Run2016H.root",
]

content = ""
for i,isample in enumerate(dir_):
    content += copy.format(sample = isample,lxslc = str(701+int(i/2)), lxslc2 = str(702+int(i/3)))

with open("Temp/temp2.sh","w") as f:
    f.write(content)
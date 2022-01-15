import json

with open("out.txt","r") as f:
    out = json.loads(f.read())
output = {}
for samples in out:
     output[samples["DAS"]] = samples["cross_section"]
     
print output
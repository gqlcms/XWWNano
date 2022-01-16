import os
import sys
import ROOT
import argparse
from time       import gmtime, strftime
from datetime import datetime
# from _typeshed import Self


parser = argparse.ArgumentParser(description="TransferTree for VVV analysis")
parser.add_argument('-I' , '--InputROOTFile'    , dest='InputROOTFile'  , help='Input ROOTFile'     , type=str,                default=None                         )
parser.add_argument('-O' , '--OutputROOTFile'    , dest='OutputROOTFile'  , help='Output ROOTFile'     , type=str,                default=None                         )
parser.add_argument('-d' , '--Data'      , dest='Data'    , help='data'                ,  default=False , action='store_true')
parser.add_argument('-m' , '--MC'      , dest='MC'    , help='MC'                ,  default=False , action='store_true')
args = parser.parse_args()


class Transfer_Tree:
    def __init__(self):
        self.Data = args.Data
        self.MC = args.MC

        if ( not (self.Data | self.MC) ) | (self.Data & self.MC) :
            sys.exit("data or mc is not defined or mc,data both defined")

        self.InputROOTFile = args.InputROOTFile
        self.OutputROOTFile = args.OutputROOTFile

        self.cut = "Nj8==2"

        self.TreeInName = "Events" # Input Tree's name
        self.TreeOutName = "NewTree" # Output Tree's name
        
        self.Intime_py_list = [
            "deepWH_new.py",
        ]
        #             "Transfer_Tree_Higgs.py","Higgs_pt.py","Higgs_msd.py","weight.py","deepWH.py","deepWH2.py","MET_Pt.py","deepWH_new.py","deepW_1.py","deepH_1.py",
        # "Higgs_pt.py","Higgs_msd.py","MET_Pt.py",
        self.Intime_py_list = ["config/Intime/"+i for i in self.Intime_py_list]

        self.OutColumn = []
        with open("Tool/Transfer_Tree/OutColumn.py","r") as f:
            # print(f.read())
            exec(f.read())
        self.OutColumn = set(self.OutColumn)

        if self.Data : 
            self.Intime_Add_Variables = [
                "deepWH",
                #"deepW","deepWH","deepH",
            ]
            
        if self.MC : 
            self.Intime_Add_Variables = [
                "deepWH",
                #                 "AK8_Mode","weight","H_pt","H_msd","deltaR","deltaR2","MET_HT",

            ]

    def PrintInfo(self):
        if self.Data:
            print "Data"
        if self.MC:
            print "MC"
        print self.cut
        print self.InputROOTFile
        print self.OutputROOTFile
        print self.OutColumn
        print "Intime_Add_Variables:\n",self.Intime_Add_Variables
        OutColumn = list(self.OutColumn) ; OutColumn.sort()
        print "OutColumn:\n",OutColumn

    def Add_New_Column(self):

        for Intime_py in self.Intime_py_list:
            with open(Intime_py,"r") as f:
                exec(f.read())
        
        df = ROOT.RDataFrame( self.TreeInName, self.InputROOTFile )

        if self.Intime_Add_Variables:
            for iselection in self.Intime_Add_Variables:
                df = df.Define( iselection ,eval(iselection) )

        df = df.Filter( self.cut )
        snapshotOptions = ROOT.ROOT.RDF.RSnapshotOptions()
        snapshotOptions.fOverwriteIfExists = True
        df.Snapshot(self.TreeOutName, self.OutputROOTFile, self.OutColumn, snapshotOptions )
        # df.Snapshot(self.TreeOutName, self.OutputROOTFile, self.OutColumn, )


Beginning = datetime.now()
print '----------------[',str(Beginning),']--------'

Instance_Transfer_Tree = Transfer_Tree()
Instance_Transfer_Tree.PrintInfo()
Instance_Transfer_Tree.Add_New_Column()

Finishing = datetime.now()
duration = (Finishing - Beginning).seconds
print '----END-----------------------------------------------[time:',Finishing,', duration:',duration,'sec]---------\n'
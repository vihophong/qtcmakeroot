#include <vector>
#include "TGraph.h"
#include "TCanvas.h"
#include "TArrow.h"
#include "TH1.h"
#include "TH2.h"
#include "TVirtualPad.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace  std;

int main(int argc, char**argv) 
{
  TH1F *h=new TH1F("h","h",200,-10,10);
  h->FillRandom("gaus",1000);
  cout<<h->GetMean()<<endl;
  return 0;
}




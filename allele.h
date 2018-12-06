#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Allele
{
  private:
	string nucSequence;
	string varientName;
	string varientType;

  public:
	Allele();
	Allele(string varName, string varType, string seq);
	void WriteAlleleToFile(ofstream &ofs);
	void setVarientName(string name);
	string getVarientName();
	void setVarientType(string type);
	string getVarientType();
	void setNucSeq(string seq);
	string getNucSeq();
};

#pragma once

#include <iostream>
#include <string>
using namespace std;

class Allele
{
  private:
	string nucSequence;
	string varientName;
	string varientType;

  public:
	void alleleType(string seq, string varName, string varType);
	void WriteAlleleToFile(ofstream &);
	void setVarientName(string name);
	void getVarientName();
	void setVarientType(string type);
	void getVarientType();
	void setNucSeq(string seq);
	void getNucSeq();
};

#pragma once

#include <iostream>
#include <string>
#include "allele.h"
#include <fstream>

using namespace std;

class Gene
{
  private:
	string name;
	string traitType;
	Allele alleleA;
	Allele alleleB;

  public:
	Gene();
	Gene(Allele a, Allele b);
	void setName(string n);
	string getName();
	void setTraitType(string type);
	string getTraitType();
	void WriteToFile(ofstream &of);
	Allele GetExpressedTrait();
};
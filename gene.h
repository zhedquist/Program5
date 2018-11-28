#pragma once

#include <iostream>
#include <string>
#include "allele.h"

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
	Gene(Allele, Allele);
	void createdGene(string a, string b);
	void setName(string n);
	void getName();
	void setTraitType(string type);
	void getTraitType();
};
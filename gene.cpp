#include "gene.h"
#include "allele.h"

Gene::Gene()
{
}
Gene::Gene(Allele a, Allele b)
{
	this->alleleA = a;
	this->alleleB = b;
}
void Gene::setName(string n)
{
	name = n;
}
string Gene::getName()
{
	return name;
}
void Gene::setTraitType(string type)
{
	traitType = type;
}
string Gene::getTraitType()
{
	return traitType;
}
void Gene::WriteToFile(ofstream &ofs)
{
	ofs << name << "," << traitType << ",";
	alleleA.WriteAlleleToFile(ofs);
	ofs << ",";
	alleleB.WriteAlleleToFile(ofs);
	ofs << endl;
}
Allele Gene::GetExpressedTrait()
{

	if (alleleA.getVarientType() == "dominant")
	{
		return alleleA;
	}
	else
	{
		return alleleB;
	}
}
#include "allele.h"

Allele::Allele()
{
}

Allele::Allele(string varName, string varType, string seq)
{
	this->nucSequence = seq;
	this->varientName = varName;
	this->varientType = varType;
}
void Allele::WriteAlleleToFile(ofstream &ofs)
{
	ofs << varientName << "," << varientType << "," << nucSequence;
}
void Allele::setVarientName(string name)
{
	varientName = name;
}
string Allele::getVarientName()
{
	return varientName;
}
void Allele::setVarientType(string type)
{
	varientType = type;
}
string Allele::getVarientType()
{
	return varientType;
}
void Allele::setNucSeq(string seq)
{
	nucSequence = seq;
}
string Allele::getNucSeq()
{
	return nucSequence;
}
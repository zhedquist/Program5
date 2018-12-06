#include "chromosome.h"
#include "gene.h"
#include "allele.h"

Chromosome::Chromosome()
{
}
void Chromosome::AddGene(Gene g)
{
	genes.push_back(g);
}
void Chromosome::AnalyzeGenotype()
{
	for (unsigned int i = 0; i < genes.size(); i++)
	{
		string name = genes.at(i).getName();
		string tType = genes.at(i).getTraitType();
		string domAllele = genes.at(i).GetExpressedTrait().getVarientName();
		string domNucSeq = genes.at(i).GetExpressedTrait().getNucSeq();
		cout << endl;
		cout << "Name: " << name << endl;
		cout << "Genetic trait: " << tType << endl;
		cout << "Expressed allele: " << domAllele << "-dominant" << endl;
		cout << "Nucleotide sequence: " << domNucSeq << endl;
		cout << endl;
	}
}
void Chromosome::OutputToFile(ofstream &ofs)
{
	for (unsigned int i = 0; i < genes.size(); i++)
	{
		genes.at(i).WriteToFile(ofs);
	}
}
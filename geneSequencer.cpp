#include "geneSequencer.h"

Chromosome GeneSequencer::CreateChromosome()
{
	Chromosome myChromosome;
	string trait, name, typeA, typeB, seqA, seqB, varA, varB;
	cout << "What is the name of the new gene?(e.g. TZ458)" << endl;
	getline(cin, name);
	cout << "What is the gene trait?(e.g. eye color)" << endl;
	getline(cin, trait);
	cout << "What is the allele 1 variant?(e.g. brown/blue/etc.)" << endl;
	getline(cin, varA);
	cout << "What is the allele 1 type?(e.g. dominant or recessive)" << endl;
	getline(cin, typeA);
	cout << "What is the allele 1 nucleotide sequence?(e.g. AGTC)" << endl;
	getline(cin, seqA);
	Allele a(varA, typeA, seqA);
	cout << "What is the allele 2 variant?(e.g. brown/blue/etc.)" << endl;
	getline(cin, varB);
	cout << "What is the allele 2 type?(e.g. dominant or recessive)" << endl;
	getline(cin, typeB);
	cout << "What is the allele 2 nucleotide sequence?(e.g. AGTC)" << endl;
	getline(cin, seqB);
	Allele b(varB, typeB, seqB);
	Gene newG(a, b);
	newG.setName(name);
	newG.setTraitType(trait);
	myChromosome.AddGene(newG);
	return myChromosome;
}
Chromosome ImportChromosome()
{
}
void GeneSequencer::ExportChromosome(Chromosome myC, const string &fileName)
{
	ofstream ofs;
	ofs.open(fileName);
	myC.OutputToFile(ofs);
	ofs.close();
}
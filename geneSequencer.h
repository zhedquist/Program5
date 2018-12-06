#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "allele.h"
#include "gene.h"
#include "chromosome.h"
#include <fstream>
using namespace std;

class GeneSequencer
{
  public:
	Chromosome CreateChromosome();
	Chromosome ImportChromosome();
	void ExportChromosome(Chromosome c, const string &fileName);
	Chromosome DeMeiosis(Chromosome a, Chromosome b);
	void SequenceChromosome(Chromosome c);
};
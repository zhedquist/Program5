#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "allele.h"
#include "gene.h"
#include <fstream>
using namespace std;

class Chromosome
{
  private:
	vector<Gene> genes;
	string fileName;

  public:
	Chromosome();
	void AnalyzeGenotype();
	void InputFromFile(ifstream &ifs);
	void OutputToFile(ofstream &ofs);
	void AddGene(Gene g);
	Gene FindGene(string name);
	Chromosome operator+(Chromosome rhs);
};
/*	Project:    NAME OF PROJECT GOES HERE
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include <string>
#include "gene.h"
using namespace std;

int menuSelect()
{
	int selection;
	cout << "1-Create Chromosome" << endl;
	cout << "2-Analyze Chromosome" << endl;
	cout << "3-Output Chromosome To File" << endl;
	cout << "4-Input Chromosome From File" << endl;
	cout << "5-Combine Chromosomes" << endl;
	cout << "6-Exit" << endl;
	cout << "Please Enter Your Choice 1-6:";
	cin >> selection;
	cin.get();
	return selection;
}

int main(int argc, char *argv[])
{
	// declare a chromosome Chromosome myChromosome;
	Gene gset;

	int selection = menuSelect();
	if (selection == 1)
	{
		string trait, name, type1, type2, seq1, seq2, var1, var2;
		cout << "What is the name of the new gene?" << endl;
		getline(cin, name);
		gset.setName(name);
		cout << "What is the gene trait?" << endl;
		getline(cin, trait);
		gset.setTraitType(trait);
		cout << "What is the allele 1 variant?" << endl;
		getline(cin, var1);
		cout << "What is the allele 1 type?" << endl;
		geline(cin, type1);
		cout << "What is the allele 1 nucleotide sequence?" << endl;
		getline(cin, seq1);

		//Allele a(traitName, ...);
		//Allele b( ...);

		//Gene g(a, b);
		//myChromosome.ad
	}
	else if (selection == 2)
	{
	}
	else if (selection == 3)
	{
	}
	else if (selection == 4)
	{
	}
	else if (selection == 5)
	{
	}
	else
	{
		cout << "Goodbye" << endl;
	}
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}
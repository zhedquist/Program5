/*	Project:    NAME OF PROJECT GOES HERE
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include <string>
#include "gene.h"
#include "allele.h"
#include "chromosome.h"
#include "geneSequencer.h"
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
	Chromosome myC;
	GeneSequencer createGene;
	int selection = 0;
	while (selection != 6)
	{
		selection = menuSelect();
		char newGene = 'y';
		string fileName;
		if (selection == 1)
		{
			while (newGene == 'y')
			{
				myC = createGene.CreateChromosome();
				cout << "Would you like to add a new gene?(y/n) ";
				cin >> newGene;
				cin.get();
			}
		}
		else if (selection == 2)
		{
			myC.AnalyzeGenotype();
		}
		else if (selection == 3)
		{
			cout << "What file do you want to output to?";
			getline(cin, fileName);
			createGene.ExportChromosome(myC, fileName);
			cout << "Exported" << endl;
		}
		else if (selection == 4)
		{
		}
		else if (selection == 5)
		{
		}
		else if (selection == 6)
		{
			cout << "Goodbye" << endl;
		}
	}
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}
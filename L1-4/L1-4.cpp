//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//* Program name    : L1-4                                              *
//*                                                                     *
//* Written by      : Justin Calderon                                   *
//*                                                                     *
 
//*                                                                     *
//*                                                                     *
//*                                                                     *
//*---------------------------------------------------------------------*
//* Collaboration   : Enrique de la Torrre                              *
//                    C++ Programming Eigth Edition Chapter 3           *
//                    cplusplus.com                                     *
//*                   Chegg.com                                         *
//*---------------------------------------------------------------------*
//* Change Log:                                                         *
//*                         Revision                                    *
//*       Date    Changed  Rel Ver Mod Purpose                          *
//* 2/14/22      jcalderon 000.000.000 Initial release of program       *
//*                                                                     *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	
	const double PI = 3.14;

	double lengthOfYard;
	double radiusOfTree;
	double spaceBetweenTrees;
	double spaceForSingleTree;
	int numberOfTrees;
	double totalAreaOfAllTrees;

	cout << "Justin Calderon\t" << "L1-4\t" << "L1-4.exe" << endl;
	
	cout << "Enter the length of the yard in feet: ";
	cin >> lengthOfYard;
	cout << endl;

	cout << "Enter the radius in inches of the fully grown trees: ";
	cin >> radiusOfTree;
	cout << endl;

	cout << "Enter the distance in feet between fully grown trees: ";
	cin >> spaceBetweenTrees;
	cout << endl;

	// Calculate the space that will be occupied by one tree.
	spaceForSingleTree = 2 * radiusOfTree + spaceBetweenTrees;

	// Calculate the number of trees that can be planted in the yard
	numberOfTrees = (int) (lengthOfYard / spaceForSingleTree);

	// Calculate the total space that will be occupied by the tres.
	totalAreaOfAllTrees = PI * (radiusOfTree / 12), 2.0 * numberOfTrees;

	// Display the total number of trees
	cout << "The number of trees that can be planted: ";
	cin >> numberOfTrees;
	cout << endl;

	// Display the space occupied by the trees
	cout << "Total area occupied by the trees: " << totalAreaOfAllTrees;
	cout << endl;

	char q;
	cout << "\nPress any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);
	return 0;
}
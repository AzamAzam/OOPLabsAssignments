#include <iostream>
#include"Auxoffice.h"
#include "budget.h" 
using namespace std;


double Budget::corpBudget = 0;

int main()
{
	double ofcBudget;
	cout << "Enter main Office Budget : ";
	cin >> ofcBudget;
	Budget::mainOffice(ofcBudget);
	Budget divisions[4];
	AuxOffice AxOffices[4];
	double bud;

	
	for (int count = 0; count < 4; count++)
	{


		cout << "Enter the budget request for division ";
		cout << (count + 1) << ": ";
		cin >> bud;
		divisions[count].addBudget(bud);

		cout << "Enter the budget request for Auxiliary Oficce Division  ";
		cout << (count + 1) << ": ";
		cin >> bud;
		AxOffices[count].addBudget(bud);


	}


	cout << "\nHere are the division budget requests:\n";
	for (int count = 0; count < 4; count++)
	{
		cout << "Division " << (count + 1) << "\t$ ";
		cout << divisions[count].getDivBudget() << endl;
	}


	cout << "\nHere are the Auxiliary Office division budget requests:\n";
	for (int count = 0; count < 4; count++)
	{
		cout << "Division " << (count + 1) << "\t$ ";
		cout << AxOffices[count].getDivBudget() << endl;
	}


	cout << "Total Budget Requests:\t$ ";
	cout << Budget::getCorpBudget() << endl;


}

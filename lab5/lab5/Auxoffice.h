#include "budget.h"
#include<iostream>
using namespace std;

class AuxOffice
{
private:
	
	double auxBudget;
public:
	AuxOffice() {
		auxBudget = 0;
	}

	/*void addBudget(double b)
	{
		auxBudget += b;
		
	}*/

	double getDivBudget() {
		return auxBudget;
	}

	
	
	void addBudget(double b)
	{
		 auxBudget += b;
		 Budget::corpBudget += b;
	 }



};
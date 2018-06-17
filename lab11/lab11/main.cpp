#include<iostream>
#include "Header.h"
using namespace std;
int main()
{
	Ship *s[3] = {	new Ship("BA ", " 2012"), new   CargoShip("AC ", " 2000", 12), new CruiseShip("S", "1999", 20)};
	for (int i = 0; i < 3; i++){
		s[i]->show();
		cout << endl;
	}

}
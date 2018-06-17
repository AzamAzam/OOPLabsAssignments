#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

void Ship::setvalues(string n, string d){
	name = n;
	buildDate = d;

}
Ship::Ship()
{
	setvalues("NO Name ", "No date  ");
}
Ship::Ship(string n, string d)
{
	setvalues(n, d);
}
void CruiseShip::show(){
	
	cout << "Ship name : " << get_name() << endl;
	cout << "Number of Passenger : " << NumberOfPassenger << endl;
}
 CruiseShip::CruiseShip(string n = "\0", string d = "\0",int num=0){
	 name = n;
	 buildDate = d;
	 NumberOfPassenger = num;
}
 void CargoShip::show(){
	 cout << "Ship name : " << get_name() << endl;
	 cout << "Tonnoge : " << tonnage << endl;
 }

 CargoShip::CargoShip(string n = "No Name", string d = "No date", int t = 0){
	 name = n;
	 buildDate = d;
	 tonnage = t;
 }
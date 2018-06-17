#ifndef Header_H
#define Header_H
#include <iostream>
#include <string>
using namespace std;
class Ship
{
protected:
	string name;
	string buildDate;
public:
		void setvalues(string, string);

		Ship(string, string);
		Ship();
		string get_name(){
			return name;
		}
		string get_build_date(){
			return buildDate;
		}
		 void   show(){
			 cout << "Ship name : " << name << endl;
			 cout << "BUilt Year : " << buildDate << endl;
		}
};
class CruiseShip:public Ship
{
	int NumberOfPassenger;
public :
	CruiseShip(string , string,int);
	void set_passengers(int n){
		NumberOfPassenger = n;

	}
	int get_passsenger(){
		return NumberOfPassenger;
	}
	void show();
};

class CargoShip : public Ship
{
	int tonnage;
public:
	CargoShip(string , string d, int );
	void set_ton(int n){
		tonnage = n;
	}
	void show();
};
#endif
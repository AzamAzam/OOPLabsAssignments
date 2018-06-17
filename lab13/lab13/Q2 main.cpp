#include <iostream>
#include "shape.h"
using namespace std;
int main()
{

	Circle c(3, 8, 4);
	c.cal_area();

		double len,  wid;
		cout << "Enter length : ";
		do {
			cin >> len;
			if (len < 0){
				cout << "ReEnter : ";
	
			}
	
		} while (len < 0);
		cout << "\nEnter width : ";
		do {
			cin >> wid;
			if (wid < 0){
				cout << "ReEnter : ";
	
			}
	
		} while (wid < 0);
		
	

	Rectangle r(len,wid);
	
	cout <<"Area of Cicle : "<<c.get_area()<<endl;
	r.cal_area();
	cout <<"Area Of Ractangle : "<<r.get_area()<<endl;
}
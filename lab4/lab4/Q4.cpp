#include <iostream>
 #include "Date.h" // include defini tion of class Date from Date.h
 using namespace std;

 int main()
 {
	 int incre;
	 Date date1(7, 4, 2004);
	 Date date2; // date2 defaul ts to 1/1/2000

	 cout << "date1 = ";
	 date1.print();
//	 cout << "\ndate2 = ";
//	 date2.print();
	 cout << "How many days you want to increment : ";
	 cin >> incre;
	 date1.nextDay(incre);
	// date2 = date1;

	 //cout << "\n\nAfter default memberwise assignment, date2 = ";
	 date1.print();
	 cout << endl;
 }
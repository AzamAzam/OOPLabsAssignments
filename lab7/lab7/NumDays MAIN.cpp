//#include <iostream>
//#include"NumDays.h"
//using namespace std;
//int main()
//{
//	double  hours;
//
//	//hours input with validation 
//	cout << "Enter  Working Hours of 1st Person  : ";
//	do {
//		cin >> hours;
//		if (hours < 0)
//			cout << "Enter Hours Greater than zero : \nReEnter : ";
//	} while (hours < 0);
//	NumDays per1(hours);
//	//calling converter 
//	cout << "Worked in Days of 1st person = " << per1.getDays() << endl;
//
//	cout << "Enter  Working Hours of 2nd Person : ";
//	do {
//		cin >> hours;
//		if (hours < 0)
//			cout << "Enter Hours Greater than zero : \nReEnter : ";
//	} while (hours < 0);
//	cout << endl;
//	
//	NumDays per2(hours);
//	// calling converter
//	cout << "Worked in Days of 2nd person = " << per2.getDays() << endl;
//	cout << endl;
//
//	NumDays per3;
//	// calling + operator
//	cout << "3rd Person is the Sum of Both Persons"<<endl;
//	per3 = per1 + per2;
//	cout << "Worked in Hours of 3rd Person = " << per3.getHours() << endl;
//
//	cout << "Worked in Days of 3rd Person = " << per3.getDays() << endl;
//
//	cout << endl;
//	// calling - operator
//	cout << "3rd Person is the Difference of Both Persons" << endl;
//	per3 = per1 - per2;
//	cout << "Worked in Hours of 3rd Person = " << per3.getHours() << endl;
//
//	cout << "Worked in Days of 3rd Person = " << per3.getDays() << endl;
//
//	cout << endl;
//	//calling ++prefix
//	cout << "3rd person Worked incremented by One hour : " << endl;
//	++per3;
//	cout << "Worked in Hours of 3rd Person = " << per3.getHours() << endl;
//
//	cout << "Worked in Days of 3rd Person = " << per3.getDays() << endl;
//
//	cout << endl;
//	//calling ++postfix
//	cout << "2nd person Worked incremented by One hour postFix : " << endl;
//	per3=per2++;
//	cout << "Worked in Hours of 2nd Person = " << per3.getHours() << endl;
//	cout << "Worked in Days of 2nd Person = " << per3.getDays() << endl;
//
//	cout << endl;
//	cout << "Getting Valus Now :\n";
//	cout << "Worked in Hours of 2nd Person  = " << per2.getHours() << endl;
//
//	cout << "Worked in Days of 2nd Person = " << per2.getDays() << endl;
//
//
//	cout << endl;
//	//calling --prefix
//	cout << "2nd person Worked decremented by One hour : " << endl;
//	--per2;
//	cout << "Worked in Hours of 3rd Person = " << per2.getHours() << endl;
//
//	cout << "Worked in Days of 3rd Person = " << per2.getDays() << endl;
//
//	cout << endl;
//	//calling --postfix
//	cout << "2nd person Worked decremented by One hour postFix : " << endl;
//	per3 = per2--;
//	cout << "Worked in Hours of 2nd Person = " << per3.getHours() << endl;
//	cout << "Worked in Days of 2nd Person = " << per3.getDays() << endl;
//
//	cout << endl;
//	cout << "Getting Valus Now :\n";
//	cout << "Worked in Hours of 2nd Person  = " << per2.getHours() << endl;
//
//	cout << "Worked in Days of 2nd Person = " << per2.getDays() << endl;
//
//
//
//}
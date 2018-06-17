#include <iostream>
 #include "Date.h" // include defini tion of class Date from Date.h
 using namespace std;

// Date constructor (shoul d do range checking)
 Date::Date(int m, int d, int y)
 {
	 if (m <= 12 && m > 0)
 month = m;
	 else {
		 cout << "You entered Wrong Month : ";
		 while (m<=0 || m>12){
			 cout << "ReEnter ";
			 cin >> m;
		 }
		 month = m;
	 }
	 if (d <= 30 && m > 0)
		 day = d;
	 else {
		 cout << "You entered Wrong Days : ";
		 while (d<=0 || d>30){
			 cout << "ReEnter ";
			 cin >> d;
		 }
		 day = d;
	 }
	 if (y <= 2100 && m >= 1900)
		 year = y;
	 else {
		// cout << "You entered Wrong Year : ";
		 while (y<1900 || y>2100){
			 cout << "ReEnter ";
			 cin >> y;
		 }
		 year = y;
	 }
 } // end constructor Date

 // print Date i n the format mm/dd/yyyy
 void Date::print()
 {
 cout << day << '/' << month << '/' << year;
}
 void Date:: nextDay(int incremented_days){
	 for (int i = 0; i < incremented_days;i++){
		 day++;
		 if ((month == 4 || month == 6 || month == 9 || month == 11 && (day>30)) || (month == 2 && day>28) || ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)&&(day>31))){
			 month++;
			 day = 1;
		 }
		 if (month > 12){
			 month = 1;
			 year++;
				 
			 }
		 
	 }
 }
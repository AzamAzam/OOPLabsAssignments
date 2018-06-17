#include "milTIme.h"
#include <iostream>
using namespace std;

 void MilTime::setTime(){
	 int temp;
	 temp = MilHours;
	 min = temp % 100;
	 temp /= 100;
	 if ( temp> 12){
		 hour = temp - 12;
		 str = "p.m";
	 }
	 else if (temp==12)
	 {
		 hour = temp;
		 str = "p.m";
	 }
	 else if (temp == 0){
		 hour = 12;
		 str = "a.m";
	 }
	 else if (temp < 12){
		 hour = temp;
		 str = "a.m";
	 }
	 sec = milsec;
}
 void MilTime::show(){
	 cout << "Military Time : " << endl << MilHours << ":" << milsec << endl;
	 cout << "Standard Time : " << endl << hour << ":" << min << ":" << sec << " " << str << endl;
 }
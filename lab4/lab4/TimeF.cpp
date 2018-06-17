#include <iostream >
#include "Time.h"
using namespace std;

void Time::setTime(int h, int m, int s){
	if (h >= 0 && h <24)
		hour = h;
	else{
		cout << "You enterd a wrong hour : \n reEnter : ";
		while (h< 0 || h >= 24){
			cin >> h;
		}
		hour = h;
	}
	if (m >= 0 && m <60)
		mint = m;
	else{
		cout << "You enterd a wrong hour : \n reEnter : ";
		while (m< 0 || h >= 60){
			cin >> m;
		}
		mint = m;
	}
	if (s >= 0 && s <60)
		sec = s;
	else{
		cout << "You enterd a wrong hour : \n reEnter : ";
		while (s < 0 || s >= 60){
			cin >> s;
		}
		sec = s;
	}

}

void Time::printUnivesal(){
	cout << "Unversal Time :\n";
	cout << hour << " : " << mint << " : " << sec << endl;
}
void Time::printStandars(){
	cout << "Standard Time : \n";
	if (hour<12 && hour>1){
		cout << hour << " : " << mint << " : " << sec << " AM " << endl;
	}
	else if (hour > 12 && hour < 24){
		cout << hour - 12 << " : " << mint << " : " << sec << " PM " << endl;
	}
	else if (hour == 0)
	{
		cout << hour + 12 << " : " << mint << " : " << sec << " AM " << endl;
	}
	else if (hour == 12)
		cout << hour << " : " << mint << " : " << sec << " PM " << endl;
}
Time::Time()
{ 
	hour = 0;
	mint = 0;
	sec = 0;
}
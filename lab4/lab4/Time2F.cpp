#include <iostream>
#include "Time2.h"
using namespace std;

void Time2::setTime(int h , int m, int s){
	setHour(h);
	setMint(m);
	setSec(s);

}

void Time2::setHour(int h){
	if (h < 24 && h >= 0)
		hour = h;
	else{
		cout << "You entered Wrong value of Hours \n  ";
		while (h < 0||h>23)
		{
			cout << "ReEnter : ";
			cin >> h;
		}
		hour = h;
	}
	
}
void Time2::setMint(int m){
	if (m < 60 && m >= 0)
		min=m;
	else{
		cout << "You entered Wrong value of Mintues \n  ";
		while (m < 0 || m>=60)
		{
			cout << "ReEnter :";
			cin >> m;
		}
		min=m;
	}

}
void Time2::setSec(int s){
	if (s < 60 && s >= 0)
		sec = s;
	else{
		cout << "You entered Wrong value of Seconds \n ";
		while (s < 0 || s >= 60)
		{
			cout << "ReEnter : ";
			cin >> s;
		}
		sec = s;
	}

}
Time2::Time2( int h=0,int m=0,int s=0)
{
	setTime(h, m, s);
}

void Time2::printUniversal(){
	cout << getHour() << " : " << getMint() << " : " << getSec() << endl;
}
void Time2::printStandard(){
	cout << "Standard Time : \n";
	if (hour<12 && hour>1){
		cout << getHour() << " : " << getMint() << " : " << getSec() << " AM " << endl;
	}
	else if (hour > 12 && hour < 24){
		cout << getHour() - 12 << " : " << getMint() << " : " << getSec() << " PM " << endl;
	}
	else if (hour == 0)
	{
		cout << getHour() + 12 << " : " <<getMint() << " : " << getSec() << " AM " << endl;
	}
	else if (hour == 12)
		cout << getHour() << " : " << getMint() << " : " << getSec ()<< " PM " << endl;

}
int Time2::getHour(){
	return hour ;
}
int Time2::getMint(){
	return min;
}
int Time2::getSec(){
	return sec;
}
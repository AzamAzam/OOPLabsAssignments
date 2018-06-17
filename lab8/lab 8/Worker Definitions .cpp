#include "worker.h"
#include <iostream>
using namespace std;

void Employee::show_hire_date()
{
	cout << "Date " << HireDay << " / " << HireMonth << " / " << HireYear << endl;
}

void Employee:: set_day(int d){
	if (d < 0){
		HireDay = d*-1;
	}
	else if (d>31)
	do {
		cout << "ReEnter Day :";
		cin >> d;
	} while (d > 31);

		HireDay = d;
}
void Employee::set_month(int m){
	if (m < 0)
		HireMonth = m*-1;
	else if (m>12){
		do {
			cout << "ReEnter Month :";
			cin >> m;
		} while (m > 12);
	}
		HireMonth = m;
}

void ProductionWorker:: set_shift(int s){
	if (shift == 1 || shift == 2)
		shift = s;
	else
	{
		do {
			cout << " Enter Shift : ";
			cin >> s;
		} while (!(shift == 1 || shift == 2));
	}
}


void ProductionWorker::show_shift(){
	if (shift == 1)
		cout << "Day  ";
	else
		cout << "NIght ";
	
}
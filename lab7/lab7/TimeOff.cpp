#include"TimeOff.h"
#include  "NumDays.h"
#include <iostream>
using namespace std;
void TimeOff::setName(char name[] ){
	int i;
	for ( i = 0; name[i] != NULL; i++)
		employees_name[i] = name[i];
	employees_name[i] = NULL;

}
void TimeOff::setId(int n)
{
	id = n;
}
char* TimeOff::getName(){
	return employees_name;
}
int TimeOff::getId(){
	return id;
}
void TimeOff::setValues(){
	double hours;
	cout << "Enter Values in Hours : \n";
	//hours input with validation  of max Sick
	cout << "Enter   of Maximum Sick  : ";
	do {
		cin >> hours;
		if (hours < 0 || hours>240)
			cout << "Enter Hours Greater than zero  and less than 240 : \nReEnter : ";
	} while (hours < 0 || hours>240);
	max_sick.setHours(hours);

	cout << endl;
	//hours input with validation  Sick Taken 
	cout << "Enter   of  Sick Taken  : ";
	do {
		cin >> hours;
		if (hours < 0 || hours>240||hours>max_sick.getHours())
			cout << "ReEnter : ";
	} while (hours < 0 || hours>240||hours>max_sick.getHours());
	sick_taken.setHours(hours);

	cout << endl;
	//hours input with validation max Vacations
	cout << "Enter   of Maximum vacations  : ";
	do {
		cin >> hours;
		if (hours < 0 || hours>240)
			cout << "Enter Hours Greater than zero  and less than 240 : \nReEnter : ";
	} while (hours < 0 || hours>240);
	max_vacation.setHours(hours);

	cout << endl;
	//hours input with validation Vaction Taken
	cout << "Enter   of Vaction Taken : ";
	do {
		cin >> hours;
		if (hours < 0 || hours>240 || hours>max_vacation.getHours())
			cout << "\nReEnter : ";
	} while (hours < 0 || hours>240||hours>max_vacation.getHours());
	vac_taken.setHours(hours);
	 	//hours input with validation Max unpaid
	cout << "Enter   of Maximum Unpaid  : ";
	do {
		cin >> hours;
		if (hours < 0 || hours>240)
			cout << "Enter Hours Greater than zero  and less than 240 : \nReEnter : ";
	} while (hours < 0 || hours>240);
	max_unpaid.setHours(hours);
	cout << endl;
	
	
	//hours input with validation un_paid_taken

	cout << "Enter   of Un Paid Taken   : ";
	do {
		cin >> hours;
		if (hours < 0 || hours>240 || hours>max_unpaid.getHours())
			cout << "\nReEnter : ";
	} while (hours < 0 || hours>240 || hours>max_unpaid.getHours());
	max_unpaid.setHours(hours);
	cout << endl;
}

double TimeOff::getMaxSickDays(){
	return max_sick.getDays();
}

double TimeOff:: getSickTaken(){
	return sick_taken.getDays();

}
double TimeOff:: getMaxVacetion(){
	return max_vacation.getDays();
}
double TimeOff:: getVacTaken(){
	return vac_taken.getDays();

}
double TimeOff:: getmaxUnpaid(){
	return max_unpaid.getDays();
}
double TimeOff:: getUnpaidTaken(){
	return un_paid_taken.getDays();

}

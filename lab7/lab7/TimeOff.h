#include "NumDays.h"
#ifndef NUMOFF_H
#define NUMOFF_H
class TimeOff
{
	char employees_name[50];
	int id;
	NumDays max_sick, sick_taken, max_vacation, vac_taken, max_unpaid, un_paid_taken;
	
public:
	void setValues();
	void setName(char[]);
	void setId(int);
	char* getName();
	int getId();
	
	double getMaxSickDays();
	double getSickTaken();
	double getMaxVacetion();
	double getVacTaken();
	double getmaxUnpaid();
	double getUnpaidTaken();




};
#endif
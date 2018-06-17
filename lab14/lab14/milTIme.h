#ifndef MILTIME_H
#define MILTIME_H
#include "Time.h"
#include <string >
using namespace std;

class MilTime:public Time
{
	int MilHours,milsec;
	string str;
public:
	MilTime();
	MilTime(int m,int s){
		MilHours = m;
		milsec = s;
		setTime();
	}
	void setTime();
	int  getHour()
	{
		return MilHours;
	}

	int getHourSt()
	{
		return hour;
	}
	void show();
};
#endif 
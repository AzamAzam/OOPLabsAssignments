#ifndef DATETIME_H
#define DATETIME_H
#include <iostream>
#include <string>
using namespace std;

#include "Date.h"
#include"Time.h"
class DateTime :public Date,public Time
{
public:
	DateTime();
	DateTime(int d, int m, int y, int h, int min, int s) :Date(d, m, y), Time(h,min,s)
	{

	};
	void ShowDateTime(){
		cout << day << "\\" << month << "\\" << year << " " << hour << " : " << min << " : " << sec << endl;
	}


};
#endif 
// Specification file for the Date class
#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date
{
protected:
	int day;
	int month;
	int year;
public:
	void setvalue(int d, int m, int y)
	{
		if (d<1 || d>31)
			throw "Bad Day";
		if (m<1 || m>12)
			throw "Bad Month";
		if (y<1900 || y>2100)
			throw "Bad year";
		day = d; month = m; year = y;

	}
	// Default constructor
	Date()
	{
		day = 1; month = 1; year = 1900;
	}

	// Constructor
	Date(int d, int m, int y)
	{
	
		setvalue(d,m,y);
	}

	// Accessors
	int getDay() const
	{
		return day;
	}

	int getMonth() const
	{
		return month;
	}

	int getYear() const
	{
		return year;
	}
	void showdate(){
		cout << day << "\\" << month << "\\" << year << endl;
	}
};
#endif

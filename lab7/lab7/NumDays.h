#ifndef NUMDAYS_H
#define NUMDAYS_H
class NumDays
{
	double  hours, days;
public:
	NumDays(double);
	NumDays();

	void setHours(double);
	double getDays();
	double getHours();

	void hourToDays();
	
	NumDays operator=(NumDays &);
	NumDays operator+(NumDays );
	NumDays operator -(NumDays);
	NumDays operator++();
	NumDays operator++(int);
	NumDays operator --();
	NumDays operator --(int);

};
#endif 
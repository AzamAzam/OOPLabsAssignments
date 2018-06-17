#include "NumDays.h"

//constructors
NumDays::NumDays(double h){
	hours = h;
	hourToDays();
}
NumDays::NumDays()
{
	hours = 0;
	days = 0;
}
//setter
void NumDays::setHours(double h){
	hours = h;
	hourToDays();
}

//getter 
double NumDays::getDays(){
	return days;
}
double NumDays:: getHours(){
	return hours;
}



// calculation
void NumDays::hourToDays()
{
	days=hours / 8;
}

					// operator OverLoading 

NumDays NumDays::operator= (NumDays &x){
	
	hours = x.hours;
	days = x.days;
	return *this;
}

NumDays NumDays:: operator+(NumDays x){
	NumDays temp;
	temp.hours = this->hours + x.hours;
	temp.hourToDays();
	return temp;

}

NumDays NumDays:: operator-(NumDays  x){
	NumDays temp;
	temp.hours = this->hours - x.hours;
	if (temp.hours < 0)
		temp.hours = temp.hours *-1;
	temp.hourToDays();
	return temp;

}

//prefix
NumDays NumDays::operator++(){
	
	hours=hours + 1;

	hourToDays();
	return *this;
}

//postfix
NumDays NumDays::operator++(int ){
	NumDays temp;
	temp = *this;
	hours = hours + 1;

	hourToDays();
	return temp;
}


NumDays NumDays::operator--(){

	hours = hours - 1;

	hourToDays();
	return *this;
}

NumDays NumDays::operator--(int){
	NumDays temp;
	temp = *this;
	hours = hours - 1;

	hourToDays();
	return temp;
}



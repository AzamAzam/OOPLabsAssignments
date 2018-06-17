#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include <string>
using namespace std;
class Employee{
	string name;
	int employeeNumber;
	int HireDay;
	int HireMonth;
	int HireYear;
public:
	Employee(string n = " ", int num = 0, int d = 1, int m = 1, int y = 2016){

		name = n;
		employeeNumber = num;
		HireDay = d;
		HireMonth = m;
		HireYear = y;
	}

	void set_name(string n){
		name = n;

	}
	void set_employee_number(int n)
	{
		employeeNumber = n;

	}
	string get_name(){
		return name;

	}
	int get_emp_numb()
	{
		return employeeNumber;
	}

	void set_day(int d);
		
	void set_month(int m);
	void set_year(int y)
	{
		if (y < 1950||y>2100){
			do {
				cout << " ReEnter Year : ";
				cin >> y;
			} while (y < 1950 || y>2100);

		}
		HireYear = y;
	}
	void show_hire_date();

};

class ProductionWorker :public Employee
{
	int shift;
	double hourly_rate;
public:
	void set_shift(int s);
	void show_shift();
	void set_rate(double x){
		if (x > 0)
			hourly_rate = x;
		else
			hourly_rate = x*-1;
	}

	double get_rate(){
		return hourly_rate;
	}
};
#endif 
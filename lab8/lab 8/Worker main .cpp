#include <iostream>
#include"worker.h"
#include <string>
using namespace std;
int main()
{
	string name;
	int r, n,d,m,y,shift;
	ProductionWorker p1;
	cout << " Enter Employee Name : ";
	getline(cin, name);
	p1.set_name(name);
	
	cout << "Employee Number : ";
	cin >> n;
	p1.set_employee_number(n);

	cout << "Enter Hire Dtae : ";
	cin >> d >> m >> y;
	p1.set_day(d);
	p1.set_month(m);
	p1.set_year(y);
	
	cout << "Enter Shift :";
	cin >> shift;
	p1.set_shift(shift);

	cout << "Enter Hourly Rate : ";
	cin >> r;
	p1.set_rate(r);


	cout << "Employee Name : " << p1.get_name() << endl;
	cout << "Epployee ID : " << p1.get_emp_numb() << endl;
	p1.show_hire_date();
	p1.show_shift();
	cout << "HOurly rate : " << p1.get_rate() << endl;

}
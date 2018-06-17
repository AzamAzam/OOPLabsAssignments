#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
	int d, m, y;
	cout << "Enter day";
	cin >> d;
	cout << "Enter Month :";
	cin >> m;
	cout <<"ENTER Year : ";
	cin>> y;
	Date date;
	bool check = true;
	while (check)
	{


		try{
			date.setvalue(d, m, y);
			check = false;
		}
		catch (char *c){
			if (strcmp(c, "Bad Day") == 0){
				cout << c << endl;
				cout << "Enter Day";
				cin >> d;
			}
			else if (strcmp(c, "Bad Month") == 0){
				cout << c << endl;
				cout << "Enter month : ";
				cin >> m;
			}
			else
			{
				cout << c << endl;
				cout << "Enter Year :";
				cin >> y;
			}
		}
	}
	date.showdate();
}
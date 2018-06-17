#include <iostream>
#include "milTIme.h"
using namespace std;
int main()
{
	int hourmin,s;
	cout << "Enter time in Miltiry Hours ";
	do {
		cin >> hourmin;
	} while (hourmin % 100 > 59 || hourmin<0 || hourmin>2359);
	cout << "Enter sec ";
	do {
		cin >> s;
	} while (s<0 || s>59);

	MilTime m(hourmin,s);

	m.show();
}
//#include <iostream>
//#include "milTIme.h"
//
//using namespace std;
//int main()
//{
//	bool check=true ;
//	int hourmin,s;
//	cout << "Enter time in Miltiry Hours : ";
//	cin >> hourmin;
//	cout << "ENter sec : ";
//	cin >> s;
//	while (check){
//		
//		try{
//
//			if (hourmin % 100 > 59 || hourmin<0 || hourmin>2359)
//			{
//				throw "ERROR :BAD HOUR ";
//			}
//			if (s<0 || s>59){
//				throw "ERROR :BAD seconds ";
//			}
//			check = false;
//		}
//		catch (char *c)
//		{
//			if (strcmp(c, "ERROR :BAD HOUR ")==0){
//				cout << c << endl;
//				cout << "Enter Hours Again : ";
//				cin >> hourmin;
//			}
//			else {
//				cout << c << endl;
//				cout << "Enter sec Again : ";
//				cin >> s;
//			}
//		}
//	} 
//
//
//
//	
//	MilTime m(hourmin,s);
//
//	m.show();
//}
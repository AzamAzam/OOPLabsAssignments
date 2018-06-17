//#include <iostream>
//#include<string>
//#include <fstream>
//
//using namespace std;
//struct Division
//{
//	string name;
//	double sales[4];
//
//	
//
//};
//int main()
//{
//	fstream file;
//	string name[4] = { "East", "West", "North", "South" };
////	double sales[4];
//	Division d[4];
//	
//	double s;
//	file.open("Sales.txt", ios::out);
//	for (int i = 0; i < 4; i++){
//		file << name[i] << endl;
//		d[i].name = name[i];
//		cout << "Enter Sales  for "<< d[i].name<< " Division : "<<endl;
//		for (int j = 0; j < 4; j++){
//			cout << j + 1 << " Quarter : ";
//			do
//			{
//				cin >> s;
//			} while (s<0);
//			 d[i].sales[j]=s;
//			 file << d[i].sales[j]<<" ";
//		}
//		file << endl;
//		
//	}
//}
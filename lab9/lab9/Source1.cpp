//#include <iostream>
//#include <string>
//#include <fstream>
//using  namespace std;
//int main()
//{
//	int n,i=1;
//	string name ,end,begin;
//	fstream file;
//	file.open("name.txt",ios::in);
//
//	do {
//		cout << "Enter Number of Students (1-25) : ";
//		cin >> n;
//	} while (n > 25 || n < 1);
//	file >> name;
//	begin = name;
//	end = name;
//	while (i < n){
//		file  >> name;
//		if (strcmp(name.c_str(), begin.c_str())<0)
//			begin = name;
//		if (strcmp(name.c_str(), end.c_str()) > 0)
//			end = name;
//		i++;
//	}
//	cout << "Begin " << begin << endl;
//	cout << "End  " << end << endl;
//
//}
//#include <iostream>
//#include <string>
//#include "TestScore.h"
//using namespace std;
//int main()
//{
//	string name;
//	int tests;
//	double score;
//	cout << " Total Number of tests : ";
//	cin >> tests;
//
//	StudentTestScores std1(tests),std2,std3;
//	cout << "Enter Name of Student Name : ";
//	cin >> name;
//	std1.setStudentName(name);
//
//	cout << "Enter Test Scores : \n\n";
//	for (int i = 0; i < tests; i++){
//		cout << "Enter Scores of Test " << i + 1 << " : ";
//		cin >> score;
//		std1.setTestScore(score, i);
//	}
//	cout << "Enter Student Name 2 :  ";
//	cin >> name;
//	std2.setStudentName(name);
//	
//	cout << "Enter Student Name 3 :  ";
//	cin >> name;
//	std3.setStudentName(name);
//
//	std3 = std2 = std1;
//	cout << "\t\tStudent 1"<<endl;
//	cout << "Name : " << std1.getName()<<endl;
//	cout << "Total number of test scores = " << std1.getNumTestScores()<<endl;
//	
//	cout <<  "Test Scores : \n\n";
//	for (int i = 0; i < tests; i++){
//		cout << "Scores of Test " << i + 1 << " = ";
//		
//		cout <<std1.getTestScore(i)<<endl;
//	}
//
//	
//	cout << "\n\t\tStudent 2 " << endl << endl;
//	cout << "Name : " << std2.getName()<<endl;
//	cout << "Total number of test scores = " << std2.getNumTestScores() << endl;
//
//	cout << "Test Scores : \n\n";
//	for (int i = 0; i < tests; i++){
//		cout << "Scores of Test " << i + 1 << " = ";
//
//		cout << std2.getTestScore(i)<<endl;
//	}
//
//	cout << "\n\t\tStudent 3 " << endl << endl;
//	cout << "Name : " << std3.getName() << endl;
//	cout << "Total number of test scores = " << std3.getNumTestScores() << endl;
//
//	cout << "Test Scores : \n\n";
//	for (int i = 0; i < tests; i++){
//		cout << "Scores of Test " << i + 1 << " = ";
//
//		cout << std3.getTestScore(i) << endl;
//	}
//}
#include <iostream>
#include <string>
#include "TestScore.h"
using namespace std;
int main()
{
	string name;
	int tests;
	double score;
	cout << " Total Number of tests : ";
	cin >> tests;

	StudentTestScores std1(tests);
	cout << "Enter Name of Student Name : ";
	cin >> name;
	std1.setStudentName(name);

	cout << "Enter Test Scores : \n\n";
	for (int i = 0; i < tests; i++){
		cout << "Enter Scores of Test " << i + 1 << " : ";
		cin >> score;
		std1.setTestScore(score, i);
	}

	cout << "\t\tStudent 1"<<endl;
	cout << "Name : " << std1.getName()<<endl;
	cout << "Total number of test scores = " << std1.getNumTestScores()<<endl;
	
	cout <<  "Test Scores : \n\n";
	for (int i = 0; i < tests; i++){
		cout << "Scores of Test " << i + 1 << " = ";
		
		cout <<std1.getTestScore(i)<<endl;
	}

	StudentTestScores std2(std1);
	cout << "Name of Student 2: ";
	cin >>name;
	std2.setStudentName(name);
	cout << "\n\t\tStudent 2 " << endl << endl;
	cout << "Name : " << std2.getName()<<endl;
	cout << "Total number of test scores = " << std1.getNumTestScores() << endl;

	cout << "Test Scores : \n\n";
	for (int i = 0; i < tests; i++){
		cout << "Scores of Test " << i + 1 << " = ";

		cout << std1.getTestScore(i)<<endl;
	}

}
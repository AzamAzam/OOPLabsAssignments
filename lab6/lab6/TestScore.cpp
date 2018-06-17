#include "TestScore.h"
#include <iostream>
#include <string>
using namespace std;

StudentTestScores::StudentTestScores(int n){
	numTestScores = n;
	if (n>0)
	testScores = new double[numTestScores];

}
StudentTestScores::StudentTestScores(){
	numTestScores = 0;
}
StudentTestScores::~StudentTestScores(){
	delete[] testScores;
	cout << "Destructor  : ";


}

StudentTestScores StudentTestScores::operator=(const StudentTestScores &x){
	delete[]testScores;
	
	numTestScores = x.numTestScores;
	testScores = new double[numTestScores];
	for (int i = 0; i < numTestScores; i++){
		testScores[i] = x.testScores[i];
	}
	return *this;
}
//copy constructor
StudentTestScores::StudentTestScores(const StudentTestScores & x){
	
	numTestScores = x.numTestScores;
	testScores = new double[numTestScores];
	for (int i = 0; i < numTestScores; i++){
		testScores[i] = x.testScores[i];
	}

}
void StudentTestScores::setStudentName(string name){
	studentName = name;

	
}
string StudentTestScores::getName(){
	return studentName;
}

void StudentTestScores::setTestScore(double num, int t){
	if (t>=0&&t<numTestScores)
	testScores[t] = num;
}

int StudentTestScores:: getNumTestScores(){
	return numTestScores;
}

double  StudentTestScores::getTestScore( int t){
	if (t >= 0 && t<numTestScores)
	return testScores[t];
}


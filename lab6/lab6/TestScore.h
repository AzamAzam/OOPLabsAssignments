#ifndef TESTSCORE_H
#define TESTSCORE_H
#include <string>
using namespace std;
class StudentTestScores
{
	
	string studentName ;
	double *testScores;
	int numTestScores;
	void createTestScoresArray();
public :
	StudentTestScores operator=(const StudentTestScores &);
	string getName();
	void setTestScore(double ,int );
	
	void setStudentName(string);
	int  getNumTestScores();
	double getTestScore(int );

	StudentTestScores();
	StudentTestScores(int );
	StudentTestScores(const StudentTestScores & x);
	~StudentTestScores();

};
#endif 

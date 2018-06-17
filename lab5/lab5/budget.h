
#ifndef BUDGET_H
#define BUDGET_H

#include"Auxoffice.h" 
using  namespace std;

class Budget
{
 private:
 static double corpBudget;
 double divBudget;
 public:
 Budget() {
	 divBudget = 0;
 }
 
 void addBudget(double b)
 { 
	 divBudget += b;
	 corpBudget += b;
 }
 
 double getDivBudget() { 
	 return divBudget;
 }
 
 static double getCorpBudget() { 
	 return corpBudget; 
 }
 static void mainOffice(double b){
	 corpBudget += b;
 }

 friend void AuxOffice::addBudget(double);
 };
 #endif
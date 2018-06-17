#ifndef DATE_H
#define DATE_H

// cl ass Date definition
 class Date
 {
 public :
 Date(int = 1, int = 1, int = 2000); // default constructor
 void nextDay(int);
 void print();
 private:
 int month;
 int day;
 int year;
 
 }; // end class Date

 #endif
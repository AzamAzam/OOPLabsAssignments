#ifndef TIME_H
#define TIME_H
class Time{
	int hour, mint, sec;
public:
	void setTime(int h, int m, int s);

	void printUnivesal();
	void printStandars();
	Time();
};
#endif
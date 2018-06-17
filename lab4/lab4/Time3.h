#ifndef TIME3_H
#define TIME3_H
class Time3
{
	int hour, min, sec;
public:
	void tickincremet(int);
	Time3(int, int, int);
	void setTime(int, int, int);
	void setHour(int);
	void setMint(int);
	void setSec(int);
	void printUniversal();
	void printStandard();
	int getHour();
	int getMint();
	int getSec();

};
#endif
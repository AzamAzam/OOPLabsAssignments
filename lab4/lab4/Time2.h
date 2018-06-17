#ifndef TIME2_H
#define TIME2_H
class Time2
{
	int hour, min, sec;
public:
	Time2(int, int, int);
	void setTime(int,int,int );
	void setHour(int );
	void setMint(int );
	void setSec(int );
	void printUniversal();
	void printStandard();
	int getHour();
	int getMint();
	int getSec();

};
#endif
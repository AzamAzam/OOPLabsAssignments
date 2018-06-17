#include <cstring>
#ifndef MONTH_H
#define MONTH_H
class Month
{
	int   monNum;
public:
	//default Constructer
	Month();

	Month(int num);

	void getmonName();
	void setMonNum(int);
	int   getMonNum();
	Month operator++()
	{
		Month temp;
		monNum ++;
		(this->monNum);
		return *this;
	}
	Month operator++(int)
	{
		Month temp;
		temp.monNum =this->monNum;
		this->monNum++;
		return temp;
	}

	Month operator --()
	{
		monNum --;
		(this->monNum);
		return *this;
	}
	Month operator --(int)
	{
		Month temp;
		temp.monNum =this->monNum;
		this->monNum--;
		return temp;
	}
};
#endif // !MONTH_H

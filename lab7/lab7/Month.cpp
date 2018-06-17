#include <iostream>
#include "Month.h"
using namespace std;

Month::Month()
{
	monNum = 1;
}

Month::Month(int num)
{
	setMonNum(num);
}

void Month :: setMonNum(int m)
{
	monNum = m;
}
int Month :: getMonNum()
{
	return monNum;
}
void Month :: getmonName()

{
	char monName [12][12]={"January","February","March","April","May","June", "July","August","September","October","November","December"};
	if(monNum==1)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[0];
	}
	else if(monNum==2)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[1];
	}
	else if(monNum==3)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[2];
	}
	else if(monNum==4)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[3];
	}
	else if(monNum==5)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[4];
	}
	else if(monNum==6)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[5];
	}
	else if(monNum==7)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[6];
	}
	else if(monNum==8)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[7];
	}
	else if(monNum==9)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[8];
	}
	else if(monNum==10)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[9];
	}
	else if(monNum==11)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[10];
	}
	else if(monNum==12)
	{
		cout<<"\n MONTH NUMBER IS: "<<monNum;
		cout<<"\n MONTH NAME   IS: "<<monName[11];
	}
	else if(monNum==13)
	{
		cout<<"\n MONTH NUMBER IS: 12";
		cout<<"\n MONTH NAME   IS: "<<monName[0];
	}
	else if(monNum<1)
	{
        cout<<"\n MONTH NUMBER IS: 12";
		cout<<"\n MONTH NAME   IS: "<<monName[11];
	}


}

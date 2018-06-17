#include<iostream>
#include <cmath>
using namespace std;


class Rectangle
{
	double length1;
	double width1;
	double length2;
	double width2;
	double distance;
public:
	double  calcuDistance(double x1, double y1, double  x2, double  y2)
	{
		distance = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
		distance = sqrt(distance);
		
		return distance;
	}
	void setLength1(double x1,double y1,double x2, double y2)
	{
		length1 = calcuDistance(x1,y1,x2,y2);
		cout <<endl <<length1<<endl;
	}

	void setLength2(double x1, double y1, double x2, double y2)
	{
		length2 = calcuDistance(x1, y1, x2, y2);
	}

	void setwidth1(double x1, double y1, double x2, double y2)
	{
		width1 = calcuDistance(x1, y1, x2, y2);
	}

	void setwidth2(double x1, double y1, double x2, double y2)
	{
		width2 = calcuDistance(x1, y1, x2, y2);
		
	}
	double getArea()
	{
		if (length1 == length2 && width1 == width2)
		{
			return (length1* width1);
		}
		else
		{
			cout << "It is not a Rectangle ";
			return 0;
		}
	}
	double getPerimeter()
	{
		if (getArea() > 0)
			return (2 * (length1 + width1));
		else
			return 0;

	}
	bool checkRect()
	{
		
	}
	
};

int main()
{
	Rectangle rect;
	double p,a;
	double  x1, x2, x3, x4, y1, y2, y3, y4;
	do
	{

		cout << "Enter 1st co_ordinate : ";
		cin >> x1 >> y1;
	} while (x1 <0 || x1 >20 || y1 < 0 || y1 >20);
	
	do
	{

		cout << "Enter 2nd co_ordinate : ";
		cin >> x2 >> y2;
	} while (x2 <0 || x2 >20 || y2 < 0 || y2 >20);

	do
	{

		cout << "Enter 3rd co>ordinate : ";
		cin >> x3 >> y3;
	} while (x3 <0 || x3 >20 || y3 < 0 || y3 >20);

	do
	{

		cout << "Enter 4th  co>ordinate : ";
		cin >> x4 >> y4;
	} while (x4 <0 || x4 >20 || y4 < 0 || y4 >20);
	
cout <<	" "<<rect.calcuDistance(x1, y1, x2, y2);
	rect.setLength1(x1, y1, x2, y2);
	rect.setLength2(x3, y3, x4, y4);
	rect.setwidth1(x1, y1, x3, y3);
	rect.setwidth2(x2, y2, x4, y4);
	
	//rect.setwidth(width);
	p = rect.getPerimeter();
	a = rect.getArea();
	if (a>0)
		cout << "Area of Rectangle = " << rect.getArea() << endl;
	if (p>0)
		cout << "Perimeter of Rectangle = " << rect.getPerimeter() << endl;

}
#ifndef RECT_H
#define RECT_H

class Area
{
public :
	double cal_area(double l, double w){
		return l*w;
	}
};
class Perimeter
{
public :
	double cal_perimeter(double l, double w){
		return (2 * (l + w));
	}
	
};
class Rectangle:public Area,public Perimeter
{
	double length;
	double width;
public:
	Rectangle(){
		length = 0;
		width = 0;
	}
	Rectangle(double l, double w){
		length = l;
		width = w;
	}
	
	void setvalues(double l, double w){
		length = l;
		width = w;
	}
	double area(){
		return cal_area(length, width);
	}
	double perimeter(){
		return cal_perimeter(length, width);
	}
};







#endif
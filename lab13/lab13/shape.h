#ifndef SHAPE_H
#define SHAPE_H
class BasicShap{
protected:
	double 	area;
public:
	virtual void  cal_area() = 0;
	double get_area(){
		return area;
	}

};



class Circle :public BasicShap
{
private:
	long int centerX, centerY;
	double radius;

public:
	void cal_area(){
		area = 3.14159	*	radius	*	radius;
	}
	long int get_centerX(){
		return centerX;
	}
	long int get_centerY(){
		return centerY;
	}
	Circle(){
		centerX = 0;
		centerY = 0;
		radius = 0;

	}
	Circle(long int x, long int y, double r){
		centerX = x;
		centerY = y;
		radius = r;

	}
};
class Rectangle : public BasicShap
{
	double length,width ;


public:
	Rectangle();
	Rectangle(double l, double w){
		length = l;
		width = w;
	}
	double get_length(){
		return length;
	}
	double get_width(){
		return width;
	}
	void cal_area(){
		area = width *length;
	}

};


#endif 
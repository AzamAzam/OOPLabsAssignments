#ifndef RECT_H
#define RECT_H
class Rectangle
{
	double width, length,area ;
public :
	void setwidth(double x){
		width = x;

	}

	void setLength(double y){
		length= y;
	}

	double getWidth(){
		return width;

	}

	double getLength(){
		return length;

	}

	double getArea(){
		area=(length*width);
		return area;
	
	}
};
#endif 
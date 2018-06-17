#include <iostream>
using namespace std;
class Circle{
	double radius;
	double pi = 3.1415;
public:
	void setRadius(double r){
		radius = r;
	}
	
	double getRadius(){
		return radius;
	}
	
	double getArea(){
		return (pi *radius*radius);
	}
	
	double getDiameter(){
		return (2*radius);
	}
	
	double getCircumference(){
		return (2 * pi*radius);
	}
	
	Circle(){
		radius = 0.0;
	}
	
	Circle(double r){
		radius = r;
	}
};
int main()
{
	double r;
	Circle cr1;
	do {
		cout << "Enter Radius of the Cicle  : ";
		cin >> r;
		if (r < 0)
			cout << "Radius is Always positive " << endl;
	} while (r < 0);
	cr1.setRadius(r);
	
	cout << "Radius Of the Circle = " << cr1.getRadius() << endl;

	cout << "Diameter of the Circle = " << cr1.getDiameter() << endl;
	
	cout << "Area of the cicle = " << cr1.getArea ()<< endl;
	
	cout << "Circumference of the Circle = " << cr1.getCircumference()<<endl;

}
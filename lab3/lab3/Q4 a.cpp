//#include<iostream>
//using namespace std;
//class Rectangle
//{
//	double width;
//	double length;
//public:
//	void setlength(double l)
//	{
//		if (l > 0 && l < 20)
//			length = l;
//		else
//			cout << "You entered a wrong value , Program is using default value  "<<endl;
//	}
//	void setwidth(double w)
//	{
//		if (w > 0 && w < 20)
//			width = w;
//		else
//			cout << "You entered a wrong value , Program is using default value  " << endl;
//	}
//	double getarea()
//	{
//		return (length*width);
//	}
//	double getPerimeter()
//	{
//		return (2 * (length + width));
//
//	}
//
//	Rectangle()
//	{
//		length = 1;
//		width = 1;
//	}
//};
//
//
//
//int main()
//{
//	double length, width;
//	Rectangle rect;
//	cout << "Enter Length of Rectangle (Between 0 and 20 ) : ";
//	cin >> length;
//	rect.setlength(length);
//	cout << "Enter Width of Rectangle (Between 0 and 20 ) : ";
//	cin >> width;
//	
//	rect.setwidth(width);
//	cout << "Area of Rectangle = " << rect.getarea() << endl;
//	cout << "Perimeter of Rectangle = " << rect.getPerimeter() << endl;
//
//}
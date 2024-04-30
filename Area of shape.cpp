#include <iostream>


using namespace std;
class Shape
{
	public:
		double width,height,radius,side;
		double pi=3.14;
		void set_data(double a,double b)
		{
			width=a;
			height=b;
		}
		void set_para(double d)
		{
			
			radius=d;
		}
		void set_value(double e)
		{
			side=e;
		}
		virtual double area()=0;
};
class Circle:public Shape
{
	public:
		double area()
		{
			return (pi*radius*radius);
		}
};
class Rectangle:public Shape
{
	public:
		double area()
		{
			return(width*height);
		}
};
class Square:public Rectangle
{
	public:
		double area()
		{
			return (side*side);
		}
};
int main()
{
	Shape *sPtr;
	Rectangle Rect;
	sPtr=&Rect;
	sPtr->set_data(5,3);
	cout<<"Area of rectangle is"<<sPtr->area()<<endl;
	
	Circle Cir;
	sPtr=&Cir;
	sPtr->set_para(5);
	cout<<"Area of cicle is"<<sPtr->area()<<endl;
	
	Square Sq;
	sPtr=&Sq;
	sPtr->set_value(8);
	cout<<"Area of Square is"<<sPtr->area()<<endl;
}

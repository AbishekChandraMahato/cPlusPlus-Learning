#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "Source.cpp";
using namespace std;

//1.
//base/Super class defined
class Figure {

private: int x;
		 int y;
		 //setters and getters
public: void setX(int x) {
	this->x = x;
}
public: int getX() {
	return this->x;
}

public:void setY(int y) {
	this->y = y;

}
public: int getY() {
	return this->y;
}

};

//Child classes:

//derived class 1:
class PointXY:public Figure {
public:void show() {
	cout << "I am from Figure, X: " << getX() << " Y: " << getY() << endl;;
}
};

//derived class 2:
class Circle :public Figure {
private:int radius;
public:void setRadius(int radius) {
	this->radius = radius;
}
public:void show() {
	cout << "I am from Circle with radius: " << radius << " ,and mid point is -- x:" << getX() << " Y: " << getY()<<endl;
}

};


//2
//Super class:

class Rectangle {
private:int width;
		int height;
	
//default constructor:
public:Rectangle() {

	

}
//two parametric constructor
public:Rectangle(int w,int h) {
	
	this->width = w;
	this->height = h;

	
	
	
	

}
public:void abc() {
	cout << height<<endl;
	cout << width<<endl;
}
	   //Area Function
public: int getArea() {
	

	return (width*height);
}

//setters and getters
public:void setWidth(int w) {
	this->width = w;
	
	

}
public:int getWidth() {
	return width;
}

public:void setHeight(int h) {
	this->height = h;

}
public:int getHeight() {
	return height;
}



};

//3.
//base class1:
class  ScreenRectangle:public Rectangle {
private:int x;
		int y;
public:ScreenRectangle() {

		}
public:ScreenRectangle(int w, int h, int xx, int yy) {
	this->x = xx;
	this->y = yy;
	

	Rectangle r1(w,h);
	
	
	
	
	
	
}

};

//4.



class RectangleTest {
	
		
	ScreenRectangle sc1;
public: RectangleTest() {
	ScreenRectangle sc1(800, 30, 225, 120);
	
	
	
	
	}
public:void printArea() {
	cout<<sc1.getArea();
	
	
	

}

public:bool fit() {
	return true;
	

}

};




int main() {

	

	Circle p1;
	p1.setRadius(20);
	p1.setX(2);
	p1.setY(3);
	p1.show();

	
	RectangleTest rt1;
	rt1.printArea();
	
	
	

	

	
	
	

	
	
	
	
	

	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;

return 0;
}





#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


class Shape {
protected :int width, height;

public :void setWidth(int a) {
	this->width= a;
	}


public:void setHeight(int b) {
	this->height= b;
}

};

//childClass

class Rectangle:public Shape{
public: Rectangle(int w,int h) {
	setWidth(w);
	setHeight(h);
	

	}
public :int area() {

	return width*height;
	}

};

class Triangle :public Shape {
public :Triangle(int w,int h) {
	setWidth(w);
	setHeight(h);

	}
public:int area() {
	return width*height*0.5;
}

};

int main() {
	Rectangle r1(5, 3);
	Triangle t1(2, 5);
	
	cout <<r1.area()<<endl;
	cout << t1.area() << endl;

	cout << "-----------------------------------"<<endl;
		cout << "Process exited with return value 0"<<endl;




	
	
	
	
	return 0;
}





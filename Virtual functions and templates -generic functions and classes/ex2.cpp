#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Shape {
protected: int i;
public:int getData() {
	return i;
}
public:void setData(int a) {
	i = a;

}
public: virtual int calculateArea() {
	cout << "base virtual func called";
	return 0;

}
};
class Square :public Shape{
public:int calculateArea() {
	return getData()*getData();
}
};

	   class Circle:public Shape {
	   public:int calculateArea() {
		   return 3.14*getData()*getData();
	   }

	   };




int main() {
	Square sq1;
	Circle c1;
	int s, c;
	
	cout << "Enter length to calculate area of square: ";
	cin >> s;
	sq1.setData(s);
	cout<<"Area of square: "<< sq1.calculateArea()<<endl;

	cout << "Enter length to calculate area of circle: ";
	cin >> c;
	c1.setData(c);
	cout << "Area of circle: " <<(c1.calculateArea()) << endl;


	
	




	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;

	return 0;
}





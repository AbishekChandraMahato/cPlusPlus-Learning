#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Vector {
private:double x, y, z;
public:double getLength() {
	return (sqrt(x*x + y*y + z*z));
	
	

}
public:void setX(double x) {
	this->x = x;
}

public:void setY(double y) {
	this->y = y;
}
public:void setZ(double z) {
	this->z = z;
}
public:double getX() {
	return x;
}

	   //overloading +
	   Vector operator+(const Vector& v) {
		   Vector vv;
		   vv.x = this->x + v.x;
		   vv.y = this->y + v.y;
		   vv.z = this->z + v.z;
		   return vv;
	   }
	
};



int main() {

	Vector v1, v2, v3;
	v1.setX(1);
	v1.setY(1);
	v1.setZ(1);

	cout<<"length of V1:"<<v1.getLength()<<endl;

	v2.setX(2);
	v2.setY(2);
	v2.setZ(2);


	
	cout << "length of V2:" << v2.getLength() << endl;
	
	v3 = v1 + v2;
	
	cout << "length of V3:" << v3.getLength() << endl;


	



	


	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;
return 0;
}





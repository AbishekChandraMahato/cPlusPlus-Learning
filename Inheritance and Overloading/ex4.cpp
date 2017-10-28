#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


class TwoD {
protected:
	int x, y;
public:TwoD() {

}
public :TwoD(int xx,int yy) {
	x = xx;
	y = yy;
		
	}

public:void setC(int a,int b) {
	x = a;
	y = b;
}
public:int getX() {
	return x;
}
public:int getY() {
	return y;
}
};
class  ThreeD :public TwoD {
private: int  z;
public:void setZ(int c) {
	z = c;
}
public:int getZ() {
	return x;
}
public:ThreeD(int xx,int yy,int zz) {
	x = xx;
	y = yy;
	z = zz;

}

public:void setC(int c) {
	z = c;
}
	
};


int main() {
	TwoD d1(1, 2);
	ThreeD d2(1, 2, 3);
	cout << "X: " << d2.getX() << " Y: " << d2.getY() << " z:" << d2.getZ() << endl;
	
	
	
	



	cout << "-----------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;








	




	return 0;
}





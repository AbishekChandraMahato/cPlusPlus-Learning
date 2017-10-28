#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Number {
public:virtual string show() {

	return 0;
}
protected:int val;
public:void setVal(int a) {
	val = a;

}
public: int getVal() {
	return val;
}



};

class HexType:public Number {
public: string show() {
	char buffer[33];
	string ss;
	_itoa_s(getVal(), buffer, 16);
	ss = string(buffer);
	return ss;

}

		
};

class Dectype :public Number {
public:string show() {
	string ss = to_string(getVal());
	return ss;
}

};

class OctType:public Number {
public:string show() {
	char buffer[33];
	string ss;
	_itoa_s(getVal(), buffer, 8);
	ss = string(buffer);
	return ss;
}

};
int main() {
	HexType h1;
	Dectype d1;
	OctType o1;

	h1.setVal(20);
	d1.setVal(20);
	o1.setVal(20);

	cout << "The value of decimal 20 in Hexa is: " << h1.show()<<endl;
	cout << "The value of decimal 20 in dedc is: " << d1.show() << endl;
	cout << "The value of decimal 20 in Octa is: " << o1.show() << endl;
	
	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;
	return 0;
}





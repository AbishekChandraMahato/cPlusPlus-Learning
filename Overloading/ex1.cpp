#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "Source.cpp";
using namespace std;

class Calc{
public : int add(int a,int b) {
	return a + b;

	}
public: double add(int a, double d) {
	
	return a + d;

}
public: int add(int a, int b, int c) {
	return a + b + c;

}

};




int main() {
	int a = 1, b = 2, c = 3;
	double d = 1.1;
	Calc c1;
	cout<<"Result1: "<<c1.add(a, b)<<endl;
	cout<<"Result2: "<<c1.add(a,d)<<endl;
	cout<<"Result3: "<<c1.add(a, b, c)<<endl;


	

	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;

return 0;
}





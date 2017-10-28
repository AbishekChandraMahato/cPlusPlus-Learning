#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

//add(A, B), add(A, D), add(A, B, C), add(D, E, F), add(A, E, B) where values of variables
//are A = 1, B = 2, C = 3, D = 1.1, E = 2.2 and F = 3.3.Variables A, B and C are
class Calc {
public:void add(int a, int b) {
	cout << "Summation from same function definations(5)"<<endl;
	cout << "result from int a and b: " << a + b << endl;

}
public:void add(int a, double d) {
	cout << "result from int a and double d: " << a + d << endl;
}
public:void add(int a, int b,int c) {
	cout << "result from int a,b and c: " << a+b+c << endl;
}
public:void add(double d, double e,double f) {
	cout << "result from doubles  d,e and f: " <<d+e+f<< endl;
}
public:void add(int a, double e, int b) {
	cout << "result from int a and b: " << a + b+e << endl;
}
};

int main() {
	Calc c;
	c.add(1,2);
	c.add(1,1.1);
	c.add(1,2,3);
	c.add(1.1,2.2,3.3);
	c.add(1,2.2,2);

	
	
	
	
	
	



	cout << "-----------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;








	




	return 0;
}





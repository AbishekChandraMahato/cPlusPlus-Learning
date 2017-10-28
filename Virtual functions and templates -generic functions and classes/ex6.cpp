#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

template<class type1, class type2> class Stack {
private:type1 x[3];
		type2 y;
public:Stack(type1 a[],type2 b) {
	
	y = b;
	for (int i = 0; i <3; i++) {
		x[i] = a[i];
	}

}
public:void push(type1 cc) {
	x[4] = cc;
	

}
public:void pop() {
	for (int i = 2; i > -1; i--) {
		cout << "Pop:" << this->x[i]<<endl;
	}

}

};
int main() {
	char array1[3] = { 'a','b','c' };
	int a = 3;

	
	

	Stack<char, int> s1(array1, a);
	cout << "Pop from s1:"<<endl;
	
	s1.pop();

	

	char array2[3] = { 'x','y','z' };

	Stack<char, int> s2(array2, a);
	cout << "Pop from s2:"<<endl;
	s2.pop();

	double  array3[3] = {1.1,3.3,5.5};
	Stack<double, int> ds1(array3, a);
	cout << "Pop from ds1:" << endl;
	ds1.pop();

	double  array4[3] = { 2.2,4.4,6.6 };
	Stack<double, int> ds2(array4, a);
	cout << "Pop from ds2:" << endl;
	ds2.pop();


	

	
	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;
	return 0;
}





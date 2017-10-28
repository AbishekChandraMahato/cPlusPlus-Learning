#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

template<class X> void swapArgs(X &a, X &b) {
	X t1, t2;
	t1 = a , t2 = b;
	t1 = b;
	t2 = a;
	cout << " swapped values from generic function: ";
	cout << t1 << " ," << t2<<endl;
	
	
}
int main() {
	int i = 10,j=20;
	double x = 10.1, y = 23.3;
	char a = 'x',b='z';

cout << "values before swapping in generic function: " << endl;
	
	
	cout << "i: " << i << " j: " << j << endl;
	cout << "i, j";
	swapArgs(i, j);

	cout << "values before swapping in generic function: " << endl;
	cout << "x: " << x << " y: " << y << endl;
	cout << "x, y";
	swapArgs(x, y);
	cout << "values before swapping in generic function: " << endl;
	cout << "a: " << a << " b: " << b << endl;
	cout << "a, b";
	swapArgs(a, b);

	

	



	
	
	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;
	return 0;
}





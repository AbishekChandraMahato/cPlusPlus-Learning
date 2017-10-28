#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "Source.cpp";
using namespace std;


void test(int a) {
	cout << "Integer number: " << a << endl;

}
void test(float b) {
	
	cout << "Float number: " << b << endl;
}
void test(int a, float b) {

	cout << "Integer number: " << a << "Float Number: " <<b << endl;

}

int main() {
	int a = 5;
	float b = 5.5;


	test(a);
	test(b);
	test(a, b);

	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;

return 0;
}





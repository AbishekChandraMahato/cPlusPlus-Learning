#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


class ThreeD {
	int x, y, z;
public:ThreeD() {

}

public:ThreeD(int a, int b, int c) {
	x = a;
	y = b;
	z = c;

}
public:void show() {
	cout << x<<", " << y << ", " << z<<endl;

}
	   ThreeD operator++() {
		   ++x;
		   ++y;
		   ++z;
		   return ThreeD(x, y, z);


	   }
	   ThreeD operator--() {
		   --x;
		   --y;
		   --z;
		   return ThreeD(x, y, z);
	   }
};

	   int main() {
		   

		   ThreeD a(1,2,3);
		   cout << "Original value in a: ";
		   a.show();

		   ++a;
		   cout << "value after ++a:";
		   a.show();

		   --a;
		   cout << "value after --a:";
		   a.show();

		   



		 


		   cout << "-----------------------------------------------" << endl;
		   cout << "Process exited with return value 0" << endl;

		   return 0;
	   }





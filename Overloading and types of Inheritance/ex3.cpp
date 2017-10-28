#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Coordinate {
private: int x, y;
public:Coordinate() {

}

public:Coordinate(int a, int b) {
	this->x = a;
	this->y = b;

}
public: int get_xy() {

}

		 bool operator==(Coordinate obj2) {
			if (x == obj2.x && y == obj2.y) {
				return true;
			}
			else
				return false;

		}

		bool operator&&(Coordinate obj2) {
			return ((x&& obj2.x) && (y && obj2.y));

		}
};




int main() {

	Coordinate c1(1, 1), c2(1, 1), c3(1, 0), c4(0, 1);

	if (c1 == c2) {
		cout << "c1=c2" << endl;

	}
	else
		cout << "c1<>c2"<<endl;

	if (c2 == c4) {
		cout << "c2=c4"<<endl;
	}
	else
		cout << "c2<>c4"<<endl;

	if (c1&&c2) {
		cout << "c1 && C2 is: true" << endl;
	}

	else
		cout << "c1 && c2 is: false"<<endl;

	
	
		
	


	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;
return 0;
}





#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


class ABC {
public: void Timestwo(int x) {
	cout << "this is from int: " << x<<endl;

}
public:void Timestwo(double y) {
	cout << "this is from double: "<<y<<"   *from same function defination" <<endl;

}
};


int main() {
	ABC a1;
	a1.Timestwo(2);
	a1.Timestwo(2.2);
	
	
	
	
	



	cout << "-----------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;








	




	return 0;
}





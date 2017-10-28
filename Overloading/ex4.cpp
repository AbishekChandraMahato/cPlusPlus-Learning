#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "Source.cpp";
using namespace std;

class Plus {
private: int array[10];
public:Plus() {
	

}

public:Plus(int initValue) {
	for (int i = 0; i < 10; i++) {
		array[i] = initValue;
	}



}
public:void printArray() {
	for (int j = 0; j < 10; j++) {
		cout <<array[j]<< "  ";
	}
	cout << endl;

}



	   Plus operator+(const Plus& arr) {
		   Plus arrs;
		   for (int i = 0; i < 10; i++) {
			   arrs.array[i] = this->array[i] + arr.array[i];
			   return arrs;
	   }
};


int main() {
	Plus  firstObject(4), secondObject(6);
	firstObject.printArray();
	secondObject.printArray();
	Plus differenceObject(0);
	
	differenceObject= firstObject + secondObject;
	differenceObject.printArray();
	
		
	
	


	
	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;

return 0;
}





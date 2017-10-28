#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

//generic sorting


template<class X,class Y> void bubble(X a[], Y b) {
	
	sort(a,a+b);
	cout << "Sorted from generic function: "<<endl;
	for (int i = 0; i <b; i++) {
		cout << a[i] << ", ";
	}
	cout << endl;

}
int main() {
	int p = 7,q=5;
	int iarray[7] = { 7,5,4,3,9,8,6 };
	double darray[5] = { 4.3,2.5,-0.9,100.2,3.0 };
	int iiarray[7] = { 7,5,4,3,9,8,6 };
	
	cout << "Unsorted: "<<endl;
	for (int i = 0; i <7; i++) {
		cout << iarray[i] << ", ";
	}
	cout << endl;
	bubble(iarray,p);
	cout << "Unsorted: " << endl;
	for (int i = 0; i <5; i++) {
		cout << darray[i] << ", ";
	}
	cout << endl;
	bubble(darray, q);
	


	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;
	return 0;
}





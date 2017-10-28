#include "stdafx.h"
#include <algorithm>
#include <sstream>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <array>
#include <vector>
//STl Standard Template Library
//Vector functions
using namespace std;
int main() {

	int arr[] = { 100,110,120,130 };
	vector<int>v1;
	v1.assign(arr, arr + size(arr));//original
	cout << "Before insertion: \n";
	for (int i = 0; i < size(v1); i++) {
		cout << v1[i] << endl;
	}

	v1.insert(v1.begin()+2, 115);//insertion

	cout << "After insertion: \n";
	for (int i = 0; i < size(v1); i++) {
		cout << v1[i]<<endl;
	}


	v1.erase(v1.begin()+2);//deletion

	cout << "After elimination: \n";
	for (int i = 0; i < size(v1); i++) {
		cout << v1[i] << endl;
	}

}









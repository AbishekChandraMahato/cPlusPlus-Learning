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
//Containers
#include <array>
#include <vector>
#include <list>
#include <deque>
//STl Standard Template Library
//check if palindrome or not using vector!
using namespace std;
int main() {

	vector<string> v1;
	vector<string> v2;

	string o, r;

	v1.push_back("m");
	v1.push_back("a");
	v1.push_back("d");
	v1.push_back("a");
	v1.push_back("mm");





	v2.push_back(v1[4]);


	v2.push_back(v1[3]);


	v2.push_back(v1[2]);


	v2.push_back(v1[1]);


	v2.push_back(v1[0]);



	cout << "original string: " << endl;
	for (int i = 0; i < 5; i++) {
		o += v1[i];
		cout << v1[i] << endl;


	}
	cout << "Reversed string: " << endl;
	for (int i = 0; i < 5; i++) {
		r += v2[i];
		cout << v2[i] << endl;


	}

	if (r == o) {
		cout << "the given string is Palindrome" << endl;
	}
	else {
		cout << "the given string is not palindrome" << endl;
	}

}






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
//file reading with vector
using namespace std;
int main() {
	vector<int> v1;
	string ss;
	ifstream file2;
	file2.open("scores1.txt");
	getline(file2, ss);

	stringstream sso(ss);
	int i;
	while (true) {
		sso >> i;
		if (!sso)
			break;
		v1.push_back(i);


	}

	sort(v1.begin(), v1.begin() + size(v1));
	cout << "data from file: " << endl;
	for (int i = 0; i < size(v1); i++) {

		cout << v1[i] << endl;

	}

	string star = "*";
	vector<int> v2;
	vector<string> v3;
	int g;
	string cc;
	for (int i = 0; i < 6; i++) {

		v2.push_back(i);
		g = count(v1.begin(), v1.end(), v2[i]);
		for (int j = 0; j < g; j++) {
			cc += "*";
		}
		v3.push_back(cc);
		cc = "";




	}

	cout << "processed data from file: " << endl;
	for (int i = 0; i < 6; i++) {

		cout << v2[i] << ": " << v3[i] << endl;

	}




}






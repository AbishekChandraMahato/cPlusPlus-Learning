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
	vector<int> v4;
	string ss;
	ifstream file2;
	file2.open("points.txt");
	getline(file2, ss);
	cout << "Raw data from file:" << endl;
	cout << ss<<endl;

	stringstream sso(ss);
	int i;
	int ii;
	while (true) {
		sso >> i;
		if (!sso)
			break;
		if (i >= 0 && i <= 30)
			ii = 0;
		else if (i >= 31 && i <= 35)
			ii = 1;
		else if (i >= 36 && i <= 40)
			ii = 2;
		else if (i >= 41 && i <= 45)
			ii = 3;
		else if (i >= 46 && i <= 50)
			ii = 4;
		else if (i >= 51 && i <= 60)
			ii = 5;

		v1.push_back(i);
		v4.push_back(ii);


	}

	/*for (int i = 0; i < size(v4); i++) {
		cout << v4[i] << endl;
	}*/

	sort(v4.begin(), v4.begin() + size(v4));
	cout << "processed-1 data from file: " << endl;
	for (int i = 0; i < size(v4); i++) {

		cout << v4[i] << endl;

	}

	string star = "*";
	vector<int> v2;
	vector<string> v3;
	int g;
	string cc;
	for (int i = 0; i < 6; i++) {

		
		v2.push_back(i);
		g = count(v4.begin(), v4.end(), v2[i]);
		for (int j = 0; j < g; j++) {
			cc += "*";
		}
		v3.push_back(cc);
		cc = "";




	}

	cout << "processed-2 data from file: " << endl;
	for (int i = 0; i < 6; i++) {

		cout << v2[i] << ": " << v3[i] << endl;

	}




}






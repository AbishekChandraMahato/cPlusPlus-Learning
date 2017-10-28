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

	vector<int> vec1;


	int cc = 10;
	for (int i = 3; i > -1; i--) {
		vec1.push_back(cc);
		cc++;

	}
	replace(vec1.begin(), vec1.end(), 10, 20);
	replace(vec1.begin(), vec1.end(), 13, 23);




	for (int i = 0; i < 4; i++) {
		cout << vec1[i] << endl;


	}


}









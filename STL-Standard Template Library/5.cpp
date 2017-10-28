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
//merging arrays using vector
using namespace std;
int main() {
	int src1[] = { 2,3,4,6,8 };
	int src2[] = { 1,3,5 };

	int dest[8];

	vector<int> to(8);
	merge(src2, src2 + 3, src1, src1 + 5, to.begin());
	sort(to.begin(), to.begin() + 8);
	for (int i = 0; i < size(to); i++) {
		cout << to[i] << endl;
	}


	
}









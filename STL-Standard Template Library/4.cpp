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
//sequential pattern
using namespace std;
int main() {
	int source[] = { 11,44,33,11,22,33,11,22,44 };
	int pattern[] = { 11,22,33 };

	vector<int >sources;
	sources.assign(source, source + 9);
	vector<int >::iterator it;

	it = search(sources.begin(), sources.end(), pattern, pattern + 3);
	if (it != sources.end())
		cout << "Match at:" << (it - sources.begin()) << endl;
	else
		cout << "sequence not found" << endl;
}









#include "stdafx.h"
#include <algorithm>
#include <sstream>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
//File handling
using namespace std;
int main() {
	ifstream file1;
	file1.open("phones.txt");
	if (file1.is_open()) {
		cout << file1.rdbuf();
	}
	cout << endl;

	file1.close();
	return 0;
}








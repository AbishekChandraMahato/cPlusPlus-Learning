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
//STl Standard Template Library
using namespace std;
int main() {
	int arras[] = { 33,22,33,44,33,55,66,77 };
	//find how many times a particular element is repeated
	int zz = count(arras, arras + size(arras), 33);
	cout << "There are: " << zz << endl;
}









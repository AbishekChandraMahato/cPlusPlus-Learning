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

using namespace std;

int main() {
	

	
	int arras[] = { 11,22,33,44,55,66,77,88 };
	//find index of an element in an array
	int xx = distance(arras, find(arras, arras + 8, 33));
	//size of an array
	int yy = size(arras);
	
	cout << "First object with value 33 found at offset: " << xx << endl;
	
	

	
}








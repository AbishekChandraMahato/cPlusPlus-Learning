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
	int arras[] = {45,2,22,-17,0,-30,25,55};
	//Array sorting
	
	sort(arras,size(arras) + arras);
	cout << "sorted array"<<endl;
	for (int i = 0; i < size(arras); i++) {
		cout << arras[i]<<endl;
	}
}









#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>

//File handling
using namespace std;


int main() {
	
	ofstream file1;
	file1.open("hello.usr");
	file1 << "Hello World";

	cout << "Writing to a file managed.\nThe program is closed."<<endl;
		
	
	
	
	return 0;
}





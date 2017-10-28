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

//File handling
using namespace std;

int main() {
	
	
	string line;
	const char filename[10] = "test.txt";
	const char mode[10] = "w";
	string files = "test.txt";
	FILE *f1;
	
	errno_t err=fopen_s(&f1, filename, mode);

	
	
	
	
	
	
	
	
	while (1) {
		
		cout << "Enter a string <CR to quit>" << endl;

		getline(cin, line);
		
		char *ss = new char[line.length() + 1];
		strcpy_s(ss, line.length() + 1, line.c_str());
		
		if (!line.empty()) {
			
			fputs(ss, f1);
			fputs("\n", f1);

		}
		else {
			cout << "Program terminated with empty line" << endl;
			break;
		}
			
				
				
				
			
		

	}
	fclose(f1);

	








	return 0;

	
}








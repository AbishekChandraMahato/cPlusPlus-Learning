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
	string ss;
	string fname, lname, file;
	string a, b, c;
	
	cout << "Program saves your forename and surname into the file. " << endl;
	cout << "Enter your forename <first name>: " << endl;
	cin >> a;
	cout << "Enter your surname <last name>: " << endl;
	cin >>b;
	cout << "Enter file name"<<endl;
	cin >> c;

	if ((a).length() > 0 && (a).length() <= 15) {
		fname = a;

	}

	if ((b).length() > 0 && (b).length() <= 20) {
		lname = b;

	}
	
	
	
	
	if ((c).length() > 0 && (c).length() <= 11) {
		file = c;

	}
	
	//writing into file
	ofstream file1;
	file1.open(file);
	file1 << "First Name: " << fname << endl;
	file1 << "Last Name: " << lname << endl;
	file1 << "file name: " << file << endl;
	

	
	
	


	
	file1.close();
	
	cout << "Saving succeded" << endl;

	
		
	
	
	
	return 0;
}





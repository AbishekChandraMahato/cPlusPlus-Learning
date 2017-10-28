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
	
	string a, b, c;
	string ss;
	int countt;
	cout << "Program saves your forename and surname into the file. " << endl;
	cout << "Enter your forename <first name>: " << endl;
	cin >> a;
	cout << "Enter your surname <last name>: " << endl;
	cin >> b;
	cout << "Enter pphone number" << endl;
	cin >> c;


	ifstream file1;
	file1.open("phones.txt");
	getline(file1, ss);
	
	countt = atoi(ss.c_str());
	
	ifstream is("phones.txt");

	ofstream file2;
	file2.open("phones.txt",ios_base::app);
	if(countt <= 50) {
		file2 <<"\n"<< a << " " << b << " " << c;

		

		countt++;

		
		
	}

	file1.close();
	file2.close();
	cout << "Writing to a file managed" << endl;
	return 0;
}





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
	string a, b, c, d;
	int cc = 0;
	size_t pos;
	string dd;
	cout << "please enter info to delete" << endl;
	cout << "Give forename" << endl;
	cin >> a;

	cout << "Give surname" << endl;
	cin >> b;
	d = a + " " + b;


	ifstream file2;
	file2.open("phones.txt");

	while (1)
	{
		getline(file2, c);


		pos = c.find(d);
		if (pos == 0) {
			cc = 1;
		}
		

		if (pos == std::string::npos) {
			
			
			dd += c + "\n";



		}
		
		if (file2.eof()) break;

	}
	ofstream file1;
	
	
	if (cc==1) {
		file1.open("phones.txt");
		file1 << dd;
		
		cout << "info has been removed, New Data from file is: " << endl;
		cout << dd;
	}
	else
		cout << "info cannot be found" << endl;
	
	





	return 0;
}








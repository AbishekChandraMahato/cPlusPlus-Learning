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
	//writing into file
	ofstream file1;
	file1.open("int.s");
	file1 << "45 26 35 3";
	file1.close();

	//reading into file
	ifstream file2;
	file2.open("int.s");
	getline(file2, ss);
	
	


	
	file2.close();
	cout << "Numbers in file int.s are:\n" << ss<<endl;

	istringstream iss(ss);

	
	int a, b, c,d;

	iss >>a >> b >> c>>d;

	int sum = a + b + c + d;

	cout << "Sum of integers is: " << sum<<endl;

	
		
	
	
	
	return 0;
}





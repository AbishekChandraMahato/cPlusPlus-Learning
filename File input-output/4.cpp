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
	ifstream is("A.txt");//open file
	
	ofstream file1;
	file1.open("B.txt");
	

	char c;
	while (is.get(c))          // loop getting single characters
		file1 << c;//writing into another file
	
	is.close();
	file1.close();
	
	cout << "Saving succeded" << endl;
	return 0;
}





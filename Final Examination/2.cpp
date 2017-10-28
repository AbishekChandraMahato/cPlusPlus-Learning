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
#include <vector>
#include <list>
#include <deque>
#include <unordered_map>
#include <memory>
#include<stack>
using namespace std;
// 2.cpp
int main()
{
	vector<int> vect;
	int num;
	
	ifstream ff1("A.txt");
	if (ff1.is_open()) {
		while (ff1 >> num)
			vect.push_back(num);
		ff1.close();
		cout << "Inside the file there are: " << vect.size() << "numbers." << endl;
		cout << "Minimum number found: " << *min_element(vect.begin(), vect.end()) << " ,exists: " << count(vect.begin(), vect.end(), *min_element(vect.begin(), vect.end())) << "X" << endl;
		cout << "Maximum number found: " << *max_element(vect.begin(), vect.end()) << " ,exists: " << count(vect.begin(), vect.end(), *max_element(vect.begin(), vect.end())) << "X" << endl;
	}
	else
		cout << "File A.txt , not opening" << endl;

	return 0;
}
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
//Containers
#include <array>
#include <vector>
#include <list>
#include <deque>
//STl Standard Template Library
//List
using namespace std;
int main() {
	
	list<int> li1;
	int randd;
	for (int i = 0; i < 10; i++) {
		randd = rand() % 100000 + 1000;
		li1.push_back(randd);

	}
	cout << "Original List:(1000-100000)" << endl;
	for (list<int>::const_iterator it = li1.begin(); it != li1.end(); ++it)
		cout << *it <<" ";
	
	cout << endl;
	li1.reverse();
	cout << "Sorted Contents:" << endl;
	for (list<int>::const_iterator it = li1.begin(); it != li1.end(); ++it)
		cout << *it << " ";
	cout << endl;
		

}






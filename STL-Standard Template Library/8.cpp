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
//STl Standard Template Library
//list functions
using namespace std;
int main() {

	list<int> ilist;
	ilist.push_back(30);
	ilist.push_back(40);
	
	ilist.push_front(20);
	ilist.push_front(10);
	//accessing the values through iterators
	for (list<int>::const_iterator it = ilist.begin(); it != ilist.end(); ++it)
		cout << *it << endl;


}









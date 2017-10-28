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
//dequw functions
using namespace std;
int main() {

	deque<int> deq;

	deq.push_back(30);
	deq.push_back(40);
	deq.push_back(50);

	deq.push_front(20);
	deq.push_front(10);
	cout << "Deque before change:" << endl;
	for (int i = 0; i < size(deq); i++) {
		cout << deq[i] << endl;
	}

	//changing
	deq[2] = 33;

	cout << "Deque after change:" << endl;
	for (int i = 0; i < size(deq); i++) {
		cout << deq[i] << endl;
	}
	


}









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
	
	list<string> li1;
	string s;
	
	
		while (true) {
			cout << "enter single characters with space in ending: \nenter 1 to process" << endl;
			
			cin >> s;
			if(s!="1")
			li1.push_back(s);
			if (s == "1")
				break;

		}
		cout << "the list in ascending order: " << endl;
		li1.sort();
		
		
		for (list<string>::const_iterator it = li1.begin(); it != li1.end(); ++it)
			cout << *it+" ";
		cout << endl;
		cout << "the list in descending order: " << endl;
		li1.reverse();
		for (list<string>::const_iterator it = li1.begin(); it != li1.end(); ++it)
			cout << *it+" ";
		cout << endl;

}






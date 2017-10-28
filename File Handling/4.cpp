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

//File handling
using namespace std;
class Person {
public:string forename;
		 string surname;
		 int age;
public:Person() {

}
public: Person(string a,string b,int c) {
	forename = a;
	surname = b;
	age = c;

		}
};
int main() {
	string x, y;
	int z;
	string h;
	cout << "Input:\nEnter forename: ";
	cin >> x;

	cout << "Enter surname: ";
	cin >> y;

	cout << "Enter age: ";
	cin >> z;
	
	Person p1(x, y, z);
	
	
	ofstream f1obj;
	f1obj.open("person.dat");
	f1obj.write((char*)&p1, sizeof(p1));
	f1obj.close();
	
	
	ifstream f2obj;
	f2obj.open("person.dat",ios::in);
	Person getobj;
	f2obj.read((char*)&getobj, sizeof(getobj));
	x = getobj.forename;
	y = getobj.surname;
	z = getobj.age;
	
	cout << "Output:" << endl;
	
	cout << "Forename: " + x << endl << "Surname: " + y << endl;
	cout << "Age: "<<z<< endl;
	

	
	f2obj.close();
	return 0;

	
}








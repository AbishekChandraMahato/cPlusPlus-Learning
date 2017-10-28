#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class dateT {
private:int day, month, year;
private:string date;
public:dateT(int x,int y,int z){
	this->day= x;
	this->month = y;
	this->year = z;

}
public:dateT(string dd) {
	this->date = dd;
	cout << date<<endl;
	
}

public:void show() {
	cout << day << "/" << month << "/" << year << endl;

}

	
};



int main() {

	
	dateT d1(31, 05, 1991);
	dateT d2("02/03/2014");



	

	d1.show();
	
		
	


	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;
return 0;
}





#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "Source.cpp";
using namespace std;

class AddTime {
private: int h, m, s;
public:AddTime() {

}
public:void setH(int hh) {
	h = hh;

}
public:int getH() {
	return h;
}

public:void setM(int mm) {
	m = mm;

}
public:int getM() {
	return m;
}

public:void setS(int ss) {
	s= ss;

}
public:int getS() {
	return s;
}


	   AddTime operator+(const AddTime& t) {
		   AddTime tt;
		   tt.h = this->h + t.h;
		   tt.m = this->m + t.m;
		   tt.s = this->s + t.s;
		   return tt;
	   }
};


int main() {
	AddTime t1, t2,t3;
	int h, m, s;
	


	cout << "Enter the first time"<<endl;
	cout << "Enter the hour 0-11" << endl;
	cin >> h;

	cout << "Enter the minute 0-59" << endl;
	cin >> m;

	cout << "Enter the second 0-59" << endl;
	cin >> s;

	t1.setH(h);
	t1.setM(m);
	t1.setS(s);

	cout << "Enter the second time" << endl;
	cout << "Enter the hour 0-11" << endl;
	cin >> h;

	cout << "Enter the minute 0-59" << endl;
	cin >> m;

	cout << "Enter the second 0-59" << endl;
	cin >> s;
	t2.setH(h);
	t2.setM(m);
	t2.setS(s);

	cout << "First time " << t1.getH() << ":" << t1.getM() << ":" << t1.getS() << endl;
	cout << "Second time " << t2.getH() << ":" << t2.getM() << ":" << t2.getS() << endl;

	t3 = t1 + t2;

	

	cout << "Sum of both time " << t3.getH() << "h:" << t3.getM() << "m:" << t3.getS()<<"s"<< endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;

return 0;
}





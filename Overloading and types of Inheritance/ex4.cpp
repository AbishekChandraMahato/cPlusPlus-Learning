#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


class Staff {

protected:string name;
		int code;

public:void getDatas() {
	cout << "name: "<<endl;
	cin >> name;

	cout << "code: "<<endl;
	cin >> code;
}
public:void displays() {
	cout << "name: " << name<<endl;
	cout << "code: " << code<<endl;

}
};

class Typist:public Staff {
private: int speed;

public:void getData() {
	cout << "Speed: "<<endl;
	cin >> speed;
}
public:void display() {
	cout << "Speed: " << speed<<endl;
}
};



int main() {

	
	Typist t1;
	
	t1.getDatas();
	t1.getData();
	

	t1.displays();
	t1.display();
	
	
	
		
	


	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;
	return 0;
}





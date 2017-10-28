#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


class Animal {
protected:
	string name;
	int age;
	string extraInfo;

public:void set_value(string n,int a, string i) {
	name = n;
	age = a;
	extraInfo = i;
		
	}
public :void displayInfo() {
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "extra info: " << extraInfo << endl;


	   }

};
class Zebra:public Animal {
public:Zebra(string a,int b,string c) {
	set_value(a, b, c);

}


};

class Dolphin :public Animal {
public:Dolphin(string a,int b,string c) {
	set_value(a, b, c);


}



};
int main() {
	Zebra z1("zebraca", 30, "he is cute");
	z1.displayInfo();

	cout << "-----------------------------------" << endl;
	Dolphin d1("Dolphina", 20, "She is long");
	d1.displayInfo();

	
	
	



	cout << "-----------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;








	




	return 0;
}





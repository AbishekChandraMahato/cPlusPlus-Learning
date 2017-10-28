#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


class Mother {
	void display() {
		cout << "Hello from Mother";
	}

};
class Daughter:public Mother {
public :void display() {
		cout << "Hello from Daughter"<<endl;
	}

};
int main() {
	Daughter d1;
	d1.display();
	
	



	cout << "-----------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;








	return 0;




	return 0;
}





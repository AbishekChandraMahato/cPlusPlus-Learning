#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class base {
public:virtual void vfunc() {
	cout << "This is function from base, virtual." << endl;
}
};
class derived1 :public base {
public: void vfunc() {
	cout << "This is function from derived 1" << endl;

}
};

		class derived2 :public base {
		public:void vfunc() {
			cout << "This is function from derived 2" << endl;

		}
		

};




	   int main() {
		   base p, b;

		   derived1 d1;
		   derived2 d2;

		  
		   b.vfunc();
		   d1.vfunc();
		   d2.vfunc();
		   

		   
		   



		 


		   cout << "-----------------------------------------------" << endl;
		   cout << "Process exited with return value 0" << endl;

		   return 0;
	   }





#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//2.

class Student {
private:
	int studentNumber;
	string firstName;
	string surName;
public:Student() {
	this->studentNumber = 0;
	this->firstName = "Test";
	this->surName = "Test";

	Student(this->studentNumber,
		this->firstName,
		this->surName);

}
public:Student(int x, string y, string z) {
	this->studentNumber = x;
	this->firstName = y;
	this->surName = z;


}

public:void setStudentNumber(int num) {
	this->studentNumber = num;

}
public:int getStudentNumber() {
	return this->studentNumber;
}

public:void setfirstName(string s1) {
	this->firstName = s1;

}
public:string getfirstName() {
	return this->firstName;
}

public:void setsurName(string s2) {
	this->surName = s2;

}
public:string getsurName() {
	return this->surName;
}

public: void printInfo() {
	cout << "student number: " << this->studentNumber << endl;
	cout << "student first name: " << this->firstName << endl;
	cout << "student surname: " << this->surName << endl;
}
};





//1.
class Chargecard {
private:int balance;
public:Chargecard(int balance) {
	this->balance = balance;
}
public:Chargecard() {
	this->balance = 0;

	Chargecard(this->balance);

}
public:int getBalance() { return this->balance; }
public:void setBalance(int bal) {
	this->balance = bal;
}
public:void increaseBalance(int x) {
	this->balance += x;

}
public: void payment(int pay) {
	this->balance -= pay;

}

};

//3.
class StudentGroup{



private: int groupCode;
		 Student contactStudent;
		 Student studs[10];
		 


public: StudentGroup(int x, Student s,Student ss[]){
	
	this->groupCode = x;
	contactStudent = s;
	studs[0] = ss[0];
	



}
public:int getGroupCode() {
	return this->groupCode;
}
public:void setGroupCode(int x) {
	this->groupCode = x;
}

public:void printInfo() {
	cout << "student group code:  " << this->getGroupCode()<<endl;
	cout << "info: "<<endl;
	cout << "Name: " << contactStudent.getfirstName() << endl;
	cout << "Surname: " << contactStudent.getsurName() << endl;
	cout << "Student number:" << contactStudent.getStudentNumber() << endl;

}
public:void addStudent(Student ss) {
	
	for (int i = 0; i <= 9; i++) {
		studs[i] = ss;
	}

	

}

};

int main() {
	//1.
	//Shopping
	Chargecard cc1;
	cc1.setBalance(200);
	cout << "initial balance: " << cc1.getBalance() << endl;
	cc1.payment(100);
	cout << "first payment of 100 , Remaining balance: " << cc1.getBalance() << endl;
	cc1.increaseBalance(150);
	cout << "frist balance increase by 150, current balance: " << cc1.getBalance() << endl;
	cout << "-----------------------------------------------" << endl;




	//2. creation of 3 students
	Student Test, Test1;
	Test1.setfirstName("Sameer");
	Test1.setStudentNumber(5);
	Test1.setsurName("pankaj");


	Test.setfirstName("Abishek");
	Test.setStudentNumber(1);
	Test.setsurName("Mahato");

	





	Test.printInfo();
	cout << "---------------------------------------" << endl;
	

	Test.setfirstName("Antti");
	Test.setStudentNumber(2);
	Test.setsurName("Pironen");


	Test.printInfo();
	cout << "---------------------------------------" << endl;

	Test.setfirstName("Laura");
	Test.setStudentNumber(3);
	Test.setsurName("Kusistö");


	Test.printInfo();
	cout << "---------------------------------------"<<endl;

	Student studentsArray[10];
	studentsArray[0] = Test1;

	StudentGroup g1(1, Test,studentsArray);
	g1.printInfo();


	cout << "-----------------------------------------------" << endl;
	cout << "Process exited with return value 0" << endl;








	return 0;
}





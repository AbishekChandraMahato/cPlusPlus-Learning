#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// your code
class Member {
private:
	int memberId;
	string name;
	int bonus;

public:Member() {

}

public: Member(int memberId,string name,int bonus) {
	this->bonus = bonus+50;

}

public:Member(int memberId, string name) {
	this->bonus = 20;

}

public:void increaseBonusMoneyAccumulation(int ids) {
	if (this->memberId == 1) {
		this->bonus += 3;
	}
	else if (this->memberId == 2) {
		this->bonus += 5;
	}

}

public:
	int getId() { return memberId; }
	void setId(int n) { this->memberId = n; }

	string getName() { return name; }
	void setName(string name) { this->name = name; }

	int getBonus() { return bonus; }
	void setBonus(int bonus) { this->bonus = bonus; }



};

int main() {
	Member m1, m2;

	m1.setId(1);
	m1.setName("Abishek");
	m1.setBonus(0);
	

	m2.setId(2);
	m2.setName("Mahato");
	m2.setBonus( 0);

	cout << m1.getId() << endl << m1.getName() <<endl<< m1.getBonus()<<endl;
	cout << "---------"<<endl;
	cout << m2.getId() << endl << m2.getName()<<endl << m2.getBonus()<<endl;
	cout << "---------" << endl;

	m1.increaseBonusMoneyAccumulation(1);
	m2.increaseBonusMoneyAccumulation(2);

	cout << m1.getId() << endl << m1.getName() <<endl<< m1.getBonus() << endl;
	cout << "---------" << endl;
	cout << m2.getId() << endl << m2.getName() << endl << m2.getBonus() << endl;


	
	Member m3(3, "Antti",10);
	Member m4(4, "Mikko");
	
	
	system("pause");
	return 0;
}





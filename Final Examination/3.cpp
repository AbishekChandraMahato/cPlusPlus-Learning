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
#include <array>
#include <vector>
#include <list>
#include <deque>
#include <unordered_map>
#include <memory>
#include<stack>
#include <cstdlib>
#include <ctime> 
using namespace std;
// 3.cpp MVC Pattern design
class Dice {
private:
	int num1;

public:
	int getNumber() {
		return num1;
	}
	void setNumber(int new_number) {
		num1 = new_number;
	}
};

class DiceView {
public:
	void printNumber(int number) {
		cout << "Dice: " << number << endl;
	}
};

class DiceController {
private:
	Dice model;
	DiceView view;

public:
	DiceController(Dice new_model, DiceView new_view) {
		model = new_model;
		view = new_view;
	}
	void setDiceNumber(int number) {
		model.setNumber(number);
	}
	int getDiceNumber() {
		return model.getNumber();
	}
	void updateView() {
		view.printNumber(model.getNumber());
	}
};

static Dice retrieveDice() {
	Dice dice;
	int randomNumber;
	randomNumber = rand() % 6 + 1; 
	dice.setNumber(randomNumber);
	return dice;
};

int main() {
	srand((unsigned)time(0));
	int times;
	int i = 0;

	cout << "How many times you want to throw dice: ";
	cin >> times;
	cout << endl;

	for (i = 0; i<times; i++) {
		Dice model = retrieveDice();
		DiceView view;
		DiceController controller(model, view);
		controller.updateView();
	}

	return 0;
}
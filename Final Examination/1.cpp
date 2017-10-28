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
using namespace std;
// RPN calculator 1.cpp
int main() {
	stack<int> stack1;
	int num1, num2;
	char a = 0;
	
	cout << "Input RPN expression Vertically: " << endl;
	while (a != '=') {
		cin >> a;
		if (a >= '0' && a <= '9') stack1.push(a - '0');
		if (a == '+' || a == '*' || a == '-') {
			num1 = stack1.top();
			stack1.pop();
			num2 = stack1.top();
			stack1.pop();
			if (a == '+')
				stack1.push(num1 + num2);
			else if (a == '-')
				stack1.push(num2 - num1);
			else if (a == '*')
				stack1.push(num1*num2);
		}
	}
	cout << "The Answer is: "<<stack1.top() << endl;
	return 0;
}
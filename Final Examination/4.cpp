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
// 4.cpp Points

#include <iostream>
using namespace std;

class Point {
	int x, y;

public:
	Point() {} 
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}

	void show() {
		cout << "(" << x << "," << y << ")" << endl;
	}

	Point operator+(Point point2);
	Point operator-(Point point2);
	Point operator=(Point point2);
	Point operator++();
};


Point Point::operator+(Point point2)
{
	Point temp;

	temp.x = point2.x + x;
	temp.y = point2.y + y;

	return temp;
}


Point Point::operator-(Point point2)
{
	Point temp;

	
	temp.x = x - point2.x;
	temp.y = y - point2.y;

	return temp;
}


Point Point::operator=(Point point2)
{
	x = point2.x;
	y = point2.y;

	return *this; 
}


Point Point::operator++()
{
	x++;
	y++;

	return *this;
}

int main()
{
	int _x;
	int _y;

	cout << "Give a x-coordinate of point1: ";
	cin >> _x;
	cout << "Give a y-coordinate of point1: ";
	cin >> _y;
	Point point1(_x, _y);

	cout << "Give a x-coordinate of point2: ";
	cin >> _x;
	cout << "Give a y-coordinate of point2: ";
	cin >> _y;
	Point point2(_x, _y);

	cout << "Give a x-coordinate of point3: ";
	cin >> _x;
	cout << "Give a y-coordinate of point3: ";
	cin >> _y;
	Point point3(_x, _y);

	cout << endl << "point1: ";
	point1.show();
	++point1;
	cout << "point1: ";
	point1.show();

	cout << endl << "point1: ";
	point1.show();
	cout << "point2: ";
	point2.show();
	point2 = ++point1;
	cout << "point1: ";
	point1.show();
	cout << "point2: ";
	point2.show();

	cout << endl << "point1: ";
	point1.show();
	cout << "point3: ";
	point3.show();
	point1 = point1 + point3;
	cout << "point1: ";
	point1.show();
	cout << "point3: ";
	point3.show();

	cout << endl << "point1: ";
	point1.show();
	cout << "point3: ";
	point3.show();
	point1 = point1 - point3;
	cout << "point1: ";
	point1.show();
	cout << "point3: ";
	point3.show();

	cout << endl << "point1: ";
	point1.show();
	cout << "point2: ";
	point2.show();
	cout << "point3: ";
	point3.show();
	point1 = point2 = point3; 
	cout << "point1: ";
	point1.show();
	cout << "point2: ";
	point2.show();
	cout << "point3: ";
	point3.show();

	return 0;
}
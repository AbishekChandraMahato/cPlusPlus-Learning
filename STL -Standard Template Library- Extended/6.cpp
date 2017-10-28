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
//Containers
#include <array>
#include <vector>
#include <list>
#include <deque>
//STl Standard Template Library
//Vector
using namespace std;

vector<string> bookName;
vector<string> authors;
string name, author;
static void numberB() {
	cout << "**Number of books: " << bookName.size()<<endl;
}
static void emptyDb() {
	bookName.clear();
	authors.clear();
	cout << "**All data removed**"<<endl;
}
static void showData() {
	cout << "**All data:**" << endl;
	cout << "Book Names:       Authors Name:" << endl;
	for (int i = 0; i < size(bookName); i++) {
		
		cout <<bookName[i]<<"            "<<authors[i]<<endl;

		
	}
	cout << "**end of data:**" << endl;

}
static void addBook() {
	
	cout << "!!please enter the name of the book: ";
	cin >> name;
	cout << "!!please enter the name of the author: ";
	cin >> author;
	bookName.push_back(name);
	authors.push_back(author);
	cout << endl;
	cout << "**the book has been added**"<<endl;

}
static void removeBook() {
	int c;
	cout << "!!please enter the name of the book: ";
	cin >> name;
	cout << "!!please enter the name of the author: ";
	cin >> author;
	for (int i = 0; i < size(bookName); i++) {
		if (name == bookName[i]) {
			bookName.erase(bookName.begin() + i);
			authors.erase(authors.begin() + i);
			c = 0;
			
		}
		else
			c = 1;
			
	}

	if (c == 0) {
		cout << "**Data removed**" << endl;
	}
	else if(c==1){
		cout << "**book not found**" << endl;
	}
}
int main() {
	
	 string choice;
	cout << "***************Welcome to Database****************" << endl;
	cout << "a. Add a book\nb. Remove a book\nc. Empty database\nd. Show number of books currently\ne. Show all Data\nf. Quit" << endl;
	
	
	while (true) {
		

		cout << "!!plesae enter a choice!!: ";
		
		cin >> choice;
		if (choice == "f") {
			break;
		}
		//function definations for different operations
		//are declard above main function
		if (choice == "a")
			addBook();
		else if (choice == "b")
			removeBook();
		else if (choice == "e")
			showData();
		else if (choice == "c")
			emptyDb();
		else if (choice == "d")
			numberB();

		cout << endl;
		cout << endl;

		cout << "a. Add a book\nb. Remove a book\nc. Empty database\nd. Show number of books currently\ne. Show all Data\nf. Quit" << endl;
		cout << endl << endl;
	}

	
		
	

}







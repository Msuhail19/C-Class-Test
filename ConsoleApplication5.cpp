// ConsoleApplication5.cpp : Defines the entry point for the console application.
//


//Application to test the use of classes
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


//Declare Class and public methods to retrieve private data.
class testClass{
	public:
		//getter
		string getText() {
			return testCase;
		}
		//setter
		string setText(string x) {
			string testCase = x;
		}
	private:
		string testCase = "Michael Jordan";
};

//Main method
int main()
{
	testClass object;
	cout << object.getText() + " is the GOAT" << endl;
    return 0;
}


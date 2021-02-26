#include <iostream>
#include <string>
#include "Common.h"

using namespace std;

void DisplayInfo() 
{
	cout << "Welcome to Simple Additions!" << endl;
	cout << "This program takes the first number you input and adds the second number you input to it." << endl;
	cout << "Please only enter integers. Decimals and alphabetical characters will not be accepted." << endl;
	cout << "Have a great time and enjoy!" << endl;
}

int AddNumbers(int a, int b) 
{
	int result = a + b;
	return result;
}

//generic yes or no question
char askYesOrNo(string question)
{
	// decalre answer variable
	char answer;
	do
	{
		// ask the question passed through parameter
		cout << question;
		// store input in answer
		cin >> answer;
		// return answer
		return answer;
	} while (answer != 'y' && answer != 'n');
}

// generic askText function
string askText(string question)
{
	string text;
	cout << question;
	cin >> text;
	return text;
}

//generic function for obtaining a number from the user
int askNumber(string question)
{
	int number;
	cout << question;
	cin >> number;
	return number;
}
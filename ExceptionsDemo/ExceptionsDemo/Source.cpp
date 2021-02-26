#include <iostream>
#include <fstream>
#include <string>

#include "Common.h"

using namespace std;

int main()
{
	int firstNumber;
	int secondNumber;
	int result;
	DisplayInfo();
	try
	{
		firstNumber = askNumber("What is the first number to add? ");
		secondNumber = askNumber("What is the second number to add? ");
		result = AddNumbers(firstNumber, secondNumber);
		cout << "The result is: " << result << endl;
	}
	catch () 
	{

	}
	return 0;
} // end main
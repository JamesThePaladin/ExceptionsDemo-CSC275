#include <iostream>
#include <fstream>
#include <string>

#include "Common.h"

using namespace std;

int main()
{
	int firstNumber;    // holds first number to be added
	int secondNumber;   // holds second number to be added
	int result;         // holds the result of addition
	char repeat = 'n';  // for repeating the program after it has ended

	//Display the intro text
	DisplayInfo();
	do
	{
		try
		{
			// ask user for the first number they wish to add and store it in firstNumber
			firstNumber = askNumber("What is the first number to add? ");
			// if it alters the data type of cin throw an error 
			if (!cin) { throw "Please enter a valid input"; }
			// ask the user for the second number they wish to add and store it in secondNumber
			secondNumber = askNumber("What is the second number to add? ");
			// if it alters the data type of cin throw an error 
			if (!cin) { throw "Please enter a valid input"; }
			// add the numbers using the defined function
			result = AddNumbers(firstNumber, secondNumber);
			//print the result to the console
			cout << "The result is: " << result << endl;
		}
		catch (const char* error)
		{
			// clear error flags
			cin.clear();
			// clear the data still in cin
			cin.ignore(10000, '\n');
			// alert user of error
			cout << error << endl;
		}
		// ask user if they would like to preform more addition
		repeat = askYesOrNo("Would you like to preform another addition? y/n: ");
	} while (repeat == 'y'); // end of do-while loop

	// the program was terminating no matter what until I added this if statement
	if (repeat == 'n') { return 0; }  // end of program
} // end main
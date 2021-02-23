#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
	ifstream infile("example.txt");
	ofstream outfile("output.txt");

	if (infile.is_open()) 
	{
		if (outfile.is_open()) 
		{
			while (getline(infile, line)) 
			{
				cout << line << endl;
				outfile << line << endl;
			}
			infile.close();
			outfile.close();
		}//end of if outfile
		else 
		{
			cout << "unable to open output file." << endl;
		}
	} //end of if infile
	else 
	{
		cout << "unable to open input file." << endl;
	}// end of else infile

	system("pause");
	return 0;
} //end main
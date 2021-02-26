#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
	ifstream infile("example.txt");
	ofstream outfile("output.txt");
	try
	{
		if (infile.is_open())
			//throw "input file does not exist - TRY/CATCH";
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
			} // end of if outfile
			else
			{
				cout << "unable to open output file." << endl;
			}
		} // end of if infile
	} // end of try
	catch (const char* msg) 
	{
		cout << msg << endl;
	} // end of catch
	system("pause");
	return 0;
} // end main
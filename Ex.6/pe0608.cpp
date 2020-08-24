#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	string filename;

	cout << "Enter the name of file: ";
	cin >> filename;

	char ch;
	ifstream inFile;
	int count = 0;
	
	inFile.open(filename);
	inFile >> ch;
	while (inFile.good())
	{
		++ count;
		inFile >> ch;
	}

	cout << count;
}
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
struct patron
{
	string name;
	double amount;
};

int main()
{

	string filename;
	int num;
	cout << "Please enter name of file: ";
	cin >> filename;

	fstream inFile;
	inFile.open(filename);
	inFile >> num;
	inFile.get();

	patron * ps = new patron[num];

	for (int i = 0; i < num; i ++)
	{
		getline(inFile, (ps+i)->name);
		inFile >> (ps+i)->amount;
		inFile.get();
	}

	int grand_num = 0;
	cout << "Grand Patrons" << endl;
	for (int i = 0; i < num; i ++)
	{
		if ((ps+i)->amount > 10000)
		{
			cout << (ps+i)->name << ", " << (ps+i)->amount << endl;
			grand_num ++;
		}
	}

	if (grand_num == 0)
		cout << "none" << endl;
	
	cout << "Patrons" << endl;
	if (grand_num == num)
		cout << "none" << endl;
	else
	{
		for (int i = 0; i < num; i ++)
		{
			if ((ps+i)->amount <= 10000)
				cout << (ps+i)->name << ", " << (ps+i)->amount << endl;
		}
	}
}
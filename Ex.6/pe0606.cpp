#include <iostream>
#include <string>

using namespace std;
struct patron
{
	string name;
	double amount;
};

int main()
{

	int num;
	cout << "Please enter number of donors: ";
	cin >> num;
	cin.get();

	patron * ps = new patron[num];
	for (int i = 0; i < num; i ++)
	{
		cout << "Donor number " << i << endl;
		cout << "Name: ";
		getline(cin, (ps+i)->name);
		cout << "Contribution: ";
		cin >> (ps+i)->amount;
		cin.get();
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
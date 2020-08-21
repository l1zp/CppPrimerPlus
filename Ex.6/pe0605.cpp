#include <iostream>
int main()
{
	using namespace std;
	double tvarps;
	double tax;

	cout << "Please enter the number of tvarps you earned this year." << endl
	     << "Enter a negative number to quit: "; 

	while (cin >> tvarps and tvarps >= 0)
	{
		if (tvarps <= 5000)
			tax = 0;
		else if (tvarps <= 15000)
			tax = (tvarps - 5000) * 0.1;
		else if (tvarps <= 35000)
			tax = 10000 * 0.1 + (tvarps - 15000) * 0.15;
		else
			tax = 10000 * 0.1 + 20000 * 0.15 + (tvarps  - 35000) * 0.2;

		cout << "You owe " << tax << " tvarps in taxes" << endl
		     << "Enter a new income or a negative number to quit: "; 
		cin >> tvarps;
	}

}
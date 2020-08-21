#include <iostream>
const int strsize = 80;
const int bop_length = 5;

struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize]	;
	int preference;
};


int main()
{
	using namespace std;

	bop bops[bop_length] = 
	{
		{"Barak Obama", "President", "Obamarama", 1},
		{"Elvis", "Singer", "The man, the legend", 0},
		{"Aristotle", "Philosopher", "The Thinker", 2},
		{"Einstein", "Physicist", "Genius", 1}, 
		{"Marlon Brando", "Actor", "Bad boy", 0}
	};

	cout << "Benevolent Order of Programmers Report" << endl
	     << "a. display by name    \t\t b. display by title" << endl
	     << "c. display by bopname \t\t d. display by preference" << endl
	     << "q. quit" << endl
	     << "Enter your choice: ";

	char ch;
	cin >> ch;
	while (ch != 'q')
	{
		for (int i = 0; i < bop_length; i++)
		{
			switch (ch)
			{
				case 'a' :
					cout << bops[i].fullname << endl;
					break;
				case 'b' :
					cout << bops[i].title << endl;
					break ;
				case 'c' :
					cout << bops[i].bopname << endl;
				case 'd' :
					switch (bops[i].preference)
					{
						case 0:
							cout << bops[i].fullname << endl;
							break;
						case 1:
							cout << bops[i].title << endl;
							break;
						case 2:
							cout << bops[i].bopname << endl;
							break;
					}
					break;
			}
		}
		cout << "Next choice: ";
		cin >> ch;
	}
	cout << "Bye!";

}
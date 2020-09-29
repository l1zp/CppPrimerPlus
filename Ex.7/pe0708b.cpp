//ex0715
#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const char * Snames[Seasons] = 
	{"Spring", "Summer", "Fall", "Winter"};
struct expense
{
	double e[Seasons];
};
void fill(expense *pa);
void show(expense *da);

int main()
{
	expense expenses;
	fill(&expenses);
	show(&expenses);
	return 0;
}

void fill(expense *pa)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa->e[i];
	}
}
void show(expense *da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << " : $" << da->e[i] << endl;
		total += da->e[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
#include <iostream>

const int Max = 5;

int Fill_array(double ar[], int max);
void Show_array(const double ar [], int max);
void Reverse_array(double ar [], int max);

int main()
{
	using namespace std;
	double ar[Max];
	int size = Fill_array(ar, Max);
	Show_array(ar, size);
	Reverse_array(ar, size);
	Show_array(ar, size);
	return 0;
}

int Fill_array(double ar[], int max)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < max; i ++)
	{
		cout << "Enter double value #" << i+1 << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if(temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}

void Show_array(const double ar[], int max)
{
	using namespace std;
	for (int i = 0; i < max; i ++)
	{
		cout << "Double #" << i+1 << ": ";
		cout << ar[i] << endl;
	}
	cout << "\n";
}

void Reverse_array(double ar[], int max)
{
	double temp;
	for (int i = 1; i < max/2; i ++)
	{
		temp = ar[max-1-i];
		ar[max-1-i] = ar[i];
		ar[i] = temp;
	}
}
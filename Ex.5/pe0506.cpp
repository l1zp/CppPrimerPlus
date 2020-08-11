#include <iostream>
int main()
{
	using namespace std;
	string months[12] = 
	{
		"January", 
		"February", 
		"March",
		"April", 
		"May", 
		"June", 
		"July", 
		"August", 
		"September", 
		"October", 
		"November", 
		"December"
	};
	int years[3] = 
	{
		2017,
		2018,
		2019
	};

	int sales[3][12];
	int total_sales[3] = {0, 0, 0};
	int all_years_sales = 0;

	for (int i = 0; i < 3; i ++)
	{
		for (int j = 0; j < 12; j ++)
		{
			cout << "Enter the sales for " << months[j] << " in " << years[i] << ": ";
			cin >> sales[i][j];
			total_sales[i] += sales[i][j];
		}
	}
	for (int i = 0; i < 3; i ++)\
	{
		cout << "Total sales in "<< years[i] << " was: " << total_sales[i];
		all_years_sales += total_sales[i];
	}

	cout << "Total sales for the 3 years was: " << all_years_sales;
	return 0;
}
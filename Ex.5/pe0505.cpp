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
	int sales[12];
	int total_sales = 0;
	for (int i = 0; i < 12; i ++)
	{
		cout << "Enter the sales for " << months[i] << ": ";
		cin >> sales[i];
		total_sales += sales[i];
	}
	cout << "Total sales for the year was: " << total_sales;

}
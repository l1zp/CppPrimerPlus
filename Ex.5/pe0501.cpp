#include <iostream>
int main()
{
	using namespace std;
	int first, second;
	int total = 0;

	cout << "Please enter two integers: " << endl;
	cout << "Enter the first: ";
	cin >> first;
	cout << "Enter the second: ";
	cin >> second;
	
	for (int i = first; i <= second; ++ i)
		total += i;
	cout << "Sum of integers between them is: " << total;
	return 0;
}
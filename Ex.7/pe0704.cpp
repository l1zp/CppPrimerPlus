#include <iostream>
long double probability(unsigned field_num, unsigned field_pick, unsigned super_num);
int main()
{
	using namespace std;
	double field_num, field_pick, super_num;
	cout << "Enter the total field number, \n"
			"the number of pick and \n"
			"super number: \n";
	while ((cin >> field_num >> field_pick >> super_num) && field_pick <= field_num)
	{
		cout << "You have one chance in ";
		cout << probability(field_num, field_pick, super_num);
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit): ";
	}
	return 0;
}
long double probability(unsigned field_num, unsigned field_pick, unsigned super_num)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = field_num, p = field_pick; p > 0; n--, p--)
		result *= n/p;
	result *= super_num;
	return result;
}
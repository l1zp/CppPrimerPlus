#include <iostream>
unsigned long int factorial(unsigned int n);
int main()
{
	using namespace std;
	unsigned int n;
	cout << "Enter a number: ";
	while (cin >> n)
	{
		cout << n << "! = " << factorial(n) << endl;
		cout << "Another number (q to quit): ";
	}
}

unsigned long int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n-1);
}
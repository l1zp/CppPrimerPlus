#include <iostream>
using namespace std;
double add(double a, double b);
double mul(double a, double b);
double sub(double a, double b);
double calculate(double a, double b, double (*pf)(double, double));
int main()
{
	double a, b;
	double (*pf[3]) (double, double) = {add, mul, sub};
	cout << "Enter two doubles: ";
	while(cin >> a >> b)
	{
		// cin.get();
		for (int i = 0; i < 3; i++)
			cout << calculate(a, b, *(pf+i)) << " ";
		cout << "\n";
		while (cin.get() != '\n')
			continue;
		// cin.clear();
		cout << "Two more: ";
	}
}
double add(double a, double b)
{
	return a+b;
}
double sub(double a, double b)
{
	return a-b;
}
double mul(double a, double b)
{
	return a*b;
}
double calculate(double a, double b, double (*pf)(double, double))
{
	return (*pf)(a, b);
}
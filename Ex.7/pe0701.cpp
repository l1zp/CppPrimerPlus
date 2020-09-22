#include <iostream>
double harmonic(int, int);

int main()
{
	using namespace std;
	double x, y;
	cout << "Enter two values (0 to exit): ";
	while (cin >> x >> y && x !=0 && y != 0)
	{
		cout << "Harmonic mean of " << x << " and " << y
			<< " is " << harmonic(x, y) << endl;
		cout << "Enter two values (0 to exit): ";
	}
}

double harmonic(int x, int y)
{
	return 2.0*x*y/(x+y);
}
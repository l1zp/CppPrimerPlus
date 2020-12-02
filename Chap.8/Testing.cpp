#include <iostream>

int main()
{
	using namespace std;
	double x = 5.5;
	double &rx = x;
	cout << rx << endl;
	cout << &rx << endl;
}
#include <iostream>
#include <array>
const int num = 101;

int main()
{
	using namespace std;

	array<long double, num> factorials;
	factorials[0] = factorials[1] = 1L;

	for (int i = 2; i < num; i ++)
		factorials[i] = i * factorials[i - 1];
	cout << "100! = " << factorials[100] << endl;
	return 0;
}
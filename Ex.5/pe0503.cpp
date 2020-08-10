#include <iostream>
int main()
{
	using namespace std;
	int total = 0;
	int num;
	cin >> num;
	while(num != 0)
	{
		cin.get();
		total += num;
		cout << "Total: " << total << endl;
		cin >> num;
	}
	return 0;
}
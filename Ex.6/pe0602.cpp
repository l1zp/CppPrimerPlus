#include <iostream>
const int Max = 3;
int main()
{
	using namespace std;
	double donation[Max];
	double sum = 0;
	int count = 0;

	cout << "Enter donations of value " << count << ": ";
	while(count < Max && cin >> donation[count])
	{
		sum += donation[count];
		if (++count < Max)
			cout << "Enter donations of value " << count << ": ";
	}

	int larger = 0;
	for (int i = 0; i < count; i ++)
	{
		if (donation[i] > sum/count)
			++larger;
	}

	cout << "Total number of donations is: " << count;
	cout << " , " << larger << " larger than the average.";
}
//ex0606
#include <iostream>
const char * quality[4] = 
{
	"10,000-meter race.\n",
	"mud tug-og-war.\n",
	"master canoe jousting.\n",
	"pie-throwing festival.\n"
};
int main()
{
	using namespace std;
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;

	cout << "You qualify for the " << quality[index];
	return 0;
}
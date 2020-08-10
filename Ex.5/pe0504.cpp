#include <iostream>
int main()
{
	using namespace std;
	double interest_Daphne, interest_Cleo;
	double total_Cleo = 100.0;
	int i = 1;
	do
	{
		interest_Daphne = i * 100 * 0.1;
		total_Cleo = total_Cleo * (1+0.05);
		interest_Cleo = total_Cleo - 100;
		i ++;
	} while(interest_Cleo < interest_Daphne);
	cout << "After " << i << " years, interest of Cleo exceeds Daphne" << endl;
	cout << "Interest of Cleo is " << interest_Cleo << endl;
	cout << "Interest of Daphne is " << interest_Daphne << endl;
	return 0;
}
#include <iostream>
#include <array>
int main()
{
	using namespace std;
	const int times = 3;
	array<double, times> scores;
	cout << "Enter first score: " << endl;
	cin >> scores[0];
	cout << "Enter second score: " << endl;
	cin >> scores[1];
	cout << "Enter third score: " << endl;
	cin >> scores[2];

	cout << "The average score of " << times << " times is: " << (scores[0]+scores[1]+scores[2])/3.0 <<endl;

}
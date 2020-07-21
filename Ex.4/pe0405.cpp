#include <iostream>

struct CandyBar
{
	std::string band;
	float weight;
	int calories;
};


int main()
{
	using namespace std;
	CandyBar snack = 
	{
		"Mocha Munch",
		2.3,
		350
	};

	cout << "The band of snack is: " << snack.band << endl;
	cout << "The weight of snack is: " << snack.weight << endl;
	cout << "The calories of snack are: " << snack.calories << endl;

}
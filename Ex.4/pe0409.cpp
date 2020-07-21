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
	CandyBar *snack = new CandyBar [3];
	snack[0] = {"Mocha Munch",2.3,350};
	snack[1] = {"Leshi",1.2,400};
	snack[2] = {"Weilong",4.5,120};

	cout << "The band of snack is: " << snack[0].band << endl;
	cout << "The weight of snack is: " << snack[0].weight << endl;
	cout << "The calories of snack are: " << snack[0].calories << endl;

	cout << "The band of snack is: " << snack[1].band << endl;
	cout << "The weight of snack is: " << snack[1].weight << endl;
	cout << "The calories of snack are: " << snack[1].calories << endl;

	cout << "The band of snack is: " << snack[2].band << endl;
	cout << "The weight of snack is: " << snack[2].weight << endl;
	cout << "The calories of snack are: " << snack[2].calories << endl;

	delete [] snack;
}
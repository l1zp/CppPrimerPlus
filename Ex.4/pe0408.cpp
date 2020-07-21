#include <iostream>
struct Pizza
{
	/* data */
	std::string name;
	float radius;
	float weight;
};

int main()
{
	using namespace std;
	Pizza * ppizza = new Pizza;

	cout << "Enter the company name of pizza: " << endl;
	getline(cin, ppizza->name);
	cout << "Enter the radius of pizza: " << endl;
	cin >> ppizza->radius;
	cout << "Enter the weight of pizza: " << endl;
	cin >> ppizza->weight;

	cout << "Company name of pizza: " << ppizza->name << endl;
	cout << "Radius of pizza: " << ppizza->radius << endl;
	cout << "Weight of pizza: " << ppizza->weight << endl; 

	delete ppizza;
}

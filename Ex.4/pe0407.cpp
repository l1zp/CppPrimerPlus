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
	Pizza apizza;

	cout << "Enter the company name of pizza: " << endl;
	getline(cin, apizza.name);
	cout << "Enter the radius of pizza: " << endl;
	cin >> apizza.radius;
	cout << "Enter the weight of pizza: " << endl;
	cin >> apizza.weight;

	cout << "Company name of pizza: " << apizza.name << endl;
	cout << "Radius of pizza: " << apizza.radius << endl;
	cout << "Weight of pizza: " << apizza.weight << endl; 
}

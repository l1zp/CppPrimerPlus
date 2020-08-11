#include <iostream>
#include <string>
int main()
{
	using namespace std;

	struct car
	{
		string make;
		int year;
	};
	
	int num;
	cout << "How many do you want to catalog? ";
	cin >> num;
	cin.get();
	car * cars = new car[num];
	for (int i = 0; i < num; i ++)
	{
		cout << "Car #" << i+1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, cars[i].make);
		cout << "Please enter the year made: ";
		cin >> cars[i].year;
		cin.get();
	}
	cout << "Here is your collection: " << endl;
	for (int i = 0; i < num; i++)
		cout << cars[i].year << " "<< cars[i].make << endl;

	delete [] cars;

}
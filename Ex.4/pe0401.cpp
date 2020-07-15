#include <iostream>
int main()
{
	using namespace std;
	string first_name, last_name;
	char grade;
	int age;

	cout << "What is your first name?" << endl;
	getline(cin, first_name);
	cout << "What is your second name?" << endl;
	getline(cin, last_name);
	cout << "What letter grade do you deserver?" << endl;
	cin >> grade;
	cout << "What is your age?" << endl;
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age;

	return 0;

}
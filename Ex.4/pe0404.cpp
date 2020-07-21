#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	string first_name, last_name, name_str;
	cout << "Please enter your first name: ";
	getline(cin, first_name);
	cout << "Please enter your last name: ";
	getline(cin, last_name);
	name_str = last_name + ", " + first_name;
	cout << "Here's the information in a single string " << name_str << endl;

}
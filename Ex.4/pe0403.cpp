#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	const int charSize = 20;
	char first_name[charSize], last_name[charSize];
	char name_str[charSize*2];
	cout << "Please enter your first name: ";
	cin.getline(first_name, charSize);
	cout << "Please enter your last name: ";
	cin.getline(last_name, charSize);
	strcpy(name_str, strcat(strcat(last_name, ", "), first_name));
	cout << "Here's the information in a single string " << name_str << endl;

}
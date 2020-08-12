//ex0601
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int total = 0;
	int spaces = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total;
	cout << " characters total in sentence\n";
	return 0;
}
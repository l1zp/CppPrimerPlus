#include <iostream>
int main()
{
	using namespace std;
	char select;

	cout << "Please enter one of the following choices: " << endl;
	cout << "c) carnivore		p) pianist" << endl;
	cout << "t) tree			g) game" << endl;
	cin >> select;

	while (true)
	{
		switch (select)
		{
			case 'c' :
				cout << "A wolf is a carnivore." << endl;
				break;
			case 'p':
				cout << "Wolfgang Amadeus Mozart was a pianist." << endl;
				break;
			case 't':
				cout << "A maple is a tree." << endl;
				break;
			case 'g': 
				cout << "Monopoly is a game." << endl;
				break;	
			default :
				cout << "Please enter a c p t or g: " << endl;		
				cin >> select;
				continue;
		}
		break;
	}
}
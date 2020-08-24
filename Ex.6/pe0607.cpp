#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string word;
	int vowels, consonants, neither;
	vowels = consonants = neither = 0;

	cout << "Enter words (q to quit): " << endl;
	cin >> word;
	while (word != "q")
	{
		if (isalpha(word[0]))
		{
			if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || word[0] == 'y')
				vowels++;
			else
				consonants++;
		}
		else
			neither++;
		cin >> word;	
	}
	
	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << neither << " others" << endl;
	
}
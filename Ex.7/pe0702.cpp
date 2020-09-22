#include <iostream>
const int Max = 10;

int inputScores(int scores[] , int max);
double averageScores(const int scores[], int n);
void outputScores(const int scores[], int n);

int main()
{
	using namespace std;
	int scores[Max];
	double average;
	int size = inputScores(scores, Max);
	outputScores(scores, size);
	average = averageScores(scores, size);
	cout << "\n";
	cout << "Average of scores: " << average << endl;
	return 0;
}

int inputScores(int scores[], int max)
{
	using namespace std;
	cout << "Enter up to " << max << " golf scores." << endl;
	double score;
	int i;
	for (i = 0; i < max; i++)
	{
		cout << "Enter score #" << i + 1 << ": ";
		cin >> score;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated." << endl;
			break;
		}
		else if (score < 0)
			break;
		scores[i] = score;
	}
	return i;
}
void outputScores(const int scores[], int n)
{
	using namespace std;
	cout << "The scores: ";
	for (int i = 0; i < n; i++)
		cout << scores[i] << " ";
}

double averageScores(const int scores[], int n)
{
	using namespace std;
	double total = 0.;
	for (int i = 0; i < n; i ++)
		total += scores[i];
	return total / n;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = " ";
	int numVowels = 0;

	cout << "Welcome! Give me a sentence and I will count its vowels.\n";
	cout << "Please enter a sentence: ";
	getline(cin, sentence);

	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' ||
			sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
		{
			numVowels++;
		}
	}

	cout << "There are " << numVowels << " vowels in your sentence.\n";

	return 0;
}
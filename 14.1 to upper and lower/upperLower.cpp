#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence = " ";
	int currentChar = 0;

	cout << "Welcome!\n\nPlease enter a sentence: ";
	cin >> sentence;

	for (int i = 0; i < sentence.length(); i++ )
	{
		currentChar = (int)sentence[i];
		if ( currentChar >= 65 && currentChar <= 90 )
		{
			currentChar += 32;
			sentence[i] = (char)currentChar;
		}
	}

	cout << "Your sentence in lower case: " << sentence;
	
	for (int i = 0; i < sentence.length(); i++)
	{
		currentChar = (int)sentence[i];
		if (currentChar >= 97 && currentChar <= 122)
		{
			currentChar -= 32;
			sentence[i] = (char)currentChar;
		}
	}

	cout << "\nYour sentence in upper case: " << sentence << endl;

	return 0;
}
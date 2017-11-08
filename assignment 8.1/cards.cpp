/*
	Corey Russ
	CIS22A
	Assignment 8.1: Playing Cards
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string inputNotation = " ";
	string cardValue = " ";
	string cardSuit = " ";
	int stringLength = 0;

	//enter the card information
	cout << "Welcome!\nEnter the card notation: ";
	cin >> inputNotation;

	//determine the card's value
	if (inputNotation.substr(0, 1) == "A" || inputNotation.substr(0, 1) == "a")
	{
		cardValue = "Ace";
	}
	else if (inputNotation.substr(0, 1) == "J" || inputNotation.substr(0, 1) == "j")
	{
		cardValue = "Jack";
	}
	else if (inputNotation.substr(0, 1) == "Q" || inputNotation.substr(0, 1) == "q")
	{
		cardValue = "Queen";
	}
	else if (inputNotation.substr(0, 1) == "K" || inputNotation.substr(0, 1) == "k")
	{
		cardValue = "King";
	}
	//handle 2-9 cards
	else if (inputNotation.length() != 3)
	{

		if (inputNotation.substr(0, 1) >= "2" && inputNotation.substr(0, 1) <= "9")
		{
			cardValue = inputNotation.substr(0, 1);
		}
		else   //range exception
		{
			cout << "The card you entered is not valid. Please enter a number within the playing card range.\n";
			return 0;
		}

	}
	//handle 10 card
	else if (inputNotation.substr(0, 2) == "10")
	{
		cardValue = "10";
	}
	else   //range exception
	{
		cout << "The card you entered is not valid. Please enter a number within the playing card range.\n";
		return 0;
	}

	//determine card's suit
	if (inputNotation.length() >= 2 && inputNotation.length() <= 3)
	{
		stringLength = (inputNotation.length()) - 1;

		if (inputNotation.substr(stringLength, 1) == "C" || inputNotation.substr(stringLength, 1) == "c")
		{
			cardSuit = "Clubs";
		}
		else if (inputNotation.substr(stringLength, 1) == "D" || inputNotation.substr(stringLength, 1) == "d")
		{
			cardSuit = "Diamonds";
		}
		else if (inputNotation.substr(stringLength, 1) == "H" || inputNotation.substr(stringLength, 1) == "h")
		{
			cardSuit = "Hearts";
		}
		else if (inputNotation.substr(stringLength, 1) == "S" || inputNotation.substr(stringLength, 1) == "s")
		{
			cardSuit = "Spades";
		}

		//print
		cout << "You entered: " << cardValue << " of " << cardSuit << endl;

	}
	return 0;
}
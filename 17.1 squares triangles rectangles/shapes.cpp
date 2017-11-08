/*
* Corey Russ
* CIS 22A t/th
*/

#include <iostream>
#include <string>
using namespace std;

void printSquares(int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void printTriangles(int length)
{
	for (int i = 0; i <= length; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void printRectangles(int length, int width)
{
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int length = 0;
	int width = 0;
	string shape = " ";
	char printMore = 'y';



	while (printMore == 'y')
	{
		cout << "I will print squares for you!\n";
		cout << "Please enter the shape you would like to print (rectangle, triangle or square): ";
		cin >> shape;

		if (shape == "square")
		{
			cout << "Enter the length of the side of the square: ";
			cin >> length;
			printSquares(length);
		}
		else if (shape == "triangle")
		{
			cout << "Enter the length of the triangle's base: ";
			cin >> length;
			printTriangles(length);
		}
		else if (shape == "rectangle")
		{
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << "Enter the width of the rectangle: ";
			cin >> width;
			printRectangles(length, width);
		}
		else
			cout << "Invalid shape!\n";
		
		cout << "\nWould you like me to print more shapes for you? (y/n) ";
		cin >> printMore;
		cout << endl;

	}
	cout << "Thanks for \"square\" dancing with me!" << endl;

	return 0;
}

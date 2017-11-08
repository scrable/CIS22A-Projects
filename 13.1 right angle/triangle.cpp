/*
	Corey Russ
	CIS22a
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int base;
	string moreTriangles = "y";
	

	do
	{
		cout << "I will print triangles for you!\n";
		cout << "Enter the width of the triangle's base: ";
		if (cin >> base)
		{
			cout << endl;
			for (int row = 1; row <= base; row++)
			{
				for (int col = 1; col <= row; col++)
				{
					cout << "*";
				}
				cout << endl;
			}

			cout << endl;

			for (base; base >= 1; base--)
			{
				for (int col = 1; col <= base; col++)
				{
					cout << "*";
				}
				cout << endl;
			}
			cout << "\nWould you like me to print more triangles for you (y/n)? ";
			cin >> moreTriangles;
			cout << endl;
		}
		else
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please enter a positive whole number.\n\n";
		}
	} while (moreTriangles == "y" || moreTriangles == "Y" || moreTriangles == "yes" || moreTriangles == "Yes");

	cout << "Thank you!\nAnd, remember: programming is easy if you approach it from the right angle.\n\n";

	return 0;
}
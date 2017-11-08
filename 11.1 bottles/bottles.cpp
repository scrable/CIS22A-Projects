/*
*  Corey Russ
*
*  CIS 22A T/R
*/
#include <iostream>
using namespace std;

int main()
{
    int bottles;

    cout << "Welcome! Let's sing the \"99 Bottles of Beer\" song!\n";
    cout << "Enter the number of bottles: ";
    cin >> bottles;
	cout << "\n";

    while (bottles >=0)
    {
        if (bottles > 2)
        {
            cout << bottles << " bottles of beer on the wall!" << endl;
            cout << bottles << " bottles of beer!" << endl;
            cout << "You take one down, pass it around." << endl;
            bottles--;
            cout << bottles << " bottles of beer on the wall.\n\n" << endl;
        }
        else if (bottles > 1)
        {
            cout << bottles << " bottles of beer on the wall!" << endl;
            cout << bottles << " bottles of beer!" << endl;
            cout << "You take one down, pass it around." << endl;
            bottles--;
            cout << bottles << " bottle of beer on the wall.\n\n" << endl;
        }
        else if (bottles >= 0)
        {
            cout << bottles << " bottle of beer on the wall!\n";
            cout << bottles << " bottle of beer!\n";
            cout << "You take one down, pass it around.\n";
            cout << "No more bottles of beer on the wall.\n";
            return 0;
        }
    }
}

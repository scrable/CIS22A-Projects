/*
	Corey Russ
	CIS 22a
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cout << "i\t\t  j" << endl;
	for ( double i = -5; i <= 5; i += .5 )
	{
		double j = pow( i, 3 );
		cout << fixed << setprecision(1) << i << "\t\t" << j << endl;
	}
}
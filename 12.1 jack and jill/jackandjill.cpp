/*	Corey Russ
	CIS 22A
*/
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 150; i++)
	{
		if (i % 5 == 0 && i % 7 == 0)
			cout << "Went Up the Hill" << endl;
		else if (i % 5 == 0)
			cout << "Jack" << endl;
		else if (i % 7 == 0)
			cout << "Jill" << endl;
		else
			cout << i << endl;
	}
}
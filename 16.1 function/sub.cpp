/*
	Corey Russ
	CIS22a
*/

#include <iostream>
using namespace std;

int sub(int a, int b)
{
	int sum = 0;
	sum = a - b;
	return sum;
}

int main()
{
	int num1, num2, diff;
	cout << "Enter two numbers to subtract: ";
	cin >> num1 >> num2;
	diff = sub(num1, num2);
	cout << "Difference = " << diff << endl;

	return 0;
}
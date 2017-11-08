/*
	Corey Russ
	CIS22a
*/

#include <iostream>
#include <iomanip>
using namespace std;

double weeklySalary(int hoursWorked, double hourlyWage)
{
	double weeklySalary;
	weeklySalary = hoursWorked * hourlyWage;
	return weeklySalary;
}

double monthlySalary(int hoursWorked, double hourlyWage)
{
	double monthlySalary;
	const int WEEKS_PER_MONTH = 4;
	monthlySalary = WEEKS_PER_MONTH * (hoursWorked * hourlyWage);
	return monthlySalary;
}

double yearlySalary(int hoursWorked, double hourlyWage)
{
	double yearlySalary;
	yearlySalary = (hoursWorked * hourlyWage) * 50;

	return yearlySalary;
}


int main() {

	int hours;
	double hourly_wage;
	double weekly_salary = 0;
	double monthly_salary = 0;
	double yearly_salary = 0;

	cout << "This program will calculate your weekly, monthly and yearly salary!\n";
	cout << "Please enter your hourly wage: ";
	cin >> hourly_wage;

	cout << "Please enter the number of hours you work each week: ";
	cin >> hours;

	//call functions below

	weekly_salary = weeklySalary(hourly_wage, hours);
	monthly_salary = monthlySalary(hourly_wage, hours);
	yearly_salary = yearlySalary(hourly_wage, hours);

	cout << fixed << setprecision(2);

	cout << "You make $" << weekly_salary << " per week.\n";
	cout << "You make $" << monthly_salary << " per month.\n";
	cout << "You make $" << yearly_salary << " per year.\n";

}
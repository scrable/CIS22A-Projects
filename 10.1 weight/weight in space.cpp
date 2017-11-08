#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void input(double* weight, string* planet);
int main()
{

	const double MERCURY_MULT = 0.38;
	const double VENUS_MULT = 0.91;
	const double MARS_MULT = 0.38;
	const double JUPITER_MULT = 2.54;
	const double SATURN_MULT = 1.08;
	const double URANUS_MULT = 0.91;
	const double NEPTUNE_MULT = 1.19;
	const double PLUTO_MULT = 0.06;
	double* weight = 0;
	string* planet;



	input(weight, planet);


	if (*planet == "Mercury")
	{
		*weight *= MERCURY_MULT;
	}
	else if (*planet == "Venus" || *planet == "venus")
	{
		*weight *= VENUS_MULT;
	}
	else if (*planet == "Mars" || *planet == "mars")
	{
		*weight *= MARS_MULT;
	}
	else if (*planet == "Jupiter" || *planet == "jupiter")
	{
		*weight *= JUPITER_MULT;
	}
	else if (*planet == "Saturn" || *planet == "saturn")
	{
		*weight *= SATURN_MULT;
	}
	else if (*planet == "Uranus" || *planet == "uranus")
	{
		*weight *= URANUS_MULT;
	}
	else if (*planet == "Neptune" || *planet == "neptune")
	{
		*weight *= NEPTUNE_MULT;
	}
	else if (*planet == "Pluto" || *planet == "pluto")
	{
		*weight *= PLUTO_MULT;
	}
	else
	{
		cout << "You did not enter a valid planet.\n\n";
		return 0;
	}

	cout << fixed << setprecision(1) << "You weigh " << weight << " pounds on " << planet << ".\n\n";

	return 0;
}

void input(double* weight, string* planet)
{
	cout << "Welcome! This program will calculate how much you weigh on any of the planets in our solar system.\n";
	cout << "First, please enter your weight in pounds: ";
	cin >> *weight;
	cout << "Next, select one of the following planets:\n";
	cout << "\tMercury\n\tVenus\n\tMars\n\tJupiter\n\tSaturn\n\tUranus\n\tNeptune\n\tPluto\n";
	cout << "Please enter the name of a planet or type exit: ";
	cin >> *planet;
}

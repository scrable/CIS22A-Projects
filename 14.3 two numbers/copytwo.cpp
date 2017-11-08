#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	int first = 0;
	int second = 0;

	fin.open("infile.txt");
	if (fin.fail())
	{
		cout << "Input file failed to open.\n";
		exit(-1);
	}

	fin >> first;
	fin >> second;
	fin.close();

	fout.open("outfile.txt");
	if (fout.fail())
	{
		cout << "Output file failed to open.\n";
		exit(-1);
	}

	fout << "first = " << first << endl;
	fout << "second = " << second << endl;
	fout.close();
	

	return 0;
}
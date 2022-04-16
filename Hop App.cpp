#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctime>
#include <cstdint>
#include <cinttypes>

#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
using namespace std;

int main()
{
	int  a, b, c;
	cout << "Please enter your main  number ";
	cin >> a;
	cout << "Please enter your replase  number ";
	cin >> b;

	for (int i = 1; i <= a; i++)
	{
		c = i % b;
		if (c == 0)
		{
			cout << "hope" << '\t';

		}
		else
		{
			cout << i << '\t';
		}


	}

	getch();

}
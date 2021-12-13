#include<iostream>
#include "myLib.h"
#include "cmath"
using namespace std;

int count_Collatz(int n)
{
	int c = 0;

	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			c++;
		}
		else
		{
			n = 3 * n + 1;
			c++;
		}
	}

	return c;
}

void print_circle(int a)
{
	for (int i = 0; i < 40; ++i)
	{
		for (int j = 0; j < 40; ++j)
		{
			if (abs((i - 20) * (i - 20) + (j - 20) * (j - 20) - a * a) <= 7)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}
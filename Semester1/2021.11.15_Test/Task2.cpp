#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int maxim = -10001;
	int minim = 10001;
	int b = 0;
	int c = 0;

	while (cin >> b)
	{
		c += 1;
	}

	int* a = new int[c] { 0 };
	for (int i = 0; i < c; ++i)
	{
		cin >> b;
		a[i] = b;
	}
	for (int i = 0; i < c; ++i)
	{
		if (i % 2 == 0)
		{
			if (a[i] < minim)
			{
				minim = a[i];
			}
		}
		else
		{
			if (a[i] > maxim)
			{
				maxim = a[i];
			}
		}
	}

	cout << maxim + minim;

	return EXIT_SUCCESS;
}
#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	int y = 0;
	int z = 0;

	cin >> a >> b >> c;

	if ((a >= b) && (a >= c))
	{
		x = a;
	}
	else if ((b >= c) && (b >= a))
	{
		x = b;
	}
	else if ((c >= a) && (c >= b))
	{
		x = c;
	}

	if ((a <= b) && (a <= c))
	{
		z = a;
	}
	else if ((b <= c) && (b <= a))
	{
		z = b;
	}
	else if ((c <= a) && (c <= b))
	{
		z = c;
	}

	y = a + b + c - x - z;

	if (x < y + z)
	{
		if (x * x == y * y + z * z)
		{
			cout << "right";
		}

		else if (x * x > y * y + z * z)
		{
			cout << "obtuse";
		}

		else
		{
			cout << "acute";
		}
	}
	else
	{
		cout << "impossible";
	}

	return EXIT_SUCCESS;
}
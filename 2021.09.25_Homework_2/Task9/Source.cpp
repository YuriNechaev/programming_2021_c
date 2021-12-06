#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;

	cin >> m >> n >> x >> y;

	if (m == 1)
	{
		if (n == 2)
		{
			if (y == 1)
			{
				cout << 1 << " " << y + 1;
			}
			else
			{
				cout << 1 << " " << y - 1;
			}
		}
		else if (n > 2)
		{
			if (y == 1)
			{
				cout << 1 << " " << y + 1;
			}
			else if (y == n)
			{
				cout << 1 << " " << y - 1;
			}
			else
			{
				cout << 1 << " " << y - 1 << endl;
				cout << 1 << " " << y + 1;
			}
		}
	}
	else if (n == 1)
	{
		if (m == 2)
		{
			if (x == 1)
			{
				cout << x + 1 << " " << 1;
			}
			else
			{
				cout << x - 1 << " " << 1;
			}
		}
		else if (m > 2)
		{
			if (x == 1)
			{
				cout << x + 1 << " " << 1;
			}
			else if (x == m)
			{
				cout << x - 1 << " " << 1;
			}
			else
			{
				cout << x - 1 << " " << 1 << endl;
				cout << x + 1 << " " << 1;
			}
		}
	}
	
	else
	{
		if (x == 1)
		{
			if (y == 1)
			{
				cout << x << " " << y + 1 << endl;
				cout << x + 1 << " " << y;
			}
			else if (y == n)
			{
				cout << x << " " << y - 1 << endl;
				cout << x + 1 << " " << y;
			}
			else
			{
				cout << x << " " << y - 1 << endl;
				cout << x << " " << y + 1 << endl;
				cout << x + 1 << " " << y;
			}
		}

		else if (x == m)
		{
			if (y == 1)
			{
				cout << x - 1 << " " << y << endl;
				cout << x << " " << y + 1;
			}
			else if (y == n)
			{
				cout << x - 1 << " " << y << endl;
				cout << x << " " << y - 1;
			}
			else
			{
				cout << x - 1 << " " << y << endl;
				cout << x << " " << y - 1 << endl;
				cout << x << " " << y + 1;
			}
		}

		else if (y == 1)
		{
			cout << x - 1 << " " << y << endl;
			cout << x << " " << y + 1 << endl;
			cout << x + 1 << " " << y;
		}

		else if (y == n)
		{
			cout << x - 1 << " " << y << endl;
			cout << x << " " << y - 1 << endl;
			cout << x + 1 << " " << y;
		}

		else
		{
			cout << x - 1 << " " << y << endl;
			cout << x << " " << y - 1 << endl;
			cout << x << " " << y + 1 << endl;
			cout << x + 1 << " " << y;
		}
	}
	return EXIT_SUCCESS;
}
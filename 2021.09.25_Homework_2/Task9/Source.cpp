#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;

	cin >> m >> n >> x >> y;

	if (x == 1)
	{
		if (y == 1)
		{
			cout << 2 << " " << 1 << endl;
			cout << 1 << " " << 2;
		}
		else if (y == n)
		{
			cout << 2 << " " << y << endl;
			cout << 1 << " " << y - 1;
		}
		else
		{
			cout << 2 << " " << y << endl;
			cout << 1 << " " << y - 1 << endl;
			cout << 1 << " " << y + 1;
		}
	}
	else if (x == m)
	{
		if (y == 1)
		{
			cout << x - 1 << " " << 1 << endl;
			cout << x << " " << 2;
		}
		else if (y == n)
		{
			cout << 2 << " " << y << endl;
			cout << 1 << " " << y - 1;
		}
		else
		{
			cout << x << " " << y + 1 << endl;
			cout << x << " " << y - 1 << endl;
			cout << x - 1 << " " << y;
		}
	}
	else if (y == 1)
	{
		cout << x + 1 << " " << y << endl;
		cout << x - 1 << " " << y << endl;
		cout << x << " " << y + 1;
	}
	else if (y == n)
	{
		cout << x + 1 << " " << y << endl;
		cout << x - 1 << " " << y << endl;
		cout << x << " " << y - 1;
	}
	else
	{
		cout << x + 1 << " " << y << endl;
		cout << x - 1 << " " << y << endl;
		cout << x << " " << y - 1 << endl;
		cout << x << " " << y + 1;
	}

	return EXIT_SUCCESS;
}
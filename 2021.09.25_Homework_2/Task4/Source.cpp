#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cin >> a >> b >> c >> d;

	if (a == 0 and b == 0)
	{
		cout << "INF";
	}
	else if (a == 0)
	{
		cout << "NO";
	}
	else if (c == 0)
	{
		cout << -b / a;
	}
	else if (d == 0)
	{
		if (b == 0)
		{
			cout << "NO";
		}
		else
			cout<<"0";
	}
	else if (b / a == d / c)
	{
		cout << "NO";
	}
	else
		cout << -b * a;

	return EXIT_SUCCESS;
}
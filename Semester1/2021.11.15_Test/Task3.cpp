#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int a1 = 0;
	int b1 = 0;

	cin >> a >> b;

	a1 = a;
	b1 = b;

	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}

	cout << a1 * b1 / a;

	return EXIT_SUCCESS;
}
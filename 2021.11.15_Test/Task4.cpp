#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int maxim = -1001;
	int minim = 1001;
	int b = 0;

	cin >> n;
	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		cin >> b;
		a[i] = b;

		if (b < minim)
		{
			minim = b;
		}
		else if (b > maxim)
		{
			maxim = b;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == maxim)
		{
			a[i] = minim;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	delete[] a;

	return EXIT_SUCCESS;
}
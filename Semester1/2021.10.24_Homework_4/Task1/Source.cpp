#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a[100];
	int n = 0;
	int b = 0;
	int summa = 0;
	int pon = 1;
	int min = 0;
	int fminind = 1;
	int fmax = 0;
	int smax = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> b;
		a[i] = b;
	}

	cout << "array:";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "even:";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	cout << "sum:";
	for (int i = 0; i < n; i++)
	{
		summa += a[i];
	}
	cout << summa << endl;

	cout << "product of negative:";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			pon = pon * a[i];
		}
	}
	cout << pon << endl;

	cout << "first min index:";
	min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			fminind = i + 1;
			min = a[i];
		}
	}
	cout << fminind << endl;

	cout << "second max:";
	smax = a[0];
	fmax = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > fmax)
		{
			smax = fmax;
			fmax = a[i];
		}
		else if (a[i] > smax)
		{
			smax = a[i];
		}
	}
	cout << smax << endl;

	cout << "reverse:";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "odd indexes:";
	if (n % 2 == 0)
	{
		for (int i = 0; i < n / 2; i++)
		{
			cout << a[2 * i] << " ";
		}
	}
	else
	{
		for (int i = 0; i < n / 2 + 1; i++)
		{
			cout << a[2 * i] << " ";
		}
	}
	return EXIT_SUCCESS;
}
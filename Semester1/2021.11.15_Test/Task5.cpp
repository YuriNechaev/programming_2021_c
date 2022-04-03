#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int b = 0;

	cin >> n >> m;

	int* a1 = new int[n] {0};
	int* a2 = new int[m] {0};

	for (int i = 0; i < n; ++i)
	{
		cin >> b;
		a1[i] = b;
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b;
		a2[i] = b;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a1[i] == a2[j])
			{
				cout << a1[i] << " ";
			}
		}
	}

	delete[] a1;
	delete[] a2;

	return EXIT_SUCCESS;
}
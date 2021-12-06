#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;
	int ind = 0;

	cin >> n >> m >> k;

	for (int i = 0; i <= n; ++i)
	{
		if (i * m == k)
		{
			ind = 1;
		}
	}
	for (int i = 0; i <= m; ++i)
	{
		if (i * n == k)
		{
			ind = 1;
		}
	}

	if (ind == 1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return EXIT_SUCCESS;
}
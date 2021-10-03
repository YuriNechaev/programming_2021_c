#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 1;
	int c = 1;

	cin >> a;

	for (int i = 0; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (c <= a)
			{
				cout << c << " ";
				c++;
			}
		}
		b++;
		cout << endl;
	}

	return EXIT_SUCCESS;
}


#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int i = 0;
	int flag = 0;

	cin >> a >> b;

	for (i = a; i <= b; i++)
	{
		flag = 0;
		for (int j = 1; j <= i; j++)
		{
			if (j * j == i)
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			cout << i << endl;
		}
	}

	return EXIT_SUCCESS;
}


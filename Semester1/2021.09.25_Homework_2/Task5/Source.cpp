#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;

	cin >> a;

	if (a == 1)
	{
		cout << "YES";
	}
	else if (a % 4 == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return EXIT_SUCCESS;
}
#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{

	int n = 0;

	cin >> n;

	if (((n % 4 == 0) and (n % 100 != 0)) or (n % 400 == 0))
	{
		cout << "YES";
	}
	else

		cout << "NO";

	return EXIT_SUCCESS;
}
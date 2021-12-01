#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	long long n = 0;
	long long t = 1;
	long long sgn = 0;

	cin >> n;

	sgn = ((t << 63) & n);
	if (sgn != 0)
	{
		n = -1 * n;
	}

	cout << n;

	return EXIT_SUCCESS;
}
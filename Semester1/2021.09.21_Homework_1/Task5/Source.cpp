#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int k = 0;
	int c = 0;

	cin >> a;

	c = a % 10;
	b = (a / 10) % 10;
	k = ((a / 10) / 10) % 10;

	cout << b + k + c;

	return EXIT_SUCCESS;
}
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	if (c % a == 0)

		cout << (c / a) * 2 * b;

	else

		cout << ((c / a) + 1) * 2 * b;

	return EXIT_SUCCESS;

}
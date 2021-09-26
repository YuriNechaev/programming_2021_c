#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;

	int b = 0;

	int c = 0;

	cin >> b >> c;

	a = (b * c) % 109;

	if (b > 0)

		cout << a;

	else

		cout << 109 - a;
		
		return EXIT_SUCCESS;
}
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> b >> c;

	a = b * c % 109;

	cout << (a + 109) % 109;

	return EXIT_SUCCESS;
}
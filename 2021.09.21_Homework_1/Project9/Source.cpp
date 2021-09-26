#include <iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int a = 0;
	
	int b = 0;

	int c = 0;

	cin >> a;

	b = a * a;

	c = a + 1 + b * (b + a + 1);

	cout << c;

	return EXIT_SUCCESS;

}
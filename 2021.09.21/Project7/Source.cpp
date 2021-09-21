#include <iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int a = 0;

	int b = 0;

	int t = 0;

	cout << "Input a:";

	cin >> a;

	cout << "Input b:";

	cin >> b;

	t = b;	b = a;	a = t;

	cout << "a now is equal to " << a << endl;

	cout << "b now is equal to " << b;

	return EXIT_SUCCESS;
}
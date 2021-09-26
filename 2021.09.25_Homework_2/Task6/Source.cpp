#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int ind = 0;

	cin >> a >> b >> c >> d;

	if (a == c or b == d)

		ind = 1;

	if (c + d == a + b)

		ind = 1;

	if (d - b == c - a)

		ind = 1;

	if (ind == 1)

		cout << "YES";

	else
		
		cout << "NO";

	return EXIT_SUCCESS;

}
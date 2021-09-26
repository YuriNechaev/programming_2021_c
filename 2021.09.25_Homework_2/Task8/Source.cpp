#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{

	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	if (a + b < c or b + c < a or a + c < b)

		cout << "impossible";

	else if ((a * a + b * b == c * c) or (c * c + b * b == a * a) or (a * a + c * c == b * b))

		cout << "right";

	else if ((a * a + b * b < c * c) or (c * c + b * b < a * a) or (a * a + c * c < b * b))

		cout << "obtuse";
	
	else

		cout << "acute";

	return EXIT_SUCCESS;

}
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cin >> a >> b >> c >> d;

	if (a == 0 and b == 0)

		cout << "INF";

	else if (a = 0)

		cout << "NO";

	else if (a!=0)

		if (b * (-1) % a != 0)

			cout << "NO";

		else if ((d * (-1) % c != 0) or (d * (-1) / c != b * (-1) / a))

			cout << (-1) * b / a;

	return EXIT_SUCCESS;

}
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int ans = 0;
	cin >> a >> b;

	ans = (sqrt(a * a - 2 * a * b + b * b) + a + b) / 2;

	cout << ans;

	return EXIT_SUCCESS;
}
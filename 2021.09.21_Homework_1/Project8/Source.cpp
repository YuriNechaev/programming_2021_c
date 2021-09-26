#include <iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int a = 0;	int b = 0;	int c = 0;

	int x = 0;	int y = 0;	int z = 0;

	int p = 0;

	int q = 0;

	cin >> a >> b >> c;

	cin >> x >> y >> z;

	p = 3600 * a + 60 * b + c;

	q = 3600 * x + 60 * y + z;

	cout << q - p;

	return EXIT_SUCCESS;

}
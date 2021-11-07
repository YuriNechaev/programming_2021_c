#include <iostream>

using namespace std;
int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int l = 0;
	int bk = 0;
	int bl = 0;
	int bit = 0;
	int mask = 0;

	cin >> n >> k >> l;

	mask = (~(1 << k)) & (~(1 << l));
	bit = n & mask;

	if ((n & ((1 << k))) == 0)
	{
		bk = 0;
	}
	else
	{
		bk = 1;
	}
	if ((n & ((1 << l))) == 0)
	{
		bl = 0;
	}
	else
	{
		bl = 1;
	}

	n = bit | (bk << l) | (bl << k);

	cout << n;

	return EXIT_SUCCESS;
}
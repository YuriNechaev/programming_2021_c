#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{

	int n = 0;
	int k = 0;
	int m = 0;
	int ans = 0;

	cin >> k >> m >> n;

	if (n <= k)
	{
		ans = 2 * m;
	}
	else if ((n * 2) % k == 0)
	{
		ans = m * ((n * 2) / k);
	}
	else
		ans = m * (1 + ((n * 2) / k));

	cout << ans;

	return EXIT_SUCCESS;

}
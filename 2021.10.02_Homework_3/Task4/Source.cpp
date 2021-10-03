#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int a = 1;
	int b = 1;
	int c = 1;

	cin >> n >> k;
	
	for (int i = 1; i <= n; i++)
	{
		a = a * i;
	}
	for (int i = 1; i <= k; i++)
	{
		b = b * i;
	}
	for (int i = 1; i <= n - k; i++)
	{
		c = c * i;
	}
	
	cout<<a/(b*c);

	return EXIT_SUCCESS;
}
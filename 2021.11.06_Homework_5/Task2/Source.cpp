#include <iostream>

using namespace std;
int main(int argc, char* argv[])
{
	double n = 0;
	long long current = 0;
	long long value = 0;
	long long mask = 0;
	long long bit = 0;
	long long t = 1;

	cin >> n;

	value = *((long long*)&n);
	
	for (long long i = 0; i < 64; i++)
	{
		long long current = 63-i;
		mask = (t << current);
		bit = mask & value;
		bit = bit >> current;
		cout<<bit;
		if (i % 4 == 3)
		{
			cout<<" ";
		}
	}

	return EXIT_SUCCESS;
}
#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 1;
	
	cin >> a;
	
	for (int i = 1; i <= a; i++)
	{
		b = b * 2;
	}
	
	cout << b;

	return EXIT_SUCCESS;
}
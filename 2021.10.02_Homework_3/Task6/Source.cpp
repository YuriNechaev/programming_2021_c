#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int cp = 0;
	int cn = 0;
	int cz = 0;

	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a > 0)
			cp++;
		else if (a == 0)
			cz++;
		else if (a < 0)
			cn++;
	}
	
	cout << cz << endl << cp << endl << cn;

	return EXIT_SUCCESS;
}

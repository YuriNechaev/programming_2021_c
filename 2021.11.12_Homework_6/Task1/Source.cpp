#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	int c = 0;
	int b = 0;
	int newelem = 0;
	int* arr = nullptr;
	arr = new int[0]{ 0 };

	while (1)
	{
		cout << "Press 0 to exit the program" << endl
			<< "Press 1 to show an array" << endl
			<< "Press 2 to add an element on a last place of an array" << endl
			<< "Press 3 to add an element on a first place of an array" << endl
			<< "Press 4 to delete an element from a last place of an array" << endl
			<< "Press 5 to delete an element from a first place of an array" << endl
			<< "Press 6 to reverse an array" << endl;

		cin >> b;
		if (b == 0)
		{
			delete arr;
			return EXIT_SUCCESS;
		}
		if (b == 1)
		{
			for (int i = 0; i <= c; ++i)
			{
				cout << arr[i];
			}
		}
		if (b == 2)
		{
			cin >> newelem;
			int* newArr = new int[(c + 1) * sizeof(int)]{ 0 };
			for (int i = 0; i < c; ++i)
			{
				newArr[i] = arr[i];
			}
			newArr[c] = newelem;
			for (int i = 1; i < c + 1; ++i)
			{
				arr[i] = newArr[i];
			}
			c += 1;
			delete newArr;
		}
		if (b == 3)
		{
			cin >> newelem;
			int* newArr = new int[(c + 1) * sizeof(int)]{ 0 };
			for (int i = 0; i < c; ++i)
			{
				newArr[i + 1] = arr[i];
			}
			newArr[0] = newelem;
			for (int i = 0; i < c + 1; ++i)
			{
				arr[i] = newArr[i];
			}
			c += 1;
			delete newArr;
		}
		if (b == 4)
		{
			int* newArr = new int[(c - 1) * sizeof(int)]{ 0 };
			for (int i = 0; i < c - 1; ++i)
			{
				newArr[i] = arr[i];
			}
			for (int i = 0; i < c - 1; ++i)
			{
				arr[i] = newArr[i];
			}
			delete newArr;
			c -= 1;
		}
		if (b == 5)
		{
			int* newArr = new int[(c - 1) * sizeof(int)]{ 0 };
			for (int i = 1; i < c; ++i)
			{
				newArr[i - 1] = arr[i];
			}
			for (int i = 0; i < c - 1; ++i)
			{
				arr[i] = newArr[i];
			}
			delete newArr;
			c -= 1;
		}
	}



	return EXIT_SUCCESS;
}
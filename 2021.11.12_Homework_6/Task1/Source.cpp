#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	int c = 1;
	int t = 0;
	int b = 0;
	int newelem = 0;
	int* arr = new int[c] { 0 };
	bool exiting = false;

	while (!exiting)
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
			delete[] arr;
			exiting = true;
		}

		else if (b == 1)
		{
			for (int i = 0; i < c; ++i)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}

		if (b == 2)
		{
			cout << "Input an element:" << " ";
			cin >> newelem;
			int* newArr = new int[(c + 1) * sizeof(int)]{ 0 };
			for (int i = 0; i < c; ++i)
			{
				newArr[i] = arr[i];
			}
			newArr[c] = newelem;
			delete[] arr;
			arr = newArr;
			c += 1;
		}

		else if (b == 3)
		{
			cout << "Input an element:" << " ";
			cin >> newelem;
			int* newArr = new int[(c + 1) * sizeof(int)]{ 0 };
			for (int i = 0; i < c; ++i)
			{
				newArr[i + 1] = arr[i];
			}
			newArr[0] = newelem;
			delete[] arr;
			arr = newArr;
			c += 1;
		}

		else if (b == 4)
		{
			int* newArr = new int[(c - 1) * sizeof(int)]{ 0 };
			for (int i = 0; i < c - 1; ++i)
			{
				newArr[i] = arr[i];
			}
			delete[] arr;
			arr = newArr;
			c -= 1;
		}

		else if (b == 5)
		{
			int* newArr = new int[(c - 1) * sizeof(int)]{ 0 };
			for (int i = 1; i < c; ++i)
			{
				newArr[i - 1] = arr[i];
			}
			delete[] arr;
			arr = newArr;
			c -= 1;
		}

		else if (b == 6)
		{
			for (int i = 0; i < c / 2; ++i)
			{
				t = arr[i];
				arr[i] = arr[c - i - 1];
				arr[c - i - 1] = t;
			}
		}
	}

	return EXIT_SUCCESS;
}
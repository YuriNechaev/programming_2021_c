#include <iostream>
#include <cstdlib>
#include "myArray.h"
using namespace std;

int main(int argc, char* argv[])
{
	int c = 1;
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
			deleteArray(arr);
			exiting = true;
		}

		else if (b == 1)
		{
			printArray(arr, c);
			cout << endl;
		}

		if (b == 2)
		{
			cout << "Input an element:" << " ";
			cin >> newelem;

			int* newArr = nullptr;
			newArr = addElementEnd(arr, c, newelem);

			deleteArray(arr);
			arr = newArr;
			c += 1;
		}

		else if (b == 3)
		{
			cout << "Input an element:" << " ";
			cin >> newelem;

			int* newArr = nullptr;
			newArr = addElementBeginning(arr, c, newelem);

			deleteArray(arr);
			arr = newArr;
			c += 1;
		}

		else if (b == 4)
		{
			int* newArr = nullptr;

			newArr = deleteElement(arr, c, c);

			deleteArray(arr);
			arr = newArr;
			c -= 1;
		}

		else if (b == 5)
		{
			int* newArr = nullptr;

			newArr = deleteElement(arr, c, 1);

			deleteArray(arr);
			arr = newArr;
			c -= 1;
		}

		else if (b == 6)
		{
			reverseArray(arr, c);
		}
	}

	return EXIT_SUCCESS;
}
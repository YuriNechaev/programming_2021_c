#include "myArray.h"

void deleteArray(int* arr)
{
	delete[] arr;
}

void printArray(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << " ";
	}
}

int* createArray(int length)
{
	return new int[length];
}

void reverseArray(int* arr, int length)
{
	for (int i = 0; i < length / 2; ++i)
	{
		int t = arr[i];
		arr[i] = arr[length - i - 1];
		arr[length - i - 1] = t;
	}
}

int* deleteElement(int* arr, int length, int place)
{
	int* newArr = createArray(length - 1);

	if (place == 1)
	{
		for (int i = 1; i < length; ++i)
		{
			newArr[i - 1] = arr[i];
		}
	}

	else if (place == length)
	{
		for (int i = 0; i < length - 1; ++i)
		{
			newArr[i] = arr[i];
		}
	}

	else
	{
		for (int i = 0; i < place - 1; ++i)
		{
			newArr[i] = arr[i];
		}

		for (int i = place; i < length; ++i)
		{
			newArr[i - 1] = arr[i];
		}
	}

	return newArr;
}

int* addElementBeginning(int* arr, int length, int newelem)
{
	int* newArr = createArray(length + 1);

	for (int i = 0; i < length; ++i)
	{
		newArr[i + 1] = arr[i];
	}
	newArr[0] = newelem;

	return newArr;
}

int* addElementEnd(int* arr, int length, int newelem)
{
	int* newArr = createArray(length + 1);

	for (int i = 0; i < length; ++i)
	{
		newArr[i] = arr[i];
	}
	newArr[length] = newelem;

	return newArr;
}


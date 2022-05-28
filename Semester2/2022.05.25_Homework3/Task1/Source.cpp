#include<iostream>
#include"LinkedList.h"

using namespace std;

int main(int argc, char* argv[])
{
	LinkedList list;
	
	cout << list << endl;
	
	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);
	
	cout << list << endl;

	cout << list.extract(0) << endl;
	cout << list.extract(3) << endl;

	cout << list << endl;

	list.insert(5, 2);
	cout << list << endl;
	list.insert(2, 2);
	cout << list << endl;
	
	list.swap(1, 3);
	
	cout << list << endl;

	cout << list.extract(1) << endl;

	cout << list << endl;

	return EXIT_SUCCESS;
}
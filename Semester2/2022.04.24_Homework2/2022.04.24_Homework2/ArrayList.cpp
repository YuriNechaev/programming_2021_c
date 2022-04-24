#include "ArrayList.h"

void ArrayList::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

void ArrayList::swap(int posi, int posj)
{
	int t = data[posi];
	data[posi] = data[posj];
	data[posj] = t;
}

int ArrayList::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

ArrayList::ArrayList(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
}

ArrayList::ArrayList(const ArrayList& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

ArrayList::~ArrayList()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->capacity; ++i)
	{
		this->data[i] = 0;
	}
	delete[] this->data;
}

void ArrayList::pushend(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}

void ArrayList::pushbegin(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	for (int i = count; i > 0; i--)
	{
		data[i] = data[i - 1];
	}
	this->data[0] = element;
	this->count++;
}

void ArrayList::insert(int element, int position)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	for (int i = count; i > position; --i)
	{
		data[i] = data[i - 1];
	}
	data[position] = element;
}

int ArrayList::extractbegin()
{
	this->count--;
	int* newdata = new int[this->count - 1];
	for (int i = 1; i < count; ++i)
	{
		newdata[i - 1] = data[i];
	}
	int t = data[0];
	delete data;
	return t;
}

int ArrayList::extractend()
{
	this->count--;
	return this->data[this->count];
}

int& ArrayList::operator[](int pos)
{
	return data[ind(pos)];
}

std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY";
	}
	else
	{
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1];
	}
	stream << "}";
	return stream;
}
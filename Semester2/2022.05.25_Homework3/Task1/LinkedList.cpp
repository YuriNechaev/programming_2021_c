#include "LinkedList.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;

	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;

	while (temp != nullptr)
	{
		stream << *temp << " ";
		temp = temp->next;
	}
	stream << "}";

	return stream;
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

Node* LinkedList::operator[] (const int index)
{
	Node* t = head;

	for (int i = 0; i < index ; ++i)
	{
		t=t->next;
	}

	return t;
}

void LinkedList::pushHead(int element)
{
	head = new Node(element, head);

	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}

	tail->next = new Node(element);
	tail = tail->next;

	++count;
}

void LinkedList::insert(int element, int index)
{
	if (index == 0)
	{
		pushHead(element);
	}

	else if (index == count)
	{
		pushTail(element);
	}

	Node* t = head;

	for (int i = 0; i < index - 1; ++i)
	{
		t = t->next;
	}

	t->next = new Node(element, t->next);

	++count;
}

int LinkedList::extract(int index)
{
	Node* t = head;

	if (index == 0)
	{
		head = head->next;
		t->next = nullptr;

		--count;

		return t->data;
	}

	else
	{
		for (int i = 0; i < index - 1; ++i)
		{
			t = t->next;
		}

		Node* node = t->next;

		t->next = node->next;
		node->next = nullptr;

		--count;

		return node->data;
	}
}

void LinkedList::swap(int index1, int index2)
{
	Node* t1 = (*this)[index1];
	Node* t2 = (*this)[index2];

	int val = t1->data;

	t1->data = t2->data;
	t2->data = val;
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}

	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;

	if (head == nullptr)
	{
		tail = nullptr;
	}

	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}

	if (head == tail)
	{
		return popHead();
	}

	Node* temp = head;

	while (temp->next != tail)
	{
		temp = temp->next;
	}

	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;

	return value;
}
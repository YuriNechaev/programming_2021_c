#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	setlocale(LC_CTYPE, "rus");

	cin >> n;

	a = (n / 100);
	b = (n / 10) % 10;
	c = n % 10;

	if ((c == 0) and (a == 0) and (b == 0))
	{
		cout << "����"<<" ";
	}
	switch (a)
	{
	case 0:
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	case 1:
		cout << "���" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	case 2:
		cout << "������" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	case 3:
		cout << "������" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	case 4:
		cout << "���������" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	case 5:
		cout << "�������" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	case 6:
		cout << "��������" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	case 7:
		cout << "�������" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	case 8:
		cout << "���������" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	case 9:
		cout << "���������" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "������ �������";
				break;
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
			break;
		case 2:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 3:
			cout << "��������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 4:
			cout << "�����" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 5:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 6:
			cout << "����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 7:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 8:
			cout << "�����������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		case 9:
			cout << "���������" << " ";
			switch (c)
			{
			case 0:
				cout << "�������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
			break;
		}
		break;
	}

	return EXIT_SUCCESS;
}
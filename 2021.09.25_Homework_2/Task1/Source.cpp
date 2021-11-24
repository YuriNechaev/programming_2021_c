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
		cout << "ноль"<<" ";
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
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	case 1:
		cout << "сто" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	case 2:
		cout << "двести" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	case 3:
		cout << "триста" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	case 4:
		cout << "четыреста" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	case 5:
		cout << "пятьсот" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	case 6:
		cout << "шестьсот" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	case 7:
		cout << "семьсот" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	case 8:
		cout << "восемьсот" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	case 9:
		cout << "девятьсот" << " ";
		switch (b)
		{
		case 0:
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 1:
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
			break;
		case 2:
			cout << "двадцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 3:
			cout << "тридцать" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 4:
			cout << "сорок" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 5:
			cout << "пятьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 6:
			cout << "шестьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 7:
			cout << "семьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 8:
			cout << "восемьдесят" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		case 9:
			cout << "девяносто" << " ";
			switch (c)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
			break;
		}
		break;
	}

	return EXIT_SUCCESS;
}
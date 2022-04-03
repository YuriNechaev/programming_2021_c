#include "Complex.h"

Complex::Complex(double x = 0, double y = 0) :x(x), y(y) {}
Complex::Complex(const Complex& complex) : x(complex.x), y(complex.y) {}

Complex::~Complex()
{
	this->x = 0;
	this->y = 0;
}

double Complex::GetX()
{
	return this->x;
}
void Complex::SetX(double x)
{
	this->x = x;
}
double Complex::GetY()
{
	return this->y;
}
void Complex::SetY(double y)
{
	this->y = y;
}

void Complex::operator=(Complex& complex)
{
	this->x = complex.x;
	this->y = complex.y;
}

double Complex::abs()
{
	return pow(((this->x) * (this->x) + (this->y) * (this->y)), 1 / 2);
}
double Complex::arg()
{
	return atan2(this->x, this->y);
}
Complex Complex::reverse()
{
	return Complex((this->x) / ((this->x) * (this->x) + (this->y) * (this->y)), (-1) * (this->y) / ((this->x) * (this->x) + (this->y) * (this->y)));
}
void Complex::Complexsqrt(int n, ostream& stream)
{
	for (int i = 0; i < n; i++)
	{
		cout << Complex((pow(pow(((this->x) * (this->x) + (this->y) * (this->y)), 1 / 2), 1 / n) * cos(atan2((this->x), (this->y)) / n + 3.141592 * 2 * i / n), pow(pow(((this->x) * (this->x) + (this->y) * (this->y)), 1 / 2), 1 / n) * sin(atan2((this->x), (this->y)) / n + 3.141592 * 2 * i / n)));
	}
}
Complex operator*(Complex complex1, Complex complex2)
{
	return Complex(complex1.x * complex2.x - complex1.y * complex2.y, complex1.y * complex2.x + complex1.x * complex2.y);
}
Complex operator*(double d, Complex complex)
{
	return Complex((complex.x * d), (complex.y * d));
}
Complex operator*(Complex complex, double d)
{
	return Complex((d * complex.x), (d * complex.y));
}
Complex operator+(Complex complex1, Complex complex2)
{
	return Complex((complex1.x + complex2.x), (complex1.y + complex2.y));
}
Complex operator/(Complex complex1, Complex complex2)
{
	return complex1 * complex2.reverse();
}
Complex operator-(Complex complex1, Complex complex2)
{
	return Complex((complex1.x - complex2.x), (complex1.y - complex2.y));
}
ostream& operator<<(ostream& stream, const Complex& complex)
{
	if (complex.x == 0 and complex.y == 0)
	{
		cout << 0;
	}
	else if (complex.x == 0)
	{
		if (complex.y == 1)
		{
			cout << "i";
		}
		else
		{
			cout << complex.y << "i";
		}
	}
	else if (complex.y == 0)
	{
		cout << complex.x;
	}
	else
	{
		if (complex.y == 1)
		{
			cout << complex.x << "+" << "i";
		}
		else
		{
			cout << complex.x << "+" << complex.y << "i";
		}
	}
}

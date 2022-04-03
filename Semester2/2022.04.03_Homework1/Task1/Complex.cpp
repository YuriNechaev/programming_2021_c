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
double Complex::GetY()
{
	return this->y;
}
void Complex::SetX(double x)
{
	this->x = x;
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
	return pow((x * x + y * y), 1 / 2);
}
double Complex::arg()
{
	return atan2(x, y);
}
Complex Complex::reverse()
{
	return Complex((this->x) / ((this->x) * (this->x) + (this->y) * (this->y)), (-1) * (this->y) / ((this->x) * (this->x) + (this->y) * (this->y)));
}
Complex Complex::sqrt(int n, Complex complex)
{
	return Complex(pow(complex.abs(), 1 / n) * cos(complex.arg() / n), pow(complex.abs(), 1 / n) * sin(complex.arg() / n));
}
Complex operator*(Complex complex1, Complex complex2)
{
	return Complex(complex1.x * complex2.x - complex1.y * complex2.y, complex1.y * complex2.x + complex1.x * complex2.y);
}
Complex operator*(Complex complex1, Complex complex2)
{
	return Complex();
}
Complex operator*(double d, Complex complex)
{
	return Complex((this->x) * d), (this->y)* d)
}
Complex operator*(Complex complex, double d)
{
	...
}
Complex operator+(Complex complex1, Complex complex2)
{
	...
}
Complex operator/(Complex complex1, Complex complex2)
{
	...
}
Complex operator-(Complex complex1, Complex complex2)
{
	...
}
ostream& operator<<(ostream& stream, const Complex& complex)

Complex::Complex(const Complex& complex)
{
}

Complex::~Complex()
{
}

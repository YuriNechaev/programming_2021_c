#pragma once

#include <iostream>
#include <math.h>

using namespace std;

class Complex
{
private:
	double x;
	double y;

public:
	Complex(double x = 0, double y = 0);
	Complex(const Complex& complex);
	~Complex();

	double GetX();
	void SetX(double x);
	double GetY();
	void SetY(double y);

	void operator=(Complex& complex);
	double abs();

	double arg();
	Complex reverse();
	void Complexsqrt(int n, ostream& stream);
	friend Complex operator*(Complex complex1, Complex complex2);
	friend Complex operator*(double d, Complex complex);
	friend Complex operator*(Complex complex, double d);
	friend Complex operator+(Complex complex1, Complex complex2);
	friend Complex operator/(Complex complex1, Complex complex2);
	friend Complex operator-(Complex complex1, Complex complex2);
	friend ostream& operator<<(ostream& stream, const Complex& complex);
};


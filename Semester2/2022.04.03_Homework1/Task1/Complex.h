#pragma once

#include <iostream>
#include <cmath>
#include"string"

using namespace std;

class Complex
{
private:
	double x;
	double y;

public:
	Complex(double x = 0, double y = 0) :x(x), y(y) {}
	Complex(const Complex& complex);
	~Complex();

	double GetX();
	double GetY();
	void SetX(double x);
	void SetY(double y);
	void operator=(Complex& complex);
	double abs();
	double arg();
	Complex reverse();
	//void sqrt(int n, ostream& stream);
	friend Complex operator*(Complex complex1, Complex complex2);
	friend Complex operator*(double d, Complex complex);
	friend Complex operator*(Complex complex, double d);
	friend Complex operator+(Complex complex1, Complex complex2);
	friend Complex operator/(Complex complex1, Complex complex2);
	friend Complex operator-(Complex complex1, Complex complex2);
	friend ostream& operator<<(ostream& stream, const Complex& complex);
};


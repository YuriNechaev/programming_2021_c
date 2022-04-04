#include <iostream>
#include "cmath"

using namespace std;

class Fraction
{
private:
	long long numerator = 0;
	long long denominator = 0;

public:
	Fraction(long long numerator, long long demoninator) : numerator(numerator), denominator(denominator) {}
	Fraction(const Fraction& fraction) : numerator(fraction.numerator), denominator(fraction.denominator) {}
	~Fraction()
	{
		this->numerator = 0;
		this->denominator = 0;
	}

	long long GetNumerator()
	{
		return numerator;
	}
	void SetNumerator(long long numerator)
	{
		this->numerator = numerator;
	}
	long long GetDenominator()
	{
		return denominator;
	}
	void SetDenominator(long long denominator)
	{
		this->denominator = denominator;
	}

	void operator=(Fraction& fraction)
	{
		this->numerator = fraction.numerator;
		this->denominator = fraction.denominator;
	}

	bool operator==(const Fraction& fraction)
	{
		if (fraction.denominator * this->numerator - fraction.numerator * (this->denominator) == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	bool operator>=(const Fraction& fraction)
	{
		if (fraction.denominator * this->numerator - fraction.numerator * (this->denominator) >= 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	bool operator<=(const Fraction& fraction)
	{
		if (fraction.denominator * this->numerator - fraction.numerator * (this->denominator) <= 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	bool operator>(const Fraction& fraction)
	{
		if (fraction.denominator * this->numerator - fraction.numerator * (this->denominator) > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	bool operator<(const Fraction& fraction)
	{
		if (fraction.denominator * this->numerator - fraction.numerator * (this->denominator) < 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	Fraction operator+(const Fraction& fraction)
	{
		return Fraction((this->numerator) * fraction.denominator + (this->denominator) * fraction.numerator, this->denominator * fraction.denominator);
	}

	friend Fraction operator*(const Fraction& fraction1, const Fraction& fraction2)
	{
		return Fraction((fraction1.numerator) * fraction2.numerator, (fraction1.denominator) * fraction2.denominator);
	}

	Fraction operator-(const Fraction& fraction)
	{
		return Fraction((this->numerator) * fraction.denominator - (this->denominator) * fraction.numerator, this->denominator * fraction.denominator);

	}

	friend Fraction operator/(const Fraction& fraction1, const Fraction& fraction2)
	{
		return Fraction((fraction1.numerator) * fraction2.denominator, (fraction1.denominator) * fraction2.numerator);
	}

	friend Fraction operator*(long long n, const Fraction& fraction)
	{
		return Fraction((fraction.numerator) * n, fraction.denominator);
	}

	friend Fraction operator*(const Fraction& fraction, long long n)
	{
		return Fraction((fraction.numerator) * n, fraction.denominator);
	}

	friend Fraction operator/(const Fraction& fraction, long long n)
	{
		return Fraction(fraction.numerator, fraction.denominator * n);
	}

	friend Fraction operator/(long long n, const Fraction& fraction)
	{
		return Fraction(n * fraction.denominator, fraction.numerator);
	}

	Fraction reverse()
	{
		return Fraction((this->denominator), (this->numerator));
	}

	Fraction abs()
	{
		if (this->numerator * this->denominator > 0)
		{
			return Fraction(numerator, denominator);
		}
		else
		{
			return Fraction(this->numerator * (-1), this->denominator);
		}
	}

	Fraction FractionPow(int n)
	{
		return Fraction(pow(this->numerator, n), pow(this->denominator, n));
	}

	friend ostream& operator<<(ostream& stream, const Fraction& fraction)
	{
		if (fraction.numerator == 0)
		{
			cout << 0 << endl;
		}
		else if (fraction.numerator == fraction.denominator)
		{
			cout << 1 << endl;
		}
		else if (fraction.denominator > 0)
		{
			cout << fraction.numerator << "/" << fraction.denominator << endl;
		}
		else if (fraction.denominator < 0)
		{
			cout << fraction.numerator * (-1) << "/" << fraction.denominator * (-1) << endl;
		}
	}
};

int main(int argc, char* argv[])
{
	Fraction fr1(3, 1);
	Fraction fr2(5, -2);
	cout << fr1 * fr2 << endl;
	cout << fr1 / fr2 << endl;
	cout << 1 / (3 * fr1 + 4 * fr2) << endl;
	cout << fr1.abs() << endl; //модуль числа
	cout << fr1.reverse() << endl; //обратное число
	return EXIT_SUCCESS;
}
#include "RationalNumber.h"

RationalNumber::RationalNumber(int n, int d)
{
	setNumerator(n);
	setDenominator(d);
}
//--
void RationalNumber::setNumerator(int n)
{
	numerator = n;
}
//--
int RationalNumber::getNumerator()
{
	return numerator;
}
//--
void RationalNumber::setDenominator(int d)
{
	if (d == 0)
	{
		throw "Zero denominators are not allowed";
	}
	else
	{
		denominator = d;
	}
}
//--
int RationalNumber::getDenominator()
{
	return denominator;
}
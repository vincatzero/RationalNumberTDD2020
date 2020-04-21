#include "RationalNumber.h"

RationalNumber::RationalNumber(int n, int d)
{
	int numberOfNegative = 0;
	if (n < 0)
	{
		numberOfNegative++;
	}

	if (d < 0)
	{
		numberOfNegative++;
	}

	if (numberOfNegative == 1)
	{
		isNegative = true;
	} 
	else
	{
		isNegative = false;
	}

	setNumerator(abs(n));
	setDenominator(abs(d));
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
//--
string RationalNumber::toString()
{
	string retVal;

	if (isNegative)
	{
		retVal = "-";
	}
	retVal += to_string(getNumerator()) + "/" + to_string(getDenominator());

	return retVal;
}






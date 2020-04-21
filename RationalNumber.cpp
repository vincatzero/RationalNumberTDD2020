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

	reduce();
}
//--
void RationalNumber::setNumerator(int n)
{
	numerator = n;
	setReducedNumerator(n);
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
		setReducedDenominator(d);
	}
}
//--
int RationalNumber::getDenominator()
{
	return denominator;
}
//--
void RationalNumber::setReducedNumerator(int n)
{
	reducedNumerator = n;
}
//--
int RationalNumber::getReducedNumerator()
{
	return reducedNumerator;
}
//--
void RationalNumber::setReducedDenominator(int d)
{
	if (d == 0)
	{
		throw "Zero denominators are not allowed";
	}
	else
	{
		reducedDenominator = d;
	}
}
//--
int RationalNumber::getReducedDenominator()
{
	return reducedDenominator;
}
//--
void RationalNumber::reduce()
{
	int smaller;

	if (getNumerator() < getDenominator())
	{
		smaller = getNumerator();
	}
	else
	{
		smaller = getDenominator();
	}

	for (int possibleDivisor = smaller; possibleDivisor > 1; possibleDivisor--)
	{
		if (getNumerator() % possibleDivisor == 0 &&
			getDenominator() % possibleDivisor == 0)
		{
			setReducedNumerator(getNumerator() / possibleDivisor);
			setReducedDenominator(getDenominator() / possibleDivisor);
			break;
		}
	}
}
//--
string RationalNumber::toString()
{
	return toStringHelper(false);
}
//--
string RationalNumber::toReducedString()
{
	return toStringHelper(true);
}
//--
string RationalNumber::toStringHelper(bool useReduced)
{
	string retVal;

	if (isNegative)
	{
		retVal = "-";
	}

	if (useReduced)
	{
		retVal += to_string(getReducedNumerator()) + "/" + to_string(getReducedDenominator());
	}
	else
	{
		retVal += to_string(getNumerator()) + "/" + to_string(getDenominator());
	}

	return retVal;
}






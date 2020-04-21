#include <string>

using namespace std;

class RationalNumber
{
public:
	RationalNumber(int n, int d);
	string toString();
private:
	int numerator;
	int denominator;
	bool isNegative;

	void setNumerator(int n);
	int getNumerator();

	void setDenominator(int d);
	int getDenominator();
};
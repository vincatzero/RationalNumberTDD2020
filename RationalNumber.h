#include <string>

using namespace std;

class RationalNumber
{
public:
	RationalNumber(int n, int d);
	string toString();
	string toReducedString();
private:
	int numerator;
	int denominator;
	
	int reducedNumerator;
	int reducedDenominator;

	bool isNegative;

	void reduce();
	string toStringHelper(bool useReduced);

	void setNumerator(int n);
	int getNumerator();

	void setDenominator(int d);
	int getDenominator();

	void setReducedNumerator(int n);
	int getReducedNumerator();

	void setReducedDenominator(int d);
	int getReducedDenominator();
};
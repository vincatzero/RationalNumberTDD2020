
class RationalNumber
{
public:
	RationalNumber(int n, int d);
private:
	int numerator;
	int denominator;

	void setNumerator(int n);
	int getNumerator();

	void setDenominator(int d);
	int getDenominator();
};
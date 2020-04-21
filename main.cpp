#include <iostream>
#include <string>
#define CATCH_CONFIG_MAIN
#include "RationalNumber.h"

#include "catch.hpp"

using namespace std;


TEST_CASE("Rational Number Tests")
{
	//setup code
	cout << "Before the tests" << endl;

    SECTION("Test Constructor")
    {
		try
		{
			RationalNumber num1(1, 2);
			RationalNumber num2(4, 6);
			RationalNumber num3(-10, -5);

			SUCCEED();
		}
		catch (...)
		{
			FAIL();
		}
    }

	/*SECTION("Test Name 2")
	{
		cout << "Running the second test" << endl;
	}*/
	
	//tear down code
	cout << "After the tests" << endl;
}
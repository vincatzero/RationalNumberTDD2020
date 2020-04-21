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

	SECTION("Test 0 in the denominator")
	{
		REQUIRE_THROWS(RationalNumber(1, 0));
		REQUIRE_THROWS(RationalNumber(10, 0));
		REQUIRE_THROWS(RationalNumber(0, 0));
		REQUIRE_THROWS(RationalNumber(-1, 0));
		REQUIRE_THROWS(RationalNumber(1, -0));
	}

	SECTION("Test toString()")
	{
		RationalNumber num1(1, 2);
		REQUIRE(num1.toString() == "1/2");

		RationalNumber num2(-1, 2);
		REQUIRE(num2.toString() == "-1/2");

		RationalNumber num3(1, -2);
		REQUIRE(num3.toString() == "-1/2");

		RationalNumber num4(-1, -2);
		REQUIRE(num4.toString() == "1/2");
	}

	/*SECTION("Test Name 2")
	{
		cout << "Running the second test" << endl;
	}*/
	
	//tear down code
	cout << "After the tests" << endl;
}
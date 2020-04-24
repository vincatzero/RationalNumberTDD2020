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
		REQUIRE(num1.toReducedString() == "1/2");

		RationalNumber num2(-1, 2);
		REQUIRE(num2.toString() == "-1/2");
		REQUIRE(num2.toReducedString() == "-1/2");

		RationalNumber num3(1, -2);
		REQUIRE(num3.toString() == "-1/2");
		REQUIRE(num3.toReducedString() == "-1/2");

		RationalNumber num4(-1, -2);
		REQUIRE(num4.toString() == "1/2");
		REQUIRE(num4.toReducedString() == "1/2");

		RationalNumber num5(4, 6);
		REQUIRE(num5.toString() == "4/6");
		REQUIRE(num5.toReducedString() == "2/3");

		RationalNumber num6(3, 2);
		REQUIRE(num6.toString() == "1 1/2");
		REQUIRE(num6.toReducedString() == "1 1/2");

		RationalNumber num7(15, 10);
		REQUIRE(num7.toString() == "1 5/10");
		REQUIRE(num7.toReducedString() == "1 1/2");

		RationalNumber num8(-3, 2);
		REQUIRE(num8.toString() == "-1 1/2");
		REQUIRE(num8.toReducedString() == "-1 1/2");

		RationalNumber num9(3, -2);
		REQUIRE(num9.toString() == "-1 1/2");
		REQUIRE(num9.toReducedString() == "-1 1/2");

		RationalNumber num10(-3, -2);
		REQUIRE(num10.toString() == "1 1/2");
		REQUIRE(num10.toReducedString() == "1 1/2");

		RationalNumber num11(3, 1);
		REQUIRE(num11.toString() == "3");
		REQUIRE(num11.toReducedString() == "3");

		RationalNumber num12(6, 2);
		REQUIRE(num12.toString() == "3");
		REQUIRE(num12.toReducedString() == "3");

		RationalNumber num13(6, -2);
		REQUIRE(num13.toString() == "-3");
		REQUIRE(num13.toReducedString() == "-3");
	}

	SECTION("Compare Tests")
	{
		//cout << "Running the second test" << endl;
		RationalNumber num1(1, 2);
		RationalNumber num2(1, 2);
		REQUIRE(num1.isEquals(num2) == true);

		RationalNumber num3(2, 1);
		REQUIRE(num1.isEquals(num3) == false);

		RationalNumber num4(-1, 2);
		REQUIRE(num1.isEquals(num4) == false);

		RationalNumber num5(2, 4);
		REQUIRE(num1.isEquals(num5) == true);

		RationalNumber num6(-2, 4);
		REQUIRE(num5.isEquals(num6) == false);
		REQUIRE(num1.isEquals(num6) == false);
		REQUIRE(num4.isEquals(num6) == true);

		RationalNumber num7(3, 2);
		RationalNumber num8(3, 4);
		REQUIRE(num7.isEquals(num8) == false);

		RationalNumber num9(9, 6);
		REQUIRE(num7.isEquals(num9) == true);
	}
	
	//tear down code
	cout << "After the tests" << endl;
}
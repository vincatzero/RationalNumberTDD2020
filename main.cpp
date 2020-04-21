#include <iostream>
#include <string>
#define CATCH_CONFIG_MAIN

#include "catch.hpp"

using namespace std;


TEST_CASE("Test Suite Name")
{
	cout << "Before the tests" << endl;
    SECTION("Test Name")
    {
		cout << "Running the first test" << endl;
    }

	SECTION("Test Name 2")
	{
		cout << "Running the second test" << endl;
	}
	cout << "After the tests" << endl;
}
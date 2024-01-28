#include "data_types.h"
#include "catch.hpp"
//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

TEST_CASE("Test Multiply Numbers"){
REQUIRE(multiply_numbers(10) == 50);

REQUIRE(multiply_numbers(2) == 10);
}



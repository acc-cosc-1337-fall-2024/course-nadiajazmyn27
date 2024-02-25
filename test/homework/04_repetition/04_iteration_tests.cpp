#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test factorial function") {
    REQUIRE(factorial(3) == 6); // num = 3
    REQUIRE(factorial(5) == 120); // num = 5
    REQUIRE(factorial(6) == 720); // num = 6
}

TEST_CASE("Test gcd function") {
    REQUIRE(gcd(5, 15) == 5); // num1 = 5, num2 = 15
    REQUIRE(gcd(21, 28) == 7); //  num1 = 21, num2 = 28
    REQUIRE(gcd(25, 100) == 25);// num1 = 25, num2 = 100
}

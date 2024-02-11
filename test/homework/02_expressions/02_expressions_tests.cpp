#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Sales tax calculation") {
	REQUIRE(get_sales_tax_amount(10) == Approx(0.675));
	REQUIRE(get_sales_tax_amount(20) == Approx(1.35));

}

TEST_CASE("Tip amount calculation") {
	REQUIRE(get_tip_amount(20, 15) == Approx(3.0));
	REQUIRE(get_tip_amount(20,20) == Approx(4.0));
}
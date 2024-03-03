#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
#include "catch.hpp"
#include "func.h"

TEST_CASE("Test get_gc_content", "[dna]") {
    REQUIRE(get_gc_content("AGCTATAG") == Approx(0.375).epsilon(0.001));
    REQUIRE(get_gc_content("CGCTATAG") == Approx(0.50).epsilon(0.001));
}

TEST_CASE("Test get_reverse_string", "[dna]") {
    REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
    REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Test get_dna_complement", "[dna]") {
    REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
    REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}


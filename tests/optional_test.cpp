#include <new>
#include <type_traits>

#include "cata_catch.h"
#include "optional.h"

TEST_CASE( "optional_assignment_works", "[optional]" )
{
    cata::optional<int> a( 1 );
    REQUIRE( a );
    CHECK( *a == 1 );

    cata::optional<int> b( 2 );
    cata::optional<int> unset;
    a = b;
    REQUIRE( a );
    CHECK( *a == 2 );
    a = unset;
    CHECK( !a );
    a = std::move( b );
    REQUIRE( a );
    CHECK( *a == 2 );
    a = std::move( unset );
    CHECK( !a );

    const cata::optional<int> c( 3 );
    a = c;
    REQUIRE( a );
    CHECK( *a == 3 );

    int d = 4;
    a = d;
    REQUIRE( a );
    CHECK( *a == 4 );
    a = d;
    REQUIRE( a );
    CHECK( *a == 4 );

    const int e = 5;
    a = e;
    REQUIRE( a );
    CHECK( *a == 5 );
}

TEST_CASE( "optional_swap", "[optional]" )
{
    cata::optional<int> a = GENERATE( cata::optional<int>(), cata::optional<int>( 1 ) );
    cata::optional<int> b = GENERATE( cata::optional<int>(), cata::optional<int>( 2 ) );
    cata::optional<int> a_orig = a;
    cata::optional<int> b_orig = b;
    REQUIRE( a == a_orig );
    REQUIRE( b == b_orig );
    std::swap( a, b );
    CHECK( a == b_orig );
    CHECK( b == a_orig );
}

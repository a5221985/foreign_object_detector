//#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Test

#include <boost/test/unit_test.hpp>
#include "../src/math.hpp"

BOOST_AUTO_TEST_SUITE(Maths)

BOOST_AUTO_TEST_CASE(adder)
{
    Math m = Math();
    BOOST_CHECK(m.add(2, 2) == 4);
}

BOOST_AUTO_TEST_CASE(multiplier)
    {
        Math m = Math();
        BOOST_CHECK(m.mul(3, 5) == 15);
    }

BOOST_AUTO_TEST_SUITE_END()
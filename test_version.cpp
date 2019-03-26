#define BOOST_TEST_MODULE helloworld_test_module

#include "lib.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(helloworld_test_suite)

BOOST_AUTO_TEST_CASE(helloworld_test_version)
{
    helloworld::Version v;
    BOOST_CHECK(v.get_version() > 0);
}

BOOST_AUTO_TEST_SUITE_END()

#include "arith.hpp"
#include <gtest/gtest.h>


namespace {
    void add_test() {
        int x = 5;
        int y = 3;
        int z = my_add(x, y);
        ASSERT_EQ(z, x + y);

        x = -5;
        y = -10;
        z = my_add(x, y);
        ASSERT_EQ(z, x + y);
    }

    void sub_test() {
        int x = 5;
        int y = 3;
        int z = my_sub(x, y);
        ASSERT_EQ(z, x - y);

        x = -5;
        y = -10;
        z = my_sub(x, y);
        ASSERT_EQ(z, x - y);
    }

    void fact_test() {
        ASSERT_EQ(my_fact(5), 120);
        ASSERT_EQ(my_fact(0), 1);
        ASSERT_EQ(my_fact(4), 24);
        ASSERT_EQ(my_fact(7), 5040);
    }
}


TEST(Arithm, add) {
    ::add_test();
}

TEST(Arithm, sub) {
    ::sub_test();
}

TEST(Arithm, fact) {
    ::fact_test();
}


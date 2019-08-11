#include "gtest/gtest.h"
#include "square/square.h"

TEST(SquareTests, Basics) {
    EXPECT_EQ(Square(-1), 1);
    EXPECT_EQ(Square(1), 1);
    EXPECT_EQ(Square(2), 4);
}

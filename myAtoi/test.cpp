//
// Created by Runqing Zhou on 2/20/20.
//
#include <gtest/gtest.h>
#include "myatoi.cpp"

TEST(MyatoiTest, NormalNum) {
    string test1 = "42";
    int res1 = myAtoi(test1);
    EXPECT_EQ(res1, 42);
    string test2 = "  -2345";
    int res2 = myAtoi(test2);
    EXPECT_EQ(res2, -2345);
}

TEST(MyatoiTest, Boundary) {
    string test1 = "-2147483648";
    int res1 = myAtoi(test1);
    EXPECT_EQ(res1, -2147483648);
    string test2 = "2147483647";
    int res2 = myAtoi(test2);
    EXPECT_EQ(res2, 2147483647);
}

TEST(MyatoiTest, Exceed) {
    string test1 = "-91283472332";
    int res1 = myAtoi(test1);
    EXPECT_EQ(res1, -2147483648);
}

TEST(MyatoiTest, Words) {
    string test1 = "words and 987";
    int res1 = myAtoi(test1);
    EXPECT_EQ(res1, 0);
    string test2 = "4193 with words";
    int res2 = myAtoi(test2);
    EXPECT_EQ(res2, 4193);
}
int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
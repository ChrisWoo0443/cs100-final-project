#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>

TEST(FizzBuzzTestSuite, PositiveValue){
    int input = "4";
    std::string CORRECT_ANSWER = "4";
    
    EXPECT_EQ(FizzBuzz(input), CORRECT_ANSWER);
}

TEST(FizzBuzzTestSuite, NegativeValue){
    int input = "-4";
    const int CORRECT_ANSWER = "-4";

    EXPECT_EQ(FizzBuzz(input), CORRECT_ANSWER);
}

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../header/InputOutput.hpp"


TEST(InputOutputTests, stringOutput){
    InputOutput out;
    std::string test = "test";
    
    EXPECT_NO_THROW(out.outputString(test));
}
TEST(InputOutputTests, intOutput){
    InputOutput out;
    int test = 89;
    
    EXPECT_NO_THROW(out.outputInt(test));
}
TEST(InputOutputTests, doubleOutput){
    InputOutput out;
    double test = 0.2341;
    
    EXPECT_NO_THROW(out.outputDouble(test));
}

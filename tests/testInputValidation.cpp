#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../InputValidation/InputValidation.h"

using namespace std;
TEST(IntInputSuite, ValidInput){

}

TEST(IntInputSuite, OutsideBounds){
    
}

TEST(IntInputSuite, UserInputsString){

}

TEST(IntInputSuite, ImproperConfig){
    string textPrompt = "Enter an integer between 1 and 12: ";
    EXPECT_DEATH(GetIntInputFromUser(textPrompt, 12, 1), "ERROR: Cannot set minimumValue below maximumValue in GetInputFromUser()");
}


TEST(StringInput, ValidStringInput){
    string getInput = GetStringInputFromUser("");
    system("/tasklist newlist Math");
    EXPECT_EQ("/tasklist newlist Math", getInput);
}

TEST(StringInput, inValidStringInput){
    string getInput = GetStringInputFromUser("");
    system("ç√∫˙©");
    EXPECT_EQ("Invalid input. Please enter a valid letter, number, or space", getInput);
}
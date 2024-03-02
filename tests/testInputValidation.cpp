#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "inputValidation.h"

TEST(IntInputSuite, ValidInput){

}

TEST(IntInputSuite, OutsideBounds){
    
}

TEST(IntInputSuite, UserInputsString){

}

TEST(IntInputSuite, ImproperConfig){
    string textPrompt = "Enter an integer between 1 and 12: "
    EXPECT_DEATH(GetIntInputFromUser(textPrompt, 12, 1), "ERROR: Cannot set minimumValue below maximumValue in GetInputFromUser()");
}
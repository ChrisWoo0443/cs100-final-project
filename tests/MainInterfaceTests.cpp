#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>

#include "../header/MainInterface.hpp"

TEST(MainInterfaceTests, testHelperString){
    MainInterface test("testInterface");
    EXPECT_EQ(test.PrintHelper(),"Type /tasklist select {#} to select a task list. \n\
    Type /tasklist newlist {name} to make a new list. \n\
    Type /tasklist delete {#} to delete a task list." );
}
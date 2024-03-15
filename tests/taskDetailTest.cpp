#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <iostream>
#include "../header/taskView.hpp"
#include "../header/Task.hpp"
#include "../header/TaskList.hpp"
#include "../header/Interface.hpp"
using namespace std;

TEST(displayTest, displayTaskDetailsTest){
    Task testTask("hw");
    testTask.editDetail("this is math hw");
    testTask.editPriority(1);
    TaskView printTask("hw", testTask);
    string expectedString = "TASK IN DETAIL: \nTask Name: hw\nDescription: this is math hw\nPriority: 1";
    EXPECT_EQ(printTask.displayTaskDetails(testTask), expectedString);
}

TEST(displayTest, detailsWithConstructor){
    Task testTask("hw");
    TaskView printTask(testTask.getName(), testTask);
    string expectedString = "TASK IN DETAIL: \nTask Name: hw\nDescription: DO IT SOON\nPriority: 1";
    EXPECT_EQ(printTask.displayTaskDetails(testTask), expectedString);
}

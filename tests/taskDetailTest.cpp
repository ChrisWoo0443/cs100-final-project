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
    string expectedString = "============================================================"
                            "| hw"
                            "============================================================"
                            "| Description: this is math hw"
                            "| Priority: 1"
                            "| Due: 3/15/24"
                            "============================================================"
                            "| To see a list of commands, type ?help.\n";
    EXPECT_EQ(printTask.displayTaskDetails(testTask), expectedString);
}
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>

#include "../header/TaskListInterface.hpp"

TEST(TaskListInterfaceTests, testHelperString){
    std::vector<TaskList> testTaskList;
    TaskListInterface test("testInterface",testTaskList);
    EXPECT_EQ(test.PrintHelper(),"Type /task select {#} to select a task and view its details. \n\
    Type /task addtask {name} to create a new task. \n\
    Type /task remove {#} to remove an existing task. \n\
    Type /task done {#} to mark a task as completed. \n\
    Type /task stats to view statistics of the tasklist." );
}
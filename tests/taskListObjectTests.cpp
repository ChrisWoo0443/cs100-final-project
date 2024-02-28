#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../header/TaskList.hpp"

TEST(TaskListConstructorTests, newListName){
    TaskList *taskList = new TaskList("hello");
    EXPECT_EQ(taskList->GetName(), "hello");
}

TEST(TaskListTests, ChangeName){
    TaskList *taskList = new TaskList("hello");
    taskList->SetName("goodbye!");
    EXPECT_EQ(taskList->GetName(), "goodbye!");
}

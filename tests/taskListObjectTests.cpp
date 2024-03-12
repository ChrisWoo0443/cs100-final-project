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

TEST(TaskListCompareTests, comparePriority){
    Date *dueDate = new Date(30, 2, 2024);
    Date *creationDate = new Date(25, 2, 2024);
    Task task1("taskHighPriority", 1, dueDate, creationDate);
    Task task2("taskLowPriority", 2, dueDate, creationDate);
    // True means the first parameter is should be placed before the second during std::sort
    EXPECT_TRUE(TaskList::comparePriority(task1, task2));
}

TEST(TaskListCompareTests, vectorSortedByPriority){
    Date dueDate(30, 2, 2024);
    Date creationDate(25, 2, 2024);
    Task task1("taskLowPriority", 2, &dueDate, &creationDate);
    Task task2("taskHighPriority", 1, &dueDate, &creationDate);

    // mock a situation when sorting a vector of tasks
    std::vector<Task> taskList {task1, task2};
    std::sort(taskList.begin(), taskList.end(), TaskList::comparePriority);
    EXPECT_EQ(taskList[0].getName(), "taskHighPriority");
}
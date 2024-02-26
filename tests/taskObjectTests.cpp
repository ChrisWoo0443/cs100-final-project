#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../Task.cpp"

TEST(TaskConstructorTests, newTaskName){
    Date *dueDate = new Date(30, 2, 2024);
    Date *creationDate = new Date(25, 2, 2024);
    Task *newTask = new Task("testTask", 1, dueDate, creationDate);

    EXPECT_EQ(newTask->getName(), "testTask");
}
TEST(TaskConstructorTests, newTaskPriority){
    Date *dueDate = new Date(30, 2, 2024);
    Date *creationDate = new Date(25, 2, 2024);
    Task *newTask = new Task("testTask", 1, dueDate, creationDate);

    EXPECT_EQ(newTask->getPriority(), 1);
}
TEST(TaskConstructorTests, newTaskDueDate){
    Date *dueDate = new Date(30, 2, 2024);
    Date *creationDate = new Date(25, 2, 2024);
    Task *newTask = new Task("testTask", 1, dueDate, creationDate);

    Date expectedDueDate = Date(30, 2, 2024);
    Date result = newTask->getDueDate();
    EXPECT_TRUE(result == expectedDueDate);
}
TEST(TaskConstructorTests, newTaskCreationDate){
    Date *dueDate = new Date(30, 2, 2024);
    Date *creationDate = new Date(25, 2, 2024);
    Task *newTask = new Task("testTask", 1, dueDate, creationDate);

    Date expectedCreationDate = Date(25, 2, 2024);
    Date result = newTask->getCreationDate();
    EXPECT_TRUE(result == expectedCreationDate);
}
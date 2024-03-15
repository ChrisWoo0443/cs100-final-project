#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../header/TaskPriority.hpp"
#include "../header/Date.hpp"

TEST(Priority, SetPriValid){
    Date *dueDate = new Date(15, 2, 2024);
    TaskPriority *priority1 = new TaskPriority(*dueDate, 2);
    EXPECT_EQ(priority1->getPriority(), 2);
}
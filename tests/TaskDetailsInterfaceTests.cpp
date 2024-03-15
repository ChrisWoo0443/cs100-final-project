#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>

#include "../header/TaskDetailsInterface.hpp"
#include "../header/Task.hpp"

TEST(TaskDetailsInterfaceTests, testHelperString){
    std::vector<Task> task;
    TaskDetailsInterface test("testInterface", task);
    EXPECT_EQ(test.PrintHelper(),"Type /change name {new name} to change the name of this task.\n\
Type /change recurrence {frequency} to change the task's recurrence.\n\
Type /change due {MM/DD/YYYY} to change the due date of a task.\n\
Type /change priority {level} to change the priority of a task, 1 for highest and 9 for lowest." );
}
#ifndef TASK_PRIORITY_H
#define TASK_PRIORITY_H

#include <iostream>
#include <string>

class TaskPriority {
    public:
        string TaskName;
        int Priority;
        Set_def_priority(string user_task_name, int user_task_priority) {
            TaskName = user_task_name;
            user_task_priority = 0;
        }
}
#ifndef TASK_PRIORITY_H
#define TASK_PRIORITY_H

#include <iostream>
#include <string>

using namespace std;

class TaskPriority {
    
    private:
        string TaskName;
        int Priority;

    public:
        void Set_def_priority(string user_task_name, int user_task_priority) {
            TaskName = user_task_name;
            user_task_priority = 0;
        }
}

#endif
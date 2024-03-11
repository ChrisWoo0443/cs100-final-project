#ifndef TASKVIEW_HPP
#define TASKVIEW_HPP

#include "../header/task.hpp"
#include "TaskList.hpp"
#include "TaskListInterface.hpp"

class TaskView{
    public:
        void displayTaskList(vector<TaskList> list);  
        void displayTaskDetails(Task task);
        //void displayStatistics(Statistics stats);
        //string getUserInputString();
        //int getUserInputInteger();
};

#endif
#ifndef TASKVIEW_HPP
#define TASKVIEW_HPP

#include "Task.hpp"
#include "TaskList.hpp"
#include "TaskListInterface.hpp"
#include <vector>
using namespace std;

class TaskView{
    public:
        void displayTaskList(vector<TaskList> list);  
        string displayTaskDetails(Task task);
        //void displayStatistics(Statistics stats);
        //string getUserInputString();
        //int getUserInputInteger();
};

#endif
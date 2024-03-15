#ifndef TASKVIEW_HPP
#define TASKVIEW_HPP

#include "Task.hpp"
#include "TaskList.hpp"
#include "TaskListInterface.hpp"
#include "Interface.hpp"
#include <vector>
using namespace std;

class TaskView: public Interface{
    protected:
        void PrintBody() const override;
        void PrintFooter() const;
        Task task;
    public:
        TaskView(const string& input, const Task task);
        void displayTaskList(vector<TaskList> list);  
        string displayTaskDetails(Task task);
        string PrintHelper();
        //void displayStatistics(Statistics stats);
        Task getTask();
};

#endif
#ifndef TASK_DETAILS_INTERFACE_H
#define TASK_DETAILS_INTERFACE_H
#include "Interface.hpp"
#include "Task.hpp"
#include <string>
#include <vector>
#include <iostream>
class TaskDetailsInterface : public Interface {
    protected:
        std::vector<Task> listOfTasks;
        void PrintBody() const override;
        void PrintFooter() const;       
    public:
        TaskDetailsInterface(const std::string& input, const std::vector<Task>& Tasks);
        std::string PrintHelper();
        Task getTask(int index);
};

#endif
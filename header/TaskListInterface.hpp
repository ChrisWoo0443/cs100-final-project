#ifndef TASKLIST_INTERFACE_HPP
#define TASKLIST_INTERFACE_HPP

#include "Interface.hpp"
#include "TaskList.hpp"
#include <vector>
#include <iostream>

class TaskListInterface: public Interface {
    protected:
    std::vector<TaskList> taskLists;
    void PrintBody() const override;
    void PrintFooter() const;
    std::string PrintHelper() override;

    
    public:
    TaskListInterface(const std::string& input, const std::vector<TaskList>& taskLists);
    
};

#endif
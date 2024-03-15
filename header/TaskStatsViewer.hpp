#ifndef TASK_STATS_H
#define TASK_STATS_H
#include "Interface.hpp"
#include <string>

struct TaskStatsStub{
    unsigned successfulTasks = 3;
    unsigned failedTasks = 4;
};

class TaskStatsViewer : public Interface {
    using Interface::Interface;
    
    protected:
    TaskStatsStub taskStats;
    
    void PrintBody() const;
    std::string PrintHelper();
};

#endif
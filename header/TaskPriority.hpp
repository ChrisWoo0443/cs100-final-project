#ifndef TASK_PRIORITY_HPP
#define TASK_PRIORITY_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

#include "Date.hpp"

using namespace std;

class TaskPriority {

    private:
        Date dueDate;
        int userPriority;

    public:
        TaskPriority(Date dueDate, int userPriority);

        int calculatePriority();

        int getPriority();
    
        void editPriority (int newPriority);

        static bool comparePriority(TaskPriority& t1, TaskPriority& t3);

};

#endif
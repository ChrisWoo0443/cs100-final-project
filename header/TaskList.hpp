#ifndef TASKLIST_HPP
#define TASKLIST_HPP

#include <vector>
#include <string>
#include "Task.hpp"

class TaskList {
    private:
        std::vector<Task> tasks;
        std::string name;

    public:
        TaskList(const std::string& input);
        ~TaskList();
        void SetName(const std::string& input);
        std::string GetName() const;
        static bool comparePriority(Task& t1, Task& t2);
        void AddTask(Task& t1);
        void addTask(Task, int);
        void removeTask(int);
        std::vector<Task> getTasks();
};

#endif
#ifndef TASK_HPP
#define TASK_HPP
#include <iostream>
#include "Date.hpp"

using namespace std;

class Task{
    private:
        string name;
        int priority;
        Date dueDate;
        Date creationDate;
    public:
        // Task();
        Task(string name, int priority, Date* dueDate, Date* creationDate);


        void editName(string newName);
        void editPriority(int newPriority);

        string getName();
        string getDescription();
        int getPriority();
        string getLabels();
        string getDueDate(); //supposed to return date object
};

#endif
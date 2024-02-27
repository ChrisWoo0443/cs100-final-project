#ifndef TASK_HPP
#define TASK_HPP
#include <iostream>
using namespace std;

class Task{
    private:
        string name;
        int priority;
    public:
        Task();
        Task(string, int);


        void editName(string newName);
        void editPriority(int newPriority);

        string getName();
        string getDescription();
        int getPriority();
        string getLabels();
        string getDueDate(); //supposed to return date object
};

#endif
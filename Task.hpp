#ifndef TASK_HPP
#define TASK_HPP

#include <string>
using namespace std;

class Task{
    private:
        string name;
        int priority;
        //Date dueDate;       //Still need to make date object
        //Date creationDate;  //Still need to make date object
    
    public:
        void editName(string newName);
        void editPriority(int newPriority);
        //void editDueDate(Date newDueDate);        //Still need to make date object
        //string getDetails();                      //Make later
}

#endif //TASK_HPP
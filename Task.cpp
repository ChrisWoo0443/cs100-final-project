#include "Task.hpp" 
      
    void Task::editName(string newName){
        this->name = newName;
    }
    void Task::editPriority(int newPriority){
        this->priority = newPriority;
    }
    //void editDueDate(Date newDueDate);        //Still need to make date object
    string getDetails();
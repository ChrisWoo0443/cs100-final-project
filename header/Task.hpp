#ifndef TASK_HPP
#define TASK_HPP

#include "Date.hpp"
#include <string>


class Task{
    private:
        std::string name;
        int priority;
        Date dueDate;  
        Date creationDate;
    
    public:
        void editName(std::string newName);
        void editPriority(int newPriority);
        void editDueDate(Date newDueDate); 
        void setCreationDate(Date newCreationDate);
        std::string getName();
        int getPriority();
        Date getDueDate();
        Date getCreationDate();

        Task(){};  
        Task(std::string name, int priority, Date* dueDate, Date* creationDate);       
        //std::string getDetails();                      //Make later
};


#endif //TASK_HPP
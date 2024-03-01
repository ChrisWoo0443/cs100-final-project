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
        std::string detail;
    
    public:
        void editName(std::string newName);
        void editPriority(int newPriority);
        void editDueDate(Date newDueDate); 
        void setCreationDate(Date newCreationDate);
        void editDetail(std::string newDetail);
        std::string getName();
        int getPriority();
        Date getDueDate();
        Date getCreationDate();
        std::string getDetail();

        Task(){};  
        Task(std::string name, int priority, Date* dueDate, Date* creationDate);   
};


#endif //TASK_HPP
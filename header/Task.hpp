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
        std::string getName() const;
        int getPriority() const;
        Date getDueDate();
        Date getCreationDate();
        std::string getDetail() const;

        Task(){};  
        Task(std::string name, int priority, Date* dueDate, Date* creationDate);  
        Task(std::string); 
};


#endif //TASK_HPP
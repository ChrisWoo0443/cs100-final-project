#include "header/Task.hpp" 
      
void Task::editName(std::string newName){
    this->name = newName;
}
void Task::editPriority(int newPriority){
    this->priority = newPriority;
}
void Task::editDueDate(Date newDueDate){
    this->dueDate = newDueDate;
}
void Task::setCreationDate(Date newCreationDate){
    this->creationDate = newCreationDate;
}

class Date{     //Does not work yet
    void Date::setDay(int d){
        this->day = d;
    }
    void Date::setMonth(int m){
        this->month = m;
    }
    void Date::setYear(int y){

    }
};
//std::string getDetails();
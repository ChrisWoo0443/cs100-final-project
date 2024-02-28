#include "header/Task.hpp" 

//setters     
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

//getters 
std::string Task::getName(){
    return this->name;
}
int Task::getPriority(){
    return this->priority;
}
Date Task::getDueDate(){
    return this->dueDate;
}
Date Task::getCreationDate(){
    return this->creationDate;
}

//Full Constructor
Task::Task(std::string name, int priority, Date* dueDate, Date* creationDate){
    editName(name);
    editPriority(priority);
    editDueDate(*dueDate);
    setCreationDate(*creationDate);
}


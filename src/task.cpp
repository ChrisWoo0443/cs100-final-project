#include <iostream>
#include "../header/task.hpp"

using namespace std;


//constructors
// Task::Task(){
//     this->name = "";
//     this->priority = 0;
//     this->dueDate = nullptr;
//     this->creationDate = nullptr;
// }

Task::Task(string name, int priority, Date* dueDate, Date* creationDate){
    this->name = name;
    this->priority = priority;
    this->dueDate = *dueDate;
    this->creationDate = *creationDate;
}

//mutators
void Task::editName(string newName){
    this->name = newName;
}

void Task::editPriority(int newPriority){
    this->priority = newPriority;
}


//accessors
string Task::getName() const{
    return this->name;
}

//fix
string Task::getDescription(){
    return "A description";
}

int Task::getPriority(){
    return this->priority;
}

//fix
string Task::getLabels(){
    return "A label";
}

//fix
string Task::getDueDate(){
    return "February 30, 2024";
}
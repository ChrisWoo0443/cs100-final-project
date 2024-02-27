#include <iostream>
#include "../header/task.hpp"

using namespace std;


//constructors
Task::Task(){
    this->name = "";
    this->priority = 0;
}

Task::Task(string name, int priority){
    this->name = name;
    this->priority = priority;
}

//mutators
void Task::editName(string newName){
    this->name = newName;
}

void Task::editPriority(int newPriority){
    this->priority = newPriority;
}


//accessors
string Task::getName(){
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
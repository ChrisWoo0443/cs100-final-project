#include "../header/TaskList.hpp"
#include <string>

TaskList::TaskList(const std::string& input){
    this->name = input;
}

TaskList::~TaskList(){

}

void TaskList::SetName(const std::string& input){
    this->name = input;
}

std::string TaskList::GetName() const{
    return this->name;
}


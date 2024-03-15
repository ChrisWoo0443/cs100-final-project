#include "../header/TaskList.hpp"
#include <string>
#include <vector>

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

void TaskList::AddTask(Task& t1){
    tasks.push_back(t1);
}

// helper function to help sort Tasks by priority. 
// Lower value means higher priority, which means sorting in descending order.
bool TaskList::comparePriority(Task& t1, Task& t2) {
    return t1.getPriority() < t2.getPriority();
}

void TaskList::addTask(Task task, int index){
    tasks.insert(tasks.begin() + index, task);
}

void TaskList::removeTask(int index){
    if(tasks.size() > 1){
        tasks.erase(tasks.begin() + index);
    }
    else{
        tasks.pop_back();
    }
}

std::vector<Task> TaskList::getTasks(){
    return tasks;
}
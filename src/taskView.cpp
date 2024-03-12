#include <iostream>
#include "../header/taskView.hpp"
#include "../header/Task.hpp"
#include "../header/TaskList.hpp"
#include "../header/TaskListInterface.hpp"
#include <vector>
using namespace std;

string TaskView::displayTaskDetails(Task task){
    string details = "TASK IN DETAIL: \nTask Name: " + task.getName() + "\n";
    details += "Description: " + task.getDetail() + "\n";
    details += "Priority: " + task.getPriority();
    return details;
}

void TaskView::displayTaskList(vector<TaskList> list){
    TaskListInterface todoList("Task Scheduler", list);
    todoList.PrintScreen();
}

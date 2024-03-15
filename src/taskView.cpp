#include "../header/taskView.hpp"

using namespace std;

TaskView::TaskView(const string& input, const Task task)
    : Interface(input), task(task){
}

void TaskView::PrintBody() const{
    string description = "Description: " + task.getDetail();
    PrintLine(description);
    string priority = "Priority: " + to_string(task.getPriority());
    PrintLine(priority);
    PrintLine("Due: 3/15/24");
}

void TaskView::PrintFooter() const {
    // Footer should be empty, prompt the user to select an input
}

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

string TaskView::PrintHelper(){
    return "";
}

Task TaskView::getTask(){
    return task;
}
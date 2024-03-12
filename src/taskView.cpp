#include <iostream>
#include "../header/taskView.hpp"
#include "../header/task.hpp"
#include "../header/TaskList.hpp"
#include "../header/TaskListInterface.hpp"
#include <TaskListInterface.hpp>

using namespace std;

void TaskView::displayTaskDetails(Task task){
    cout << "TASK IN DETAIL:" << endl;
    cout << "Task Name: " << task.getName() << endl;
    cout << "Description: " << task.getDescription() << endl;
    cout << "Priority: " << task.getPriority() << endl;
    cout << "Labels: " << task.getLabels() << endl;
    cout << "Due: " << task.getDueDate() << endl;
}

void TaskView::displayTaskList(vector<TaskList> list){
    TaskListInterface todoList("Task Scheduler", list);
    todoList.PrintScreen();
}


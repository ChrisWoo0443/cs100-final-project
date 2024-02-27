#include <iostream>
#include "../header/taskView.hpp"
#include "../header/task.hpp"

using namespace std;

void TaskView::displayTaskDetails(Task task){
    cout << "TASK IN DETAIL:" << endl;
    cout << "Task Name: " << task.getName() << endl;
    cout << "Description: " << task.getDescription() << endl;
    cout << "Priority: " << task.getPriority() << endl;
    cout << "Labels: " << task.getLabels() << endl;
    cout << "Due: " << task.getDueDate() << endl;
}
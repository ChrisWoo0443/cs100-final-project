#include "header/Interface.hpp"
#include "header/TaskListInterface.hpp"
#include "header/Date.hpp"
#include "header/TaskList.hpp"
#include "header/Task.hpp"
#include "header/TaskPriority.hpp"
#include "header/taskView.hpp"
#include "InputValidation/InputValidation.h"
#include "header/TaskListInterface.hpp"
#include "header/TaskDetailsInterface.hpp"
#include "header/MainInterface.hpp"

#include <iostream>
#include <vector>


using namespace std;

int main(){
    string command = "";
    vector <TaskList> taskList;
    vector<Task> task;

    while(command != "/quit"){
        TaskListInterface todoList("Task Scheduler", taskList);
        todoList.PrintScreen();

        command = GetStringInputFromUser("");
        if(command == "?help"){
            command = GetStringInputFromUser("Type /tasklist select {#} - to select a task list.\nType /tasklist newlist {name} - to make a new list.\nType /tasklist delete {#} - to delete a task list.\n/back - previous page\n/quit - exit program");
        }
        //todo
        if(command.find("/tasklist select") != string::npos){
            string selectNum = "";
            selectNum += command.at(command.size()-1);
            //TaskListInterface subtask(taskList.at(stoi(selectNum)-1).GetName());

            TaskDetailsInterface sublist(taskList.at(stoi(selectNum)-1).GetName(), task);
            sublist.PrintScreen();
            command = GetStringInputFromUser("");
            if(command == "?help"){
                //cout << sublist.PrintHelper();
                command = GetStringInputFromUser("Type /task select {#} to select a task and view its details. \nType /task addtask {name} to create a new task. \nType /task remove {#} to remove an existing task. \nType /task done {#} to mark a task as completed. \nType /task stats to view statistics of the tasklist.");
                //todo
                if(command.find("/task select") != string::npos){

                }
                //todo
                else if(command.find("/task addtask") != string::npos){

                }
                //todo
                else if(command.find("/task remove") != string::npos){
                    
                }
                //todo
                else if(command.find("/task done") != string::npos){
                    
                }
                //todo
                else if(command.find("/task stats") != string::npos){
                    
                }
            }
        }
        //done
        else if(command.find("/tasklist newlist") != string::npos){
            int findSpace = 0;
            command = command.substr(command.find(' ') + 1);
            command = command.substr(command.find(' ') + 1);
            TaskList newTaskList(command);
            taskList.push_back(newTaskList);
        }
        //done
        else if(command.find("/tasklist delete") != string::npos){
            string deleteNum = "";
            deleteNum += command.at(command.size()-1);
            if(taskList.size() > 1){
                //swap(taskList[stoi(deleteNum - 1)], taskList[taskList.size()-1]);
                taskList.erase(taskList.begin() + (stoi(deleteNum)-1));
            }
            else{
                taskList.pop_back();
            }
        }
         
    }


    return 1;
}
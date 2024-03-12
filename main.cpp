#include "header/Interface.hpp"
#include "header/TaskListInterface.hpp"
#include "header/Date.hpp"
#include "header/TaskList.hpp"
#include "header/Task.hpp"
#include "header/TaskPriority.hpp"
#include "header/taskView.hpp"
#include "InputValidation/InputValidation.h"
#include <iostream>
#include <vector>


using namespace std;

int main(){
    string command = "";

    while(command != "/quit"){
        vector <TaskList> taskList;
        // TaskListInterface todoList("Task List", taskList);
        // todoList.PrintScreen();
        TaskView taskView;
        taskView.displayTaskList(taskList);

   
        command = GetStringInputFromUser("type ?help");
        if(command == "?help"){
            //"Type /tasklist select {#} to select a task list. "
            //"Type /tasklist newlist {name} to make a new list."
            //"Type /tasklist delete {#} to delete a task list."
            command = GetStringInputFromUser("Type /tasklist select {#} - to select a task list.\nType /tasklist newlist {name} - to make a new list.\nType /tasklist delete {#} - to delete a task list.\n/back - previous page\n/quit - exit program");

            //done
            if(command.find("/tasklist select") != string::npos){
                string selectNum = "";
                selectNum += command.at(command.size()-1);
                taskList.at(stoi(selectNum));
            }
            //todo
            else if(command == "/tasklist newlist"){
                cout << endl; //work on
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
    }


    return 1;
}
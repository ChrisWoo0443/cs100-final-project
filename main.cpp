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
        system("clear");
        if(command == "?help"){
            command = GetStringInputFromUser("Type /tasklist select {#} - to select a task list.\nType /tasklist newlist {name} - to make a new list.\nType /tasklist delete {#} - to delete a task list.\n/back - previous page\n/quit - exit program");
            system("clear");
        }
        //todo
        if(command.find("/tasklist select") != string::npos){
            string selectNum = "";
            selectNum += command.at(command.size()-1);

            while(command != "/quit" || command != "/back"){
                previous:
                TaskDetailsInterface sublist(taskList.at(stoi(selectNum)-1).GetName(), taskList.at(stoi(selectNum)-1).getTasks());
                sublist.PrintScreen();

                command = GetStringInputFromUser("");
                system("clear");
                if(command == "?help"){
                    command = GetStringInputFromUser("Type /task select {#} to select a task and view its details. \nType /task addtask {name} to create a new task.\nType /task remove {#} to remove an existing task.Type /task done {#} to mark a task as completed.\nType /task stats to view statistics of the tasklist\nType /back to go back\nType /quit to quit");
                    system("clear");
                }
                //todo
                if(command.find("/task select") != string::npos){
                    string selectTaskNum = "";
                    selectTaskNum += command.at(command.size()-1);
                    
                    Task replaceTask(sublist.getTask(stoi(selectTaskNum)-1).getName());
                    replaceTask = taskList.at(stoi(selectNum)-1).getTasks().at(stoi(selectTaskNum)-1);
                    while(command != "/quit" || command != "/back"){
                    
                        TaskView selectedTask(replaceTask.getName(), replaceTask);    
                        selectedTask.PrintScreen();

                        command = GetStringInputFromUser("");
                        system("clear");

                        if(command == "?help"){
                            command = GetStringInputFromUser("Type /change name {new name} to change the name of this task.\nType /change due {MM/DD/YYYY} to change the due date of a task.\nType /change description {description} to change details\nType /change priority {level} to change the priority of a task, 1 for highest and 9 for lowest.\nType /back to go back\nType /quit to quit");
                            system("clear");
                        }
                        //done
                        if(command.find("/change name") != string::npos){
                            command = command.substr(command.find(' ') + 1);
                            command = command.substr(command.find(' ') + 1);
                            sublist.getTask(stoi(selectTaskNum)-1).editName(command);
                            replaceTask.editPriority(sublist.getTask(stoi(selectTaskNum)-1).getPriority());
                            replaceTask.editName(command);
                            taskList.at(stoi(selectNum)-1).removeTask(stoi(selectTaskNum)-1);
                            taskList.at(stoi(selectNum)-1).addTask(replaceTask, stoi(selectTaskNum)-1);

                        }
                        //todo
                        else if(command.find("/change due") != string::npos){
                            cout << "| currently cannot change due date" << endl;
                        }
                        else if(command.find("/change description") != string::npos){
                            command = command.substr(command.find(' ') + 1);
                            command = command.substr(command.find(' ') + 1);
                            replaceTask.editDetail(command);
                            taskList.at(stoi(selectNum)-1).removeTask(stoi(selectTaskNum)-1);
                            taskList.at(stoi(selectNum)-1).addTask(replaceTask, stoi(selectTaskNum)-1);

                        }
                        //done
                        else if(command.find("/change priority") != string::npos){
                            string priorityNum = "";
                            priorityNum += command.at(command.size()-1);
                            replaceTask.editPriority(stoi(priorityNum));
                            taskList.at(stoi(selectNum)-1).removeTask(stoi(selectTaskNum)-1);
                            taskList.at(stoi(selectNum)-1).addTask(replaceTask, stoi(selectTaskNum)-1);
                        }
                        if(command == "/back"){
                             goto previous;
                        }
                        else if(command == "/quit"){
                            break;
                        }
                    }
                
                }
                //done
                else if(command.find("/task addtask") != string::npos){
                    command = command.substr(command.find(' ') + 1);
                    command = command.substr(command.find(' ') + 1);
                    Task newTask(command);
                    taskList.at(stoi(selectNum)-1).addTask(newTask, taskList.at(stoi(selectNum)-1).getTasks().size());
                }
                //done
                else if(command.find("/task remove") != string::npos){
                    string removeTask = "";
                    removeTask += command.at(command.size()-1);

                    taskList.at(stoi(selectNum)-1).removeTask(stoi(removeTask)-1);
                }
                //todo
                else if(command.find("/task done") != string::npos){
                    
                }
                //todo
                else if(command.find("/task stats") != string::npos){
                    
                }
                if(command == "/back" || command == "/quit"){
                    break;
                }
            }
        }
        //done
        else if(command.find("/tasklist newlist") != string::npos){
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
            
                taskList.erase(taskList.begin() + (stoi(deleteNum)-1));
            }
            else{
                taskList.pop_back();
            }
        }
    }
    return 1;
}
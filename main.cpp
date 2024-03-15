#include "header/Interface.hpp"
#include "header/TaskListInterface.hpp"
#include "header/Date.hpp"
#include "header/TaskList.hpp"
#include "header/Task.hpp"
#include "header/TaskPriority.hpp"
#include "header/taskView.hpp"
#include "header/InputValidation.h"
#include "header/TaskListInterface.hpp"
#include "header/TaskDetailsInterface.hpp"
#include "header/MainInterface.hpp"
#include "header/TaskStatsViewer.hpp"

#include <iostream>
#include <vector>


using namespace std;

int main(){
    string command = "";
    vector <TaskList> taskList;

    InputValidation input;

    while(command != "/quit"){
        TaskListInterface todoList("Task Scheduler", taskList);
        todoList.PrintScreen();

        command = input.GetStringInputFromUser("");
        system("clear");
        if(command == "?help"){
            // MainInterface useToPrintHelp("Helper");
            // useToPrintHelp.PrintHelper();
            command = input.GetStringInputFromUser("Type /tasklist select {#} - to select a task list.\nType /tasklist newlist {name} - to make a new list.\nType /tasklist delete {#} - to delete a task list.\n/back - previous page\n/quit - exit program");
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

                command = input.GetStringInputFromUser("");
                system("clear");
                if(command == "?help"){
                    cout << todoList.PrintHelper();
                    command = input.GetStringInputFromUser("\nType /back to go back\nType /quit to quit");
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

                        command = input.GetStringInputFromUser("");
                        system("clear");

                        if(command == "?help"){
                            cout << sublist.PrintHelper();
                            command = input.GetStringInputFromUser("\nType /back to go back\nType /quit to quit");
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
                 TaskStatsViewer taskStatsViewer("Task Statistics");
                 taskStatsViewer.PrintScreen();
                 command = input.GetStringInputFromUser("");
                 if(command == "/back" || command == "/quit"){
                    system("clear");
                    break;
                 }
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

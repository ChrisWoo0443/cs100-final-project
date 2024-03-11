#include "../header/TaskListInterface.hpp"

TaskListInterface::TaskListInterface(const std::string& input, const std::vector<TaskList>& taskLists)
    : Interface(input), taskLists(taskLists) {
}

void TaskListInterface::PrintBody() const {
    for(unsigned i = 0; i < taskLists.size(); ++i){
        std::string outputText = std::to_string(i + 1) + ". " + taskLists.at(i).GetName();
        PrintLine(outputText);
    }
}

void TaskListInterface::PrintFooter() const {
    // Footer should be empty, prompt the user to select an input
}
std::string TaskListInterface::PrintHelper() {
    return "Type /task select {#} to select a task and view its details. \n\
    Type /task addtask {name} to create a new task. \n\
    Type /task remove {#} to remove an existing task. \n\
    Type /task done {#} to mark a task as completed. \n\
    Type /task stats to view statistics of the tasklist.";
}
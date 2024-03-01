#include "Interface.hpp"

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
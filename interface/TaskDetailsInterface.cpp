#include "../header/TaskDetailsInterface.hpp"

TaskDetailsInterface::TaskDetailsInterface(const std::string& input, const std::vector<Task>& Tasks)
    : Interface(input), listOfTasks(Tasks){

}
void TaskDetailsInterface::PrintBody() const{
    for(unsigned i = 0; i < listOfTasks.size(); ++i){
        std::string outputText = std::to_string(i + 1) + ". " + listOfTasks.at(i).getName();
        PrintLine(outputText);
    }
}
void TaskDetailsInterface::PrintFooter() const {
    // Footer should be empty, prompt the user to select an input
}
std::string TaskDetailsInterface::PrintHelper() {
    return "Type /change name {new name} to change the name of this task.\n\
Type /change recurrence {frequency} to change the task's recurrence.\n\
Type /change due {MM/DD/YYYY} to change the due date of a task.\n\
Type /change priority {level} to change the priority of a task, 1 for highest and 9 for lowest.";
}



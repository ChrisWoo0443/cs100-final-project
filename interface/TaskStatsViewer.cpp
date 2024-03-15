#include "../header/TaskStatsViewer.hpp"

void TaskStatsViewer::PrintBody() const {
    std::string failedTasks = "Number of failed tasks: ";
    failedTasks += std::to_string(this->taskStats.failedTasks);
    PrintLine(failedTasks);

    PrintLine("");

    std::string successfulTasks = "Number of successful tasks: ";
    successfulTasks += std::to_string(this->taskStats.successfulTasks);
    PrintLine(successfulTasks);
}

std::string TaskStatsViewer::PrintHelper() {
    return "Type /back to go back.";
}
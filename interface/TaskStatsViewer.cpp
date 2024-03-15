#include "../header/TaskStatsViewer.hpp"

void TaskStatsViewer::PrintBody() const {
    std::string failedTasks = "Number of failed tasks: ";
    failedTasks += this->taskStats->failedTasks;
    PrintLine(failedTasks);

    PrintLine();

    std::string successfulTasks = "Number of successful tasks: "
    successfulTasks += this->taskStats->successfulTasks;
    PrintLine(successfulTasks);
}
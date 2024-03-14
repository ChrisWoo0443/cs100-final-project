#include "../header/TaskPriority.hpp"

#include <ctime>
#include <chrono>

using namespace std;

TaskPriority::TaskPriority(Date dueDate, int userPriority) : userPriority(0) {
    this->dueDate = dueDate;
    this->userPriority = userPriority;
    calculatePriority();
}

int TaskPriority::calculatePriority() {
    auto now = chrono::system_clock::now();
    auto today = chrono::system_clock::to_time_t(now);

    struct tm target_tm = {0, 0, 0, this->dueDate.getMonth(), this->dueDate.getDay(), this->dueDate.getYear() - 1900};
    time_t target_time = mktime(&target_tm);

    long int finalseconds = chrono::duration_cast<chrono::seconds>(chrono::system_clock::from_time_t(target_time) - now).count();

    return finalseconds / 86400;
}

int TaskPriority::getPriority() {
    if (userPriority == 0){
        return calculatePriority();
    }
    else {
        return userPriority;
    }
}

void TaskPriority::editPriority (int newPriority) {
    this->userPriority = newPriority;
}

static bool comparePriority(TaskPriority& t1, TaskPriority& t2) {
    return t1.getPriority() > t2.getPriority();
}

// for test only
// int main() {

//     Date *dueDate = new Date(30, 2, 2024);
//     TaskPriority *priority1 = new TaskPriority(*dueDate, 2);
//     cout << priority1->getPriority();

//     return 0;
// }
#ifndef TASK_PRIORITY_HPP
#define TASK_PRIORITY_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

class TaskPriority {

    private:
        string TaskName;
        int dueMonth;
        int dueDay;
        int priority;

    public:
        TaskPriority(int month, int day) : dueMonth(month), dueDay(day) priority(0) {
            calculatePriority();
        }

        // void Set_def_priority(string& user_task_name, int user_task_priority) {
        //     TaskName = user_task_name;
        //     user_task_priority = 0;
        // }

        void calculatePriority() {
        // Get the current time
        auto now = system_clock::now();
        time_t currentTime = system_clock::to_time_t(now);

        // Convert current time to tm struct
        tm localTime = *localtime(&currentTime);

        // Create a tm struct for the due date
        tm dueDate = {};
        dueDate.tm_year = localTime.tm_year; // Current year
        dueDate.tm_mon = dueMonth - 1;       // Month of the year (0-11)
        dueDate.tm_mday = dueDay;            // Day of the month (1-31)
        dueDate.tm_hour = 23;                // End of the due day
        dueDate.tm_min = 59;
        dueDate.tm_sec = 59;

        // Calculate the difference in seconds
        time_t currentSeconds = mktime(&localTime);
        time_t dueSeconds = mktime(&dueDate);
        double secondsDiff = difftime(dueSeconds, currentSeconds);

        // Calculate priority based on the difference in days
        int daysDiff = static_cast<int>(secondsDiff / (60 * 60 * 24));
        priority = max(0, 100 - daysDiff);
    }

    int getPriority() const {
        return priority;
    }
};

#endif
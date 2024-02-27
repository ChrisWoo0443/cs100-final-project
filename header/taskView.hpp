#ifdef TASKVIEW_HPP
#define TASKVIEW_HPP

class TaskView {
    public:
        void displayTaskList(vector<User> user);
        void displayTaskDetails(Task task);
        void displayStatistics(Statistics stats);
        string getUserInputString();
        int getUserInputInteger();
};

#endif
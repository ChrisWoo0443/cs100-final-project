#ifndef TASK_DETAILS_INTERFACE_H
#define TASK_DETAILS_INTERFACE_H
#include "Interface.hpp"
#include <string>
class TaskDetailsInterface : public Interface {
protected:
std::string PrintHelper();

};

#endif
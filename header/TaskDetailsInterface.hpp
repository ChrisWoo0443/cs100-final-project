#ifndef TASK_DETAILS_INTERFACE_H
#define TASK_DETAILS_INTERFACE_H
#include "Interface.hpp"
#include <string>
class TaskDetailsInterface : public Interface {
    using Interface::Interface;
    protected:
    void PrintBody() const override;
    public:
    std::string PrintHelper();

};

#endif
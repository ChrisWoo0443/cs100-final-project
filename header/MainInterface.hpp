#ifndef MAIN_INTERFACE_H
#define MAIN_INTERFACE_H
#include "Interface.hpp"
#include <string>
class MainInterface : public Interface {
    using Interface::Interface;
    protected:
    void PrintBody() const override;
    public:
    std::string PrintHelper();
};

#endif
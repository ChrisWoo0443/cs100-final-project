#include "../header/Interface.hpp"
#include <string>
#include <iostream>

void Interface::PrintSpacer() const {
    std::cout << "============================================================" << std::endl;
}

void Interface::PrintLine(const std::string& input) const {
    std::cout << "| " << input << std::endl;
}

Interface::Interface(const std::string& input) : interfaceName(input) {
}

void Interface::PrintHeading() const {
    PrintSpacer();
    PrintLine(this->interfaceName);
    PrintSpacer();
}
    
void Interface::PrintFooter() const {
    PrintSpacer();
    PrintLine("To see a list of commands, type ?help.");
}

void Interface::PrintScreen() const {
    PrintHeading();
    PrintBody();
    PrintFooter();
}
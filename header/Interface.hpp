#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>

class Interface {

    protected:
    std::string interfaceName;
    
    void PrintSpacer() const;
    void PrintLine(const std::string& input) const;
    void PrintHeading() const;
    virtual void PrintBody() const = 0;
    void PrintFooter() const;
    virtual std::string PrintHelper() = 0;

    public:
    Interface(const std::string& input);
    ~Interface();
    void PrintScreen() const; 
};

#endif
#ifndef INPUTPUTPU_H
#define INPUTOUTPUT_H

#include <string>

class InputOutput {
private:
public:
    std::string inputString();
    int inputInt();
    double inputDouble();

    void outputString(std::string s);
    void outputInt(int i);
    void outputDouble(double d);
};

#endif // INPUTOUTPUT_H
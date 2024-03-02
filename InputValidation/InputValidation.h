#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <iostream>
#include <string>

std::string GetStringInputFromUser(std::string promptMessage);
int GetIntInputFromUser(std::string promptMessage, int minimumValue, int maximumValue);

#endif
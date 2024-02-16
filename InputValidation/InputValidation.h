#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <iostream>
#include <string>

string GetStringInputFromUser(string promptMessage);
int GetIntInputFromUser(string promptMessage, int minimumValue, int maximumValue);

#endif
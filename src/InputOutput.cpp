#include "../header/InputOutput.hpp"
#include <iostream>
#include <limits>

// Input functions
std::string inputString(){
    std::string input = "";
    std::cin >> input;     
    return input;
}
int inputInt(){
    int input = 0;
    std::cin >> input;
    return input;
}
double inputDouble(){
    double input = 0;
    std::cin >> input;
    return input;
}

//Output functions
void outputString(std::string s){
    std::cout << s;
}
void outputInt(int i){
    std::cout << i;
}
void outputDouble(double d){
    std::cout << d;
}
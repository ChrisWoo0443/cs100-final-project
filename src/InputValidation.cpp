#include "../header/InputValidation.h"
#include <iostream>
#include <limits>
#include <cassert>


int GetIntInputFromUser(std::string promptMessage, int minimumValue, int maximumValue){
    assert(minimumValue < maximumValue);

    int userInput;

    while(true) { // Keep looping until a valid integer is entered. Nicholas Item looked up an implementation for this on the internet.
        std::cout << promptMessage;

        if(std::cin >> userInput){
            if( (userInput >= minimumValue) && (userInput <= maximumValue) ){
                std::cout << std::endl;
                return userInput;
            } else {
                std::cout << "Invalid input. Please enter a number between " << minimumValue << " and " << maximumValue << "." << std::endl;
            }
       // Only reached if the user did not enter an int
            std::cout << "Invalid input. Please enter a valid letter, number, or space" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number between " << minimumValue << " and " << maximumValue << "." << std::endl;
        }
    }
}

//letters, numbers, spaces
std::string GetStringInputFromUser(std::string promptMessage){
    std::cout << promptMessage << std::endl;
    bool isValid = false;
    std::string userInput;
    getline(std::cin, userInput);

    while(isValid == false){
        isValid = true;
        for(int i = 0; i < userInput.size(); i++){
            if(!std::isdigit(userInput[i]) || !std::isalpha(userInput[i]) || !std::isspace(userInput[i])){
                isValid = false;
                break;
            }
        }
        if(isValid){
            return userInput;
        }
        else{
            std::cout << "Invalid input. Please enter a valid letter, number, or space" << std::endl;
            getline(std::cin, userInput);
        }

    }
}
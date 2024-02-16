#include "InputValidation.h"

int GetIntInputFromUser(string promptMessage, int minimumValue, int maximumValue){
    if(minimum > maximum){
        std::cerr("ERROR: Cannot set minimumValue below maximumValue in GetInputFromUser()");
        std::exit(EXIT_FAILURE);
    }

    int userInput;

    while(true) { // Keep looping until a valid integer is entered. Nicholas Item looked up an implementation for this on the internet.
        std::cout << promptMessage;

        if(cin >> userInput){
            if( (userInput >= minimumValue) && (userInput <= maximumValue) ){
                std::cout << endl;
                return userInput;
            } else {
                std::cout << "Invalid input. Please enter a number between " << minimumValue << " and " << maximumValue << "." << endl;
            }
        }

        else { // Only reached if the user did not enter an int
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            std::cout << "Invalid input. Please enter a number between " << minimumValue << " and " << maximumValue << "." << endl;
        }
    }
}
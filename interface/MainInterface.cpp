#include "../header/MainInterface.hpp"

std::string MainInterface::PrintHelper() {
    return "Type /tasklist select {#} to select a task list. \n\
    Type /tasklist newlist {name} to make a new list. \n\
    Type /tasklist delete {#} to delete a task list.";
}
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(Task)

set(SOURCES
    main.cpp
    src/Date.cpp
    src/Task.cpp
    src/TaskList.cpp
    src/taskView.cpp
    interface/Interface.cpp
    interface/TaskListInterface.cpp
    InputValidation/InputValidation.cpp
    interface/MainInterface.cpp
    interface/TaskDetailsInterface.cpp
)
add_executable(task ${SOURCES})

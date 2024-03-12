CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(Task)

set(SOURCES
    main.cpp
    src/Date.cpp
    src/task.cpp
    src/TaskList.cpp
    src/taskView.cpp
    interface/Interface.cpp
    interface/TaskListInterface.cpp
    src/InputValidation.cpp

)
add_executable(test ${SOURCES})

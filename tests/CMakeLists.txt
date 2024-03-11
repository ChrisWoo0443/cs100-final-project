cmake_minimum_required(VERSION 3.0)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
add_subdirectory(googletest)

add_executable(runAllTests
  testInputValidation.cpp
  taskObjectTests.cpp
  taskListObjectTests.cpp
  inputOutputTests.cpp
  ../src/Date.cpp
  ../src/Task.cpp
  ../src/TaskList.cpp
  ../src/InputOutput.cpp
)

TARGET_LINK_LIBRARIES(runAllTests gmock gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)


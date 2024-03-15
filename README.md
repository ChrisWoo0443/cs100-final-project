# Task Scheduler
 
 Authors: [Yixuan Shang](https://github.com/Calp1c0), [Dhyan Patel](https://github.com/pateldhyan), [Chris Woo](https://github.com/ChrisWoo0443), [Nicholas_Item](https://github.com/nitemUCR), [Haoming Shi](https://github.com/BillyBiano)


## Project Description 
 **The importance of a task scheduler**
 * As college students, we have complex schedules that revolve around our class schedule, extra-curriculars, and personal responsibilities. With all of this going on, it is important to keep track of all tasks     that we have pending, such as homework, 
 to ensure that nothing slips out of our mind. Therefore, it would be great to create a task schedular that can help us manage out schedules efficiently.

 **Technology specifications**
 * We plan on using C++ for this project. We will work on VSCode and use Git features to assist collaboration. We expect the program to be compatible on Windows and macOS, and hopefully will get it working on Linux if possible.

 **Inputs and outputs**
 * **Inputs**: Via terminal commands, the user has various options:
 * Add User: Strings inputted via the command terminal with the names of users or "task collections", such as for dividing work tasks and personal tasks
 * Select User: Choose a user or "task collection" to view
 * Add Task: Strings inputted via the command terminal with the names of tasks
 * Add Task Label: Strings inputted via the command terminal with labels one can use to categorize tasks
 * Priority: Integers inputted via the command terminal to determine how urgent or necessary a task si to complete
 * Remove Task commands, with either a number corresponding to the task list or string to select which task to remove
 * Dates, times, and days of the week to schedule when tasks will be due and/or recurring tasks. 
 * **Outputs**: All outputs will be run from the command terminal in the form of text
 * List of users for the user to select
 * List of tasks in the task collection
 * List of labels associated with tasks
 * Specific details about tasks, such as due date, addition date, or editing task details
 * Statistics, such as task completion rate on-time

 **List of features**
 * Task list view: Quickly see your list of tasks with due dates easily accessible.
 * Task priority: Prioritize which tasks are important to do.
 * Multiple collections: Choose between various "users" or collections with different sets of tasks.
 * Task scheduling: Make tasks recur for various days of the week or timeframes
 * Task statistics: See your task completion rate before due dates 

## Phase II

## User Interface Specification

### Navigation Diagram
This navigation diagrams show the various large screens that users can branch from via the command terminal.
Highlighted in the screen's color is the list of commands the user can do from various screens, besides navigation commands which are implied through arrows.

![alt text](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/pateldhyan/AddTaskBranch/supplementary/navigationDiagram.png)
### Screen Layouts

Description: Our screen layouts are in text because our program will run as plaintext from the terminal. Listed in BOLD are the various "screens" that refer to different major parts of the user interface (including some inputs) and the purpose of these screens is briefly described under the section.

**TASK SCHEDULER:**

Select your TaskList:

1. ExampleTaskList

2. ExampleTaskList2

3. ExampleTaskList3.


Type /help to view more commands.


Type /tasklist select {#} to select a task list.

Type /tasklist newlist {name} to make a new list.

Type /tasklist delete {#} to delete a task list.


Purpose: Entry screen that lets people choose a task.

—-------------------------------------------------------

**LIST OF TASKS:**

ExampleTaskList:

1. HighestPriorityTask | Due: Unknown

2. 2ndHighestPriorityTask | Due 12/4/2024

3. 3rdHighestPriorityTask | Due 13/4/2025


Type /help to view more commands.


Type /task select {#} to select a task and view its details.

Type /task addtask {name} to create a new task.

Type /task remove {#} to remove an existing task.

Type /task done {#} to mark a task as completed.

Type /task stats to view statistics of the tasklist.


Purpose: Allows to view tasks in deatils, or modify a task.

-----------------------------------------

**TASK STATISTICS:**

You have added {int} tasks.

You have completed {int} tasks.

Your success rate is {double} percent.


Purpose: Lets people view statistics of the tasklist.

-----------------------------------------

**TASK IN DETAIL:**

Task Name: {string}

Description: {string}

Priority: {short}

Labels: {string}, {string}

This task {does not recur / recurs on X days of the week}


Type /help to view more commands.


Type /change name {new name} to change the name of this task.

Type /change recurrence {frequency} to change the task's recurrence.

Type /change due {MM/DD/YYYY} to change the due date of a task.

Type /change priority {level} to change the priority of a task, 1 for highest and 9 for lowest.


Purpose: Lets people view specific details about individual tasks.

-----------------------------------------

**7-DAY CALENDAR:**

Monday:

Tuesday: 

{name} is due

Wednesday:

Thursday:

Friday:

Saturday:

Sunday:


Purpose: Lets people view a calendar about the future and see recurring tasks.

-----------------------------------------



## Class Diagram

This UML diagram shows the details of the main classes of the project, as well as the relationships between classes.

### Classes:

- The Task class is an object made every time a new task is created. It contains all the basic information of the tasks, as well as functions to edit that information.
- The TaskList class is an aggregation of Task objects. It contains a vector that stores all the Task objects, with functions that add/remove tasks, and functions that get information about the tasks. 
- InputOutput is a class that will handle all of the I/O operations. This will be a dependency for the rest of the classes.
- Input Validation is a class that will make sure all inputs are vaild. This is a dependency for the InputOutput class. 
- Statistics is a class that will give back task statistics, and is dependent on the TaskList class.
- The date class is an object that will hold the relavent dates. It is a dependency of the Task class.
- Priority is a class that will handle priority operations of the Task object. it is a dependency of the Task class.
  
![alt text](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/master/supplementary/ProjectUML_final.png)

 
## Phase III

- We updated out UML digram to reflect recommendations from out TA. We made sure to inclde a more detailed diagram that specifies the relationship that different classes have with each other. This helps us understand the structure of our code better.
- We updated the UML diagram to make sure that our project follows the single-responsibility principle from SOLID. To make this change, we needed to add a Priority class so that the Task class was not responsible for two things. This helps us differentiate our code and focus on one aspect as a time while writing our code.
- We updated the UML diagram again to represent the InputValidation class, which what to make sure we follow the single-responsibility principle. This will help us separate our InputOutput class from out InputValidation. 

 
## Final deliverable
 
 ## Screenshots
Task List Menu:

![image](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/master/supplementary/SelectTaskListScreen.png)

Task Menu:

![image](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/master/supplementary/ViewTaskList.png)

Task Details:

![image](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/master/supplementary/TaskDetails.png)

Help Menus:

![image](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/master/supplementary/TaskListHelpMenu.png)

![image](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/master/supplementary/TaskHelpMenu.png)

![image](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/master/supplementary/TaskDetailHelpMenu.png)

## Installation/Usage
 1) Clone the repository to your local files using https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033.git
 2) Navigate to the repository and run the program using the following commands:
```
$ cd <repository directory>
$ cmake .
$ make
$ ./task
```
3) Create lists and tasks using the terminal user interface. If any help is needed with commands, use
```
?help
```
 ## Testing
Our project was validated and tested using the GoogleTest framework. This, alongside the use of CMake and Make, allowed us to easily integrate testing into our team workflow. While planning new features, we also planned the unit tests that would go along with them to ensure that all of our code is functional. All of these tests go in a separate "tests" folder, and we would typically have have one test file per class. Then, before making commits to git, we would ensure that the expected unit tests were passing. This way all of our features and classes were validated before writing our main function. To view and run these unit tests, you can navigate to the tests folder in the repository and run the following: 
```
$ cd tests
$ cmake .
$ make
$ ./runAllTests
```

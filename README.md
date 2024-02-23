 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Task Scheduler
 
 Authors: [Yixuan Shang](https://github.com/Calp1c0), [Dhyan Patel](https://github.com/pateldhyan), [Chris Woo](https://github.com/ChrisWoo0443), [Nicholas_Item](https://github.com/nitemUCR), [Haoming Shi](https://github.com/BillyBiano)

 > You will be forming a group of **FOUR** students and working on an interesting project. The project has 4 phases, each one with specific requirements. A list of proposed project ideas that have been successful in previous quarters is listed in the project specifications document on Canvas. You can select an idea from the list and start thinking about the features you will implement. If you want to propose your own original idea, you will have to contact your instructor to discuss the project and obtain written permission before you submit your project proposal (Phase 1). The project work should be divided almost equally among team members. You can of course help each other, but it needs to be clear who will be responsible for which features. Additionally, you are expected to follow Scrum patterns, specifically the use of a Scrum (Project) board, Sprints, and Scrum meetings.

 > ## Expectations
 > * The backend of your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * **Each member of the group must actively participate in the Github Project board, writing unit tests, and reviewing commited code.**
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two to three scrum/check-in meetings with your lab TA/reader at different times in addition to the final demo.

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include:
 
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

 > ## Phase II

## User Interface Specification

### Navigation Diagram
This navigation diagrams show the various large screens that users can branch from via the command terminal.
Highlighted in the screen's color is the list of commands the user can do from various screens, besides navigation commands which are implied through arrows.

![alt text](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/master/navigationDiagram.png)
### Screen Layouts

Description: Our screen layouts are in text because our program will run as plaintext from the terminal. Listed in BOLD are the various "screens" that refer to different major parts of the user interface (including some inputs) and the purpose of these screens is briefly described under the section.

TASK SCHEDULER

Select your TaskList:

1. ExampleTaskList

2. ExampleTaskList2

3. ExampleTaskList3.

Type /tasklist select {#} to select a task list.

Type /tasklist newlist {name} to make a new list.

Type /tasklist delete {#} to delete a task list.

—-------------------------------------------------------

Type /help tasklist to view more commands.

Purpose: Entry screen that lets people choose a task.


LIST OF TASKS

Type /task tasklist for viewing all the task lists

Type /tasklist select {#} to see tasks in a task list.

ExampleTaskList:

1. HighestPriorityTask | Due: Unknown

2. 2ndHighestPriorityTask | Due 12/4/2024

3. 3rdHighestPriorityTask | Due 13/4/2025

Type /task view {#} to see the specific details of a task.

Type /task delete{#} to delete the selected task.

Type /task {#}addlabel to add label to the selected task.

Type /task {#} finish to mark task as done.

Type /task {#}removelabel to delete labels for the selected task.

The task ExampleTask has been deleted.


-----------------------------------------

Type /help task to view more commands

Purpose: List of tasks people can view.

TASK STATISTICS:

You have added {int} tasks.

You have completed {int} tasks.

Your success rate is {double} percent.

-----------------------------------------

Type /help task to view more commands

Purpose: Lets people view their statistics.


TASK IN DETAIL:

Task Name: {string}

Description: {string}

Priority: {short}

Labels: {string}, {string}

This task [does not recur / recurs on X days of the week}

Purpose: Lets people view specific details about individual tasks.


7-DAY CALENDAR

Monday:

Tuesday: 

{name} is due

Wednesday:

Thursday:

Friday:

Saturday:

Sunday:

Purpose: Lets people view a calendar about the future and see recurring tasks.


HELP {Category}

/task addtask - Adds a new task.

/task addlist - Adds a new tasklist.

/task rename - Renames a task.

/task changedue - Change due date of a task. 

etc...

Purpose: Lets people see what commands are available. Differs by category.



## Class Diagram
This UML diagram shows the details of the main classes of the project, as well as the relationships between classes.

### Classes:

  The Task class is an object made every time a new task is created. It contains all the basic information of the tasks, as well as functions to edit that information.
  
  The TaskList class is an aggregation of Task objects. It contains a vector that stores all the Task objects, with functions that add/remove tasks, and functions that get information about the tasks. 
  
  InputOutput is a class that will handle all of the I/O operations. This will be a dependency for the rest of the classes.
  
  Statistics is a class that will give back task statistics, and is dependent on the TaskList class.
  
  The date class is an object that will hold the relavent dates. It is a dependency of the Task class.
  
  Task Scheduler is our main class, with TaskList as a dependency. 
  


![alt text](https://github.com/cs100/final-project-dpate148-nitem003-yshan039-cwoo017-hshi033/blob/master/ProjectUML.jpg)
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 

#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include <string>
#include "Task.h"

class TaskManager {
private:
    std::vector<Task> tasks;  // List of all tasks

    // File handling for tasks
    void loadTasksFromFile();
    void saveTasksToFile() const;

public:
    // Constructor
    TaskManager();

    // Task operations
    void addTask(const Task &task);
    void removeTask(const std::string &taskId);
    std::vector<Task> listTasks() const;

    // Destructor
    ~TaskManager();
};

#endif // TASKMANAGER_H

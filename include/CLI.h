#ifndef CLI_H
#define CLI_H

#include "TaskManager.h"
#include "Scheduler.h"

class CLI {
private:
    TaskManager taskManager;  // Manages tasks
    Scheduler scheduler;      // Handles task scheduling

    // Private methods for handling commands
    void displayMenu() const;
    void handleAddTask();
    void handleRemoveTask();
    void handleListTasks();
    void handleStartScheduler();
    void handleStopScheduler();

public:
    // Constructor
    CLI();

    // Start the CLI interface
    void run();

    // Destructor
    ~CLI();
};

#endif // CLI_H

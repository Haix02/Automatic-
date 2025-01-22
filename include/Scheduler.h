#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include <thread>
#include <atomic>
#include <functional>
#include "../Task.h"

class Scheduler {
private:
    std::atomic<bool> isRunning;  // Control flag for the scheduler loop
    std::thread schedulerThread;  // Thread for background task execution

    // Helper function to execute a single task
    void executeTask(const Task &task) const;

public:
    // Constructor
    Scheduler();

    // Start and stop scheduling tasks
    void start(const std::vector<Task> &tasks);
    void stop();

    // Destructor
    ~Scheduler();
};

#endif // SCHEDULER_H

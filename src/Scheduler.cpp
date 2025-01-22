#include <thread>
#include <functional>
#include "../include/Task.h"


class Scheduler {
public:
    void start(const std::vector<Task> &tasks);
private:
    void executeTask(const Task &task);
};

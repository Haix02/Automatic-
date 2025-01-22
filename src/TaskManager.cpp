#include <vector>
#include "../include/Task.h"

class TaskManager {
private:
    std::vector<Task> tasks;
    void saveToFile();  // Encrypt and save tasks to a file
    void loadFromFile(); // Decrypt and load tasks from a file

public:
    TaskManager();
    void addTask(const Task &task);
    void removeTask(const std::string &taskId);
    std::vector<Task> listTasks() const;
};

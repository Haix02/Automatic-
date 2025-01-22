#ifndef TASK_H
#define TASK_H

#include <string>
#include <chrono>

class Task {
private:
    std::string id;  // Unique task ID
    std::string name;  // Task name
    std::string command;  // Command to execute
    std::chrono::time_point<std::chrono::system_clock> schedule;  // Scheduled execution time

    // Helper function to generate a unique ID
    static std::string generateUniqueId();

public:
    // Constructor
    Task(const std::string &name, const std::string &command, const std::chrono::time_point<std::chrono::system_clock> &schedule);

    // Getters
    const std::string &getId() const;
    const std::string &getName() const;
    const std::string &getCommand() const;
    std::chrono::time_point<std::chrono::system_clock> getSchedule() const;

    // Setters
    void updateSchedule(const std::chrono::time_point<std::chrono::system_clock> &newSchedule);
};

#endif // TASK_H

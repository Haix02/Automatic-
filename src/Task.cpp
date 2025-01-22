#include <string>
#include <chrono>

class Task {
private:
    std::string id;           // Unique ID for the task
    std::string name;         // Task name
    std::string command;      // Command to execute
    std::chrono::time_point<std::chrono::system_clock> schedule;  // Scheduled time

public:
    Task(const std::string &name, const std::string &command, const std::chrono::time_point<std::chrono::system_clock> &schedule);
    const std::string &getId() const;
    const std::string &getName() const;
    const std::string &getCommand() const;
    std::chrono::time_point<std::chrono::system_clock> getSchedule() const;
    void updateSchedule(const std::chrono::time_point<std::chrono::system_clock> &newSchedule);
};

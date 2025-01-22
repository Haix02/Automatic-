#include "../include/TaskManager.h"

class CLI {
private:
    TaskManager manager;
    void printMenu();
    void handleAdd();
    void handleRemove();
    void handleList();
    void handleExecute();

public:
    void run();
};

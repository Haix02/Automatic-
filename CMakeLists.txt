cmake_minimum_required(VERSION 3.30)
project(Backend)

set(CMAKE_CXX_STANDARD 23)

add_library(Backend SHARED src/Task.cpp
        src/TaskManager.cpp
        include/TaskManager.h
        src/Scheduler.cpp
        include/Scheduler.h
        src/Encryptor.cpp
        include/Encryptor.h
        src/CLI.cpp
        include/CLI.h
        src/main.cpp)

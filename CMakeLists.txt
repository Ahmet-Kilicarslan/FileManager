cmake_minimum_required(VERSION 4.0)
project(Lion C)

set(CMAKE_C_STANDARD 11)

add_executable(Lion src/main.c
        src/FileOps.cpp
        src/DirectoryOps.cpp
        src/Utils.cpp
        include/FileOps.h
        include/DirectoryOps.h
        include/Utils.h)

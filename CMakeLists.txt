cmake_minimum_required(VERSION 3.20)
project(Lion C)

# Set C standard
set(CMAKE_C_STANDARD 11)

# Tell CMake where to find header files
include_directories(include)

# Define source files (only .c files needed)
set(SOURCES
        src/main.c
        src/Utils.c
        src/FileOps.c
        src/DirectoryOps.c
)

# Create the executable
add_executable(Lion ${SOURCES})

# Optional: Set output directory
set_target_properties(Lion PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)
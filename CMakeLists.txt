cmake_minimum_required(VERSION 3.26)
project(learnMisraC2012 C)

set(CMAKE_C_STANDARD 99)

file(GLOB SOURCES "*.c" "*.h")
message(STATUS "Source File Included: ")
foreach(VAR ${SOURCES})
    message(STATUS "${VAR}")
endforeach()


add_executable(learnMisraC2012 ${SOURCES})

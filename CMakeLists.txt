cmake_minimum_required(VERSION 3.26)
project(learnMisraC2012 C)

set(CMAKE_C_STANDARD 99)
file(GLOB SOURCES "*.c" "*.h")
message(STATUS "!!!!!!!!!!!!!!!!!Source File Included: ")

foreach(VAR ${SOURCES})
    message(STATUS "${VAR}")
endforeach()

set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_C_FLAGS "-fdiagnostics-color -Wall -Wextra -Wpedantic -pedantic-errors -ggdb -Og")
add_executable(learnMisraC2012 ${SOURCES})
target_compile_options(learnMisraC2012 PUBLIC "-DCLANG_TIDY")
set(CLANG_CHECK_LIST "cert-*, clang-analyzer-*, google-*, modernize-*,performance-*,portability-*,readability-*")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_custom_target(
    clang-tidy
    COMMAND clang-tidy --use-color -checks=${CLANG_CHECK_LIST} ${SOURCES} -p ${CMAKE_SOURCE_DIR}/ClangTidyBuild
)
add_custom_target(
    clang-tidy-fix
    COMMAND clang-tidy --use-color -checks=${CLANG_CHECK_LIST} --fix ${SOURCES} -p ${CMAKE_SOURCE_DIR}/ClangTidyBuild
)

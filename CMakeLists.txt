cmake_minimum_required(VERSION 3.26)

project(learnMisraC2012 LANGUAGES C CXX)
# Add subdirectories for components
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB SOURCES "*.c" "*.h")
message(STATUS "!!!!!!!!!!!!!!!!!Source File Included: ") # Debug

foreach(VAR ${SOURCES})
    message(STATUS "${VAR}") # Debug
endforeach()
message("C Compiler ID: ${CMAKE_C_COMPILER_ID}")

if(${CMAKE_C_COMPILER_ID} EQUAL "GNU" ) # GCC
    # Set compiler flags 
    set(CMAKE_C_FLAGS "-fdiagnostics-color -Wall -Wextra -Wpedantic -pedantic-errors -ggdb -Og")
elseif(${CMAKE_C_COMPILER_ID} EQUAL "MSVC")
    # Set compiler flags
    set(CMAKE_C_FLAGS "-fdiagnostics-color")
endif()

add_executable(learnMisraC2012 ${SOURCES})

# Find ClangTidy executable
find_program(CLANG_TIDY clang-tidy) 

# Check if ClangTidy is found
if(CLANG_TIDY)
    target_compile_options(learnMisraC2012 PUBLIC "-DCLANG_TIDY") # Enable ClangTidy
    set(CLANG_CHECK_LIST "cert-*, clang-analyzer-*, google-*, modernize-*,performance-*,portability-*,readability-*,cppcoreguidelines-*") # List of ClangTidy checks
    # Add Analyze with ClangTidy target 
    add_custom_target(
        ANALYZE_C_TIDY
        COMMAND clang-tidy  --use-color -checks=${CLANG_CHECK_LIST} ${SOURCES} -p ${CMAKE_SOURCE_DIR}/ClangTidyBuild
    )
    add_custom_target(
        FIX_C_TIDY
        COMMAND clang-tidy --use-color -checks=${CLANG_CHECK_LIST} --fix --fix-errors  --fix-notes   ${SOURCES} -p ${CMAKE_SOURCE_DIR}/ClangTidyBuild
    )
    message("CLANG TARGET !!!")
endif()

# Find Cppcheck executable
find_program(CPPCHECK cppcheck)

# Check if Cppcheck is found
if(CPPCHECK)
    # Add Analyze with CppCheck target
    add_custom_target(
        ANALYZE_CPPCHECK
        COMMAND ${CPPCHECK}
        --std=c99 # Specify C standard
        --verbose # Enable verbose output
        "--template={file}:{line}: {severity} ({id}): {message}" # Allow jumping to errors in IDE
        --enable=all # Enable all checks
        ${SOURCES} # Analyze source directory
    )
    message("CPPCHECK TARGET !!!")
endif()

add_definitions(-DCMAKE_EXPORT_COMPILE_COMMANDS=ON)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/b3a9ba2b8e975550799838332803d468797ae2e1.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)


add_executable(
  hello_test
  test.cpp codeLearnIo.h leetcode.c
)
target_link_libraries(
  hello_test
  GTest::gtest_main
)

include(GoogleTest)

gtest_add_tests(TARGET hello_test test.cpp AUTO)

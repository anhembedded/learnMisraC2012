cmake_minimum_required(VERSION 3.26)
project(learnMisraC2012 C)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 99)
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
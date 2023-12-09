cmake_minimum_required(VERSION 3.26)

project(learnMisraC2012 LANGUAGES C CXX)

# Add subdirectories for components
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


include_directories(
    ${PROJECT_SOURCE_DIR}/inc
    ${PROJECT_BINARY_DIR}/_deps/googletest-src/googletest/include
    ${PROJECT_BINARY_DIR}/_deps/googletest-src/googlemock/include
)
add_subdirectory(
    ${PROJECT_SOURCE_DIR}/src
    )

add_subdirectory(
    ${PROJECT_SOURCE_DIR}/gTest
    )



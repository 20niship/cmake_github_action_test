cmake_minimum_required(VERSION 3.5)
project(cmake_example CXX)

enable_testing()

find_package(PCL REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

set(TEST_NAME mytest)
add_executable(${TEST_NAME} mytest.cpp)
add_test(NAME run_test COMMAND ${TEST_NAME})

target_link_libraries(${TEST_NAME} ${PCL_LIBRARIES})



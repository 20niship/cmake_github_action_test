cmake_minimum_required(VERSION 3.5)
project(cmake_example CXX C)

enable_testing()

find_package(PCL REQUIRED COMPONENTS COMMON io)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

message(" PCL_LIBRARY_DIRS = ${PCL_LIBRARY_DIRS}")
message(" PCL_LIBRARIES    = ${PCL_LIBRARIES}")
message(" PCL_COMPONENTS   = ${PCL_COMPONENTS}")

set(TEST_NAME mytest)
add_executable(${TEST_NAME} mytest.cpp)
add_test(NAME run_test COMMAND ${TEST_NAME})

target_link_libraries(${TEST_NAME} ${PCL_LIBRARIES})



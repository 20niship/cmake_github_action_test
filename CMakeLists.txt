cmake_minimum_required(VERSION 3.5)
project(cmake_example CXX)

enable_testing()

set(TEST_NAME mytest)
add_executable(${TEST_NAME} mytest.cpp)
add_test(NAME run_test COMMAND ${TEST_NAME})




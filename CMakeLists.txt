cmake_minimum_required(VERSION 3.9)
project(ostep)

set(CMAKE_CXX_STANDARD 11)

add_executable(ostep
        Codes/2/cpu.c)

enable_testing()

set(TEST_EXE_NAME ostep_tests)

add_executable(${TEST_EXE_NAME}
        Codes/2/cpu_test.c)

add_test(NAME "OSTEP_TESTS"
        COMMAND ${TEST_EXE_NAME})
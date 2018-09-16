cmake_minimum_required(VERSION 3.5.1)
project(tests)

find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

add_executable(tests test.cpp ../src/lib.cpp ../src/lib.h)

include_directories(${GTEST_INCLUDE_DIRS})
find_package(GTest REQUIRED)

target_link_libraries(tests ${GTEST_LIBRARIES} pthread)
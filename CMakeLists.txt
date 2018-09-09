cmake_minimum_required(VERSION 3.5.1)
project(Test_test)

find_package(Threads REQUIRED)
find_package(GTest REQUIRED)



add_executable(Test_test src/lib.h src/lib.cpp test/test.cpp)

include_directories(${GTEST_INCLUDE_DIRS})
find_package(GTest REQUIRED)

target_link_libraries(Test_test ${GTEST_LIBRARIES} pthread)

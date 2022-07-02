cmake_minimum_required(VERSION 3.14)
project(StackTemplateKata)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)

enable_testing()

include_directories(${GTEST_INCLUDE_DIRS})

add_executable(
	StackTemplateKata
	StackTemplateKataTestCase.cpp
)

target_link_libraries(
	StackTemplateKata
	gtest
	gtest_main
	pthread
)

gtest_discover_tests(StackTemplateKata)

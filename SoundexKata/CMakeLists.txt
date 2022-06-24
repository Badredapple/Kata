cmake_minimum_required(VERSION 3.14)
project(SoundexKata)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)

enable_testing()

include_directories(${GTEST_INCLUDE_DIRS})

add_executable(
	SoundexKata
	SoundexKataTestCase.cpp
)

target_link_libraries(
	SoundexKata
	gtest
	gtest_main
	pthread
)

gtest_discover_tests(SoundexKata)

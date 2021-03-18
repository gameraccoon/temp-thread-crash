cmake_minimum_required(VERSION 3.5)

project(ThreadCrashProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ThreadCrashProject main.cpp)
target_compile_options(ThreadCrashProject PRIVATE "-pthread")
target_link_libraries(ThreadCrashProject pthread)

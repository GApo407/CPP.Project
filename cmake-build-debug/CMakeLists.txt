cmake_minimum_required(VERSION 3.10)
project(CPP.Project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

file(GLOB SOURCES "*.cpp")

add_executable(Cpp.Project ${SOURCES})
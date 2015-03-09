cmake_minimum_required(VERSION 2.8.4)
project(cpp_base)

include_directories(tools)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(HEADERS cppbase.h
            tools/cppassert.h
            tools/macros.h)
set(SOURCE_FILES main.cpp
                 tools/stringtool.cpp)

add_executable(cpp_base ${SOURCE_FILES} ${HEADERS})

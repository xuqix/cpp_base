cmake_minimum_required(VERSION 2.8.4)
project(cpp_base)

include_directories(tools
                    socket)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(HEADERS cppbase.h
            socket/socket.h
            socket/tcpsocket.h
            socket/tcpserversocket.h
            tools/cppassert.h
            tools/macros.h)
set(SOURCE_FILES main.cpp
                 tools/stringtool.cpp
                 socket/socket.cpp
                 socket/tcpsocket.cpp
                 socket/tcpserversocket.cpp)
add_executable(cpp_base ${SOURCE_FILES} ${HEADERS})
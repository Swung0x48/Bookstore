cmake_minimum_required(VERSION 3.16)
project(Bookstore)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bookstore main.cpp buyer.cpp buyer.h member.cpp member.h)
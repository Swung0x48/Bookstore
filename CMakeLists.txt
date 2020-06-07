cmake_minimum_required(VERSION 3.16)
project(Bookstore)

set(CMAKE_CXX_STANDARD 20)

add_executable(Bookstore main.cpp buyer.h member.cpp member.h book.h randGen.cpp randGen.h order.cpp order.h Util.cpp Util.h ViewModel.cpp ViewModel.h Vars.cpp Vars.h File.cpp File.h)
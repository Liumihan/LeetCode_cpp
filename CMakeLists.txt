cmake_minimum_required(VERSION 3.13)
project(GetMyOffer)

set(CMAKE_CXX_STANDARD 11)

add_executable(GetMyOffer main.cpp cmystring/cmystring.cpp duplicate/duplicate.cpp duplicate/duplicate.h)
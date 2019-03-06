cmake_minimum_required(VERSION 3.13)
project(GetMyOffer)

set(CMAKE_CXX_STANDARD 11)

add_executable(GetMyOffer main.cpp 1-cmystring/cmystring.cpp 2-duplicate/duplicate.cpp 2-duplicate/duplicate.h 2-duplicate_2/duplicate_2.cpp 2-duplicate_2/duplicate_2.h bin_find/BinFind.cpp bin_find/BinFind.h lookup_table/lookuptable.cpp lookup_table/lookuptable.h)
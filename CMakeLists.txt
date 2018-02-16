cmake_minimum_required(VERSION 3.8)
project(HashTables)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp HashTable.cpp HashTable.h)
add_executable(HashTables ${SOURCE_FILES})
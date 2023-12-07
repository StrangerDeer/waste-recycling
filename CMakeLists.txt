cmake_minimum_required(VERSION 3.26)
project(waste-recycling)

set(CMAKE_CXX_STANDARD 17)

add_executable(waste-recycling main.cpp
        Garbage/Garbage.h
        Garbage/Garbage.cpp
        Garbage/PaperGarbage.h
        Garbage/PaperGarbage.cpp
        Garbage/PlasticGarbage.h
        Garbage/PlasticGarbage.cpp
        Exceptions/GarbageException.h
        Exceptions/GarbageException.cpp
        Dustbin.h
        Dustbin.cpp
)
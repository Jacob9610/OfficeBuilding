cmake_minimum_required(VERSION 3.27)
project(OfficeBuilding)

set(CMAKE_CXX_STANDARD 17)

add_executable(OfficeBuilding main.cpp
        Employee.h
        Employee.cpp
        Department.h
        Department.cpp
        )

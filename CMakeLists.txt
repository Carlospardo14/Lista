cmake_minimum_required(VERSION 2.8.9)
project(Lista)

include_directories(include)

set(SOURCES src/Nodo.cpp  src/Lista.cpp src/main.cpp)

add_executable(Lista ${SOURCES})

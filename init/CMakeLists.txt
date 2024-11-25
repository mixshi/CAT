cmake_minimum_required(VERSION 3.31.0)

project(CAT)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../src)

add_executable(run ${SRC_DIR}/main.cpp) 

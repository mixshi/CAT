cmake_minimum_required(VERSION 3.31.0)

project(CAT)

find_package(ImageMagick COMPONENTS Magick++ REQUIRED)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../src)

add_executable(run ${SRC_DIR}/main.cpp ${SRC_DIR}/cell.cpp) 

target_link_libraries(run ImageMagick::Magick++)

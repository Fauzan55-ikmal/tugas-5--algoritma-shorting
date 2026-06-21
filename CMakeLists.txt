cmake_minimum_required(VERSION 3.10)
project(tugas_sorting)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(tugas_sorting ${SOURCES})
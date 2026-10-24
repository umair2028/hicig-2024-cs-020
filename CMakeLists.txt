cmake_minimum_required(VERSION 3.20)
project(hicig_lab01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(glfw3 3.3 REQUIRED)

add_executable(lab01 main.cpp)
target_link_libraries(lab01 PRIVATE glfw opengl32)

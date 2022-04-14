# CMakeLists.txt for hello_foobar program
# This file demonstrates the basic usage of cmake for multiple source files
# author: Zhi Liu, 2022


cmake_minimum_required(VERSION 3.20)
project(foobar_cmake_demo)

set(CMAKE_C_STANDARD 99)

# 指定头文件目录
include_directories(include)


add_executable(hello_foobar main.c foo.c bar.c)

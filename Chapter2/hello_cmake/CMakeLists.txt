# CMakeLists.txt for hello program
# This file demonstrates the basic usage of cmake for a single source file
# author: Zhi Liu, 2022

# 指定cmake最低版本
cmake_minimum_required(VERSION 3.20)

# 指定项目名
project(hello_cmake_demo)

# 编译器及C语言版本选择，选择C99
set(CMAKE_C_STANDARD 99)

# 生成的可执行文件名为hello, 依赖源码为hello.c
add_executable(hello hello.c)

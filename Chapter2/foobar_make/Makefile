# Makefile for hello_foobar program
# This file demonstrates the basic usage of make for multiple source files
# author: Zhi Liu, 2022

# 指定编译器(cc)和(linker)链接器为gcc
CC = gcc
LINKER = gcc

# 指定编译参数
CFLAGS = -c -Wall -g

# 指定头文件目录
INCLUDE = -I./include

# 目标文件存放路径及命名，每个目标文件(.o)与对应源文件(.c)同名
OBJ_DIR = ./build
OBJS = $(patsubst %.c, $(OBJ_DIR)/%.o, $(wildcard *.c))

# 指定可执行文件名
EXECUTABLE = hello_foobar

# 生成目标文件及可执行文件
ALL: $(OBJS) $(EXECUTABLE)

# 编译规则：为每个.c生成.o
$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) $^ -o $@

# 链接规则：所有.o链接为可执行文件
$(EXECUTABLE): $(OBJS)
	$(LINKER) -o $@ $^

# 清除规则：删除可执行文件与所有目标文件
clean:
	rm $(EXECUTABLE) $(OBJS)
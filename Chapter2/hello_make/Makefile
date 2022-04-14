# Makefile for hello program
# This file demonstrates the basic usage of make for a single source file
# author: Zhi Liu, 2022

# 指定编译器(cc)和(linker)链接器为gcc
CC = gcc
LINKER = gcc

# 指定编译参数
CFLAGS = -c -Wall -g

# 目标文件存放路径及命名，每个目标文件(.o)与对应源文件(.c)同名
OBJ_DIR = ./
OBJS = $(patsubst %.c, $(OBJ_DIR)/%.o, $(wildcard *.c))

# 指定可执行文件名
EXECUTABLE = hello

# 生成目标文件及可执行文件
ALL: $(OBJS) $(EXECUTABLE)

# 编译规则：为每个.c生成.o
$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $^ -o $@

# 链接规则：所有.o链接为可执行文件
$(EXECUTABLE): $(OBJS)
	$(LINKER) -o $@ $^

# 清除规则：删除可执行文件与所有目标文件
clean:
	rm $(EXECUTABLE) $(OBJS)
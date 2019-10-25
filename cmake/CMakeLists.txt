include_directories(include)

cmake_minimum_required(VERSION 3.0)

project(demineur)

add_executable(demineur ../src/main.c ../src/detection_mines.c ../src/deroulement.c ../include/header.h)

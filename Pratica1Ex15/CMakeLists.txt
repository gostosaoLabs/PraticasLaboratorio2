cmake_minimum_required(VERSION 3.8)
project(Aula01Exe15)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        bin/Debug/Aula01Exe15.exe
        obj/Debug/main.o
        Aula01Exe15.cbp
        Aula01Exe15.depend
        Aula01Exe15.layout
        main.c)

add_executable(Aula01Exe15 ${SOURCE_FILES})
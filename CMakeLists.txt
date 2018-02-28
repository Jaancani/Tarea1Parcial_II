cmake_minimum_required(VERSION 3.8)
project(ArregloObjetos)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Objetos.cpp Objetos.h Integer.cpp Integer.h String.cpp String.h Char.cpp Char.h)
add_executable(ArregloObjetos ${SOURCE_FILES})
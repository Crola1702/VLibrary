cmake_minimum_required(VERSION 3.16)
project(VLibrary)

set(CMAKE_CXX_STANDARD 14)

add_executable(VLibrary main.cpp Classes/Book.cpp Classes/Book.h Classes/Category.cpp Classes/Category.h Classes/Image.h Classes/Library.cpp Classes/Library.h)

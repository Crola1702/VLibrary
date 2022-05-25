cmake_minimum_required(VERSION 3.16)
project(VLibrary LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(VLibrary
    main.cpp 
    Classes/Book.cpp 
    Classes/Book.h 
    Classes/Category.cpp 
    Classes/Category.h 
    Classes/Image.h 
    Classes/Library.cpp 
    Classes/Library.h
)

target_link_libraries(VLibrary PRIVATE Qt5::Widgets)

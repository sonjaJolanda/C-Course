cmake_minimum_required(VERSION 3.23)
project(C__Course_Lecture1)
project(C__Course__Lecture1_Fahrenheit)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__Course_Lecture1 main.cpp lecture1/week2.cpp)
add_executable(C__Course_Lecture1_Fahrenheit lecture1/fahrenheitToCelcius.cpp)

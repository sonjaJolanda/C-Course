cmake_minimum_required(VERSION 3.23)

project(week1_Fahrenheit)

project(week2)

project(week3_1)
project(week3_2)
project(week3_3)
project(week3_4)


set(CMAKE_CXX_STANDARD 14)


add_executable(week1_Fahrenheit lecture1/fahrenheitToCelcius.cpp)

add_executable(week2 main.cpp lecture2/week2.cpp)

add_executable(week3_1 main.cpp lecture3/week3_Ex1.cpp)
add_executable(week3_2 main.cpp lecture3/week3_Ex2.cpp)
add_executable(week3_3 main.cpp lecture3/week3_Ex3.cpp)
add_executable(week3_4 main.cpp lecture3/week3_Ex4.cpp)
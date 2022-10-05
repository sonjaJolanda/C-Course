cmake_minimum_required(VERSION 3.23)

project(week3_1)
project(week3_2)
project(week3_3)
project(week3_4)

project(week4_1)
project(week4_2)
project(week4_3)

project(week5_1)
project(week5_2)
project(week5_3)
project(week5_4)

set(CMAKE_CXX_STANDARD 14)


add_executable(week1_Fahrenheit lecture1/fahrenheitToCelcius.cpp)

add_executable(week2 main.cpp lecture2/week2.cpp)

add_executable(week3_1 main.cpp lecture3/week3_Ex1.cpp)
add_executable(week3_2 main.cpp lecture3/week3_Ex2.cpp)
add_executable(week3_3 main.cpp lecture3/week3_Ex3.cpp)
add_executable(week3_4 main.cpp lecture3/week3_Ex4.cpp)

add_executable(week4_1 main.cpp lecture4/week4_1.cpp)
add_executable(week4_2 main.cpp lecture4/week4_2.cpp)
add_executable(week4_3 main.cpp lecture4/week4_3.cpp)

add_executable(week5_1 main.cpp lecture5/week5_1.cpp)
add_executable(week5_2 main.cpp lecture5/week5_2_HW2.cpp)
add_executable(week5_3 main.cpp lecture5/week5_3_HW2.cpp)
add_executable(week5_4 main.cpp lecture5/week5_4_HW2.cpp)
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

project(week6_1)
project(week6_2)
project(week6_3)

project(week7_1)

set(CMAKE_CXX_STANDARD 14)


add_executable(week1_Fahrenheit lecture1/fahrenheitToCelcius.cpp)

add_executable(week2 main.cpp lecture2/week2.cpp)

add_executable(week3_1 main.cpp lecture4/homework1_Ex1.cpp)
add_executable(week3_2 main.cpp lecture4/homework1_Ex2.cpp)
add_executable(week3_3 main.cpp lecture4/homework1_Ex3.cpp)
add_executable(week3_4 main.cpp lecture4/homework1_Ex4.cpp)

add_executable(week4_1 main.cpp lecture4/tower_of_hanoi.cpp)
add_executable(week4_2 main.cpp lecture4/global_variables_1.cpp)
add_executable(week4_3 main.cpp lecture4/global_variables_2.cpp)

add_executable(week5_1 main.cpp lecture5/swap_and_string_literal.cpp)
add_executable(week5_2 main.cpp lecture5/homework2_Ex1.cpp)
add_executable(week5_3 main.cpp lecture5/homework2_Ex2.cpp)
add_executable(week5_4 main.cpp lecture5/homework2_Ex3.cpp)

add_executable(week6_1 main.cpp lecture6/week6_1.cpp)
add_executable(week6_2 main.cpp lecture6/week6_2.cpp)
add_executable(week6_3 main.cpp lecture6/week6_3.cpp)


add_executable(week7_1 main.cpp lecture7/week7_1.cpp)
cmake_minimum_required(VERSION 3.23)

project(week2)

project(homework1_Ex1)
project(homework1_Ex2)
project(homework1_Ex3)
project(homework1_Ex4)

project(tower_of_hanoi)
project(global_variables_1)
project(global_variables_2)

project(string_literal)
project(homework2_Ex1)
project(homework2_Ex2)
project(homework2_Ex3)

project(swap)
project(pointers_arrays)
project(homework3_Ex1)

project(exercise)

set(CMAKE_CXX_STANDARD 14)

add_executable(week2 lecture1+2+3/week1_2_3.cpp)

add_executable(homework1_Ex1 lecture4/homework1_Ex1.cpp)
add_executable(homework1_Ex2 lecture4/homework1_Ex2.cpp)
add_executable(homework1_Ex3 lecture4/homework1_Ex3.cpp)
add_executable(homework1_Ex4 lecture4/homework1_Ex4.cpp)

add_executable(tower_of_hanoi lecture4/tower_of_hanoi.cpp)
add_executable(global_variables_1 lecture4/global_variables_1.cpp)
add_executable(global_variables_2 lecture4/global_variables_2.cpp)

add_executable(string_literal lecture5/string_literal.cpp)
add_executable(homework2_Ex1 lecture5/homework2_Ex1.cpp)
add_executable(homework2_Ex2 lecture5/homework2_Ex2.cpp)
add_executable(homework2_Ex3 lecture5/homework2_Ex3.cpp)

add_executable(swap lecture6/swap.cpp)
add_executable(pointers_arrays lecture6/pointers_arrays.cpp)
add_executable(homework3_Ex1 lecture6/homework3_Ex1.cpp)

add_executable(exercise programming_exercises/w3resource.cpp)
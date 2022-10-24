cmake_minimum_required(VERSION 3.23)

project(week2)

project(tower_of_hanoi)
project(global_variables_1)
project(global_variables_2)

project(binomial_coefficient)
project(permut_numbers)
project(sum_down)

project(pointers_arrays)
project(pointers_arrays_2)
project(count_chars)

project(pointers_addition)
project(pointers_delete)
project(pointers_strings)

project(exercise)

set(CMAKE_CXX_STANDARD 14)

add_executable(week2 lecture1+2+3/week1_2_3.cpp)

add_executable(tower_of_hanoi lecture4/tower_of_hanoi.cpp)
add_executable(global_variables_1 lecture4/global_variables_1.cpp)
add_executable(global_variables_2 lecture4/global_variables_2.cpp)

add_executable(binomial_coefficient lecture5/binomial_coefficient.cpp)
add_executable(permut_numbers lecture5/permut_numbers.cpp)
add_executable(sum_down lecture5/sum_down.cpp)

add_executable(pointers_arrays lecture6/pointers_arrays.cpp)
add_executable(pointers_arrays_2 lecture6/pointers_arrays_2.cpp)
add_executable(count_chars lecture6/count_chars.cpp)

add_executable(pointers_addition lecture7/pointers_addition.cpp)
add_executable(pointers_delete lecture7/pointers_delete.cpp)
add_executable(pointers_strings lecture7/pointers_strings.cpp)

add_executable(exercise programming_exercises/w3resource.cpp)
cmake_minimum_required(VERSION 3.24)
project(Vjudge)

set(CMAKE_CXX_STANDARD 17)

add_executable(Vjudge day_1/two_sum.cpp day_1/palindrome_number.cpp day_1/roman_to_integer.cpp day_2/longest_common_prefix.cpp day_2/valid_parantheses.cpp day_3/search_insert.cpp "day_3/remove_duplicate _from_sorted_array.cpp")

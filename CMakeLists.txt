cmake_minimum_required(VERSION 3.23)
project(Contact)

set(CMAKE_CXX_STANDARD 14)

file(GLOB ALL_SOURCE "*.cpp" "*.c")
file(GLOB ALL_HEAD "*.hpp" "*.h")

add_executable(Contact ${ALL_SOURCE} ${ALL_HEAD})



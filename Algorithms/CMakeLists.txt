cmake_minimum_required(VERSION 3.12)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(./709 DIR_SRCS)

add_executable(Algorithms ${DIR_SRCS})
# cmake_minimum_required(VERSION <specify CMake version here>)
project(Repo)

set(CMAKE_CXX_STANDARD 20)

add_executable(Repo main.cpp Bouquet.h Charactiristics.h Flower.h Tape.h)
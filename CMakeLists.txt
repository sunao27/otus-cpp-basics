cmake_minimum_required(VERSION 3.15)
project(guess_the_number CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(guess_the_number
    main.cpp
    game.cpp
    high_scores.cpp
)
cmake_minimum_required(VERSION 3.15)
project(OptionsEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main executable
add_executable(options_engine
    main.cpp
    src/black_scholes.cpp
)

target_include_directories(options_engine PRIVATE ${CMAKE_SOURCE_DIR})
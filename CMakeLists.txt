cmake_minimum_required(VERSION 3.50)


project(OpenXLSX
        VERSION 0.1
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(src bin)

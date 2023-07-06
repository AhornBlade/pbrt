cmake_minimum_required(VERSION 3.10)

project(pbrt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#third_party
add_subdirectory(third-party)

#source
add_subdirectory(src)

#examples
add_subdirectory(examples)
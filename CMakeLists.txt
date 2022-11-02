cmake_minimum_required(VERSION 3.10)

project(CppPipeline VERSION 1.0)

include_directories(src)

add_subdirectory(src)
add_subdirectory(src/MathFunctions)
add_subdirectory(test)
add_subdirectory(lib/googletest)



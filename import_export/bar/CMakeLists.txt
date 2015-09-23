cmake_minimum_required(VERSION 3.0)
project(Bar LANGUAGES CXX)
add_executable(bar src/Bar.cpp src/main.cpp)

find_package("${CMAKE_SOURCE_DIR}/deps/foo-package/lib/cmake/Foo" REQUIRED)
target_link_libraries(bar foo)
include_directories(. "${FOO_INCLUDES_DIR}")


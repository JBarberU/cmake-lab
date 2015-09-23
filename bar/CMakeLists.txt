project(Bar LANGUAGES CXX)

add_executable(bar src/Bar.cpp src/main.cpp)



set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/deps/foo/lib/cmake/")
find_package(Foo REQUIRED)
target_link_libraries(bar foo)


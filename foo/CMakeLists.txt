cmake_minimum_required(VERSION 3.0)

project(Foo LANGUAGES CXX)

add_library(foo src/Foo.cpp)
install(TARGETS foo
        EXPORT foo_targets
        DESTINATION lib
)

install(FILES src/Foo.hpp
        DESTINATION include
        COMPONENT Devel
)

export(EXPORT foo_targets
    FILE FooTargets.cmake
)

install(EXPORT foo_targets
    FILE "FooTargets.cmake"
    DESTINATION lib/cmake
)

#export(foo_targets
#    FILE "${CMAKE_CURRENT_BINARY_DIR}/"
#)

include(CPack)



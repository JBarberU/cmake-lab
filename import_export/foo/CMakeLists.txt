cmake_minimum_required(VERSION 3.0)

project(Foo LANGUAGES CXX)
set(FOO_VERSION "0.1")

add_library(foo src/Foo.cpp)

# Install library and headers
install(TARGETS foo
        EXPORT foo_targets
        DESTINATION lib
)

install(FILES src/Foo.hpp
        DESTINATION include
        COMPONENT Devel
)
# Install library and headers


# Create cmake files for import
export(EXPORT foo_targets
    FILE FooTargets.cmake
)

install(EXPORT foo_targets
    FILE "FooTargets.cmake"
    DESTINATION lib/cmake
)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/FooConfigVersion.cmake"
    VERSION "${FOO_VERSION}"
    COMPATIBILITY AnyNewerVersion
)
configure_file("${CMAKE_SOURCE_DIR}/cmake/FooConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/FooConfig.cmake"
    COPYONLY
)

install(
    FILES
    cmake/FooConfig.cmake
    "${CMAKE_CURRENT_BINARY_DIR}/FooConfigVersion.cmake"
    DESTINATION lib/cmake
    COMPONENT Devel
)

install(
    FILES
    cmake/FooIncludes.cmake
    DESTINATION lib/cmake
    COMPONENT Devel
)
# Create cmake files for import

set(CPACK_PACKAGE_FILE_NAME "foo-package")
include(CPack)



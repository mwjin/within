cmake_minimum_required(VERSION 3.11)
project(
    within
    VERSION 0.1.0
    DESCRIPTION "Prototyping Cost-Based WITH Clause Subquery Inlining"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# Build output paths
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(app)
add_subdirectory(lib)
add_subdirectory(tests)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

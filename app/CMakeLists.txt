file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

add_executable(within ${SRC_FILES})
target_link_libraries(within lpn)
target_compile_options(within PUBLIC -Wall -Werror)

# Add all the source files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)
add_library(lpn STATIC ${SRC_FILES})

# A directory with header files
target_include_directories(lpn PUBLIC ${CMAKE_SOURCE_DIR}/includes)

target_compile_options(lpn PRIVATE -Wall -Werror)

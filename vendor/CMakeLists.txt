project(vendor)

set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build SDL shared library")
set(SDL_TEST_LIBRARY OFF CACHE BOOL "Build SDL test library")
add_subdirectory("SDL")

add_library(${PROJECT_NAME} INTERFACE)
target_link_libraries(${PROJECT_NAME} INTERFACE SDL3::SDL3)
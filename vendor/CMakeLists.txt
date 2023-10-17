project(vendor)

add_library(${PROJECT_NAME} INTERFACE)

# SDL
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build SDL shared library")
set(SDL_TEST_LIBRARY OFF CACHE BOOL "Build SDL test library")
add_subdirectory("SDL")
target_link_libraries(${PROJECT_NAME} INTERFACE SDL3::SDL3)

# Vulkan
find_package(Vulkan REQUIRED)
target_link_libraries(${PROJECT_NAME} INTERFACE	Vulkan::Vulkan)

# glm
add_subdirectory("glm")
target_link_libraries(${PROJECT_NAME} INTERFACE glm)
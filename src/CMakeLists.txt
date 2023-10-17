project(main)

add_executable(${PROJECT_NAME}
	"main.cpp"
	"vulkan_main.h" "vulkan_main.cpp"
)
target_link_libraries(${PROJECT_NAME} PRIVATE vendor)
target_compile_definitions(${PROJECT_NAME} PRIVATE RES_PATH="${CMAKE_SOURCE_DIR}/res/")

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
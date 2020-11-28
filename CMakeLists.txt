cmake_minimum_required(VERSION 3.10)

project(citybuilder)

# includes
include_directories(
  include
)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

set(LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# find header & source
file(GLOB_RECURSE HEADER "include/*.hpp")
file(GLOB_RECURSE SOURCE "src/*.cpp")

add_executable(${PROJECT_NAME}
  ${SOURCE}
  ${HEADER}
)


find_package(glfw3 3.3 REQUIRED)
target_link_libraries(${PROJECT_NAME} glfw)

find_package(GLEW REQUIRED)
target_link_libraries(${PROJECT_NAME} GLEW)

find_package(OpenGL REQUIRED COMPONENTS OpenGL)
target_link_libraries(${PROJECT_NAME} OpenGL::OpenGL)


source_group("Header include" FILES ${HEADER})
source_group("Source src"     FILES ${SOURCE})

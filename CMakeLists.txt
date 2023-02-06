cmake_minimum_required(VERSION 3.15)

project(main)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES main.cpp ../FolderTerrorist/FolderTerrorist.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

set(GCC_COVERAGE_COMPILE_FLAGS "-pthread")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
SET(CMAKE_CXX_FLAGS -pthread)

#target_link_libraries(${PROJECT_NAME} FolderTerroristLib)

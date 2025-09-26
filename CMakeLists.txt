cmake_minimum_required(VERSION 3.10)
project(LearnCMake VERSION 1.1.1)

message("Version LearnCMake: ${LearnCMake_VERSION_MAJOR}.${LearnCMake_VERSION_MINOR}.${LearnCMake_VERSION_PATCH}")
message("Project source dir: ${PROJECT_SOURCE_DIR}")

set(PROJECT_NAME "LEARN CMAKE")
message("Project name: ${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE RELEASE)


add_library(DogLib SHARED src/dog.cpp)
target_include_directories(DogLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# add_library(OtherLib SHARED other/other.cpp)
# target_include_directories(OtherLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
#link_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(LearnCMake main.cpp)
target_include_directories(LearnCMake PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/test)
target_link_directories(LearnCMake PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/test)
target_link_libraries(LearnCMake DogLib OtherLib) 
target_compile_definitions(LearnCMake PRIVATE VERSION=${LearnCMake_VERSION_MAJOR})
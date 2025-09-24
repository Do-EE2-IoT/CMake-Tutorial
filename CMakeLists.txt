cmake_minimum_required(VERSION 3.10)
project(LearnCMake VERSION 1.1.1)

message("Version LearnCMake: ${LearnCMake_VERSION_MAJOR}.${LearnCMake_VERSION_MINOR}.${LearnCMake_VERSION_PATCH}")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE RELEASE)

add_library(DogLib SHARED src/dog.cpp)
target_include_directories(DogLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib)


add_executable(LearnCMake main.cpp)
target_link_libraries(LearnCMake DogLib)
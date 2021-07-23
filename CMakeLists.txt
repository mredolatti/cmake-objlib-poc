cmake_minimum_required(VERSION 3.12)

project("test"
    LANGUAGES CXX)

add_subdirectory(libs)

add_library(test)
target_include_directories(test PUBLIC include/)
target_sources(test PRIVATE src/x.cpp)

message("asdsad ${PUBLIC_LIBS}")
target_link_libraries(test
    PUBLIC ${PUBLIC_LIBS}) 

add_subdirectory(example)

add_library(a OBJECT)
target_include_directories(a PUBLIC include/)
target_sources(a PRIVATE src/a.cpp)

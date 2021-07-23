add_library(b OBJECT)
target_sources(b PRIVATE src/b.cpp)
target_include_directories(b PUBLIC include/)
target_link_libraries(b PRIVATE a)

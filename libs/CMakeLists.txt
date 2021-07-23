add_subdirectory(a)
add_subdirectory(b)

list(APPEND PUBLIC_LIBS "a" "b")
set(PUBLIC_LIBS ${PUBLIC_LIBS} PARENT_SCOPE)

#  change the runtime output path to /bin, add the executable and attach a library to it
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(Product main.cxx)
target_link_libraries(Product PUBLIC MathFunctions)

# add the binary tree to the search path for include files (so that the header files are found)
target_include_directories(Product PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_BINARY_DIR}/MathFunctions"
)

# add the install targets
install(TARGETS Product DESTINATION bin)



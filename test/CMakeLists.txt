#  change the runtime output path to /bin, add the executable and attach library to it
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(BINARY Product_test)
add_executable(${BINARY} main.cxx product_test.cxx)
target_link_libraries(${BINARY} PUBLIC MathFunctions)

# add the binary tree to the search path for include files (so that the header files are found)
target_include_directories(Product PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_BINARY_DIR}/MathFunctions"
)

# add the install targets
install(TARGETS Product_test DESTINATION bin)

# add tests and the gtest library
add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC gtest)

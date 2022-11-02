add_library(MathFunctions product.cxx)

# install libs
set(installable_libs MathFunctions)
install(TARGETS ${installable_libs} DESTINATION lib)

# install include headers
install(FILES product.h DESTINATION include)



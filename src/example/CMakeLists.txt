add_executable(example example.cpp main.cpp)

add_executable(example_test example.cpp example.test.cpp)

target_link_libraries(example_test gtest)

# Execute "unittests" as part of "cmake" tests
add_test(NAME example_test COMMAND example_test)

# Rebuild unittests before executing tests when starting with "check" target.
add_dependencies(check example_test)

target_compile_options(example PRIVATE -Werror -Wall -Wextra)
target_compile_options(example_test PRIVATE -Werror -Wall -Wextra)
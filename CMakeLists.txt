# CMakeList.txt : CMake project for absl-msvc-16-2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include(FetchContent)
FetchContent_Declare(abseil
  GIT_REPOSITORY https://github.com/abseil/abseil-cpp
  GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(abseil)

# Add source to this project's executable.
add_executable (test test.cpp)
target_compile_options(test PUBLIC /permissive-)
target_compile_definitions(test PUBLIC
  _SILENCE_CXX17_OLD_ALLOCATOR_MEMBERS_DEPRECATION_WARNING)

target_link_libraries (test PUBLIC absl::container)

# TODO: Add tests and install targets if needed.

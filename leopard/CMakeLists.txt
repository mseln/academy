cmake_minimum_required(VERSION 3.10)

project(leopard VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(
  include
)

add_library(leopard
  src/optimizer.cpp
)

add_executable(test_optimizer examples/test_optimizer.cpp)
target_link_libraries(test_optimizer leopard)

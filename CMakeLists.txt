CMAKE_MINIMUM_REQUIRED(VERSION 3.5.2 FATAL_ERROR)
project(ExplicitLinking)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
add_library(EchoLib SHARED echo-lib.cxx)
add_executable(test main.cxx)
target_link_libraries(test dl)

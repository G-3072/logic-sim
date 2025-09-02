cmake_minimum_required(VERSION 3.14)

project(logic-sim VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(${CMAKE_SOURCE_DIR}/cmake/fetch_external_dependencies.cmake)

add_subdirectory(app)
cmake_minimum_required(VERSION 3.2)

project(algo VERSION 0.0.1)

set(CMAKE_BUILD_TYPE Debug)

#set(CMAKE_CXX_STANDART 17)

#set(CMAKE_CXX_FLAG "${CMAKE_CXX_FLAG} -std=c++1y")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/../)
include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR})


file(GLOB SOURCE_FILES "*.cpp" "src/*.cpp"  src/*/*.cpp)

find_package(PkgConfig REQUIRED)
pkg_check_modules(JSONCPP jsoncpp)
link_libraries(${JSONCPP_LIBRARIES})


add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${JSONCPP_LIBRARIES})
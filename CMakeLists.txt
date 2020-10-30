cmake_minimum_required(VERSION 3.2)

project(algo VERSION 0.0.1)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDART 17)

set(CMAKE_CXX_FLAG "${CMAKE_CXX_FLAG} -std=c++1y")

file(GLOB CPPS "*.cpp" CS "*.c")

# -------------------------------

#find_package(PkgConfig REQUIRED)
#pkg_search_module(OPENSSL REQUIRED openssl)

#if( OPENSSL_FOUND )
#    include_directories(${OPENSSL_INCLUDE_DIRS})
#    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
#else()
#    # Error; with REQUIRED, pkg_search_module() will throw an error by it's own
#endif()

#target_link_libraries(${PROJECT_NAME} OpenSSL::Crypto)


########

#cmake_minimum_required(VERSION 3.4)
#project(Foo)

set(SOURCE_FILES main.cpp)

set(OPENSSL_USE_STATIC_LIBS TRUE)
find_package(OpenSSL REQUIRED)

pkg_check_modules(JSONCPP jsoncpp)
link_libraries(${JSONCPP_LIBRARIES})

add_executable(${PROJECT_NAME} ${CPPS} ${CS})
#add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} OpenSSL::Crypto)

target_link_libraries(${PROJECT_NAME} ${JSONCPP_LIBRARIES})

# -------------------------------

#add_executable(${PROJECT_NAME} ${CPPS} ${CS})
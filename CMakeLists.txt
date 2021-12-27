cmake_minimum_required(VERSION "3.22.1")

project("cmake-tutorial" C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_executable("${PROJECT_NAME}" "main.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)  #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "main.cpp" DESTINATION src)  #${CMAKE_INSTALL_PREFIX}/src

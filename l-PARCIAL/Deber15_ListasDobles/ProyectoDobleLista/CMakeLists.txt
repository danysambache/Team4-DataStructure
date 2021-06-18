cmake_minimum_required(VERSION 3.0.0)
project(ListasDobles VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(&(DeberListasDoblementeEnlazadas))
add_executable(ListasDobles main.cpp Nodo.h Nodo.cpp lista_doble_enlazada.h lista_doble_enlazada.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

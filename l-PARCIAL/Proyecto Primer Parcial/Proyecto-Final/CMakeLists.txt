cmake_minimum_required(VERSION 3.0.0)
project(Proyecto_Final VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Proyecto_Final main.cpp Fecha.h Fecha.cpp OperacionesFecha.h OperacionesFecha.cpp Persona.h Persona.cpp Nodo.h Nodo.cpp ListadoPersonas.h ListadoPersonas.cpp Lista.h Lista.cpp OperacionesPersona.h OperacionesPersona.cpp Validar.h Validar.cpp Menu.h Menu.cpp Prestamo.h Prestamo.cpp OperacionesCredito.h OperacionesCredito.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

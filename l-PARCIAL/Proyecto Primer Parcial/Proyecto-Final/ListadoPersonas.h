/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: Generar una tabla de Amortización

    FECHA DE CREACION:        15-06-21
    FECHA DE MODIFICACION:    24-06-21*/
#if !defined(__Class_Diagram_1_LISTADOPERSONAS_H)
#define __Class_Diagram_1_LISTADOPERSONAS_H
#include "Lista.h"
#include <string.h>
#include <iterator>
#include <iostream>
#include <sstream>
class ListadoPersonas{
    public:
        ListadoPersonas()=default;
        void agregarArchivo(Persona);
        Lista leerArchivo();
};
#endif
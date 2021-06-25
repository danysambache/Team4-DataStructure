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
#ifndef OPERACIONESFECHA_H
#define OPERACIONESFECHA_H
#pragma once
#include "Fecha.h"
class OperacionesFecha{
    private:
        Fecha fecha;
    public:
        OperacionesFecha(Fecha);
        OperacionesFecha()=default;
        bool validarFecha(Fecha);
        Fecha *generarFecha(Fecha, int);
        bool isBisiesto(int);
        Fecha validarDiaLaboral(Fecha);
        Fecha validarFeriado(Fecha);
        int validarZeller(Fecha);
};
#endif
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
#include "Validar.h"
#include "OperacionesFecha.h"
#include <math.h>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include "Prestamo.h"
class OperacionesCredito{
    public:
        OperacionesCredito()=default;
        void calcularInteresMensual(Prestamo &);
        void calcularCuota(Prestamo &);
        void calcInteres(double,Prestamo &);
        void calcularReduCapital(double,Prestamo &);
        void saldoPendiente(double);
        double aproximacionDec(double,int32_t);

};
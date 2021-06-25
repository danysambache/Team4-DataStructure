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
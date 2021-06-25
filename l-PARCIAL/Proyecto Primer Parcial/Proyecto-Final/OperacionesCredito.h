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
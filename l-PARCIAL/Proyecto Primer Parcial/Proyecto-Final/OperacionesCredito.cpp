#include "OperacionesCredito.h"

double OperacionesCredito::aproximacionDec(double numero,int numeroDecimales){
    
    stringstream ss;
    ss << fixed;
    ss.precision(numeroDecimales);
    ss << numero;
    string numeroS= ss.str();
    return stof(numeroS);
}

void OperacionesCredito::calcularInteresMensual(Prestamo &prestamo){
    double interesMensual;
    interesMensual = prestamo.getinteresAnual()/12;
    prestamo.setinteresMensual(interesMensual);
}

void OperacionesCredito::calcularCuota(Prestamo &prestamo){
    double cuota;
    double num = (prestamo.getmontoTotal()*(pow(1.0+(prestamo.getinteresMensual()/100.0),prestamo.getPlazo()))*(prestamo.getinteresMensual()/100.0));
    double deno = (pow(1.0+(prestamo.getinteresMensual()/100.0),prestamo.getPlazo()))-1.0;
    cuota = num/deno;
    prestamo.setCuota(aproximacionDec(cuota,2));
    cout<<"\n\nMonto: "<<prestamo.getMontoPagar();
    cout<<"\n\nCuota: "<<cuota;
    calcInteres(prestamo.getMontoPagar(),prestamo);
}

void OperacionesCredito::calcInteres(double saldoPendiente,Prestamo &prestamo){
    double interes;
    interes = saldoPendiente*(prestamo.getinteresMensual()/100.0F);
    cout<<"\n\nInteres: "<<interes;
    calcularReduCapital(aproximacionDec(interes,2),prestamo);
}

void OperacionesCredito::calcularReduCapital(double interes,Prestamo &prestamo){
    double amortizacion;
    amortizacion = prestamo.getCuota() - interes;
    double saldoPendiente = prestamo.getMontoPagar() - amortizacion;
    if(saldoPendiente<=0.03){
        cout<<"\n\nSaldo Pendiente: 0";
    }else{
        cout<<"\n\nSaldo Pendiente: "<<saldoPendiente;
    }
    prestamo.setMontoPagar(aproximacionDec(saldoPendiente,2));
}
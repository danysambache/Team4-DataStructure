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
#include "OperacionesCredito.h"
/**
 * @brief Aproxima un numero
 * 
 * @param numero 
 * @param numeroDecimales 
 * @return double 
 */
double OperacionesCredito::aproximacionDec(double numero,int numeroDecimales){
    
    stringstream ss;
    ss << fixed;
    ss.precision(numeroDecimales);
    ss << numero;
    string numeroS= ss.str();
    return stof(numeroS);
}
/**
 * @brief Calcula Interes mensual
 * 
 * @param prestamo 
 */
void OperacionesCredito::calcularInteresMensual(Prestamo &prestamo){
    double interesMensual;
    interesMensual = prestamo.getinteresAnual()/12;
    prestamo.setinteresMensual(interesMensual);
}
/**
 * @brief Calcula Cuota
 * 
 * @param prestamo 
 */
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
/**
 * @brief Calcula Interes
 * 
 * @param saldoPendiente 
 * @param prestamo 
 */
void OperacionesCredito::calcInteres(double saldoPendiente,Prestamo &prestamo){
    double interes;
    interes = saldoPendiente*(prestamo.getinteresMensual()/100.0F);
    cout<<"\n\nInteres: "<<interes;
    calcularReduCapital(aproximacionDec(interes,2),prestamo);
}
/**
 * @brief Calcula Amortización
 * 
 * @param interes 
 * @param prestamo 
 */
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
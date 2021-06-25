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
#include "Prestamo.h"
/**
 * @brief Devuelve cuota
 * 
 * @return double 
 */
double Prestamo::getCuota(){
    return this->cuota;
}
/**
 * @brief Devuelve Fecha
 * 
 * @return Fecha 
 */
Fecha Prestamo::getFechaInicio(){
    return this->fechaInicio;
}
/**
 * @brief Devuelve montoTotal
 * 
 * @return double 
 */
double Prestamo::getMontoPagar(){
    return this->montoPagar;
}
/**
 * @brief Devuelve plazo
 * 
 * @return int 
 */
int Prestamo::getPlazo(){
    return this->plazo;
}
/**
 * @brief Devuelve monto
 * 
 * @return double 
 */
double Prestamo::getmontoTotal(){
    return this->montoTotal;
}
/**
 * @brief devuelve Interes
 * 
 * @return double 
 */
double Prestamo::getinteresAnual(){
    return this->interesAnual;
}
/**
 * @brief devuelve interesMensual
 * 
 * @return double 
 */
double Prestamo::getinteresMensual(){
    return this->interesMensual;
}
/**
 * @brief Setea cuota
 * 
 * @param _cuota 
 */
void Prestamo::setCuota(double _cuota){
    this->cuota=_cuota;
}
/**
 * @brief Setea Fecha
 * 
 * @param _fechaInicio 
 */
void Prestamo::setFechaInicio(Fecha _fechaInicio){
    this->fechaInicio=_fechaInicio;
}
/**
 * @brief Setea monto
 * 
 * @param _montoPago 
 */
void Prestamo::setMontoPagar(double _montoPago){
    this->montoPagar=_montoPago;
}
/**
 * @brief Setea plazo
 * 
 * @param _plazo 
 */
void Prestamo::setPlazo(int _plazo){
    this->plazo=_plazo;
}
/**
 * @brief Setea montoTotal
 * 
 * @param _montoTotal 
 */
void Prestamo::setmontoTotal(double _montoTotal){
    this->montoTotal=_montoTotal;
}
/**
 * @brief Setea interes
 * 
 * @param _intAnual 
 */
void Prestamo::setinteresAnual(double _intAnual){
    this->interesAnual=_intAnual;
}
/**
 * @brief Setea interes mensual
 * 
 * @param _intMensual 
 */
void Prestamo::setinteresMensual(double _intMensual){
    this->interesMensual=_intMensual;
}
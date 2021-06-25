#include "Prestamo.h"
double Prestamo::getCuota(){
    return this->cuota;
}
Fecha Prestamo::getFechaInicio(){
    return this->fechaInicio;
}
double Prestamo::getMontoPagar(){
    return this->montoPagar;
}
int Prestamo::getPlazo(){
    return this->plazo;
}
double Prestamo::getmontoTotal(){
    return this->montoTotal;
}
double Prestamo::getinteresAnual(){
    return this->interesAnual;
}
double Prestamo::getinteresMensual(){
    return this->interesMensual;
}
void Prestamo::setCuota(double _cuota){
    this->cuota=_cuota;
}
void Prestamo::setFechaInicio(Fecha _fechaInicio){
    this->fechaInicio=_fechaInicio;
}
void Prestamo::setMontoPagar(double _montoPago){
    this->montoPagar=_montoPago;
}
void Prestamo::setPlazo(int _plazo){
    this->plazo=_plazo;
}
void Prestamo::setmontoTotal(double _montoTotal){
    this->montoTotal=_montoTotal;
}
void Prestamo::setinteresAnual(double _intAnual){
    this->interesAnual=_intAnual;
}
void Prestamo::setinteresMensual(double _intMensual){
    this->interesMensual=_intMensual;
}
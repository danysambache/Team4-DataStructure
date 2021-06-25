#include "Fecha.h"
Fecha::Fecha(int _dia,int _mes,int _anio){
    this->dia=_dia;
    this->mes=_mes;
    this->anio=_anio;
}
void Fecha::set_dia(int _dia){
    this->dia=_dia;
}
int Fecha::get_dia(){
    return dia;
}
void Fecha::set_mes(int _mes){
    this->mes=_mes;
}
int Fecha::get_mes(){
    return mes;
}
void Fecha::set_anio(int _anio){
    this->anio=_anio;
}
int Fecha::get_anio(){
    return anio;
}
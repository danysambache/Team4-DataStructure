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
#include "Fecha.h"
/**
 * @brief Constructor Fecha
 * 
 * @param _dia 
 * @param _mes 
 * @param _anio 
 */
Fecha::Fecha(int _dia,int _mes,int _anio){
    this->dia=_dia;
    this->mes=_mes;
    this->anio=_anio;
}
/**
 * @brief Setea un dia
 * 
 * @param _dia 
 */
void Fecha::set_dia(int _dia){
    this->dia=_dia;
}
/**
 * @brief devuelve un dia
 * 
 * @return int 
 */
int Fecha::get_dia(){
    return dia;
}
/**
 * @brief Setea un mes
 * 
 * @param _mes 
 */
void Fecha::set_mes(int _mes){
    this->mes=_mes;
}
/**
 * @brief Devuelve un mes
 * 
 * @return int 
 */
int Fecha::get_mes(){
    return mes;
}
/**
 * @brief Setea un anio
 * 
 * @param _anio 
 */
void Fecha::set_anio(int _anio){
    this->anio=_anio;
}
/**
 * @brief Devuelve un anio
 * 
 * @return int 
 */
int Fecha::get_anio(){
    return anio;
}
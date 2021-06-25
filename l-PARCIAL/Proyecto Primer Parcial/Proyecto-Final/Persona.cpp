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
#include "Persona.h"
/**
 * @brief Construct a new Persona:: Persona object
 * 
 * @param _nombre 
 * @param _apellido 
 * @param _CI 
 * @param _edad 
 * @param _correo 
 * @param _telefono 
 */
Persona::Persona(string _nombre, string _apellido, string _CI, int _edad, string _correo, string _telefono){
    this->nombre = _nombre;
    this->apellido = _apellido;
    this->CI = _CI;
    this->edad = _edad;
    this->correo = _correo;
    this->telefono = _telefono;
}
/**
 * @brief Setea el nombre
 * 
 * @param _nombre 
 */
void Persona::set_nombre(string _nombre){
    this->nombre = _nombre;
}
/**
 * @brief Devuelve nombre
 * 
 * @return string 
 */
string Persona::get_nombre(){
    return nombre;
}
/**
 * @brief Devuelve apellido
 * 
 * @param _apellido 
 */
void Persona::set_apellido(string _apellido){
    this->apellido = _apellido;
}
/**
 * @brief Setea apellido
 * 
 * @return string 
 */
string Persona::get_apellido(){
    return apellido;
}
/**
 * @brief Setea cedula
 * 
 * @param _CI 
 */
void Persona::set_CI(string _CI){
    this->CI = _CI;
}
/**
 * @brief devuelve cedula
 * 
 * @return string 
 */
string Persona::get_CI(){
    return CI;
}
/**
 * @brief Setea edad
 * 
 * @param _edad 
 */
void Persona::set_edad(int _edad){
    this->edad = _edad;
}
/**
 * @brief Devuelve edad
 * 
 * @return int 
 */
int Persona::get_edad(){
    return edad;
}
/**
 * @brief Setea correo
 * 
 * @param _correo 
 */
void Persona::set_correo(string _correo){
    this->correo = _correo;
}
/**
 * @brief Devuelve correo
 * 
 * @return string 
 */
string Persona::get_correo(){
    return this->correo;
}
/**
 * @brief Setea telefono
 * 
 * @param _telefono 
 */
void Persona::set_telefono(string _telefono){
    this->telefono = _telefono;
}
/**
 * @brief Devuelve Telefono
 * 
 * @return string 
 */
string Persona::get_telefono(){
    return telefono;
}
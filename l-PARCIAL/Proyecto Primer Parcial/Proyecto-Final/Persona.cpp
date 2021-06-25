#include "Persona.h"

Persona::Persona(string _nombre, string _apellido, string _CI, int _edad, string _correo, string _telefono){
    this->nombre = _nombre;
    this->apellido = _apellido;
    this->CI = _CI;
    this->edad = _edad;
    this->correo = _correo;
    this->telefono = _telefono;
}
void Persona::set_nombre(string _nombre){
    this->nombre = _nombre;
}
string Persona::get_nombre(){
    return nombre;
}
void Persona::set_apellido(string _apellido){
    this->apellido = _apellido;
}
string Persona::get_apellido(){
    return apellido;
}
void Persona::set_CI(string _CI){
    this->CI = _CI;
}
string Persona::get_CI(){
    return CI;
}
void Persona::set_edad(int _edad){
    this->edad = _edad;
}
int Persona::get_edad(){
    return edad;
}
void Persona::set_correo(string _correo){
    this->correo = _correo;
}
string Persona::get_correo(){
    return this->correo;
}
void Persona::set_telefono(string _telefono){
    this->telefono = _telefono;
}
string Persona::get_telefono(){
    return telefono;
}
#include"Nodo.h"
#include <iostream>
/**
 * @brief Construct a new Nodo:: Nodo object
 * 
 * @param _valor 
 */
Nodo::Nodo(int _valor){
	this->valor=_valor;
}
/**
 * @brief Retorna el atributo Nodo siguiente
 * 
 * @return Nodo* 
 */
Nodo *Nodo::getAnterior(){
	return anterior;
}
/**
 * @brief Reescribe el Nodo anterior
 * 
 * @param nodo 
 */
void Nodo::setAnterior(Nodo *nodo){
	this->anterior=nodo;
}
/**
 * @brief Retorna el atributo Nodo anterior
 * 
 * @return Nodo* 
 */
Nodo *Nodo::getSiguiente(){
	return siguiente;
}
/**
 * @brief Reescribe el Nodo siguiente
 * 
 * @param nodo 
 */
void Nodo::setSiguiente(Nodo *nodo){
	this->siguiente=nodo;
}
/**
 * @brief Retorna el valor del atributo valor
 * 
 * @return int 
 */
int Nodo::getValor(){
	return valor;
}
/**
 * @brief Reescribe el valor
 * 
 * @param _valor 
 */
void Nodo::setValor(int _valor){
	this->valor=_valor;
}
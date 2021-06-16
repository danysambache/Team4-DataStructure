#include"Nodo.h"
#include <iostream>
Nodo::Nodo(int _valor){
	this->valor=_valor;
}
Nodo *Nodo::getAnterior(){
	return anterior;
}
void Nodo::setAnterior(Nodo *nodo){
	this->anterior=nodo;
}
Nodo *Nodo::getSiguiente(){
	return siguiente;
}
void Nodo::setSiguiente(Nodo *nodo){
	this->siguiente=nodo;
}
int Nodo::getValor(){
	return valor;
}
void Nodo::setValor(int _valor){
	this->valor=_valor;
}
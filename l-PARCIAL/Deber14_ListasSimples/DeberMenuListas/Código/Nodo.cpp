/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: GENERAR UN MENU GRAFICO CON LAS FUNCIONALIDADES DE LISTAS SIMPLES

    FECHA DE CREACION:        09-06-21
    FECHA DE MODIFICACION:    10-06-21*/
#include "Nodo.h"
	Nodo::Nodo(int val, Nodo *sig=NULL){
				this->valor=val;
				this->siguiente=sig;
			}
	Nodo::Nodo(){
	}		
	void Nodo::setNodo(Nodo *nodo){
		this->siguiente=nodo;
	}
	void Nodo::setValor(int val){
		this->valor=val;
	}
	int Nodo::getValor(){
		return this->valor;
	}
	Nodo *Nodo::getNodo(){
		return this->siguiente;
	}

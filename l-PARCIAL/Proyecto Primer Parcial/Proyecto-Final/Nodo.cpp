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
#include "Nodo.h"
/**
 * @brief Constructor Nodo
 * 
 * @param _persona 
 * @param sig 
 */
	Nodo::Nodo(Persona _persona, Nodo *sig=NULL){
				this->persona=_persona;
				this->siguiente=sig;
			}
	/**
	 * @brief Constructor de Nodo
	 * 
	 */
	Nodo::Nodo(){
	}	
	/**
	 * @brief Setea un nodo
	 * 
	 * @param nodo 
	 */
	void Nodo::setNodo(Nodo *nodo){
		this->siguiente=nodo;
	}
	/**
	 * @brief Setea una persona
	 * 
	 * @param _persona 
	 */
	void Nodo::setPersona(Persona _persona){
		this->persona=_persona;
	}
	/**
	 * @brief Devuelve una persona
	 * 
	 * @return Persona 
	 */
	Persona Nodo::getPersona(){
		return this->persona;
	}
	/**
	 * @brief Devuelve un nodo
	 * 
	 * @return Nodo* 
	 */
	Nodo *Nodo::getNodo(){
		return this->siguiente;
	}
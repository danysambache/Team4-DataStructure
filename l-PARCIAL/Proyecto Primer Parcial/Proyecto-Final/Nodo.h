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
#if !defined(__Class_Diagram_1_NODO_H)
#define __Class_Diagram_1_NODO_H
#include<iostream>
#include "Persona.h"
class Nodo{
	private:
		Persona persona;
		Nodo *siguiente;
	public:
		Nodo();
		Nodo(Persona,Nodo *);
		void setNodo(Nodo *);
		void setPersona(Persona);
		Nodo *getNodo();
		Persona getPersona();	
};
#endif
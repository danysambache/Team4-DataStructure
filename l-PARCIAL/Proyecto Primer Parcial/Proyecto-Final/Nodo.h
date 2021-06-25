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
#if !defined(__Class_Diagram_1_LISTA_H)
#define __Class_Diagram_1_LISTA_H
#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
	public:
		Lista();
		bool ListaVacia();
		void insertar(Persona);
		void insertarFinal(Persona);
		void borrarNodoEspe(Persona);
		void borrarNodoCola();
		void borrarNodoPrimero();
		Nodo *buscarNodo(string);
		bool buscarBool(string);
		void mostrar();
};
#endif
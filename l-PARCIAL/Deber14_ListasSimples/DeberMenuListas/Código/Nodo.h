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
#include<iostream>
class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo();
		Nodo(int,Nodo *);
		void setNodo(Nodo *);
		void setValor(int);
		Nodo *getNodo();
		int getValor();	
};

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
#include <iostream>
#include "Fecha.h"
#include "OperacionesFecha.h"
#include "ListadoPersonas.h"
#include "OperacionesPersona.h"
#include "Validar.h"
#include "Menu.h"
using namespace std;
int main(int, char**) {
    int dia,mes,anio,cuota,opcion;
    string telefono;
    OperacionesFecha op;
    OperacionesPersona opePersona;
    ListadoPersonas lp;
    Fecha fecha;
	int select;
	char** lista=(char**)calloc(4, sizeof(char*));
	*(lista+0)="Ingresar Personas";
	*(lista+1)="Otorgar Préstamo";
	*(lista+2)="Imprimir Lista Personas";
	*(lista+3)="Salir";
	Menu menu;
	do{
		select=menu.genMenu("Menu Listas",lista,4);
		menu.llamar_menu(select);
	}while(select!=3);
	return 0;
}

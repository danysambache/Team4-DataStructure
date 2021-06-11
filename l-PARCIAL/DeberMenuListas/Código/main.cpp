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
#include <iostream>
using namespace std;
#include "Menu.h"
int main(int argc, char** argv) {
	Lista list;
	int select;
	char** lista=(char*)calloc(7, sizeof(char));
	*(lista+0)="Insertar por la Cabeza";
	*(lista+1)="Insertar por la Cola";
	*(lista+2)="Imprimir Lista";
	*(lista+3)="Eliminar Elemento Especifico";
	*(lista+4)="Eliminar Primer Elemento de la Lista";
	*(lista+5)="Eliminar Ultimo Elemento de la Lista";
	*(lista+6)="Salir";
	Menu menu;
	do{
		select=menu.genMenu("Menu Listas",lista,7);
		menu.llamar_menu(select,list);
	}while(select!=7);
	return 0;
}

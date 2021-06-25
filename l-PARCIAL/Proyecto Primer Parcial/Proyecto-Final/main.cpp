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

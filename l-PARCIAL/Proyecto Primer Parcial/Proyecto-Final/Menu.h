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
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include "ListadoPersonas.h"
#include "OperacionesPersona.h"
#include "Validar.h"
#include "OperacionesCredito.h"
#include <iostream>
using namespace std;
class Menu{
	public:
		void gotoxy(int x, int y);
		Menu()=default;
		void llamar_menu(int);
		int genMenu(string, char **, int);
};
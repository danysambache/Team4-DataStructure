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
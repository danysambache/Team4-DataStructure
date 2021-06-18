#include <iostream>
#include "lista_doble_enlazada.h"
using namespace std;
int main(int argc, char** argv) {
	ListaDobleEnlazada lst;
	lst.insertar(10);
	lst.insertar(20);
	lst.insertar(30);
	lst.insertar(40);

    lst.anadirMitad(2,10);
	lst.imprimirLista();
	lst.borrarNodoEspe(30);
	lst.imprimirLista();

	return 0;
}
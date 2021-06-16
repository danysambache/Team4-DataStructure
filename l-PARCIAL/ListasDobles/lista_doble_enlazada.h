#include "Nodo.h"
#include<functional>
using namespace std;
class ListaDobleEnlazada{
	public:
		ListaDobleEnlazada()=default;
		void insertar(int);
		void recorrer(std::function<void(int, int)>recorrido);
        void insertarCola(int);
        bool ListaVacia();
        void anadirMitad(int, int);
		void borrarNodoEspe(int val);
		void imprimirLista();
	private:
		Nodo *ultimo_nodo();
		Nodo *cabeza=NULL;
		int tamanio=0;
};
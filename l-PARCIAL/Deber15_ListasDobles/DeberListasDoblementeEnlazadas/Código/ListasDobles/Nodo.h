#include <iostream>
class Nodo{
	public:
		Nodo (int);
		Nodo *getSiguiente();
		void setSiguiente(Nodo *);
		Nodo *getAnterior();
		void setAnterior(Nodo *);
		int getValor();
		void setValor(int);
	private:
		int valor;
		Nodo *siguiente=NULL;
		Nodo *anterior=NULL;
};
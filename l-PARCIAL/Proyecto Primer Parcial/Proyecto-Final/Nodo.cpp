#include "Nodo.h"
	Nodo::Nodo(Persona _persona, Nodo *sig=NULL){
				this->persona=_persona;
				this->siguiente=sig;
			}
	Nodo::Nodo(){
	}		
	void Nodo::setNodo(Nodo *nodo){
		this->siguiente=nodo;
	}
	void Nodo::setPersona(Persona _persona){
		this->persona=_persona;
	}
	Persona Nodo::getPersona(){
		return this->persona;
	}
	Nodo *Nodo::getNodo(){
		return this->siguiente;
	}
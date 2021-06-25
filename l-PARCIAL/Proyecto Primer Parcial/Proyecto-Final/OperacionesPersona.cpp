#include <iostream>
#include "OperacionesPersona.h"
#include "Validar.h"
using namespace std;


void OperacionesPersona::generarCorreo(Persona &persona){
	
	char *nombre = (char*)persona.get_nombre().c_str();
	char *apellido = (char*)persona.get_apellido().c_str();
	string correo = "";
	
	correo += tolower(*(nombre + 0));
	
	for (int i = 0; i < persona.get_nombre().length(); i++){
		if(*(nombre+i) == 32){
			correo += tolower(*(nombre + (i+1)));
		}
	}
	
	*(apellido + 0) = tolower(*(apellido + 0));
	correo += apellido;
	correo += "@espe.edu.ec";
	persona.set_correo(correo);
}
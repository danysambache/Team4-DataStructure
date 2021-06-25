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
#include "OperacionesPersona.h"
#include "Validar.h"
using namespace std;
/**
 * @brief Genera correo
 * 
 * @param persona 
 */
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
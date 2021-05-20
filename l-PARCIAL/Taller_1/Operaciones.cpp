/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	ENUNCIADO:  SE DESEA SUMAR, RESTAR, MULTIPLICAR Y DIVIDIR DOS NUMEROS UTILIZANDO TEMPLATES, BASADOS EN CLASES.				
				
	FECHA DE CREACION:        19-05-21 
	FECHA DE MODIFICACION:    -------*/
	
#include"Operaciones.h"
#include<iostream>

using namespace std;

template <typename D>
Operaciones<D>::Operaciones(){	
}

template <typename D>
void Operaciones<D>::setValor1(D valor_1){
	valor1=valor_1;
}
template <typename D>
void Operaciones<D>::setValor2(D valor_2){
	valor2=valor_2;
}
template <typename D>
D Operaciones<D>::getValor1(){
	return valor1;
}
template <typename D>
D Operaciones<D>::getValor2(){
	return valor2;
}

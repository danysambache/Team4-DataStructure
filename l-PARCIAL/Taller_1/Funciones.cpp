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
	
#include"Funciones.h"
#include<iostream>

using namespace std;

template <typename T>
T Funciones <T>::suma(Operaciones<T> ope){
	return ope.getValor1()+ope.getValor2();
}
template <typename T>
T Funciones <T>::resta(Operaciones<T> ope){
	return ope.getValor1()-ope.getValor2();
}
template <typename T>
T Funciones <T>::multiplicacion(Operaciones<T> ope){
	return ope.getValor1()*ope.getValor2();
}
template <typename T>
T Funciones <T>::division(Operaciones<T> ope){
	if(ope.getValor2()==0){
		cout<<"No se puede dividir !!!"<<endl;
	}else
	return ope.getValor1()/ope.getValor2();
}

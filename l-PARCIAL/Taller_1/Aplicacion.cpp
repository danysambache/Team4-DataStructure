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
	
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include"Funciones.cpp"

int main(){
	
	float valor1,valor2;
	Operaciones<float> ope;
	cout<<"Ingrese el valor 1: "<<endl;
	cin>>valor1;
	ope.setValor1(valor1);
	cout<<"Ingrese el valor 2: "<<endl;
	cin>>valor2;
	cout<<endl;
	ope.setValor2(valor2);
	
	Funciones<float> operacion;
	cout<<"Suma = "<<operacion.suma(ope)<<endl;	
	cout<<"Resta = "<<operacion.resta(ope)<<endl;	
	cout<<"Multiplicacion = "<<operacion.multiplicacion(ope)<<endl;	
	cout<<"Division = "<<operacion.division(ope)<<endl;	
	
	return 0;
}

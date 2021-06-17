/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: Funcion TRIANGULO DE PASCAL.

    FECHA DE CREACION:        04-06-21
    FECHA DE MODIFICACION:    06-06-21*/
#include "Operaciones.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
/**
 * @brief Esta funciÃ³n segmenta el espacio necesario para utilidad de la matriz
 * 
 * @param dim 
 * @return int** 
 */
int *Operaciones::segmentar(int dim){
	int *vect,j;
    vect=(int *)malloc(dim*sizeof(int *));
    for(j=0;j<dim;j++){
        vect=(int *)malloc(dim*sizeof(int));
    }
     return vect;
}
/**
 * @brief Esta funciÃ³n encera cada valor de la matriz
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::encerar(int *vect,int dim)
{
   int j;
       for(j=0;j<dim;j++)
        *(vect+j)=0;
}
/**
 * @brief Realiza la combinacion entre dos enteros
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int Operaciones::combinacion(int a, int b)
{
    if(b==0||b==a){
    	return 1;
	}else{
		return combinacion(a-1,b-1)+combinacion(a-1,b);
	}
}
/**
 * @brief Calcula el factorial
 * 
 * @param n 
 */
int Operaciones::factorial(int n)
{
    return (n<0)?1:n*factorial(n-1);
}
/**
 * @brief Esta funcion realiza el calculo del triangulo de pascal.
 * 
 * @param matriz1 
 * @param matriz2 
 * @param matrizR 
 * @param dim 
 */
void Operaciones::trianguloPascal(int *vect, int dim)
{   

	int x=dim*2;
	for(int i=0 ; i<=dim ; i++, x -= 2){
		for(int s=0; s<=x ; s++){
			cout<<" ";
		}
		for(int k=0; k<=i ; ++k){
			cout<<setw(4)<<combinacion(i,k);
		}
		cout<<endl;
	}
}
/**
 * @brief Esta funcion imprime un vector
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::imprimir(int *vector, int dim){
    int i,j;
    //for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
        	cout<<"|";
        	cout<<*(vector+j);
            cout<<"|";
        }
    	cout<<endl;
    //}
}
/**
 * @brief Construct a new Operaciones:: Operaciones object
 * 
 */
Operaciones::Operaciones()
{
}
/**
 * @brief Destructor
 * 
 */
/*Operaciones::~Operaciones()
{
   // TODO : implement
}*/

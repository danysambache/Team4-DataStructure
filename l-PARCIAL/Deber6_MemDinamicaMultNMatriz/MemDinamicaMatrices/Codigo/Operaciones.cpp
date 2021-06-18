/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: REALIZAR UN PROGRAMA QUE PERMITA MULTIPLICAR DOS MATRICES, MEDIANTE EL MANEJO
    DE MEMORIA DINÁMICA. UTILIZANDO CLASES.

    FECHA DE CREACION:        02-06-21
    FECHA DE MODIFICACION:    02-06-21*/
#include "Operaciones.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
/**
 * @brief Esta función segmenta el espacio necesario para utilidad de la matriz
 * 
 * @param dim 
 * @return int** 
 */
int **Operaciones::segmentar(int dim){
	int **matriz,j;
    matriz=(int **)malloc(dim*sizeof(int *));
    for(j=0;j<dim;j++){
        *(matriz+j)=(int *)malloc(dim*sizeof(int));
    }
     return matriz;
}
/**
 * @brief Esta función encera cada valor de la matriz
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::encerar(int **matriz,int dim)
{
   int i,j;
     for(i=0;i<dim;i++)
       for(j=0;j<dim;j++)
        *(*(matriz+i)+j)=0;
}
/**
 * @brief Esta función multiplica las dos matrices ingresadas
 * 
 * @param matriz1 
 * @param matriz2 
 * @param matrizR 
 * @param dim 
 */
void Operaciones::procesar(int **matriz1, int **matriz2,int **matrizR, int dim)
{
   int i,j,k;
    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
            for(k=0;k<dim;k++){
              *(*(matrizR+i)+j)=*(*(matrizR+i)+j) + *(*(matriz1+i)+k) * *(*(matriz2+k)+j);
            }
        }
    }
}
/**
 * @brief Esta función permite ingresar los valores para cada matriz
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::ingresar(int **matriz, int dim){
    int i,j;
    for(i=0;i<dim;i++)
    for(j=0;j<dim;j++){
    	cout<<"----------------------------------------"<<endl;	
    	cout<<"Ingrese el valor "<<"["<<i<<"]"<<"["<<j<<"]"<<" de la matriz: "<<endl;
    	scanf("%d",&(*(*(matriz+i)+j)));
    	cout<<"----------------------------------------"<<endl;	
	}
}
/**
 * @brief Esta función imprime una matriz
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::imprimir(int **matriz, int dim){
    int i,j;
    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
        	printf("|");
            printf("%d",*(*(matriz+i)+j));
            printf("|");
        }
        printf("\n");
    }
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

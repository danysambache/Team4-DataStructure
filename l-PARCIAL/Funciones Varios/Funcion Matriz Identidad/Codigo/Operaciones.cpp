/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: REALIZAR UN PROGRAMA QUE PERMITA MULTIPLICAR DOS MATRICES, MEDIANTE EL MANEJO
    DE MEMORIA DINÃMICA. UTILIZANDO CLASES.

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
 * @brief Esta funciÃ³n segmenta el espacio necesario para utilidad de la matriz
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
 * @brief Esta funciÃ³n encera cada valor de la matriz
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
 * @brief Esta funcion crea la matriz identidad
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::identidad(int **matriz,int dim){
	int i,j;
    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
        	if(i==j){
        		*(*(matriz+i)+j)=1; 
			}else{
				*(*(matriz+i)+j)=0; 
			}
           
        }
    }
}
/**
 * @brief Esta funciÃ³n imprime una matriz
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

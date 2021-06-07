/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: GENERAR UN CUADRO LATINO, UTILIZANDO MEMORIA DINAMICA Y CLASES

    FECHA DE CREACION:        04-06-21
    FECHA DE MODIFICACION:    06-06-21*/
#include "Operaciones.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
/**
 * @brief Segmenta espacio en memoria
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
 * @brief Encera cada entrada de la matriz
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
 * @brief Construye el cuadro latino
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::procesar(int **matriz,int dim){
	int i,j;
       for(i=0;i<dim;i++)
      { 
            for(j=0;j<dim;j++)
            {
                  *(*(matriz+i)+j) = (i+j+dim-1)%dim;
            }
      }
}
/**
 * @brief Imprime la matriz
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
 * @brief Construye un objeto
 * 
 */
Operaciones::Operaciones()
{
}

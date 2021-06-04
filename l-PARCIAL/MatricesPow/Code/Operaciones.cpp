/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACIÓN
    INGENIERÍA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBAÃ‘A - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    STATEMENT:  IMPLEMENTAR LA FUNCION MATRIZ A LA N-ESIMA MEDIANTE PUNTEROS

    CREATION DATE:        02-06-21
    MODIFICATION DATE:    03-06-21*/
#include "Operaciones.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

/**
 * @brief Separa memoria 
 * 
 * @param dim 
 * @return int** 
 */

int **Operaciones::segmentar(int dim)
{
   int **matriz, j;
	matriz = (int **)malloc(dim*sizeof(int *));
	for(j=0;j<dim;j++){
		*(matriz+j) = (int *)malloc(dim*sizeof(int));
	}
	return matriz;
}

/**
 * @brief Asigna el valor de 0 a todo el espacio separado
 * 
 * @param matriz 
 * @param dim 
 */

void Operaciones::encerar(int **matriz, int dim)
{
   	int i,j;
	for(i=0;i<dim;i++)
	for(j=0;j<dim;j++)
		*(*(matriz+i)+j) = 0;
}

/**
 * @brief Permite el ingreso de datos mediante teclado
 * 
 * @param matriz 
 * @param dim 
 */

void Operaciones::ingresar(int **matriz, int dim){
	int i,j;
	for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
			cout<<"Posicion: ["<<i+1<<"]["<<j+1<<"]: ";
			scanf("%d", &(*(*(matriz+i)+j)));	
		}
	}
}

/**
 * @brief Calcula la n-esima potencia de una matriz
 * 
 * @param mat1 
 * @param mat2 
 * @param matr 
 * @param dim 
 * @param pot 
 */

void Operaciones::calcular(int **mat1, int **mat2, int **matr, int dim, int pot){
    for(int i=0;i<dim;i++)
		for(int j=0;j<dim;j++)
    		*(*(mat2+i)+j) = *(*(mat1+i)+j);
	while(pot>1){
		for(int i=0;i<dim;i++){
    		for(int j=0;j<dim;j++){
				for(int k=0;k<dim;k++){
					*(*(matr+i)+j) += *(*(mat1+j)+k) * *(*(mat2+k)+j);
				}
			}	
		}
		for(int i=0;i<dim;i++)
			for(int j=0;j<dim;j++)
    			*(*(mat2+i)+j) = *(*(matr+i)+j);
		for(int i=0;i<dim;i++)
			for(int j=0;j<dim;j++)
			*(*(matr+i)+j) = 0;
		pot--;
	};
}

/**
 * @brief Imprime los resultados
 * 
 * @param matriz 
 * @param dim 
 */

void Operaciones::imprimir(int **matriz, int dim)
{
	int i,j;
	for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
			printf("%d", *(*(matriz+i)+j));
			printf("%*s",j+5," ");
		}
		printf("\n");
	}
}

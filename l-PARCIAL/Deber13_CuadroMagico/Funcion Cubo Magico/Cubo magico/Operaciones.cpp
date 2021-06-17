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
 * @brief Esta funciÃ³n cubito cada valor de la matriz
 * 
 * @param matriz
 * @param cuadrado 
 */
void Operaciones::cubito(int a,int b,int **cuadrado) 
{
	int x=0,k=0,p=1,j=0,t=0,s=0,d=0;
        x=(b-1)/2;
        t=((a+1)/2);
        s=(a-x-1)/2;
        d=x;

         for(int g=0; g<((a+1)/2);g++){
            j=g;
            k=g;
        for( int i=x;i>=j;i--){
            *(*(cuadrado+i)+k)=p;
             if( k<(d-s) ){
                *(*(cuadrado+i)+(k+t))=p;
			}
            if(k>(d+s)){
                *(*(cuadrado+i)+(k-t))=p;
            }
            if(i>(d+s)){
                *(*(cuadrado+(i-t))+k)=p;
            }
            if(i<(d-s)){
                *(*(cuadrado+(i+t))+k)=p;
            }

            k++;
            p++;
        }
        x++;
    }


}
/**
 * @brief Esta funciÃ³n imprime una matriz
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::imprimir(int a, int b,int **cuadrado){
system("cls");
    int x=0,t=0,s=0;
        t=((a+1)/2);
        x=(b-1)/2;
        s=(a-x-1)/2;

        for(int l=0;l<a;l++){
                printf("\n\t");
            for(int h=0;h<b;h++){
                if(h>=(x-s) && h<=(x+s) && l<=(x+s) && l>=(x-s)){
                    printf("\t %d",*(*(cuadrado+l)+h));
                }
        	}
		}
}
/**
 * @brief Construct a new Operaciones:: Operaciones object
 * 
 */
Operaciones::Operaciones()
{
}

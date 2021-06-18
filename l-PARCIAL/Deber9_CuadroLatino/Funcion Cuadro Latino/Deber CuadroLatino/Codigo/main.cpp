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
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "Operaciones.h"
#include "Matriz.h"
using namespace std;
int main()
{
	Matriz m1;
    int dim;
    int **mat1;
    printf("\nIngrese la dimension :");
    scanf("%d",&dim);
    Operaciones op;
    m1.setMatriz(op.segmentar(dim));
    mat1=m1.getMatriz();
    op.encerar(mat1,dim);
    cout<<"\n"<<endl;
    op.procesar(mat1,dim);
    op.imprimir(mat1,dim);
    return 0;
}

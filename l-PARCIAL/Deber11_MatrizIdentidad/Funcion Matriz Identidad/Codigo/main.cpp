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
    printf("\n ~ Matriz Identidad ~");
    printf("\nIngrese la dimension :");
    scanf("%d",&dim);
    Operaciones op;
    m1.setMatriz(op.segmentar(dim));
    mat1=m1.getMatriz();
    op.encerar(mat1,dim);
    cout<<"\n"<<endl;
    op.identidad(mat1,dim);
    op.imprimir(mat1,dim);
    return 0;
}

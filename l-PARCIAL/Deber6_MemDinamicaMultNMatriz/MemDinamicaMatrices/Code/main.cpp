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
    Matriz m2;
    Matriz mr;
    int dim;
    int **mat1, ** mat2, **matR;
    printf("\nIngrese la dimension :");
    scanf("%d",&dim);
    Operaciones op;
    m1.setMatriz(op.segmentar(dim));
    m2.setMatriz(op.segmentar(dim));
    mr.setMatriz(op.segmentar(dim));
    mat1=m1.getMatriz();
    mat2=m2.getMatriz();
    matR=mr.getMatriz();
    op.encerar(mat1,dim);
    op.encerar(mat2,dim);
    op.encerar(matR,dim);
    cout<<"\n"<<endl;
    cout<<"VALORES PARA PRIMERA MATRIZ"<<endl;
    op.ingresar(mat1, dim);
    cout<<"\n"<<endl;
    cout<<"VALORES PARA SEGUNDA MATRIZ"<<endl;
    op.ingresar(mat2, dim);
    printf("\n");
    cout<<"PRIMERA MATRIZ"<<endl;
    op.imprimir(mat1,dim);
    printf("\n");
    cout<<"SEGUNDA MATRIZ"<<endl;
    op.imprimir(mat2,dim);
    printf("\n");
    op.procesar(mat1,mat2,matR,dim);
    cout<<"RESULTADO DEL PRODUCTO"<<endl;
    op.imprimir(matR,dim);
    return 0;
}

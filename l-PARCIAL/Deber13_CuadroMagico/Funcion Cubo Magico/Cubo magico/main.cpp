/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: Funcion CUBO MAGICO.

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
    //cout<<"Ingrese la dimension para el Cubo: ";
    //cin>>dim;
    do{
    	cout<<"Digite el tamanio del arreglo: ";
    	cin>>dim;
    }while(dim%2==0||dim<0);
    dim=2*dim-1;
    Operaciones op;
    m1.setMatriz(op.segmentar(dim));
    mat1=m1.getMatriz();
    op.encerar(mat1,dim);

    cout<<"RESULTADO DEL Cubo Magico: "<<endl;
	op.cubito(dim,dim,mat1);
	op.imprimir(dim,dim,mat1);

    return 0;
}
